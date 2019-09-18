/**
 * TextMagic API Documentation
 * # Overview ## Introduction 123 <img style=\"float: right; margin-left: 10px; width: 100px;\" src=\"images/phone.png\"> TextMagic SMS API is a platform for building your own messaging app using our messaging infrastructure. It allows you to send and receive SMS text messages, query information about inbound and outbound messages, manage contacts, create templates (i.e. message formats and static texts) and schedule recurrent SMS messages as well as process bulk SMS messages. <button name=\"button\" onclick=\"http://www.google.com\" class=\"btn\">Try TextMagic API for Free</button>  ### Two Ways to Use TextMagic API * [REST API](https://www.textmagic.com/docs/api/start/) – get full access to TextMagic’s messaging gateway features * [Email to SMS API](https://www.textmagic.com/docs/api/send-email-to-sms/) – set up two-way SMS communication without the need to write any additional code  ### Code Libraries We have created a set of client libraries for the most popular programming languages (such as REST API Java and REST API PHP). These libraries allow you to integrate our API into your code in minutes. Just choose your preferred language to get started:  ## Getting started Get Started with the TextMagic REST API To start sending text messages using the TextMagic REST API, just follow these steps: 1. Generate the API credentials 1. Connect to our API endpoint This page provides all the information you need to get started. Here, we explain the following steps:  How to obtain the API credentials The API endpoint How the REST API works The next step How to obtain the API credentials  ### How to obtain the API credentials To start sending text messages, you need to create an API key. API keys are similar to an account password; the difference is that an API key only provides access to the API: you cannot log in to TextMagic Online using the API key.  Your program sends the login credentials with each API request as HTTP headers: `X-TM-Username` is your TextMagic username, while `X-TM-Key` is your API key.  How to obtain an API key:  1. Log in to TextMagic (or start a free trial if you haven’t registered yet). 1. Go to the API settings page. 1. Click the Add new API key button. 1. Enter an app name for this key. Note, it’s just a label, so pick any name. 1. Click Generate new key. 1. You should now see your new API key in the green notification banner above the table:  ![alt text](images/credentials.png)  > Note for API v1 users > V1 keys are not compatible with the V2 version of the TextMagic REST API, so you will need to generate a new API key to use the V2 endpoint.  ### The API endpoint The TextMagic REST API endpoint is: ``` https://rest.textmagic.com/api/v2 ``` All the URLs referenced in this documentation should use this base URL.  ### How the REST API works REST APIs use the HTTP protocol to send and receive messages. REST messages are usually encoded as JSON documents and are an improvement over older methods such as the XML based SOAP protocol. REST APIs use the same set of methods that web browsers use: POST, GET, PUT or DELETE. These correspond to the CRUD operations: create, read, update and delete. Often, REST URIs provide direct CRUD access to entities or collections of entities, for example: http://api.foo.com/people. In this instance, to delete a person’s endpoint, you might simply call the endpoint DELETE http://api.foo.com/people/{id}. REST makes these types of operations simple.  > Example > > Let’s take the entity most often used in messaging: contacts. Imagine you want to perform operations on your contacts list: well, it’s only a matter of calling the following endpoints: > * GET /api/v2/contacts (get all of your contacts) > * GET /api/v2/contacts/{id} (get a specific contact) > * POST /api/v2/contacts (create a new contact) > * PUT /api/v2/contacts/{id} (update an existing contact) > * DELETE /api/v2/contacts/{id} (delete an existing contact) It’s that simple! In fact, that’s all you need to do to manage the contacts in your TextMagic account!  ## Sandbox Sandbox is a tool to test TextMagic REST API requests without the need to install any applications or write any code. Here, we explain the following details about Sandbox: * The credentials area * Command documentation * How it works  <a href=\"\">Go to TextMagic Sandbox</a>  ### The credentials area To make requests using your TextMagic account, you need to enter your account username and your API key into the corresponding fields. You may also Save them in your browser or press Clear to erase them.  ![alt text](images/sandbox.png) 
 *
 * OpenAPI spec version: 2
 * Contact: support@textmagi.biz
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "DoAuthResponse.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

DoAuthResponse::DoAuthResponse()
{
    m_Username = utility::conversions::to_string_t("");
    m_Token = utility::conversions::to_string_t("");
    m_Expires = utility::datetime();
}

DoAuthResponse::~DoAuthResponse()
{
}

void DoAuthResponse::validate()
{
    // TODO: implement validation
}

web::json::value DoAuthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("username")] = ModelBase::toJson(m_Username);
    val[utility::conversions::to_string_t("token")] = ModelBase::toJson(m_Token);
    val[utility::conversions::to_string_t("expires")] = ModelBase::toJson(m_Expires);
    val[utility::conversions::to_string_t("minVersions")] = ModelBase::toJson(m_MinVersions);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_DisallowedRules )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("disallowedRules")] = web::json::value::array(jsonArray);
    }

    return val;
}

void DoAuthResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("username")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("username")];
        if(!fieldValue.is_null())
        {
            setUsername(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("token")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("token")];
        if(!fieldValue.is_null())
        {
            setToken(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expires")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("expires")];
        if(!fieldValue.is_null())
        {
            setExpires(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minVersions")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("minVersions")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DoAuthResponse_minVersions> newItem(new DoAuthResponse_minVersions());
            newItem->fromJson(fieldValue);
            setMinVersions( newItem );
        }
    }
    {
        m_DisallowedRules.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("disallowedRules")))
        {
        for( auto& item : val[utility::conversions::to_string_t("disallowedRules")].as_array() )
        {
            m_DisallowedRules.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void DoAuthResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("username"), m_Username));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("token"), m_Token));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("expires"), m_Expires));
    m_MinVersions->toMultipart(multipart, utility::conversions::to_string_t("minVersions."));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_DisallowedRules )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("disallowedRules"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void DoAuthResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setUsername(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("username"))));
    setToken(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("token"))));
    setExpires(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("expires"))));
    std::shared_ptr<DoAuthResponse_minVersions> newMinVersions(new DoAuthResponse_minVersions());
    newMinVersions->fromMultiPart(multipart, utility::conversions::to_string_t("minVersions."));
    setMinVersions( newMinVersions );
    {
        m_DisallowedRules.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("disallowedRules"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_DisallowedRules.push_back(ModelBase::stringFromJson(item));
        }
    }
}

utility::string_t DoAuthResponse::getUsername() const
{
    return m_Username;
}


void DoAuthResponse::setUsername(utility::string_t value)
{
    m_Username = value;
    
}
utility::string_t DoAuthResponse::getToken() const
{
    return m_Token;
}


void DoAuthResponse::setToken(utility::string_t value)
{
    m_Token = value;
    
}
utility::datetime DoAuthResponse::getExpires() const
{
    return m_Expires;
}


void DoAuthResponse::setExpires(utility::datetime value)
{
    m_Expires = value;
    
}
std::shared_ptr<DoAuthResponse_minVersions> DoAuthResponse::getMinVersions() const
{
    return m_MinVersions;
}


void DoAuthResponse::setMinVersions(std::shared_ptr<DoAuthResponse_minVersions> value)
{
    m_MinVersions = value;
    
}
std::vector<utility::string_t>& DoAuthResponse::getDisallowedRules()
{
    return m_DisallowedRules;
}

void DoAuthResponse::setDisallowedRules(std::vector<utility::string_t> value)
{
    m_DisallowedRules = value;
    
}
}
}
}
}

