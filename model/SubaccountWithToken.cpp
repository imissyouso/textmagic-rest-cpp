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



#include "SubaccountWithToken.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

SubaccountWithToken::SubaccountWithToken()
{
    m_Id = 0;
    m_Username = utility::conversions::to_string_t("");
    m_FirstName = utility::conversions::to_string_t("");
    m_LastName = utility::conversions::to_string_t("");
    m_Email = utility::conversions::to_string_t("");
    m_Status = utility::conversions::to_string_t("");
    m_Balance = 0.0;
    m_Phone = utility::conversions::to_string_t("");
    m_Company = utility::conversions::to_string_t("");
    m_SubaccountType = utility::conversions::to_string_t("");
    m_EmailAccepted = false;
    m_PhoneAccepted = false;
    m_Token = utility::conversions::to_string_t("");
}

SubaccountWithToken::~SubaccountWithToken()
{
}

void SubaccountWithToken::validate()
{
    // TODO: implement validation
}

web::json::value SubaccountWithToken::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("username")] = ModelBase::toJson(m_Username);
    val[utility::conversions::to_string_t("firstName")] = ModelBase::toJson(m_FirstName);
    val[utility::conversions::to_string_t("lastName")] = ModelBase::toJson(m_LastName);
    val[utility::conversions::to_string_t("email")] = ModelBase::toJson(m_Email);
    val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    val[utility::conversions::to_string_t("balance")] = ModelBase::toJson(m_Balance);
    val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(m_Phone);
    val[utility::conversions::to_string_t("company")] = ModelBase::toJson(m_Company);
    val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    val[utility::conversions::to_string_t("country")] = ModelBase::toJson(m_Country);
    val[utility::conversions::to_string_t("timezone")] = ModelBase::toJson(m_Timezone);
    val[utility::conversions::to_string_t("subaccountType")] = ModelBase::toJson(m_SubaccountType);
    val[utility::conversions::to_string_t("emailAccepted")] = ModelBase::toJson(m_EmailAccepted);
    val[utility::conversions::to_string_t("phoneAccepted")] = ModelBase::toJson(m_PhoneAccepted);
    val[utility::conversions::to_string_t("avatar")] = ModelBase::toJson(m_Avatar);
    val[utility::conversions::to_string_t("token")] = ModelBase::toJson(m_Token);

    return val;
}

void SubaccountWithToken::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("status")];
        if(!fieldValue.is_null())
        {
            setStatus(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("currency")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("currency")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Currency> newItem(new Currency());
            newItem->fromJson(fieldValue);
            setCurrency( newItem );
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
    if(val.has_field(utility::conversions::to_string_t("timezone")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("timezone")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Timezone> newItem(new Timezone());
            newItem->fromJson(fieldValue);
            setTimezone( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subaccountType")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("subaccountType")];
        if(!fieldValue.is_null())
        {
            setSubaccountType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("emailAccepted")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("emailAccepted")];
        if(!fieldValue.is_null())
        {
            setEmailAccepted(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phoneAccepted")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("phoneAccepted")];
        if(!fieldValue.is_null())
        {
            setPhoneAccepted(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avatar")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("avatar")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<UserImage> newItem(new UserImage());
            newItem->fromJson(fieldValue);
            setAvatar( newItem );
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
}

void SubaccountWithToken::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("username"), m_Username));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstName"), m_FirstName));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastName"), m_LastName));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("email"), m_Email));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("balance"), m_Balance));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phone"), m_Phone));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("company"), m_Company));
    m_Currency->toMultipart(multipart, utility::conversions::to_string_t("currency."));
    m_Country->toMultipart(multipart, utility::conversions::to_string_t("country."));
    m_Timezone->toMultipart(multipart, utility::conversions::to_string_t("timezone."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subaccountType"), m_SubaccountType));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("emailAccepted"), m_EmailAccepted));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phoneAccepted"), m_PhoneAccepted));
    m_Avatar->toMultipart(multipart, utility::conversions::to_string_t("avatar."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("token"), m_Token));
}

