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



#include "Group.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

Group::Group()
{
    m_Id = 0;
    m_Name = utility::conversions::to_string_t("");
    m_Description = utility::conversions::to_string_t("");
    m_Favorited = false;
    m_MembersCount = 0;
    m_Service = false;
    m_Shared = false;
    m_IsDefault = false;
}

Group::~Group()
{
}

void Group::validate()
{
    // TODO: implement validation
}

web::json::value Group::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    val[utility::conversions::to_string_t("favorited")] = ModelBase::toJson(m_Favorited);
    val[utility::conversions::to_string_t("membersCount")] = ModelBase::toJson(m_MembersCount);
    val[utility::conversions::to_string_t("user")] = ModelBase::toJson(m_User);
    val[utility::conversions::to_string_t("service")] = ModelBase::toJson(m_Service);
    val[utility::conversions::to_string_t("shared")] = ModelBase::toJson(m_Shared);
    val[utility::conversions::to_string_t("avatar")] = ModelBase::toJson(m_Avatar);
    val[utility::conversions::to_string_t("isDefault")] = ModelBase::toJson(m_IsDefault);

    return val;
}

void Group::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("name")];
        if(!fieldValue.is_null())
        {
            setName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("description")];
        if(!fieldValue.is_null())
        {
            setDescription(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("membersCount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("membersCount")];
        if(!fieldValue.is_null())
        {
            setMembersCount(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("user")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<User> newItem(new User());
            newItem->fromJson(fieldValue);
            setUser( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("service")];
        if(!fieldValue.is_null())
        {
            setService(ModelBase::boolFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("avatar")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("avatar")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<GroupImage> newItem(new GroupImage());
            newItem->fromJson(fieldValue);
            setAvatar( newItem );
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

void Group::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("favorited"), m_Favorited));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("membersCount"), m_MembersCount));
    m_User->toMultipart(multipart, utility::conversions::to_string_t("user."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("service"), m_Service));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shared"), m_Shared));
    m_Avatar->toMultipart(multipart, utility::conversions::to_string_t("avatar."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isDefault"), m_IsDefault));
}

void Group::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    setDescription(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("description"))));
    setFavorited(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("favorited"))));
    setMembersCount(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("membersCount"))));
    std::shared_ptr<User> newUser(new User());
    newUser->fromMultiPart(multipart, utility::conversions::to_string_t("user."));
    setUser( newUser );
    setService(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("service"))));
    setShared(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("shared"))));
    std::shared_ptr<GroupImage> newAvatar(new GroupImage());
    newAvatar->fromMultiPart(multipart, utility::conversions::to_string_t("avatar."));
    setAvatar( newAvatar );
    setIsDefault(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("isDefault"))));
}

int32_t Group::getId() const
{
    return m_Id;
}


void Group::setId(int32_t value)
{
    m_Id = value;
    
}
utility::string_t Group::getName() const
{
    return m_Name;
}


void Group::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t Group::getDescription() const
{
    return m_Description;
}


void Group::setDescription(utility::string_t value)
{
    m_Description = value;
    
}
bool Group::isFavorited() const
{
    return m_Favorited;
}


void Group::setFavorited(bool value)
{
    m_Favorited = value;
    
}
int32_t Group::getMembersCount() const
{
    return m_MembersCount;
}


void Group::setMembersCount(int32_t value)
{
    m_MembersCount = value;
    
}
std::shared_ptr<User> Group::getUser() const
{
    return m_User;
}


void Group::setUser(std::shared_ptr<User> value)
{
    m_User = value;
    
}
bool Group::isService() const
{
    return m_Service;
}


void Group::setService(bool value)
{
    m_Service = value;
    
}
bool Group::isShared() const
{
    return m_Shared;
}


void Group::setShared(bool value)
{
    m_Shared = value;
    
}
std::shared_ptr<GroupImage> Group::getAvatar() const
{
    return m_Avatar;
}


void Group::setAvatar(std::shared_ptr<GroupImage> value)
{
    m_Avatar = value;
    
}
bool Group::isIsDefault() const
{
    return m_IsDefault;
}


void Group::setIsDefault(bool value)
{
    m_IsDefault = value;
    
}
}
}
}
}

