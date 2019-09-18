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



#include "Contact.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

Contact::Contact()
{
    m_Id = 0;
    m_Favorited = false;
    m_Blocked = false;
    m_FirstName = utility::conversions::to_string_t("");
    m_LastName = utility::conversions::to_string_t("");
    m_CompanyName = utility::conversions::to_string_t("");
    m_Phone = utility::conversions::to_string_t("");
    m_Email = utility::conversions::to_string_t("");
    m_PhoneType = utility::conversions::to_string_t("");
}

Contact::~Contact()
{
}

void Contact::validate()
{
    // TODO: implement validation
}

web::json::value Contact::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("favorited")] = ModelBase::toJson(m_Favorited);
    val[utility::conversions::to_string_t("blocked")] = ModelBase::toJson(m_Blocked);
    val[utility::conversions::to_string_t("firstName")] = ModelBase::toJson(m_FirstName);
    val[utility::conversions::to_string_t("lastName")] = ModelBase::toJson(m_LastName);
    val[utility::conversions::to_string_t("companyName")] = ModelBase::toJson(m_CompanyName);
    val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(m_Phone);
    val[utility::conversions::to_string_t("email")] = ModelBase::toJson(m_Email);
    val[utility::conversions::to_string_t("country")] = ModelBase::toJson(m_Country);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_CustomFields )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("customFields")] = web::json::value::array(jsonArray);
    }
    val[utility::conversions::to_string_t("user")] = ModelBase::toJson(m_User);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Lists )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("lists")] = web::json::value::array(jsonArray);
    }
    val[utility::conversions::to_string_t("phoneType")] = ModelBase::toJson(m_PhoneType);
    val[utility::conversions::to_string_t("avatar")] = ModelBase::toJson(m_Avatar);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Notes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("notes")] = web::json::value::array(jsonArray);
    }

    return val;
}

void Contact::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("companyName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("companyName")];
        if(!fieldValue.is_null())
        {
            setCompanyName(ModelBase::stringFromJson(fieldValue));
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
    {
        m_CustomFields.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("customFields")))
        {
        for( auto& item : val[utility::conversions::to_string_t("customFields")].as_array() )
        {
            if(item.is_null())
            {
                m_CustomFields.push_back( std::shared_ptr<ContactCustomField>(nullptr) );
            }
            else
            {
                std::shared_ptr<ContactCustomField> newItem(new ContactCustomField());
                newItem->fromJson(item);
                m_CustomFields.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("user")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<User> newItem(new User());
            newItem->fromJson(fieldValue);
            setUser( newItem );
        }
    }
    {
        m_Lists.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("lists")))
        {
        for( auto& item : val[utility::conversions::to_string_t("lists")].as_array() )
        {
            if(item.is_null())
            {
                m_Lists.push_back( std::shared_ptr<Group>(nullptr) );
            }
            else
            {
                std::shared_ptr<Group> newItem(new Group());
                newItem->fromJson(item);
                m_Lists.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phoneType")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("phoneType")];
        if(!fieldValue.is_null())
        {
            setPhoneType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avatar")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("avatar")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ContactImage> newItem(new ContactImage());
            newItem->fromJson(fieldValue);
            setAvatar( newItem );
        }
    }
    {
        m_Notes.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("notes")))
        {
        for( auto& item : val[utility::conversions::to_string_t("notes")].as_array() )
        {
            if(item.is_null())
            {
                m_Notes.push_back( std::shared_ptr<ContactNote>(nullptr) );
            }
            else
            {
                std::shared_ptr<ContactNote> newItem(new ContactNote());
                newItem->fromJson(item);
                m_Notes.push_back( newItem );
            }
        }
        }
    }
}

