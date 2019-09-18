/**
 * TextMagic API Documentation
 * # Overview ## Introduction test <img style=\"float: right; margin-left: 10px; width: 100px;\" src=\"images/phone.png\"> TextMagic SMS API is a platform for building your own messaging app using our messaging infrastructure. It allows you to send and receive SMS text messages, query information about inbound and outbound messages, manage contacts, create templates (i.e. message formats and static texts) and schedule recurrent SMS messages as well as process bulk SMS messages. <button name=\"button\" onclick=\"http://www.google.com\" class=\"btn\">Try TextMagic API for Free</button>  ### Two Ways to Use TextMagic API * [REST API](https://www.textmagic.com/docs/api/start/) – get full access to TextMagic’s messaging gateway features * [Email to SMS API](https://www.textmagic.com/docs/api/send-email-to-sms/) – set up two-way SMS communication without the need to write any additional code  ### Code Libraries We have created a set of client libraries for the most popular programming languages (such as REST API Java and REST API PHP). These libraries allow you to integrate our API into your code in minutes. Just choose your preferred language to get started:  ## Getting started Get Started with the TextMagic REST API To start sending text messages using the TextMagic REST API, just follow these steps: 1. Generate the API credentials 1. Connect to our API endpoint This page provides all the information you need to get started. Here, we explain the following steps:  How to obtain the API credentials The API endpoint How the REST API works The next step How to obtain the API credentials  ### How to obtain the API credentials To start sending text messages, you need to create an API key. API keys are similar to an account password; the difference is that an API key only provides access to the API: you cannot log in to TextMagic Online using the API key.  Your program sends the login credentials with each API request as HTTP headers: `X-TM-Username` is your TextMagic username, while `X-TM-Key` is your API key.  How to obtain an API key:  1. Log in to TextMagic (or start a free trial if you haven’t registered yet). 1. Go to the API settings page. 1. Click the Add new API key button. 1. Enter an app name for this key. Note, it’s just a label, so pick any name. 1. Click Generate new key. 1. You should now see your new API key in the green notification banner above the table:  ![alt text](images/credentials.png)  > Note for API v1 users > V1 keys are not compatible with the V2 version of the TextMagic REST API, so you will need to generate a new API key to use the V2 endpoint.  ### The API endpoint The TextMagic REST API endpoint is: ``` https://rest.textmagic.com/api/v2 ``` All the URLs referenced in this documentation should use this base URL.  ### How the REST API works REST APIs use the HTTP protocol to send and receive messages. REST messages are usually encoded as JSON documents and are an improvement over older methods such as the XML based SOAP protocol. REST APIs use the same set of methods that web browsers use: POST, GET, PUT or DELETE. These correspond to the CRUD operations: create, read, update and delete. Often, REST URIs provide direct CRUD access to entities or collections of entities, for example: http://api.foo.com/people. In this instance, to delete a person’s endpoint, you might simply call the endpoint DELETE http://api.foo.com/people/{id}. REST makes these types of operations simple.  > Example > > Let’s take the entity most often used in messaging: contacts. Imagine you want to perform operations on your contacts list: well, it’s only a matter of calling the following endpoints: > * GET /api/v2/contacts (get all of your contacts) > * GET /api/v2/contacts/{id} (get a specific contact) > * POST /api/v2/contacts (create a new contact) > * PUT /api/v2/contacts/{id} (update an existing contact) > * DELETE /api/v2/contacts/{id} (delete an existing contact) It’s that simple! In fact, that’s all you need to do to manage the contacts in your TextMagic account!  ## Sandbox Sandbox is a tool to test TextMagic REST API requests without the need to install any applications or write any code. Here, we explain the following details about Sandbox: * The credentials area * Command documentation * How it works  <a href=\"\">Go to TextMagic Sandbox</a>  ### The credentials area To make requests using your TextMagic account, you need to enter your account username and your API key into the corresponding fields. You may also Save them in your browser or press Clear to erase them.  ![alt text](images/sandbox.png) 
 *
 * OpenAPI spec version: 2
 * Contact: support@textmagi.biz
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "MessagesIcs.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

MessagesIcs::MessagesIcs()
{
    m_Id = 0;
    m_NextSend = utility::datetime();
    m_Rrule = utility::conversions::to_string_t("");
    m_LastSent = utility::datetime();
    m_ContactName = utility::conversions::to_string_t("");
    m_Type = utility::conversions::to_string_t("");
    m_Summary = utility::conversions::to_string_t("");
    m_FirstOccurrence = utility::datetime();
    m_LastOccurrence = utility::datetime();
    m_RecipientsCount = 0;
    m_Timezone = utility::conversions::to_string_t("");
    m_Completed = false;
    m_Avatar = utility::conversions::to_string_t("");
    m_CreatedAt = utility::datetime();
}

MessagesIcs::~MessagesIcs()
{
}

void MessagesIcs::validate()
{
    // TODO: implement validation
}

web::json::value MessagesIcs::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("nextSend")] = ModelBase::toJson(m_NextSend);
    val[utility::conversions::to_string_t("rrule")] = ModelBase::toJson(m_Rrule);
    val[utility::conversions::to_string_t("session")] = ModelBase::toJson(m_Session);
    val[utility::conversions::to_string_t("lastSent")] = ModelBase::toJson(m_LastSent);
    val[utility::conversions::to_string_t("contactName")] = ModelBase::toJson(m_ContactName);
    val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(m_Parameters);
    val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    val[utility::conversions::to_string_t("summary")] = ModelBase::toJson(m_Summary);
    val[utility::conversions::to_string_t("textParameters")] = ModelBase::toJson(m_TextParameters);
    val[utility::conversions::to_string_t("firstOccurrence")] = ModelBase::toJson(m_FirstOccurrence);
    val[utility::conversions::to_string_t("lastOccurrence")] = ModelBase::toJson(m_LastOccurrence);
    val[utility::conversions::to_string_t("recipientsCount")] = ModelBase::toJson(m_RecipientsCount);
    val[utility::conversions::to_string_t("timezone")] = ModelBase::toJson(m_Timezone);
    val[utility::conversions::to_string_t("completed")] = ModelBase::toJson(m_Completed);
    val[utility::conversions::to_string_t("avatar")] = ModelBase::toJson(m_Avatar);
    val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);

    return val;
}

void MessagesIcs::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nextSend")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("nextSend")];
        if(!fieldValue.is_null())
        {
            setNextSend(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rrule")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("rrule")];
        if(!fieldValue.is_null())
        {
            setRrule(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("session")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<MessageSession> newItem(new MessageSession());
            newItem->fromJson(fieldValue);
            setSession( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastSent")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("lastSent")];
        if(!fieldValue.is_null())
        {
            setLastSent(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contactName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("contactName")];
        if(!fieldValue.is_null())
        {
            setContactName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("parameters")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<MessagesIcs_parameters> newItem(new MessagesIcs_parameters());
            newItem->fromJson(fieldValue);
            setParameters( newItem );
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
    if(val.has_field(utility::conversions::to_string_t("summary")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("summary")];
        if(!fieldValue.is_null())
        {
            setSummary(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("textParameters")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("textParameters")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<MessagesIcs_textParameters> newItem(new MessagesIcs_textParameters());
            newItem->fromJson(fieldValue);
            setTextParameters( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("firstOccurrence")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("firstOccurrence")];
        if(!fieldValue.is_null())
        {
            setFirstOccurrence(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastOccurrence")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("lastOccurrence")];
        if(!fieldValue.is_null())
        {
            setLastOccurrence(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recipientsCount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("recipientsCount")];
        if(!fieldValue.is_null())
        {
            setRecipientsCount(ModelBase::int32_tFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("completed")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("completed")];
        if(!fieldValue.is_null())
        {
            setCompleted(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avatar")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("avatar")];
        if(!fieldValue.is_null())
        {
            setAvatar(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdAt")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("createdAt")];
        if(!fieldValue.is_null())
        {
            setCreatedAt(ModelBase::dateFromJson(fieldValue));
        }
    }
}

void MessagesIcs::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nextSend"), m_NextSend));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rrule"), m_Rrule));
    m_Session->toMultipart(multipart, utility::conversions::to_string_t("session."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastSent"), m_LastSent));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contactName"), m_ContactName));
    m_Parameters->toMultipart(multipart, utility::conversions::to_string_t("parameters."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("summary"), m_Summary));
    m_TextParameters->toMultipart(multipart, utility::conversions::to_string_t("textParameters."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstOccurrence"), m_FirstOccurrence));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastOccurrence"), m_LastOccurrence));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("recipientsCount"), m_RecipientsCount));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timezone"), m_Timezone));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("completed"), m_Completed));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("avatar"), m_Avatar));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
}

void MessagesIcs::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setNextSend(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nextSend"))));
    setRrule(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("rrule"))));
    std::shared_ptr<MessageSession> newSession(new MessageSession());
    newSession->fromMultiPart(multipart, utility::conversions::to_string_t("session."));
    setSession( newSession );
    setLastSent(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastSent"))));
    setContactName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("contactName"))));
    std::shared_ptr<MessagesIcs_parameters> newParameters(new MessagesIcs_parameters());
    newParameters->fromMultiPart(multipart, utility::conversions::to_string_t("parameters."));
    setParameters( newParameters );
    setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    setSummary(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("summary"))));
    std::shared_ptr<MessagesIcs_textParameters> newTextParameters(new MessagesIcs_textParameters());
    newTextParameters->fromMultiPart(multipart, utility::conversions::to_string_t("textParameters."));
    setTextParameters( newTextParameters );
    setFirstOccurrence(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstOccurrence"))));
    setLastOccurrence(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastOccurrence"))));
    setRecipientsCount(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("recipientsCount"))));
    setTimezone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timezone"))));
    setCompleted(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("completed"))));
    setAvatar(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("avatar"))));
    setCreatedAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt"))));
}

int32_t MessagesIcs::getId() const
{
    return m_Id;
}


void MessagesIcs::setId(int32_t value)
{
    m_Id = value;
    
}
utility::datetime MessagesIcs::getNextSend() const
{
    return m_NextSend;
}


void MessagesIcs::setNextSend(utility::datetime value)
{
    m_NextSend = value;
    
}
utility::string_t MessagesIcs::getRrule() const
{
    return m_Rrule;
}


void MessagesIcs::setRrule(utility::string_t value)
{
    m_Rrule = value;
    
}
std::shared_ptr<MessageSession> MessagesIcs::getSession() const
{
    return m_Session;
}


void MessagesIcs::setSession(std::shared_ptr<MessageSession> value)
{
    m_Session = value;
    
}
utility::datetime MessagesIcs::getLastSent() const
{
    return m_LastSent;
}


void MessagesIcs::setLastSent(utility::datetime value)
{
    m_LastSent = value;
    
}
utility::string_t MessagesIcs::getContactName() const
{
    return m_ContactName;
}


void MessagesIcs::setContactName(utility::string_t value)
{
    m_ContactName = value;
    
}
std::shared_ptr<MessagesIcs_parameters> MessagesIcs::getParameters() const
{
    return m_Parameters;
}


void MessagesIcs::setParameters(std::shared_ptr<MessagesIcs_parameters> value)
{
    m_Parameters = value;
    
}
utility::string_t MessagesIcs::getType() const
{
    return m_Type;
}


void MessagesIcs::setType(utility::string_t value)
{
    m_Type = value;
    
}
utility::string_t MessagesIcs::getSummary() const
{
    return m_Summary;
}


void MessagesIcs::setSummary(utility::string_t value)
{
    m_Summary = value;
    
}
std::shared_ptr<MessagesIcs_textParameters> MessagesIcs::getTextParameters() const
{
    return m_TextParameters;
}


void MessagesIcs::setTextParameters(std::shared_ptr<MessagesIcs_textParameters> value)
{
    m_TextParameters = value;
    
}
utility::datetime MessagesIcs::getFirstOccurrence() const
{
    return m_FirstOccurrence;
}


void MessagesIcs::setFirstOccurrence(utility::datetime value)
{
    m_FirstOccurrence = value;
    
}
utility::datetime MessagesIcs::getLastOccurrence() const
{
    return m_LastOccurrence;
}


void MessagesIcs::setLastOccurrence(utility::datetime value)
{
    m_LastOccurrence = value;
    
}
int32_t MessagesIcs::getRecipientsCount() const
{
    return m_RecipientsCount;
}


void MessagesIcs::setRecipientsCount(int32_t value)
{
    m_RecipientsCount = value;
    
}
utility::string_t MessagesIcs::getTimezone() const
{
    return m_Timezone;
}


void MessagesIcs::setTimezone(utility::string_t value)
{
    m_Timezone = value;
    
}
bool MessagesIcs::isCompleted() const
{
    return m_Completed;
}


void MessagesIcs::setCompleted(bool value)
{
    m_Completed = value;
    
}
utility::string_t MessagesIcs::getAvatar() const
{
    return m_Avatar;
}


void MessagesIcs::setAvatar(utility::string_t value)
{
    m_Avatar = value;
    
}
utility::datetime MessagesIcs::getCreatedAt() const
{
    return m_CreatedAt;
}


void MessagesIcs::setCreatedAt(utility::datetime value)
{
    m_CreatedAt = value;
    
}
}
}
}
}

