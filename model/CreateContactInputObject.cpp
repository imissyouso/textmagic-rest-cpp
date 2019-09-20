/**
 * TextMagic API Documentation
 * # Overview ## Introduction 1 <img style=\"float: right; margin-left: 10px; width: 100px;\" src=\"images/phone.png\"> TextMagic SMS API is a platform for building your own messaging app using our messaging infrastructure. It allows you to send and receive SMS text messages, query information about inbound and outbound messages, manage contacts, create templates (i.e. message formats and static texts) and schedule recurrent SMS messages as well as process bulk SMS messages. <button name=\"button\" onclick=\"http://www.google.com\" class=\"btn\">Try TextMagic API for Free</button>  ### Two Ways to Use TextMagic API * [REST API](https://www.textmagic.com/docs/api/start/) – get full access to TextMagic’s messaging gateway features * [Email to SMS API](https://www.textmagic.com/docs/api/send-email-to-sms/) – set up two-way SMS communication without the need to write any additional code  ### Code Libraries We have created a set of client libraries for the most popular programming languages (such as REST API Java and REST API PHP). These libraries allow you to integrate our API into your code in minutes. Just choose your preferred language to get started:  ## Getting started Get Started with the TextMagic REST API To start sending text messages using the TextMagic REST API, just follow these steps: 1. Generate the API credentials 1. Connect to our API endpoint This page provides all the information you need to get started. Here, we explain the following steps:  How to obtain the API credentials The API endpoint How the REST API works The next step How to obtain the API credentials  ### How to obtain the API credentials To start sending text messages, you need to create an API key. API keys are similar to an account password; the difference is that an API key only provides access to the API: you cannot log in to TextMagic Online using the API key.  Your program sends the login credentials with each API request as HTTP headers: `X-TM-Username` is your TextMagic username, while `X-TM-Key` is your API key.  How to obtain an API key:  1. Log in to TextMagic (or start a free trial if you haven’t registered yet). 1. Go to the API settings page. 1. Click the Add new API key button. 1. Enter an app name for this key. Note, it’s just a label, so pick any name. 1. Click Generate new key. 1. You should now see your new API key in the green notification banner above the table:  ![alt text](images/credentials.png)  > Note for API v1 users > V1 keys are not compatible with the V2 version of the TextMagic REST API, so you will need to generate a new API key to use the V2 endpoint.  ### The API endpoint The TextMagic REST API endpoint is: ``` https://rest.textmagic.com/api/v2 ``` All the URLs referenced in this documentation should use this base URL.  ### How the REST API works REST APIs use the HTTP protocol to send and receive messages. REST messages are usually encoded as JSON documents and are an improvement over older methods such as the XML based SOAP protocol. REST APIs use the same set of methods that web browsers use: POST, GET, PUT or DELETE. These correspond to the CRUD operations: create, read, update and delete. Often, REST URIs provide direct CRUD access to entities or collections of entities, for example: http://api.foo.com/people. In this instance, to delete a person’s endpoint, you might simply call the endpoint DELETE http://api.foo.com/people/{id}. REST makes these types of operations simple.  > Example > > Let’s take the entity most often used in messaging: contacts. Imagine you want to perform operations on your contacts list: well, it’s only a matter of calling the following endpoints: > * GET /api/v2/contacts (get all of your contacts) > * GET /api/v2/contacts/{id} (get a specific contact) > * POST /api/v2/contacts (create a new contact) > * PUT /api/v2/contacts/{id} (update an existing contact) > * DELETE /api/v2/contacts/{id} (delete an existing contact) It’s that simple! In fact, that’s all you need to do to manage the contacts in your TextMagic account!  ## Sandbox Sandbox is a tool to test TextMagic REST API requests without the need to install any applications or write any code. Here, we explain the following details about Sandbox: * The credentials area * Command documentation * How it works  <a href=\"\">Go to TextMagic Sandbox</a>  ### The credentials area To make requests using your TextMagic account, you need to enter your account username and your API key into the corresponding fields. You may also Save them in your browser or press Clear to erase them.  ![alt text](images/sandbox.png) 
 *
 * OpenAPI spec version: 2
 * Contact: support@textmagi.biz
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "CreateContactInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

CreateContactInputObject::CreateContactInputObject()
{
    m_FirstName = utility::conversions::to_string_t("");
    m_FirstNameIsSet = false;
    m_LastName = utility::conversions::to_string_t("");
    m_LastNameIsSet = false;
    m_Phone = utility::conversions::to_string_t("");
    m_Email = utility::conversions::to_string_t("");
    m_EmailIsSet = false;
    m_CompanyName = utility::conversions::to_string_t("");
    m_CompanyNameIsSet = false;
    m_Lists = utility::conversions::to_string_t("");
    m_Favorited = false;
    m_FavoritedIsSet = false;
    m_Blocked = false;
    m_BlockedIsSet = false;
    m_Type = 0;
    m_TypeIsSet = false;
    m_CustomFieldValuesIsSet = false;
    m_Local = 0;
    m_LocalIsSet = false;
    m_Country = utility::conversions::to_string_t("");
    m_CountryIsSet = false;
}

CreateContactInputObject::~CreateContactInputObject()
{
}

void CreateContactInputObject::validate()
{
    // TODO: implement validation
}

web::json::value CreateContactInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_FirstNameIsSet)
    {
        val[utility::conversions::to_string_t("firstName")] = ModelBase::toJson(m_FirstName);
    }
    if(m_LastNameIsSet)
    {
        val[utility::conversions::to_string_t("lastName")] = ModelBase::toJson(m_LastName);
    }
    val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(m_Phone);
    if(m_EmailIsSet)
    {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(m_Email);
    }
    if(m_CompanyNameIsSet)
    {
        val[utility::conversions::to_string_t("companyName")] = ModelBase::toJson(m_CompanyName);
    }
    val[utility::conversions::to_string_t("lists")] = ModelBase::toJson(m_Lists);
    if(m_FavoritedIsSet)
    {
        val[utility::conversions::to_string_t("favorited")] = ModelBase::toJson(m_Favorited);
    }
    if(m_BlockedIsSet)
    {
        val[utility::conversions::to_string_t("blocked")] = ModelBase::toJson(m_Blocked);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_CustomFieldValuesIsSet)
    {
        val[utility::conversions::to_string_t("customFieldValues")] = ModelBase::toJson(m_CustomFieldValues);
    }
    if(m_LocalIsSet)
    {
        val[utility::conversions::to_string_t("local")] = ModelBase::toJson(m_Local);
    }
    if(m_CountryIsSet)
    {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(m_Country);
    }

    return val;
}

void CreateContactInputObject::fromJson(web::json::value& val)
{
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
    if(val.has_field(utility::conversions::to_string_t("phone")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("phone")];
        if(!fieldValue.is_null())
        {
            setPhone(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("companyName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("companyName")];
        if(!fieldValue.is_null())
        {
            setCompanyName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lists")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("lists")];
        if(!fieldValue.is_null())
        {
            setLists(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("favorited")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("favorited")];
        if(!fieldValue.is_null())
        {
            setFavorited(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blocked")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("blocked")];
        if(!fieldValue.is_null())
        {
            setBlocked(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("type")];
        if(!fieldValue.is_null())
        {
            setType(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("customFieldValues")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("customFieldValues")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(fieldValue);
            setCustomFieldValues( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("local")];
        if(!fieldValue.is_null())
        {
            setLocal(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("country")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("country")];
        if(!fieldValue.is_null())
        {
            setCountry(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void CreateContactInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_FirstNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstName"), m_FirstName));
        
    }
    if(m_LastNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastName"), m_LastName));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phone"), m_Phone));
    if(m_EmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("email"), m_Email));
        
    }
    if(m_CompanyNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("companyName"), m_CompanyName));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lists"), m_Lists));
    if(m_FavoritedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("favorited"), m_Favorited));
    }
    if(m_BlockedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("blocked"), m_Blocked));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
    if(m_CustomFieldValuesIsSet)
    {
        if (m_CustomFieldValues.get())
        {
            m_CustomFieldValues->toMultipart(multipart, utility::conversions::to_string_t("customFieldValues."));
        }
        
    }
    if(m_LocalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("local"), m_Local));
    }
    if(m_CountryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("country"), m_Country));
        
    }
}

void CreateContactInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("firstName")))
    {
        setFirstName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lastName")))
    {
        setLastName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastName"))));
    }
    setPhone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phone"))));
    if(multipart->hasContent(utility::conversions::to_string_t("email")))
    {
        setEmail(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("email"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("companyName")))
    {
        setCompanyName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("companyName"))));
    }
    setLists(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lists"))));
    if(multipart->hasContent(utility::conversions::to_string_t("favorited")))
    {
        setFavorited(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("favorited"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("blocked")))
    {
        setBlocked(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("blocked"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        setType(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("customFieldValues")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("customFieldValues")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("customFieldValues."));
            setCustomFieldValues( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("local")))
    {
        setLocal(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("local"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("country")))
    {
        setCountry(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("country"))));
    }
}

utility::string_t CreateContactInputObject::getFirstName() const
{
    return m_FirstName;
}


void CreateContactInputObject::setFirstName(utility::string_t value)
{
    m_FirstName = value;
    m_FirstNameIsSet = true;
}
bool CreateContactInputObject::firstNameIsSet() const
{
    return m_FirstNameIsSet;
}

void CreateContactInputObject::unsetFirstName()
{
    m_FirstNameIsSet = false;
}

utility::string_t CreateContactInputObject::getLastName() const
{
    return m_LastName;
}


void CreateContactInputObject::setLastName(utility::string_t value)
{
    m_LastName = value;
    m_LastNameIsSet = true;
}
bool CreateContactInputObject::lastNameIsSet() const
{
    return m_LastNameIsSet;
}

void CreateContactInputObject::unsetLastName()
{
    m_LastNameIsSet = false;
}

utility::string_t CreateContactInputObject::getPhone() const
{
    return m_Phone;
}


void CreateContactInputObject::setPhone(utility::string_t value)
{
    m_Phone = value;
    
}
utility::string_t CreateContactInputObject::getEmail() const
{
    return m_Email;
}


void CreateContactInputObject::setEmail(utility::string_t value)
{
    m_Email = value;
    m_EmailIsSet = true;
}
bool CreateContactInputObject::emailIsSet() const
{
    return m_EmailIsSet;
}

void CreateContactInputObject::unsetEmail()
{
    m_EmailIsSet = false;
}

utility::string_t CreateContactInputObject::getCompanyName() const
{
    return m_CompanyName;
}


void CreateContactInputObject::setCompanyName(utility::string_t value)
{
    m_CompanyName = value;
    m_CompanyNameIsSet = true;
}
bool CreateContactInputObject::companyNameIsSet() const
{
    return m_CompanyNameIsSet;
}

void CreateContactInputObject::unsetCompanyName()
{
    m_CompanyNameIsSet = false;
}

utility::string_t CreateContactInputObject::getLists() const
{
    return m_Lists;
}


void CreateContactInputObject::setLists(utility::string_t value)
{
    m_Lists = value;
    
}
bool CreateContactInputObject::isFavorited() const
{
    return m_Favorited;
}


void CreateContactInputObject::setFavorited(bool value)
{
    m_Favorited = value;
    m_FavoritedIsSet = true;
}
bool CreateContactInputObject::favoritedIsSet() const
{
    return m_FavoritedIsSet;
}

void CreateContactInputObject::unsetFavorited()
{
    m_FavoritedIsSet = false;
}

bool CreateContactInputObject::isBlocked() const
{
    return m_Blocked;
}


void CreateContactInputObject::setBlocked(bool value)
{
    m_Blocked = value;
    m_BlockedIsSet = true;
}
bool CreateContactInputObject::blockedIsSet() const
{
    return m_BlockedIsSet;
}

void CreateContactInputObject::unsetBlocked()
{
    m_BlockedIsSet = false;
}

int32_t CreateContactInputObject::getType() const
{
    return m_Type;
}


void CreateContactInputObject::setType(int32_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool CreateContactInputObject::typeIsSet() const
{
    return m_TypeIsSet;
}

void CreateContactInputObject::unsetType()
{
    m_TypeIsSet = false;
}

std::shared_ptr<Object> CreateContactInputObject::getCustomFieldValues() const
{
    return m_CustomFieldValues;
}


void CreateContactInputObject::setCustomFieldValues(std::shared_ptr<Object> value)
{
    m_CustomFieldValues = value;
    m_CustomFieldValuesIsSet = true;
}
bool CreateContactInputObject::customFieldValuesIsSet() const
{
    return m_CustomFieldValuesIsSet;
}

void CreateContactInputObject::unsetCustomFieldValues()
{
    m_CustomFieldValuesIsSet = false;
}

int32_t CreateContactInputObject::getLocal() const
{
    return m_Local;
}


void CreateContactInputObject::setLocal(int32_t value)
{
    m_Local = value;
    m_LocalIsSet = true;
}
bool CreateContactInputObject::localIsSet() const
{
    return m_LocalIsSet;
}

void CreateContactInputObject::unsetLocal()
{
    m_LocalIsSet = false;
}

utility::string_t CreateContactInputObject::getCountry() const
{
    return m_Country;
}


void CreateContactInputObject::setCountry(utility::string_t value)
{
    m_Country = value;
    m_CountryIsSet = true;
}
bool CreateContactInputObject::countryIsSet() const
{
    return m_CountryIsSet;
}

void CreateContactInputObject::unsetCountry()
{
    m_CountryIsSet = false;
}

}
}
}
}

