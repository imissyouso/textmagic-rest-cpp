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



#include "UsersInbound.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

UsersInbound::UsersInbound()
{
    m_Id = 0;
    m_PurchasedAt = utility::datetime();
    m_ExpireAt = utility::datetime();
    m_Status = utility::conversions::to_string_t("");
    m_Phone = utility::conversions::to_string_t("");
    m_PhoneIsSet = false;
}

UsersInbound::~UsersInbound()
{
}

void UsersInbound::validate()
{
    // TODO: implement validation
}

web::json::value UsersInbound::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("user")] = ModelBase::toJson(m_User);
    val[utility::conversions::to_string_t("purchasedAt")] = ModelBase::toJson(m_PurchasedAt);
    val[utility::conversions::to_string_t("expireAt")] = ModelBase::toJson(m_ExpireAt);
    val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    val[utility::conversions::to_string_t("country")] = ModelBase::toJson(m_Country);
    if(m_PhoneIsSet)
    {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(m_Phone);
    }

    return val;
}

void UsersInbound::fromJson(web::json::value& val)
{
    setId(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("id")]));
    std::shared_ptr<User> newUser(new User());
    newUser->fromJson(val[utility::conversions::to_string_t("user")]);
    setUser( newUser );
    setPurchasedAt
    (ModelBase::dateFromJson(val[utility::conversions::to_string_t("purchasedAt")]));
    setExpireAt
    (ModelBase::dateFromJson(val[utility::conversions::to_string_t("expireAt")]));
    setStatus(ModelBase::stringFromJson(val[utility::conversions::to_string_t("status")]));
    std::shared_ptr<Country> newCountry(new Country());
    newCountry->fromJson(val[utility::conversions::to_string_t("country")]);
    setCountry( newCountry );
    if(val.has_field(utility::conversions::to_string_t("phone")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("phone")];
        if(!fieldValue.is_null())
        {
            setPhone(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void UsersInbound::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    m_User->toMultipart(multipart, utility::conversions::to_string_t("user."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("purchasedAt"), m_PurchasedAt));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("expireAt"), m_ExpireAt));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    m_Country->toMultipart(multipart, utility::conversions::to_string_t("country."));
    if(m_PhoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phone"), m_Phone));
        
    }
}

void UsersInbound::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    std::shared_ptr<User> newUser(new User());
    newUser->fromMultiPart(multipart, utility::conversions::to_string_t("user."));
    setUser( newUser );
    setPurchasedAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("purchasedAt"))));
    setExpireAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("expireAt"))));
    setStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("status"))));
    std::shared_ptr<Country> newCountry(new Country());
    newCountry->fromMultiPart(multipart, utility::conversions::to_string_t("country."));
    setCountry( newCountry );
    if(multipart->hasContent(utility::conversions::to_string_t("phone")))
    {
        setPhone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phone"))));
    }
}

int32_t UsersInbound::getId() const
{
    return m_Id;
}


void UsersInbound::setId(int32_t value)
{
    m_Id = value;
    
}
std::shared_ptr<User> UsersInbound::getUser() const
{
    return m_User;
}


void UsersInbound::setUser(std::shared_ptr<User> value)
{
    m_User = value;
    
}
utility::datetime UsersInbound::getPurchasedAt() const
{
    return m_PurchasedAt;
}


void UsersInbound::setPurchasedAt(utility::datetime value)
{
    m_PurchasedAt = value;
    
}
utility::datetime UsersInbound::getExpireAt() const
{
    return m_ExpireAt;
}


void UsersInbound::setExpireAt(utility::datetime value)
{
    m_ExpireAt = value;
    
}
utility::string_t UsersInbound::getStatus() const
{
    return m_Status;
}


void UsersInbound::setStatus(utility::string_t value)
{
    m_Status = value;
    
}
std::shared_ptr<Country> UsersInbound::getCountry() const
{
    return m_Country;
}


void UsersInbound::setCountry(std::shared_ptr<Country> value)
{
    m_Country = value;
    
}
utility::string_t UsersInbound::getPhone() const
{
    return m_Phone;
}


void UsersInbound::setPhone(utility::string_t value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}
bool UsersInbound::phoneIsSet() const
{
    return m_PhoneIsSet;
}

void UsersInbound::unsetPhone()
{
    m_PhoneIsSet = false;
}

}
}
}
}

