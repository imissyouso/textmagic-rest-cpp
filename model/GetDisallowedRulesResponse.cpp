/**
 * TextMagic API
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "GetDisallowedRulesResponse.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

GetDisallowedRulesResponse::GetDisallowedRulesResponse()
{
}

GetDisallowedRulesResponse::~GetDisallowedRulesResponse()
{
}

void GetDisallowedRulesResponse::validate()
{
    // TODO: implement validation
}

web::json::value GetDisallowedRulesResponse::toJson() const
{
    web::json::value val = this->null<utility::string_t>::toJson();


    return val;
}

void GetDisallowedRulesResponse::fromJson(web::json::value& val)
{
    this->null<utility::string_t>::fromJson(val);

}

void GetDisallowedRulesResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

void GetDisallowedRulesResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