void SubaccountWithToken::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setUsername(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("username"))));
    setFirstName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstName"))));
    setLastName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastName"))));
    setEmail(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("email"))));
    setStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("status"))));
    setBalance(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("balance"))));
    setPhone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phone"))));
    setCompany(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("company"))));
    std::shared_ptr<Currency> newCurrency(new Currency());
    newCurrency->fromMultiPart(multipart, utility::conversions::to_string_t("currency."));
    setCurrency( newCurrency );
    std::shared_ptr<Country> newCountry(new Country());
    newCountry->fromMultiPart(multipart, utility::conversions::to_string_t("country."));
    setCountry( newCountry );
    std::shared_ptr<Timezone> newTimezone(new Timezone());
    newTimezone->fromMultiPart(multipart, utility::conversions::to_string_t("timezone."));
    setTimezone( newTimezone );
    setSubaccountType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("subaccountType"))));
    setEmailAccepted(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("emailAccepted"))));
    setPhoneAccepted(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phoneAccepted"))));
    std::shared_ptr<UserImage> newAvatar(new UserImage());
    newAvatar->fromMultiPart(multipart, utility::conversions::to_string_t("avatar."));
    setAvatar( newAvatar );
    setToken(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("token"))));
}

int32_t SubaccountWithToken::getId() const
{
    return m_Id;
}


void SubaccountWithToken::setId(int32_t value)
{
    m_Id = value;
    
}
utility::string_t SubaccountWithToken::getUsername() const
{
    return m_Username;
}


void SubaccountWithToken::setUsername(utility::string_t value)
{
    m_Username = value;
    
}
utility::string_t SubaccountWithToken::getFirstName() const
{
    return m_FirstName;
}


void SubaccountWithToken::setFirstName(utility::string_t value)
{
    m_FirstName = value;
    
}
utility::string_t SubaccountWithToken::getLastName() const
{
    return m_LastName;
}


void SubaccountWithToken::setLastName(utility::string_t value)
{
    m_LastName = value;
    
}
utility::string_t SubaccountWithToken::getEmail() const
{
    return m_Email;
}


void SubaccountWithToken::setEmail(utility::string_t value)
{
    m_Email = value;
    
}
utility::string_t SubaccountWithToken::getStatus() const
{
    return m_Status;
}


void SubaccountWithToken::setStatus(utility::string_t value)
{
    m_Status = value;
    
}
double SubaccountWithToken::getBalance() const
{
    return m_Balance;
}


void SubaccountWithToken::setBalance(double value)
{
    m_Balance = value;
    
}
utility::string_t SubaccountWithToken::getPhone() const
{
    return m_Phone;
}


void SubaccountWithToken::setPhone(utility::string_t value)
{
    m_Phone = value;
    
}
utility::string_t SubaccountWithToken::getCompany() const
{
    return m_Company;
}


void SubaccountWithToken::setCompany(utility::string_t value)
{
    m_Company = value;
    
}
std::shared_ptr<Currency> SubaccountWithToken::getCurrency() const
{
    return m_Currency;
}


void SubaccountWithToken::setCurrency(std::shared_ptr<Currency> value)
{
    m_Currency = value;
    
}
std::shared_ptr<Country> SubaccountWithToken::getCountry() const
{
    return m_Country;
}


void SubaccountWithToken::setCountry(std::shared_ptr<Country> value)
{
    m_Country = value;
    
}
std::shared_ptr<Timezone> SubaccountWithToken::getTimezone() const
{
    return m_Timezone;
}


void SubaccountWithToken::setTimezone(std::shared_ptr<Timezone> value)
{
    m_Timezone = value;
    
}
utility::string_t SubaccountWithToken::getSubaccountType() const
{
    return m_SubaccountType;
}


void SubaccountWithToken::setSubaccountType(utility::string_t value)
{
    m_SubaccountType = value;
    
}
bool SubaccountWithToken::isEmailAccepted() const
{
    return m_EmailAccepted;
}


void SubaccountWithToken::setEmailAccepted(bool value)
{
    m_EmailAccepted = value;
    
}
bool SubaccountWithToken::isPhoneAccepted() const
{
    return m_PhoneAccepted;
}


void SubaccountWithToken::setPhoneAccepted(bool value)
{
    m_PhoneAccepted = value;
    
}
std::shared_ptr<UserImage> SubaccountWithToken::getAvatar() const
{
    return m_Avatar;
}


void SubaccountWithToken::setAvatar(std::shared_ptr<UserImage> value)
{
    m_Avatar = value;
    
}
utility::string_t SubaccountWithToken::getToken() const
{
    return m_Token;
}


void SubaccountWithToken::setToken(utility::string_t value)
{
    m_Token = value;
    
}
}
}
}
}

