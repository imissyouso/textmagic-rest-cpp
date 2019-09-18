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



#include "DoCarrierLookupResponse.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

DoCarrierLookupResponse::DoCarrierLookupResponse()
{
    m_Cost = 0.0;
    m_CountryIsSet = false;
    m_Local = utility::conversions::to_string_t("");
    m_Type = utility::conversions::to_string_t("");
    m_Carrier = utility::conversions::to_string_t("");
    m_Number164 = utility::conversions::to_string_t("");
    m_Valid = false;
}

DoCarrierLookupResponse::~DoCarrierLookupResponse()
{
}

void DoCarrierLookupResponse::validate()
{
    // TODO: implement validation
}

web::json::value DoCarrierLookupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("cost")] = ModelBase::toJson(m_Cost);
    if(m_CountryIsSet)
    {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(m_Country);
    }
    val[utility::conversions::to_string_t("local")] = ModelBase::toJson(m_Local);
    val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    val[utility::conversions::to_string_t("carrier")] = ModelBase::toJson(m_Carrier);
    val[utility::conversions::to_string_t("number164")] = ModelBase::toJson(m_Number164);
    val[utility::conversions::to_string_t("valid")] = ModelBase::toJson(m_Valid);

    return val;
}

void DoCarrierLookupResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("cost")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("cost")];
        if(!fieldValue.is_null())
        {
            setCost(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("country")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("country")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Country> newItem(new Country());
            newItem->fromJson(fieldValue);
            setCountry( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("local")];
        if(!fieldValue.is_null())
        {
            setLocal(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("carrier")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("carrier")];
        if(!fieldValue.is_null())
        {
            setCarrier(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number164")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("number164")];
        if(!fieldValue.is_null())
        {
            setNumber164(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("valid")];
        if(!fieldValue.is_null())
        {
            setValid(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void DoCarrierLookupResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cost"), m_Cost));
    if(m_CountryIsSet)
    {
        if (m_Country.get())
        {
            m_Country->toMultipart(multipart, utility::conversions::to_string_t("country."));
        }
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("local"), m_Local));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("carrier"), m_Carrier));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("number164"), m_Number164));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("valid"), m_Valid));
}

void DoCarrierLookupResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setCost(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("cost"))));
    if(multipart->hasContent(utility::conversions::to_string_t("country")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("country")))
        {
            std::shared_ptr<Country> newItem(new Country());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("country."));
            setCountry( newItem );
        }
    }
    setLocal(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("local"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    setCarrier(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("carrier"))));
    setNumber164(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("number164"))));
    setValid(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("valid"))));
}

double DoCarrierLookupResponse::getCost() const
{
    return m_Cost;
}


void DoCarrierLookupResponse::setCost(double value)
{
    m_Cost = value;
    
}
std::shared_ptr<Country> DoCarrierLookupResponse::getCountry() const
{
    return m_Country;
}


void DoCarrierLookupResponse::setCountry(std::shared_ptr<Country> value)
{
    m_Country = value;
    m_CountryIsSet = true;
}
bool DoCarrierLookupResponse::countryIsSet() const
{
    return m_CountryIsSet;
}

void DoCarrierLookupResponse::unsetCountry()
{
    m_CountryIsSet = false;
}

utility::string_t DoCarrierLookupResponse::getLocal() const
{
    return m_Local;
}


void DoCarrierLookupResponse::setLocal(utility::string_t value)
{
    m_Local = value;
    
}
utility::string_t DoCarrierLookupResponse::getType() const
{
    return m_Type;
}


void DoCarrierLookupResponse::setType(utility::string_t value)
{
    m_Type = value;
    
}
utility::string_t DoCarrierLookupResponse::getCarrier() const
{
    return m_Carrier;
}


void DoCarrierLookupResponse::setCarrier(utility::string_t value)
{
    m_Carrier = value;
    
}
utility::string_t DoCarrierLookupResponse::getNumber164() const
{
    return m_Number164;
}


void DoCarrierLookupResponse::setNumber164(utility::string_t value)
{
    m_Number164 = value;
    
}
bool DoCarrierLookupResponse::isValid() const
{
    return m_Valid;
}


void DoCarrierLookupResponse::setValid(bool value)
{
    m_Valid = value;
    
}
}
}
}
}

