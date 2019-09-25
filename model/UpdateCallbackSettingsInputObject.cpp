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



#include "UpdateCallbackSettingsInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

UpdateCallbackSettingsInputObject::UpdateCallbackSettingsInputObject()
{
    m_OutUrl = utility::conversions::to_string_t("");
    m_InUrl = utility::conversions::to_string_t("");
    m_Format = utility::conversions::to_string_t("");
}

UpdateCallbackSettingsInputObject::~UpdateCallbackSettingsInputObject()
{
}

void UpdateCallbackSettingsInputObject::validate()
{
    // TODO: implement validation
}

web::json::value UpdateCallbackSettingsInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("outUrl")] = ModelBase::toJson(m_OutUrl);
    val[utility::conversions::to_string_t("inUrl")] = ModelBase::toJson(m_InUrl);
    val[utility::conversions::to_string_t("format")] = ModelBase::toJson(m_Format);

    return val;
}

void UpdateCallbackSettingsInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("outUrl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("outUrl")];
        if(!fieldValue.is_null())
        {
            setOutUrl(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inUrl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("inUrl")];
        if(!fieldValue.is_null())
        {
            setInUrl(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("format")];
        if(!fieldValue.is_null())
        {
            setFormat(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void UpdateCallbackSettingsInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("outUrl"), m_OutUrl));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inUrl"), m_InUrl));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("format"), m_Format));
}

void UpdateCallbackSettingsInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setOutUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("outUrl"))));
    setInUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("inUrl"))));
    setFormat(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("format"))));
}

utility::string_t UpdateCallbackSettingsInputObject::getOutUrl() const
{
    return m_OutUrl;
}


void UpdateCallbackSettingsInputObject::setOutUrl(utility::string_t value)
{
    m_OutUrl = value;
    
}
utility::string_t UpdateCallbackSettingsInputObject::getInUrl() const
{
    return m_InUrl;
}


void UpdateCallbackSettingsInputObject::setInUrl(utility::string_t value)
{
    m_InUrl = value;
    
}
utility::string_t UpdateCallbackSettingsInputObject::getFormat() const
{
    return m_Format;
}


void UpdateCallbackSettingsInputObject::setFormat(utility::string_t value)
{
    m_Format = value;
    
}
}
}
}
}

