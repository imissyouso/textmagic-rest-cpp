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



#include "MessagesIcs_parameters.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

MessagesIcs_parameters::MessagesIcs_parameters()
{
    m_Text = utility::conversions::to_string_t("");
}

MessagesIcs_parameters::~MessagesIcs_parameters()
{
}

void MessagesIcs_parameters::validate()
{
    // TODO: implement validation
}

web::json::value MessagesIcs_parameters::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("text")] = ModelBase::toJson(m_Text);
    val[utility::conversions::to_string_t("recipients")] = ModelBase::toJson(m_Recipients);

    return val;
}

void MessagesIcs_parameters::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("text")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("text")];
        if(!fieldValue.is_null())
        {
            setText(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recipients")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("recipients")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<MessagesIcs_parameters_recipients> newItem(new MessagesIcs_parameters_recipients());
            newItem->fromJson(fieldValue);
            setRecipients( newItem );
        }
    }
}

void MessagesIcs_parameters::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("text"), m_Text));
    m_Recipients->toMultipart(multipart, utility::conversions::to_string_t("recipients."));
}

void MessagesIcs_parameters::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setText(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("text"))));
    std::shared_ptr<MessagesIcs_parameters_recipients> newRecipients(new MessagesIcs_parameters_recipients());
    newRecipients->fromMultiPart(multipart, utility::conversions::to_string_t("recipients."));
    setRecipients( newRecipients );
}

utility::string_t MessagesIcs_parameters::getText() const
{
    return m_Text;
}


void MessagesIcs_parameters::setText(utility::string_t value)
{
    m_Text = value;
    
}
std::shared_ptr<MessagesIcs_parameters_recipients> MessagesIcs_parameters::getRecipients() const
{
    return m_Recipients;
}


void MessagesIcs_parameters::setRecipients(std::shared_ptr<MessagesIcs_parameters_recipients> value)
{
    m_Recipients = value;
    
}
}
}
}
}

