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



#include "ContactCustomField.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

ContactCustomField::ContactCustomField()
{
    m_Value = utility::conversions::to_string_t("");
    m_ValueIsSet = false;
    m_UserCustomFieldIsSet = false;
}

ContactCustomField::~ContactCustomField()
{
}

void ContactCustomField::validate()
{
    // TODO: implement validation
}

web::json::value ContactCustomField::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    }
    if(m_UserCustomFieldIsSet)
    {
        val[utility::conversions::to_string_t("userCustomField")] = ModelBase::toJson(m_UserCustomField);
    }

    return val;
}

void ContactCustomField::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("value")];
        if(!fieldValue.is_null())
        {
            setValue(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userCustomField")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("userCustomField")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<UserCustomField> newItem(new UserCustomField());
            newItem->fromJson(fieldValue);
            setUserCustomField( newItem );
        }
    }
}

void ContactCustomField::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
        
    }
    if(m_UserCustomFieldIsSet)
    {
        if (m_UserCustomField.get())
        {
            m_UserCustomField->toMultipart(multipart, utility::conversions::to_string_t("userCustomField."));
        }
        
    }
}

void ContactCustomField::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        setValue(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("value"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userCustomField")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("userCustomField")))
        {
            std::shared_ptr<UserCustomField> newItem(new UserCustomField());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("userCustomField."));
            setUserCustomField( newItem );
        }
    }
}

utility::string_t ContactCustomField::getValue() const
{
    return m_Value;
}


void ContactCustomField::setValue(utility::string_t value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool ContactCustomField::valueIsSet() const
{
    return m_ValueIsSet;
}

void ContactCustomField::unsetValue()
{
    m_ValueIsSet = false;
}

std::shared_ptr<UserCustomField> ContactCustomField::getUserCustomField() const
{
    return m_UserCustomField;
}


void ContactCustomField::setUserCustomField(std::shared_ptr<UserCustomField> value)
{
    m_UserCustomField = value;
    m_UserCustomFieldIsSet = true;
}
bool ContactCustomField::userCustomFieldIsSet() const
{
    return m_UserCustomFieldIsSet;
}

void ContactCustomField::unsetUserCustomField()
{
    m_UserCustomFieldIsSet = false;
}

}
}
}
}

