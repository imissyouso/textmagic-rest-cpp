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

/*
 * GetDisallowedRulesResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_GetDisallowedRulesResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_GetDisallowedRulesResponse_H_


#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GetDisallowedRulesResponse
    : public null<utility::string_t>
{
public:
    GetDisallowedRulesResponse();
    virtual ~GetDisallowedRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetDisallowedRulesResponse members


protected:
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_GetDisallowedRulesResponse_H_ */