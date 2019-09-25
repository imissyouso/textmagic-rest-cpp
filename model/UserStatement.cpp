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



#include "UserStatement.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

UserStatement::UserStatement()
{
    m_Id = 0;
    m_UserId = 0;
    m_date = utility::datetime();
    m_Balance = 0.0;
    m_Delta = 0.0f;
    m_Type = utility::conversions::to_string_t("");
    m_Value = utility::conversions::to_string_t("");
    m_Comment = utility::conversions::to_string_t("");
}

UserStatement::~UserStatement()
{
}

void UserStatement::validate()
{
    // TODO: implement validation
}

web::json::value UserStatement::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    val[utility::conversions::to_string_t("date")] = ModelBase::toJson(m_date);
    val[utility::conversions::to_string_t("balance")] = ModelBase::toJson(m_Balance);
    val[utility::conversions::to_string_t("delta")] = ModelBase::toJson(m_Delta);
    val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(m_Comment);

    return val;
}

void UserStatement::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("userId")];
        if(!fieldValue.is_null())
        {
            setUserId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("date")];
        if(!fieldValue.is_null())
        {
            setDate(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("balance")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("balance")];
        if(!fieldValue.is_null())
        {
            setBalance(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delta")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("delta")];
        if(!fieldValue.is_null())
        {
            setDelta(ModelBase::floatFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("type")];
        if(!fieldValue.is_null())
        {
            setType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("value")];
        if(!fieldValue.is_null())
        {
            setValue(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("comment")];
        if(!fieldValue.is_null())
        {
            setComment(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void UserStatement::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("date"), m_date));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("balance"), m_Balance));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("delta"), m_Delta));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("comment"), m_Comment));
}

void UserStatement::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setUserId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId"))));
    setDate(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("date"))));
    setBalance(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("balance"))));
    setDelta(ModelBase::floatFromHttpContent(multipart->getContent(utility::conversions::to_string_t("delta"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    setValue(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("value"))));
    setComment(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("comment"))));
}

int32_t UserStatement::getId() const
{
    return m_Id;
}


void UserStatement::setId(int32_t value)
{
    m_Id = value;
    
}
int32_t UserStatement::getUserId() const
{
    return m_UserId;
}


void UserStatement::setUserId(int32_t value)
{
    m_UserId = value;
    
}
utility::datetime UserStatement::getDate() const
{
    return m_date;
}


void UserStatement::setDate(utility::datetime value)
{
    m_date = value;
    
}
double UserStatement::getBalance() const
{
    return m_Balance;
}


void UserStatement::setBalance(double value)
{
    m_Balance = value;
    
}
float UserStatement::getDelta() const
{
    return m_Delta;
}


void UserStatement::setDelta(float value)
{
    m_Delta = value;
    
}
utility::string_t UserStatement::getType() const
{
    return m_Type;
}


void UserStatement::setType(utility::string_t value)
{
    m_Type = value;
    
}
utility::string_t UserStatement::getValue() const
{
    return m_Value;
}


void UserStatement::setValue(utility::string_t value)
{
    m_Value = value;
    
}
utility::string_t UserStatement::getComment() const
{
    return m_Comment;
}


void UserStatement::setComment(utility::string_t value)
{
    m_Comment = value;
    
}
}
}
}
}

