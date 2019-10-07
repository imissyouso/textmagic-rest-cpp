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



#include "SendPhoneVerificationCodeResponse.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

SendPhoneVerificationCodeResponse::SendPhoneVerificationCodeResponse()
{
    m_VerifyId = nullptr;
    m_Price = 0.0;
}

SendPhoneVerificationCodeResponse::~SendPhoneVerificationCodeResponse()
{
}

void SendPhoneVerificationCodeResponse::validate()
{
    // TODO: implement validation
}

web::json::value SendPhoneVerificationCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("verifyId")] = ModelBase::toJson(m_VerifyId);
    val[utility::conversions::to_string_t("price")] = ModelBase::toJson(m_Price);

    return val;
}

void SendPhoneVerificationCodeResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("verifyId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("verifyId")];
        if(!fieldValue.is_null())
        {
            setVerifyId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("price")];
        if(!fieldValue.is_null())
        {
            setPrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void SendPhoneVerificationCodeResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("verifyId"), m_VerifyId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("price"), m_Price));
}

void SendPhoneVerificationCodeResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setVerifyId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("verifyId"))));
    setPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("price"))));
}

std::shared_ptr<utility::string_t> SendPhoneVerificationCodeResponse::getVerifyId() const
{
    return m_VerifyId;
}


void SendPhoneVerificationCodeResponse::setVerifyId(std::shared_ptr<utility::string_t> value)
{
    m_VerifyId = value;
    
}
double SendPhoneVerificationCodeResponse::getPrice() const
{
    return m_Price;
}


void SendPhoneVerificationCodeResponse::setPrice(double value)
{
    m_Price = value;
    
}
}
}
}
}

