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



#include "UpdateListObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

UpdateListObject::UpdateListObject()
{
    m_Name = utility::conversions::to_string_t("");
    m_Shared = false;
    m_Favorited = false;
    m_FavoritedIsSet = false;
    m_IsDefault = false;
    m_IsDefaultIsSet = false;
}

UpdateListObject::~UpdateListObject()
{
}

void UpdateListObject::validate()
{
    // TODO: implement validation
}

web::json::value UpdateListObject::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    val[utility::conversions::to_string_t("shared")] = ModelBase::toJson(m_Shared);
    if(m_FavoritedIsSet)
    {
        val[utility::conversions::to_string_t("favorited")] = ModelBase::toJson(m_Favorited);
    }
    if(m_IsDefaultIsSet)
    {
        val[utility::conversions::to_string_t("isDefault")] = ModelBase::toJson(m_IsDefault);
    }

    return val;
}

void UpdateListObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("name")];
        if(!fieldValue.is_null())
        {
            setName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shared")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("shared")];
        if(!fieldValue.is_null())
        {
            setShared(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("favorited")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("favorited")];
        if(!fieldValue.is_null())
        {
            setFavorited(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isDefault")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("isDefault")];
        if(!fieldValue.is_null())
        {
            setIsDefault(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void UpdateListObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shared"), m_Shared));
    if(m_FavoritedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("favorited"), m_Favorited));
    }
    if(m_IsDefaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isDefault"), m_IsDefault));
    }
}

void UpdateListObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    setShared(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("shared"))));
    if(multipart->hasContent(utility::conversions::to_string_t("favorited")))
    {
        setFavorited(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("favorited"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isDefault")))
    {
        setIsDefault(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("isDefault"))));
    }
}

utility::string_t UpdateListObject::getName() const
{
    return m_Name;
}


void UpdateListObject::setName(utility::string_t value)
{
    m_Name = value;
    
}
bool UpdateListObject::isShared() const
{
    return m_Shared;
}


void UpdateListObject::setShared(bool value)
{
    m_Shared = value;
    
}
bool UpdateListObject::isFavorited() const
{
    return m_Favorited;
}


void UpdateListObject::setFavorited(bool value)
{
    m_Favorited = value;
    m_FavoritedIsSet = true;
}
bool UpdateListObject::favoritedIsSet() const
{
    return m_FavoritedIsSet;
}

void UpdateListObject::unsetFavorited()
{
    m_FavoritedIsSet = false;
}

bool UpdateListObject::isIsDefault() const
{
    return m_IsDefault;
}


void UpdateListObject::setIsDefault(bool value)
{
    m_IsDefault = value;
    m_IsDefaultIsSet = true;
}
bool UpdateListObject::isDefaultIsSet() const
{
    return m_IsDefaultIsSet;
}

void UpdateListObject::unsetIsDefault()
{
    m_IsDefaultIsSet = false;
}

}
}
}
}

