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
 * CheckPhoneVerificationCodeInputObject.h
 *
 * Confirmation code to check
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_CheckPhoneVerificationCodeInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_CheckPhoneVerificationCodeInputObject_H_


#include "../ModelBase.h"


namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// Confirmation code to check
/// </summary>
class  CheckPhoneVerificationCodeInputObject
    : public ModelBase
{
public:
    CheckPhoneVerificationCodeInputObject();
    virtual ~CheckPhoneVerificationCodeInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CheckPhoneVerificationCodeInputObject members

    /// <summary>
    /// 
    /// </summary>
    int32_t getCode() const;
        void setCode(int32_t value);

protected:
    int32_t m_Code;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_CheckPhoneVerificationCodeInputObject_H_ */
