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



#include "SearchListsPaginatedResponse.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

SearchListsPaginatedResponse::SearchListsPaginatedResponse()
{
    m_Page = 0;
    m_PageCount = 0;
    m_Limit = 0;
}

SearchListsPaginatedResponse::~SearchListsPaginatedResponse()
{
}

void SearchListsPaginatedResponse::validate()
{
    // TODO: implement validation
}

web::json::value SearchListsPaginatedResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("page")] = ModelBase::toJson(m_Page);
    val[utility::conversions::to_string_t("pageCount")] = ModelBase::toJson(m_PageCount);
    val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(m_Limit);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Resources )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("resources")] = web::json::value::array(jsonArray);
    }

    return val;
}

void SearchListsPaginatedResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("page")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("page")];
        if(!fieldValue.is_null())
        {
            setPage(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageCount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("pageCount")];
        if(!fieldValue.is_null())
        {
            setPageCount(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("limit")];
        if(!fieldValue.is_null())
        {
            setLimit(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    {
        m_Resources.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("resources")))
        {
        for( auto& item : val[utility::conversions::to_string_t("resources")].as_array() )
        {
            if(item.is_null())
            {
                m_Resources.push_back( std::shared_ptr<List>(nullptr) );
            }
            else
            {
                std::shared_ptr<List> newItem(new List());
                newItem->fromJson(item);
                m_Resources.push_back( newItem );
            }
        }
        }
    }
}

void SearchListsPaginatedResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("page"), m_Page));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pageCount"), m_PageCount));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("limit"), m_Limit));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Resources )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("resources"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void SearchListsPaginatedResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setPage(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("page"))));
    setPageCount(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("pageCount"))));
    setLimit(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("limit"))));
    {
        m_Resources.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("resources"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Resources.push_back( std::shared_ptr<List>(nullptr) );
            }
            else
            {
                std::shared_ptr<List> newItem(new List());
                newItem->fromJson(item);
                m_Resources.push_back( newItem );
            }
        }
    }
}

int32_t SearchListsPaginatedResponse::getPage() const
{
    return m_Page;
}


void SearchListsPaginatedResponse::setPage(int32_t value)
{
    m_Page = value;
    
}
int32_t SearchListsPaginatedResponse::getPageCount() const
{
    return m_PageCount;
}


void SearchListsPaginatedResponse::setPageCount(int32_t value)
{
    m_PageCount = value;
    
}
int32_t SearchListsPaginatedResponse::getLimit() const
{
    return m_Limit;
}


void SearchListsPaginatedResponse::setLimit(int32_t value)
{
    m_Limit = value;
    
}
std::vector<std::shared_ptr<List>>& SearchListsPaginatedResponse::getResources()
{
    return m_Resources;
}

void SearchListsPaginatedResponse::setResources(std::vector<std::shared_ptr<List>> value)
{
    m_Resources = value;
    
}
}
}
}
}

