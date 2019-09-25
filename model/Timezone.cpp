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



#include "Timezone.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

Timezone::Timezone()
{
    m_Id = 0;
    m_Area = utility::conversions::to_string_t("");
    m_Dst = 0;
    m_Offset = 0;
    m_Timezone = utility::conversions::to_string_t("");
}

Timezone::~Timezone()
{
}

void Timezone::validate()
{
    // TODO: implement validation
}

web::json::value Timezone::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("area")] = ModelBase::toJson(m_Area);
    val[utility::conversions::to_string_t("dst")] = ModelBase::toJson(m_Dst);
    val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(m_Offset);
    val[utility::conversions::to_string_t("timezone")] = ModelBase::toJson(m_Timezone);

    return val;
}

void Timezone::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("area")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("area")];
        if(!fieldValue.is_null())
        {
            setArea(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("dst")];
        if(!fieldValue.is_null())
        {
            setDst(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("offset")];
        if(!fieldValue.is_null())
        {
            setOffset(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timezone")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("timezone")];
        if(!fieldValue.is_null())
        {
            setTimezone(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void Timezone::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("area"), m_Area));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dst"), m_Dst));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("offset"), m_Offset));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timezone"), m_Timezone));
}

void Timezone::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setArea(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("area"))));
    setDst(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("dst"))));
    setOffset(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("offset"))));
    setTimezone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timezone"))));
}

int32_t Timezone::getId() const
{
    return m_Id;
}


void Timezone::setId(int32_t value)
{
    m_Id = value;
    
}
utility::string_t Timezone::getArea() const
{
    return m_Area;
}


void Timezone::setArea(utility::string_t value)
{
    m_Area = value;
    
}
int32_t Timezone::getDst() const
{
    return m_Dst;
}


void Timezone::setDst(int32_t value)
{
    m_Dst = value;
    
}
int32_t Timezone::getOffset() const
{
    return m_Offset;
}


void Timezone::setOffset(int32_t value)
{
    m_Offset = value;
    
}
utility::string_t Timezone::getTimezone() const
{
    return m_Timezone;
}


void Timezone::setTimezone(utility::string_t value)
{
    m_Timezone = value;
    
}
}
}
}
}

