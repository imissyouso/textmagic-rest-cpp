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



#include "UpdateCurrentUserResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

UpdateCurrentUserResponse::UpdateCurrentUserResponse()
{
    m_Username = utility::conversions::to_string_t("");
    m_UsernameIsSet = false;
    m_FirstName = utility::conversions::to_string_t("");
    m_FirstNameIsSet = false;
    m_LastName = utility::conversions::to_string_t("");
    m_LastNameIsSet = false;
    m_Email = utility::conversions::to_string_t("");
    m_EmailIsSet = false;
    m_Phone = utility::conversions::to_string_t("");
    m_PhoneIsSet = false;
    m_Company = utility::conversions::to_string_t("");
    m_CompanyIsSet = false;
    m_Timezone = 0;
    m_TimezoneIsSet = false;
}

UpdateCurrentUserResponse::~UpdateCurrentUserResponse()
{
}

void UpdateCurrentUserResponse::validate()
{
    // TODO: implement validation
}

web::json::value UpdateCurrentUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_UsernameIsSet)
    {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(m_Username);
    }
    if(m_FirstNameIsSet)
    {
        val[utility::conversions::to_string_t("firstName")] = ModelBase::toJson(m_FirstName);
    }
    if(m_LastNameIsSet)
    {
        val[utility::conversions::to_string_t("lastName")] = ModelBase::toJson(m_LastName);
    }
    if(m_EmailIsSet)
    {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(m_Email);
    }
    if(m_PhoneIsSet)
    {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(m_Phone);
    }
    if(m_CompanyIsSet)
    {
        val[utility::conversions::to_string_t("company")] = ModelBase::toJson(m_Company);
    }
    if(m_TimezoneIsSet)
    {
        val[utility::conversions::to_string_t("timezone")] = ModelBase::toJson(m_Timezone);
    }

    return val;
}

void UpdateCurrentUserResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("username")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("username")];
        if(!fieldValue.is_null())
        {
            setUsername(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("email")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("email")];
        if(!fieldValue.is_null())
        {
            setEmail(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("phone")];
        if(!fieldValue.is_null())
        {
            setPhone(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("company")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("company")];
        if(!fieldValue.is_null())
        {
            setCompany(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timezone")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("timezone")];
        if(!fieldValue.is_null())
        {
            setTimezone(ModelBase::int32_tFromJson(fieldValue));
        }
    }
}

void UpdateCurrentUserResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("username"), m_Username));
        
    }
    if(m_FirstNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstName"), m_FirstName));
        
    }
    if(m_LastNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastName"), m_LastName));
        
    }
    if(m_EmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("email"), m_Email));
        
    }
    if(m_PhoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phone"), m_Phone));
        
    }
    if(m_CompanyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("company"), m_Company));
        
    }
    if(m_TimezoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timezone"), m_Timezone));
    }
}

void UpdateCurrentUserResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("username")))
    {
        setUsername(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("username"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("firstName")))
    {
        setFirstName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lastName")))
    {
        setLastName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("email")))
    {
        setEmail(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("email"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("phone")))
    {
        setPhone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phone"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("company")))
    {
        setCompany(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("company"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("timezone")))
    {
        setTimezone(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timezone"))));
    }
}

utility::string_t UpdateCurrentUserResponse::getUsername() const
{
    return m_Username;
}


void UpdateCurrentUserResponse::setUsername(utility::string_t value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}
bool UpdateCurrentUserResponse::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void UpdateCurrentUserResponse::unsetUsername()
{
    m_UsernameIsSet = false;
}

utility::string_t UpdateCurrentUserResponse::getFirstName() const
{
    return m_FirstName;
}


void UpdateCurrentUserResponse::setFirstName(utility::string_t value)
{
    m_FirstName = value;
    m_FirstNameIsSet = true;
}
bool UpdateCurrentUserResponse::firstNameIsSet() const
{
    return m_FirstNameIsSet;
}

void UpdateCurrentUserResponse::unsetFirstName()
{
    m_FirstNameIsSet = false;
}

utility::string_t UpdateCurrentUserResponse::getLastName() const
{
    return m_LastName;
}


void UpdateCurrentUserResponse::setLastName(utility::string_t value)
{
    m_LastName = value;
    m_LastNameIsSet = true;
}
bool UpdateCurrentUserResponse::lastNameIsSet() const
{
    return m_LastNameIsSet;
}

void UpdateCurrentUserResponse::unsetLastName()
{
    m_LastNameIsSet = false;
}

utility::string_t UpdateCurrentUserResponse::getEmail() const
{
    return m_Email;
}


void UpdateCurrentUserResponse::setEmail(utility::string_t value)
{
    m_Email = value;
    m_EmailIsSet = true;
}
bool UpdateCurrentUserResponse::emailIsSet() const
{
    return m_EmailIsSet;
}

void UpdateCurrentUserResponse::unsetEmail()
{
    m_EmailIsSet = false;
}

utility::string_t UpdateCurrentUserResponse::getPhone() const
{
    return m_Phone;
}


void UpdateCurrentUserResponse::setPhone(utility::string_t value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}
bool UpdateCurrentUserResponse::phoneIsSet() const
{
    return m_PhoneIsSet;
}

void UpdateCurrentUserResponse::unsetPhone()
{
    m_PhoneIsSet = false;
}

utility::string_t UpdateCurrentUserResponse::getCompany() const
{
    return m_Company;
}


void UpdateCurrentUserResponse::setCompany(utility::string_t value)
{
    m_Company = value;
    m_CompanyIsSet = true;
}
bool UpdateCurrentUserResponse::companyIsSet() const
{
    return m_CompanyIsSet;
}

void UpdateCurrentUserResponse::unsetCompany()
{
    m_CompanyIsSet = false;
}

int32_t UpdateCurrentUserResponse::getTimezone() const
{
    return m_Timezone;
}


void UpdateCurrentUserResponse::setTimezone(int32_t value)
{
    m_Timezone = value;
    m_TimezoneIsSet = true;
}
bool UpdateCurrentUserResponse::timezoneIsSet() const
{
    return m_TimezoneIsSet;
}

void UpdateCurrentUserResponse::unsetTimezone()
{
    m_TimezoneIsSet = false;
}

}
}
}
}

