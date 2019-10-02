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



#include "CheckPhoneVerificationCodeInputObject_1.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

CheckPhoneVerificationCodeInputObject_1::CheckPhoneVerificationCodeInputObject_1()
{
    m_Code = 0;
    m_VerifyId = utility::conversions::to_string_t("");
}

CheckPhoneVerificationCodeInputObject_1::~CheckPhoneVerificationCodeInputObject_1()
{
}

void CheckPhoneVerificationCodeInputObject_1::validate()
{
    // TODO: implement validation
}

web::json::value CheckPhoneVerificationCodeInputObject_1::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("code")] = ModelBase::toJson(m_Code);
    val[utility::conversions::to_string_t("verifyId")] = ModelBase::toJson(m_VerifyId);

    return val;
}

void CheckPhoneVerificationCodeInputObject_1::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("code")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("code")];
        if(!fieldValue.is_null())
        {
            setCode(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verifyId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("verifyId")];
        if(!fieldValue.is_null())
        {
            setVerifyId(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void CheckPhoneVerificationCodeInputObject_1::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("code"), m_Code));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("verifyId"), m_VerifyId));
}

void CheckPhoneVerificationCodeInputObject_1::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setCode(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("code"))));
    setVerifyId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("verifyId"))));
}

int32_t CheckPhoneVerificationCodeInputObject_1::getCode() const
{
    return m_Code;
}


void CheckPhoneVerificationCodeInputObject_1::setCode(int32_t value)
{
    m_Code = value;
    
}
utility::string_t CheckPhoneVerificationCodeInputObject_1::getVerifyId() const
{
    return m_VerifyId;
}


void CheckPhoneVerificationCodeInputObject_1::setVerifyId(utility::string_t value)
{
    m_VerifyId = value;
    
}
}
}
}
}
