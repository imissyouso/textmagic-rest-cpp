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



#include "GetTimezonesResponse.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

GetTimezonesResponse::GetTimezonesResponse()
{
}

GetTimezonesResponse::~GetTimezonesResponse()
{
}

void GetTimezonesResponse::validate()
{
    // TODO: implement validation
}

web::json::value GetTimezonesResponse::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}

void GetTimezonesResponse::fromJson(web::json::value& val)
{
}

void GetTimezonesResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

void GetTimezonesResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

