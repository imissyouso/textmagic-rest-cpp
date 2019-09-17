# TextMagic C++ SDK

C++ client for TextMagic API

{{#infoUrl}}
For detailed documentation, please visit [{{{infoUrl}}}]({{{infoUrl}}})
{{/infoUrl}}

## Installation

Download and extract lib archive
```shell
curl -SL https://github.com/imissyouso/textmagic-rest-cpp/archive/master.zip | tar -xf - -C .
```
Build using cmake
```shell
cmake --build .
```
Output library file will be placed to `textmagic-rest-cpp-master/lib` directory
```shell
cmake --build .
```

## Usage Example

Configure your `CMakeLists.txt` like below:
```shell
cmake_minimum_required(VERSION 2.8)
project(test)

set(CMAKE_CXX_STANDARD 14)

add_executable(app main.cpp)

add_library(textmagic_client SHARED IMPORTED)
set_property(TARGET textmagic_client PROPERTY IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/textmagic-rest-cpp-master/lib/libtextmagic_client.so")

target_include_directories (app PRIVATE ${PROJECT_SOURCE_DIR}/textmagic-rest-cpp-master ${PROJECT_SOURCE_DIR}/textmagic-rest-cpp-master/model ${PROJECT_SOURCE_DIR}/textmagic-rest-cpp-master/api)
target_link_libraries(app boost_system cpprest crypto textmagic_client )
```

`main.cpp` file example:
```cpp
#include <iostream>
#include <fstream>
#include "textmagic-rest-cpp-master/ApiClient.h"
#include "textmagic-rest-cpp-master/ApiConfiguration.h"
#include "textmagic-rest-cpp-master/api/TextMagicApi.h"

using namespace com::textmagic::client::api;

int main() {
    std::shared_ptr<ApiClient> apiClient(new ApiClient);
    std::shared_ptr<ApiConfiguration> apiConfig(new ApiConfiguration);

    apiConfig->setBaseUrl("http://host.docker.internal");

    apiConfig->getHttpConfig().set_credentials(web::credentials("test", "mdwpeFrNGc7GyV1V4J6UJawcp0XTLm"));

    apiClient->setConfiguration(apiConfig);

    TextMagicApi api(apiClient);

    // Simple ping request example
    pplx::task<std::shared_ptr<PingResponse>> pingResponse = api.ping();
    pingResponse.wait();

    try {
        std::cout << pingResponse.get()->getPing() << '\n';
    } catch(const std::exception& e) {
        std::cout << "getPing() exception: " << e.what() << '\n';
    }

    std::shared_ptr<SendMessageInputObject> sendMessageInputObject(new SendMessageInputObject);
    sendMessageInputObject->setPhones("+19998887766");
    sendMessageInputObject->setText("I love TextMagic!");

    pplx::task<std::shared_ptr<SendMessageResponse>> sendMessageResponse = api.sendMessage(sendMessageInputObject, false);
    sendMessageResponse.wait();

    try {
        std::cout << sendMessageResponse.get()->getId() << '\n';
    } catch(const std::exception& e) {
        std::cout << "getId() exception: " << e.what() << '\n';
    }

    // Get all outgoing messages request example
    pplx::task<std::shared_ptr<GetAllOutboundMessagesResponse>> getAllOutboundMessagesResponse = api.getAllOutboundMessages(boost::none, boost::none, boost::none);
    getAllOutboundMessagesResponse.wait();

    try {
        std::cout << getAllOutboundMessagesResponse.get()->getResources()[0]->getId() << '\n';
    } catch(const std::exception& e) {
        std::cout << "getId() exception: " << e.what() << '\n';
    }

    // Upload list avatar request example
    std::filebuf fb;
    fb.open ("test.jpg", std::ios::in);
    std::shared_ptr<std::istream> is(new std::istream(&fb));

    std::shared_ptr<HttpContent> image(new HttpContent);
    image->setName("test");
    image->setContentDisposition("attachment");
    image->setFileName("test.jpg");

    image->setContentType("image/jpeg");
    image->setData(is);

    // List ID in current example is 3223
    pplx::task<std::shared_ptr<ResourceLinkResponse>> resourceLinkResponse = api.uploadListAvatar(image, 3223);
    resourceLinkResponse.wait();

    try {
        std::cout << resourceLinkResponse.get()->getId() << '\n';
    } catch(const std::exception& e) {
        std::cout << "getId() exception: " << e.what() << '\n';
    }

    return 0;
}
```
build your test project:
```shell
cmake --build .
```
