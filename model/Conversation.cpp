/**
 * TextMagic API Documentation
 * # Overview ## Introduction <img style=\"float: right; margin-left: 10px; width: 100px;\" src=\"images/phone.png\"> TextMagic SMS API is a platform for building your own messaging app using our messaging infrastructure. It allows you to send and receive SMS text messages, query information about inbound and outbound messages, manage contacts, create templates (i.e. message formats and static texts) and schedule recurrent SMS messages as well as process bulk SMS messages. <button name=\"button\" onclick=\"http://www.google.com\" class=\"btn\">Try TextMagic API for Free</button>  ### Two Ways to Use TextMagic API * [REST API](https://www.textmagic.com/docs/api/start/) – get full access to TextMagic’s messaging gateway features * [Email to SMS API](https://www.textmagic.com/docs/api/send-email-to-sms/) – set up two-way SMS communication without the need to write any additional code  ### Code Libraries We have created a set of client libraries for the most popular programming languages (such as REST API Java and REST API PHP). These libraries allow you to integrate our API into your code in minutes. Just choose your preferred language to get started:  ## Getting started Get Started with the TextMagic REST API To start sending text messages using the TextMagic REST API, just follow these steps: 1. Generate the API credentials 1. Connect to our API endpoint This page provides all the information you need to get started. Here, we explain the following steps:  How to obtain the API credentials The API endpoint How the REST API works The next step How to obtain the API credentials  ### How to obtain the API credentials To start sending text messages, you need to create an API key. API keys are similar to an account password; the difference is that an API key only provides access to the API: you cannot log in to TextMagic Online using the API key.  Your program sends the login credentials with each API request as HTTP headers: `X-TM-Username` is your TextMagic username, while `X-TM-Key` is your API key.  How to obtain an API key:  1. Log in to TextMagic (or start a free trial if you haven’t registered yet). 1. Go to the API settings page. 1. Click the Add new API key button. 1. Enter an app name for this key. Note, it’s just a label, so pick any name. 1. Click Generate new key. 1. You should now see your new API key in the green notification banner above the table:  ![alt text](images/credentials.png)  > Note for API v1 users > V1 keys are not compatible with the V2 version of the TextMagic REST API, so you will need to generate a new API key to use the V2 endpoint.  ### The API endpoint The TextMagic REST API endpoint is: ``` https://rest.textmagic.com/api/v2 ``` All the URLs referenced in this documentation should use this base URL.  ### How the REST API works REST APIs use the HTTP protocol to send and receive messages. REST messages are usually encoded as JSON documents and are an improvement over older methods such as the XML based SOAP protocol. REST APIs use the same set of methods that web browsers use: POST, GET, PUT or DELETE. These correspond to the CRUD operations: create, read, update and delete. Often, REST URIs provide direct CRUD access to entities or collections of entities, for example: http://api.foo.com/people. In this instance, to delete a person’s endpoint, you might simply call the endpoint DELETE http://api.foo.com/people/{id}. REST makes these types of operations simple.  > Example > > Let’s take the entity most often used in messaging: contacts. Imagine you want to perform operations on your contacts list: well, it’s only a matter of calling the following endpoints: > * GET /api/v2/contacts (get all of your contacts) > * GET /api/v2/contacts/{id} (get a specific contact) > * POST /api/v2/contacts (create a new contact) > * PUT /api/v2/contacts/{id} (update an existing contact) > * DELETE /api/v2/contacts/{id} (delete an existing contact) It’s that simple! In fact, that’s all you need to do to manage the contacts in your TextMagic account!  ## Sandbox Sandbox is a tool to test TextMagic REST API requests without the need to install any applications or write any code. Here, we explain the following details about Sandbox: * The credentials area * Command documentation * How it works  <a href=\"\">Go to TextMagic Sandbox</a>  ### The credentials area To make requests using your TextMagic account, you need to enter your account username and your API key into the corresponding fields. You may also Save them in your browser or press Clear to erase them.  ![alt text](images/sandbox.png) 
 *
 * OpenAPI spec version: 2
 * Contact: support@textmagi.biz
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "Conversation.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

Conversation::Conversation()
{
    m_Id = 0;
    m_Direction = utility::conversions::to_string_t("");
    m_Sender = utility::conversions::to_string_t("");
    m_MessageTime = utility::datetime();
    m_Text = utility::conversions::to_string_t("");
    m_Receiver = utility::conversions::to_string_t("");
    m_Status = utility::conversions::to_string_t("");
    m_FirstName = utility::conversions::to_string_t("");
    m_LastName = utility::conversions::to_string_t("");
    m_SessionId = 0;
}

Conversation::~Conversation()
{
}

void Conversation::validate()
{
    // TODO: implement validation
}

web::json::value Conversation::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(m_Direction);
    val[utility::conversions::to_string_t("sender")] = ModelBase::toJson(m_Sender);
    val[utility::conversions::to_string_t("messageTime")] = ModelBase::toJson(m_MessageTime);
    val[utility::conversions::to_string_t("text")] = ModelBase::toJson(m_Text);
    val[utility::conversions::to_string_t("receiver")] = ModelBase::toJson(m_Receiver);
    val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    val[utility::conversions::to_string_t("firstName")] = ModelBase::toJson(m_FirstName);
    val[utility::conversions::to_string_t("lastName")] = ModelBase::toJson(m_LastName);
    val[utility::conversions::to_string_t("sessionId")] = ModelBase::toJson(m_SessionId);

    return val;
}

void Conversation::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("direction")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("direction")];
        if(!fieldValue.is_null())
        {
            setDirection(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sender")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("sender")];
        if(!fieldValue.is_null())
        {
            setSender(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("messageTime")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("messageTime")];
        if(!fieldValue.is_null())
        {
            setMessageTime(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("text")];
        if(!fieldValue.is_null())
        {
            setText(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("receiver")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("receiver")];
        if(!fieldValue.is_null())
        {
            setReceiver(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("status")];
        if(!fieldValue.is_null())
        {
            setStatus(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("firstName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("firstName")];
        if(!fieldValue.is_null())
        {
            setFirstName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("lastName")];
        if(!fieldValue.is_null())
        {
            setLastName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sessionId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("sessionId")];
        if(!fieldValue.is_null())
        {
            setSessionId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
}

void Conversation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("direction"), m_Direction));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sender"), m_Sender));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("messageTime"), m_MessageTime));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("text"), m_Text));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("receiver"), m_Receiver));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstName"), m_FirstName));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastName"), m_LastName));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sessionId"), m_SessionId));
}

void Conversation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setDirection(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("direction"))));
    setSender(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sender"))));
    setMessageTime(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("messageTime"))));
    setText(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("text"))));
    setReceiver(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("receiver"))));
    setStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("status"))));
    setFirstName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstName"))));
    setLastName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastName"))));
    setSessionId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sessionId"))));
}

int32_t Conversation::getId() const
{
    return m_Id;
}


void Conversation::setId(int32_t value)
{
    m_Id = value;
    
}
utility::string_t Conversation::getDirection() const
{
    return m_Direction;
}


void Conversation::setDirection(utility::string_t value)
{
    m_Direction = value;
    
}
utility::string_t Conversation::getSender() const
{
    return m_Sender;
}


void Conversation::setSender(utility::string_t value)
{
    m_Sender = value;
    
}
utility::datetime Conversation::getMessageTime() const
{
    return m_MessageTime;
}


void Conversation::setMessageTime(utility::datetime value)
{
    m_MessageTime = value;
    
}
utility::string_t Conversation::getText() const
{
    return m_Text;
}


void Conversation::setText(utility::string_t value)
{
    m_Text = value;
    
}
utility::string_t Conversation::getReceiver() const
{
    return m_Receiver;
}


void Conversation::setReceiver(utility::string_t value)
{
    m_Receiver = value;
    
}
utility::string_t Conversation::getStatus() const
{
    return m_Status;
}


void Conversation::setStatus(utility::string_t value)
{
    m_Status = value;
    
}
utility::string_t Conversation::getFirstName() const
{
    return m_FirstName;
}


void Conversation::setFirstName(utility::string_t value)
{
    m_FirstName = value;
    
}
utility::string_t Conversation::getLastName() const
{
    return m_LastName;
}


void Conversation::setLastName(utility::string_t value)
{
    m_LastName = value;
    
}
int32_t Conversation::getSessionId() const
{
    return m_SessionId;
}


void Conversation::setSessionId(int32_t value)
{
    m_SessionId = value;
    
}
}
}
}
}

