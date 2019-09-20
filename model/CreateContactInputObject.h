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

/*
 * CreateContactInputObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_CreateContactInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_CreateContactInputObject_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CreateContactInputObject
    : public ModelBase
{
public:
    CreateContactInputObject();
    virtual ~CreateContactInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateContactInputObject members

    /// <summary>
    /// Contact first name
    /// </summary>
    utility::string_t getFirstName() const;
    bool firstNameIsSet() const;
    void unsetFirstName();
    void setFirstName(utility::string_t value);
    /// <summary>
    /// Contact last name
    /// </summary>
    utility::string_t getLastName() const;
    bool lastNameIsSet() const;
    void unsetLastName();
    void setLastName(utility::string_t value);
    /// <summary>
    /// Contact phone number in E.164 (international) format without leading + or zeroes
    /// </summary>
    utility::string_t getPhone() const;
        void setPhone(utility::string_t value);
    /// <summary>
    /// Contact email
    /// </summary>
    utility::string_t getEmail() const;
    bool emailIsSet() const;
    void unsetEmail();
    void setEmail(utility::string_t value);
    /// <summary>
    /// Contact company name
    /// </summary>
    utility::string_t getCompanyName() const;
    bool companyNameIsSet() const;
    void unsetCompanyName();
    void setCompanyName(utility::string_t value);
    /// <summary>
    /// Array of list resources id contact will be assigned to
    /// </summary>
    utility::string_t getLists() const;
        void setLists(utility::string_t value);
    /// <summary>
    /// Is contact favorited
    /// </summary>
    bool isFavorited() const;
    bool favoritedIsSet() const;
    void unsetFavorited();
    void setFavorited(bool value);
    /// <summary>
    /// Is contact blocked for outgoing and incoming messaging
    /// </summary>
    bool isBlocked() const;
    bool blockedIsSet() const;
    void unsetBlocked();
    void setBlocked(bool value);
    /// <summary>
    /// Force type of phone. Possible values: 0 - landline, 1 - mobile. Default is -1 (auto detection)
    /// </summary>
    int32_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getCustomFieldValues() const;
    bool customFieldValuesIsSet() const;
    void unsetCustomFieldValues();
    void setCustomFieldValues(std::shared_ptr<Object> value);
    /// <summary>
    /// Treat phone number passed in request body as local
    /// </summary>
    int32_t getLocal() const;
    bool localIsSet() const;
    void unsetLocal();
    void setLocal(int32_t value);
    /// <summary>
    /// 2-letter ISO country code for local phone numbers, used when local is  set to true. Default is account country
    /// </summary>
    utility::string_t getCountry() const;
    bool countryIsSet() const;
    void unsetCountry();
    void setCountry(utility::string_t value);

protected:
    utility::string_t m_FirstName;
    bool m_FirstNameIsSet;
    utility::string_t m_LastName;
    bool m_LastNameIsSet;
    utility::string_t m_Phone;
        utility::string_t m_Email;
    bool m_EmailIsSet;
    utility::string_t m_CompanyName;
    bool m_CompanyNameIsSet;
    utility::string_t m_Lists;
        bool m_Favorited;
    bool m_FavoritedIsSet;
    bool m_Blocked;
    bool m_BlockedIsSet;
    int32_t m_Type;
    bool m_TypeIsSet;
    std::shared_ptr<Object> m_CustomFieldValues;
    bool m_CustomFieldValuesIsSet;
    int32_t m_Local;
    bool m_LocalIsSet;
    utility::string_t m_Country;
    bool m_CountryIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_CreateContactInputObject_H_ */
