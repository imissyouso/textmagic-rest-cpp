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



#include "DeleteTemplatesBulkInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

DeleteTemplatesBulkInputObject::DeleteTemplatesBulkInputObject()
{
    m_Ids = utility::conversions::to_string_t("");
    m_IdsIsSet = false;
    m_All = false;
    m_AllIsSet = false;
}

DeleteTemplatesBulkInputObject::~DeleteTemplatesBulkInputObject()
{
}

void DeleteTemplatesBulkInputObject::validate()
{
    // TODO: implement validation
}

web::json::value DeleteTemplatesBulkInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdsIsSet)
    {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(m_Ids);
    }
    if(m_AllIsSet)
    {
        val[utility::conversions::to_string_t("all")] = ModelBase::toJson(m_All);
    }

    return val;
}

void DeleteTemplatesBulkInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("ids")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ids")];
        if(!fieldValue.is_null())
        {
            setIds(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("all")];
        if(!fieldValue.is_null())
        {
            setAll(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void DeleteTemplatesBulkInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_IdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ids"), m_Ids));
        
    }
    if(m_AllIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("all"), m_All));
    }
}

void DeleteTemplatesBulkInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ids")))
    {
        setIds(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ids"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("all")))
    {
        setAll(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("all"))));
    }
}

utility::string_t DeleteTemplatesBulkInputObject::getIds() const
{
    return m_Ids;
}


void DeleteTemplatesBulkInputObject::setIds(utility::string_t value)
{
    m_Ids = value;
    m_IdsIsSet = true;
}
bool DeleteTemplatesBulkInputObject::idsIsSet() const
{
    return m_IdsIsSet;
}

void DeleteTemplatesBulkInputObject::unsetIds()
{
    m_IdsIsSet = false;
}

bool DeleteTemplatesBulkInputObject::isAll() const
{
    return m_All;
}


void DeleteTemplatesBulkInputObject::setAll(bool value)
{
    m_All = value;
    m_AllIsSet = true;
}
bool DeleteTemplatesBulkInputObject::allIsSet() const
{
    return m_AllIsSet;
}

void DeleteTemplatesBulkInputObject::unsetAll()
{
    m_AllIsSet = false;
}

}
}
}
}

