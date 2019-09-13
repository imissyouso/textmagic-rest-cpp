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

/*
 * SubaccountWithToken.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_SubaccountWithToken_H_
#define IO_SWAGGER_CLIENT_MODEL_SubaccountWithToken_H_


#include "../ModelBase.h"

#include "Country.h"
#include "Timezone.h"
#include <cpprest/details/basic_types.h>
#include "UserImage.h"
#include "Currency.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SubaccountWithToken
    : public ModelBase
{
public:
    SubaccountWithToken();
    virtual ~SubaccountWithToken();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SubaccountWithToken members

    /// <summary>
    /// 
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUsername() const;
        void setUsername(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFirstName() const;
        void setFirstName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLastName() const;
        void setLastName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEmail() const;
        void setEmail(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
        void setStatus(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getBalance() const;
        void setBalance(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPhone() const;
        void setPhone(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCompany() const;
        void setCompany(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Currency> getCurrency() const;
        void setCurrency(std::shared_ptr<Currency> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Country> getCountry() const;
        void setCountry(std::shared_ptr<Country> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Timezone> getTimezone() const;
        void setTimezone(std::shared_ptr<Timezone> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSubaccountType() const;
        void setSubaccountType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    bool isEmailAccepted() const;
        void setEmailAccepted(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool isPhoneAccepted() const;
        void setPhoneAccepted(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UserImage> getAvatar() const;
        void setAvatar(std::shared_ptr<UserImage> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getToken() const;
        void setToken(utility::string_t value);

protected:
    int32_t m_Id;
        utility::string_t m_Username;
        utility::string_t m_FirstName;
        utility::string_t m_LastName;
        utility::string_t m_Email;
        utility::string_t m_Status;
        double m_Balance;
        utility::string_t m_Phone;
        utility::string_t m_Company;
        std::shared_ptr<Currency> m_Currency;
        std::shared_ptr<Country> m_Country;
        std::shared_ptr<Timezone> m_Timezone;
        utility::string_t m_SubaccountType;
        bool m_EmailAccepted;
        bool m_PhoneAccepted;
        std::shared_ptr<UserImage> m_Avatar;
        utility::string_t m_Token;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_SubaccountWithToken_H_ */
