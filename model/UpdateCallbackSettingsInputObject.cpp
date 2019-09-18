/**
 * TextMagic API Documentation
 * # Overview ## Introduction         test <img style=\"float: right; margin-left: 10px; width: 100px;\" src=\"images/phone.png\"> TextMagic SMS API is a platform for building your own messaging app using our messaging infrastructure. It allows you to send and receive SMS text messages, query information about inbound and outbound messages, manage contacts, create templates (i.e. message formats and static texts) and schedule recurrent SMS messages as well as process bulk SMS messages. <button name=\"button\" onclick=\"http://www.google.com\" class=\"btn\">Try TextMagic API for Free</button>  ### Two Ways to Use TextMagic API * [REST API](https://www.textmagic.com/docs/api/start/) – get full access to TextMagic’s messaging gateway features * [Email to SMS API](https://www.textmagic.com/docs/api/send-email-to-sms/) – set up two-way SMS communication without the need to write any additional code  ### Code Libraries We have created a set of client libraries for the most popular programming languages (such as REST API Java and REST API PHP). These libraries allow you to integrate our API into your code in minutes. Just choose your preferred language to get started:  ## Getting started Get Started with the TextMagic REST API To start sending text messages using the TextMagic REST API, just follow these steps: 1. Generate the API credentials 1. Connect to our API endpoint This page provides all the information you need to get started. Here, we explain the following steps:  How to obtain the API credentials The API endpoint How the REST API works The next step How to obtain the API credentials  ### How to obtain the API credentials To start sending text messages, you need to create an API key. API keys are similar to an account password; the difference is that an API key only provides access to the API: you cannot log in to TextMagic Online using the API key.  Your program sends the login credentials with each API request as HTTP headers: `X-TM-Username` is your TextMagic username, while `X-TM-Key` is your API key.  How to obtain an API key:  1. Log in to TextMagic (or start a free trial if you haven’t registered yet). 1. Go to the API settings page. 1. Click the Add new API key button. 1. Enter an app name for this key. Note, it’s just a label, so pick any name. 1. Click Generate new key. 1. You should now see your new API key in the green notification banner above the table:  ![alt text](images/credentials.png)  > Note for API v1 users > V1 keys are not compatible with the V2 version of the TextMagic REST API, so you will need to generate a new API key to use the V2 endpoint.  ### The API endpoint The TextMagic REST API endpoint is: ``` https://rest.textmagic.com/api/v2 ``` All the URLs referenced in this documentation should use this base URL.  ### How the REST API works REST APIs use the HTTP protocol to send and receive messages. REST messages are usually encoded as JSON documents and are an improvement over older methods such as the XML based SOAP protocol. REST APIs use the same set of methods that web browsers use: POST, GET, PUT or DELETE. These correspond to the CRUD operations: create, read, update and delete. Often, REST URIs provide direct CRUD access to entities or collections of entities, for example: http://api.foo.com/people. In this instance, to delete a person’s endpoint, you might simply call the endpoint DELETE http://api.foo.com/people/{id}. REST makes these types of operations simple.  > Example > > Let’s take the entity most often used in messaging: contacts. Imagine you want to perform operations on your contacts list: well, it’s only a matter of calling the following endpoints: > * GET /api/v2/contacts (get all of your contacts) > * GET /api/v2/contacts/{id} (get a specific contact) > * POST /api/v2/contacts (create a new contact) > * PUT /api/v2/contacts/{id} (update an existing contact) > * DELETE /api/v2/contacts/{id} (delete an existing contact) It’s that simple! In fact, that’s all you need to do to manage the contacts in your TextMagic account!  ## Sandbox Sandbox is a tool to test TextMagic REST API requests without the need to install any applications or write any code. Here, we explain the following details about Sandbox: * The credentials area * Command documentation * How it works  <a href=\"\">Go to TextMagic Sandbox</a>  ### The credentials area To make requests using your TextMagic account, you need to enter your account username and your API key into the corresponding fields. You may also Save them in your browser or press Clear to erase them.  ![alt text](images/sandbox.png) 
 *
 * OpenAPI spec version: 2
 * Contact: support@textmagi.biz
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "UpdateCallbackSettingsInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

UpdateCallbackSettingsInputObject::UpdateCallbackSettingsInputObject()
{
    m_OutUrl = utility::conversions::to_string_t("");
    m_InUrl = utility::conversions::to_string_t("");
    m_Format = utility::conversions::to_string_t("");
}

UpdateCallbackSettingsInputObject::~UpdateCallbackSettingsInputObject()
{
}

void UpdateCallbackSettingsInputObject::validate()
{
    // TODO: implement validation
}

web::json::value UpdateCallbackSettingsInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("outUrl")] = ModelBase::toJson(m_OutUrl);
    val[utility::conversions::to_string_t("inUrl")] = ModelBase::toJson(m_InUrl);
    val[utility::conversions::to_string_t("format")] = ModelBase::toJson(m_Format);

    return val;
}

void UpdateCallbackSettingsInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("outUrl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("outUrl")];
        if(!fieldValue.is_null())
        {
            setOutUrl(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inUrl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("inUrl")];
        if(!fieldValue.is_null())
        {
            setInUrl(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("format")];
        if(!fieldValue.is_null())
        {
            setFormat(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void UpdateCallbackSettingsInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("outUrl"), m_OutUrl));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inUrl"), m_InUrl));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("format"), m_Format));
}

void UpdateCallbackSettingsInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setOutUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("outUrl"))));
    setInUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("inUrl"))));
    setFormat(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("format"))));
}

utility::string_t UpdateCallbackSettingsInputObject::getOutUrl() const
{
    return m_OutUrl;
}


void UpdateCallbackSettingsInputObject::setOutUrl(utility::string_t value)
{
    m_OutUrl = value;
    
}
utility::string_t UpdateCallbackSettingsInputObject::getInUrl() const
{
    return m_InUrl;
}


void UpdateCallbackSettingsInputObject::setInUrl(utility::string_t value)
{
    m_InUrl = value;
    
}
utility::string_t UpdateCallbackSettingsInputObject::getFormat() const
{
    return m_Format;
}


void UpdateCallbackSettingsInputObject::setFormat(utility::string_t value)
{
    m_Format = value;
    
}
}
}
}
}

