/**
 * TextMagic API Documentation
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2
 * Contact: support@textmagi.biz
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "GetContactsAutocompleteResponse.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

GetContactsAutocompleteResponse::GetContactsAutocompleteResponse()
{
}

GetContactsAutocompleteResponse::~GetContactsAutocompleteResponse()
{
}

void GetContactsAutocompleteResponse::validate()
{
    // TODO: implement validation
}

web::json::value GetContactsAutocompleteResponse::toJson() const
{
    web::json::value val = this->null<GetContactsAutocompleteResponse>::toJson();


    return val;
}

void GetContactsAutocompleteResponse::fromJson(web::json::value& val)
{
    this->null<GetContactsAutocompleteResponse>::fromJson(val);

}

void GetContactsAutocompleteResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

void GetContactsAutocompleteResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

}
}
}
}

