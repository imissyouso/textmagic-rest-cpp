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

/*
 * CheckPhoneVerificationCodeInputObject_1.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_CheckPhoneVerificationCodeInputObject_1_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_CheckPhoneVerificationCodeInputObject_1_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CheckPhoneVerificationCodeInputObject_1
    : public ModelBase
{
public:
    CheckPhoneVerificationCodeInputObject_1();
    virtual ~CheckPhoneVerificationCodeInputObject_1();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CheckPhoneVerificationCodeInputObject_1 members

    /// <summary>
    /// Verification code that was received by the user and entered into the form field.
    /// </summary>
    int32_t getCode() const;
        void setCode(int32_t value);
    /// <summary>
    /// VerifyId from Step 1 to match both requests together.
    /// </summary>
    utility::string_t getVerifyId() const;
        void setVerifyId(utility::string_t value);

protected:
    int32_t m_Code;
        utility::string_t m_VerifyId;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_CheckPhoneVerificationCodeInputObject_1_H_ */
