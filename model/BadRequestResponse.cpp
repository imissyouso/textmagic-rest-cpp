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



#include "BadRequestResponse.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

BadRequestResponse::BadRequestResponse()
{
    m_Code = 0;
    m_CodeIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
    m_ErrorsIsSet = false;
}

BadRequestResponse::~BadRequestResponse()
{
}

void BadRequestResponse::validate()
{
    // TODO: implement validation
}

web::json::value BadRequestResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CodeIsSet)
    {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(m_Code);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(m_Message);
    }
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t("errors")] = ModelBase::toJson(m_Errors);
    }

    return val;
}

void BadRequestResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("code")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("code")];
        if(!fieldValue.is_null())
        {
            setCode(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("message")];
        if(!fieldValue.is_null())
        {
            setMessage(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errors")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("errors")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BadRequestResponse_errors> newItem(new BadRequestResponse_errors());
            newItem->fromJson(fieldValue);
            setErrors( newItem );
        }
    }
}

void BadRequestResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("code"), m_Code));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("message"), m_Message));
        
    }
    if(m_ErrorsIsSet)
    {
        if (m_Errors.get())
        {
            m_Errors->toMultipart(multipart, utility::conversions::to_string_t("errors."));
        }
        
    }
}

void BadRequestResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("code")))
    {
        setCode(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("code"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("message")))
    {
        setMessage(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("message"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("errors")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("errors")))
        {
            std::shared_ptr<BadRequestResponse_errors> newItem(new BadRequestResponse_errors());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("errors."));
            setErrors( newItem );
        }
    }
}

int32_t BadRequestResponse::getCode() const
{
    return m_Code;
}


void BadRequestResponse::setCode(int32_t value)
{
    m_Code = value;
    m_CodeIsSet = true;
}
bool BadRequestResponse::codeIsSet() const
{
    return m_CodeIsSet;
}

void BadRequestResponse::unsetCode()
{
    m_CodeIsSet = false;
}

utility::string_t BadRequestResponse::getMessage() const
{
    return m_Message;
}


void BadRequestResponse::setMessage(utility::string_t value)
{
    m_Message = value;
    m_MessageIsSet = true;
}
bool BadRequestResponse::messageIsSet() const
{
    return m_MessageIsSet;
}

void BadRequestResponse::unsetMessage()
{
    m_MessageIsSet = false;
}

std::shared_ptr<BadRequestResponse_errors> BadRequestResponse::getErrors() const
{
    return m_Errors;
}


void BadRequestResponse::setErrors(std::shared_ptr<BadRequestResponse_errors> value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}
bool BadRequestResponse::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void BadRequestResponse::unsetErrors()
{
    m_ErrorsIsSet = false;
}

}
}
}
}

