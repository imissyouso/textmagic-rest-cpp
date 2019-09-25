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



#include "GetOutboundMessagesHistoryResponse.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

GetOutboundMessagesHistoryResponse::GetOutboundMessagesHistoryResponse()
{
    m_LastId = 0;
    m_NextLastId = 0;
    m_Limit = 0;
}

GetOutboundMessagesHistoryResponse::~GetOutboundMessagesHistoryResponse()
{
}

void GetOutboundMessagesHistoryResponse::validate()
{
    // TODO: implement validation
}

web::json::value GetOutboundMessagesHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("lastId")] = ModelBase::toJson(m_LastId);
    val[utility::conversions::to_string_t("nextLastId")] = ModelBase::toJson(m_NextLastId);
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

void GetOutboundMessagesHistoryResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("lastId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("lastId")];
        if(!fieldValue.is_null())
        {
            setLastId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nextLastId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("nextLastId")];
        if(!fieldValue.is_null())
        {
            setNextLastId(ModelBase::int32_tFromJson(fieldValue));
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
                m_Resources.push_back( std::shared_ptr<MessageOut>(nullptr) );
            }
            else
            {
                std::shared_ptr<MessageOut> newItem(new MessageOut());
                newItem->fromJson(item);
                m_Resources.push_back( newItem );
            }
        }
        }
    }
}

void GetOutboundMessagesHistoryResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastId"), m_LastId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nextLastId"), m_NextLastId));
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

void GetOutboundMessagesHistoryResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setLastId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastId"))));
    setNextLastId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nextLastId"))));
    setLimit(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("limit"))));
    {
        m_Resources.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("resources"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Resources.push_back( std::shared_ptr<MessageOut>(nullptr) );
            }
            else
            {
                std::shared_ptr<MessageOut> newItem(new MessageOut());
                newItem->fromJson(item);
                m_Resources.push_back( newItem );
            }
        }
    }
}

int32_t GetOutboundMessagesHistoryResponse::getLastId() const
{
    return m_LastId;
}


void GetOutboundMessagesHistoryResponse::setLastId(int32_t value)
{
    m_LastId = value;
    
}
int32_t GetOutboundMessagesHistoryResponse::getNextLastId() const
{
    return m_NextLastId;
}


void GetOutboundMessagesHistoryResponse::setNextLastId(int32_t value)
{
    m_NextLastId = value;
    
}
int32_t GetOutboundMessagesHistoryResponse::getLimit() const
{
    return m_Limit;
}


void GetOutboundMessagesHistoryResponse::setLimit(int32_t value)
{
    m_Limit = value;
    
}
std::vector<std::shared_ptr<MessageOut>>& GetOutboundMessagesHistoryResponse::getResources()
{
    return m_Resources;
}

void GetOutboundMessagesHistoryResponse::setResources(std::vector<std::shared_ptr<MessageOut>> value)
{
    m_Resources = value;
    
}
}
}
}
}