void Contact::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("favorited"), m_Favorited));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("blocked"), m_Blocked));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstName"), m_FirstName));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastName"), m_LastName));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("companyName"), m_CompanyName));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phone"), m_Phone));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("email"), m_Email));
    m_Country->toMultipart(multipart, utility::conversions::to_string_t("country."));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_CustomFields )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("customFields"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    m_User->toMultipart(multipart, utility::conversions::to_string_t("user."));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Lists )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lists"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phoneType"), m_PhoneType));
    m_Avatar->toMultipart(multipart, utility::conversions::to_string_t("avatar."));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Notes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("notes"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void Contact::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setFavorited(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("favorited"))));
    setBlocked(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("blocked"))));
    setFirstName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstName"))));
    setLastName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastName"))));
    setCompanyName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("companyName"))));
    setPhone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phone"))));
    setEmail(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("email"))));
    std::shared_ptr<Country> newCountry(new Country());
    newCountry->fromMultiPart(multipart, utility::conversions::to_string_t("country."));
    setCountry( newCountry );
    {
        m_CustomFields.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("customFields"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_CustomFields.push_back( std::shared_ptr<ContactCustomField>(nullptr) );
            }
            else
            {
                std::shared_ptr<ContactCustomField> newItem(new ContactCustomField());
                newItem->fromJson(item);
                m_CustomFields.push_back( newItem );
            }
        }
    }
    std::shared_ptr<User> newUser(new User());
    newUser->fromMultiPart(multipart, utility::conversions::to_string_t("user."));
    setUser( newUser );
    {
        m_Lists.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lists"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Lists.push_back( std::shared_ptr<Group>(nullptr) );
            }
            else
            {
                std::shared_ptr<Group> newItem(new Group());
                newItem->fromJson(item);
                m_Lists.push_back( newItem );
            }
        }
    }
    setPhoneType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phoneType"))));
    std::shared_ptr<ContactImage> newAvatar(new ContactImage());
    newAvatar->fromMultiPart(multipart, utility::conversions::to_string_t("avatar."));
    setAvatar( newAvatar );
    {
        m_Notes.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("notes"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Notes.push_back( std::shared_ptr<ContactNote>(nullptr) );
            }
            else
            {
                std::shared_ptr<ContactNote> newItem(new ContactNote());
                newItem->fromJson(item);
                m_Notes.push_back( newItem );
            }
        }
    }
}

int32_t Contact::getId() const
{
    return m_Id;
}


void Contact::setId(int32_t value)
{
    m_Id = value;
    
}
bool Contact::isFavorited() const
{
    return m_Favorited;
}


void Contact::setFavorited(bool value)
{
    m_Favorited = value;
    
}
bool Contact::isBlocked() const
{
    return m_Blocked;
}


void Contact::setBlocked(bool value)
{
    m_Blocked = value;
    
}
utility::string_t Contact::getFirstName() const
{
    return m_FirstName;
}


void Contact::setFirstName(utility::string_t value)
{
    m_FirstName = value;
    
}
utility::string_t Contact::getLastName() const
{
    return m_LastName;
}


void Contact::setLastName(utility::string_t value)
{
    m_LastName = value;
    
}
utility::string_t Contact::getCompanyName() const
{
    return m_CompanyName;
}


void Contact::setCompanyName(utility::string_t value)
{
    m_CompanyName = value;
    
}
utility::string_t Contact::getPhone() const
{
    return m_Phone;
}


void Contact::setPhone(utility::string_t value)
{
    m_Phone = value;
    
}
utility::string_t Contact::getEmail() const
{
    return m_Email;
}


void Contact::setEmail(utility::string_t value)
{
    m_Email = value;
    
}
std::shared_ptr<Country> Contact::getCountry() const
{
    return m_Country;
}


void Contact::setCountry(std::shared_ptr<Country> value)
{
    m_Country = value;
    
}
std::vector<std::shared_ptr<ContactCustomField>>& Contact::getCustomFields()
{
    return m_CustomFields;
}

void Contact::setCustomFields(std::vector<std::shared_ptr<ContactCustomField>> value)
{
    m_CustomFields = value;
    
}
std::shared_ptr<User> Contact::getUser() const
{
    return m_User;
}


void Contact::setUser(std::shared_ptr<User> value)
{
    m_User = value;
    
}
std::vector<std::shared_ptr<Group>>& Contact::getLists()
{
    return m_Lists;
}

void Contact::setLists(std::vector<std::shared_ptr<Group>> value)
{
    m_Lists = value;
    
}
utility::string_t Contact::getPhoneType() const
{
    return m_PhoneType;
}


void Contact::setPhoneType(utility::string_t value)
{
    m_PhoneType = value;
    
}
std::shared_ptr<ContactImage> Contact::getAvatar() const
{
    return m_Avatar;
}


void Contact::setAvatar(std::shared_ptr<ContactImage> value)
{
    m_Avatar = value;
    
}
std::vector<std::shared_ptr<ContactNote>>& Contact::getNotes()
{
    return m_Notes;
}

void Contact::setNotes(std::vector<std::shared_ptr<ContactNote>> value)
{
    m_Notes = value;
    
}
}
}
}
}

