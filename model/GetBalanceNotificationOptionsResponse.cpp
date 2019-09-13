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



#include "GetBalanceNotificationOptionsResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GetBalanceNotificationOptionsResponse::GetBalanceNotificationOptionsResponse()
{
    m_1 = utility::conversions::to_string_t("");
    m_2 = utility::conversions::to_string_t("");
    m_3 = utility::conversions::to_string_t("");
    m_5 = utility::conversions::to_string_t("");
    m_10 = utility::conversions::to_string_t("");
    m_20 = utility::conversions::to_string_t("");
    m_30 = utility::conversions::to_string_t("");
    m_50 = utility::conversions::to_string_t("");
    m_100 = utility::conversions::to_string_t("");
    m_500 = utility::conversions::to_string_t("");
    m_1000 = utility::conversions::to_string_t("");
}

GetBalanceNotificationOptionsResponse::~GetBalanceNotificationOptionsResponse()
{
}

void GetBalanceNotificationOptionsResponse::validate()
{
    // TODO: implement validation
}

web::json::value GetBalanceNotificationOptionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("1")] = ModelBase::toJson(m_1);
    val[utility::conversions::to_string_t("2")] = ModelBase::toJson(m_2);
    val[utility::conversions::to_string_t("3")] = ModelBase::toJson(m_3);
    val[utility::conversions::to_string_t("5")] = ModelBase::toJson(m_5);
    val[utility::conversions::to_string_t("10")] = ModelBase::toJson(m_10);
    val[utility::conversions::to_string_t("20")] = ModelBase::toJson(m_20);
    val[utility::conversions::to_string_t("30")] = ModelBase::toJson(m_30);
    val[utility::conversions::to_string_t("50")] = ModelBase::toJson(m_50);
    val[utility::conversions::to_string_t("100")] = ModelBase::toJson(m_100);
    val[utility::conversions::to_string_t("500")] = ModelBase::toJson(m_500);
    val[utility::conversions::to_string_t("1000")] = ModelBase::toJson(m_1000);

    return val;
}

void GetBalanceNotificationOptionsResponse::fromJson(web::json::value& val)
{
    set1(ModelBase::stringFromJson(val[utility::conversions::to_string_t("1")]));
    set2(ModelBase::stringFromJson(val[utility::conversions::to_string_t("2")]));
    set3(ModelBase::stringFromJson(val[utility::conversions::to_string_t("3")]));
    set5(ModelBase::stringFromJson(val[utility::conversions::to_string_t("5")]));
    set10(ModelBase::stringFromJson(val[utility::conversions::to_string_t("10")]));
    set20(ModelBase::stringFromJson(val[utility::conversions::to_string_t("20")]));
    set30(ModelBase::stringFromJson(val[utility::conversions::to_string_t("30")]));
    set50(ModelBase::stringFromJson(val[utility::conversions::to_string_t("50")]));
    set100(ModelBase::stringFromJson(val[utility::conversions::to_string_t("100")]));
    set500(ModelBase::stringFromJson(val[utility::conversions::to_string_t("500")]));
    set1000(ModelBase::stringFromJson(val[utility::conversions::to_string_t("1000")]));
}

void GetBalanceNotificationOptionsResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("1"), m_1));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("2"), m_2));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("3"), m_3));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("5"), m_5));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("10"), m_10));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("20"), m_20));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("30"), m_30));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("50"), m_50));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("100"), m_100));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("500"), m_500));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("1000"), m_1000));
}

void GetBalanceNotificationOptionsResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    set1(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("1"))));
    set2(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("2"))));
    set3(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("3"))));
    set5(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("5"))));
    set10(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("10"))));
    set20(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("20"))));
    set30(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("30"))));
    set50(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("50"))));
    set100(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("100"))));
    set500(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("500"))));
    set1000(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("1000"))));
}

utility::string_t GetBalanceNotificationOptionsResponse::get1() const
{
    return m_1;
}


void GetBalanceNotificationOptionsResponse::set1(utility::string_t value)
{
    m_1 = value;
    
}
utility::string_t GetBalanceNotificationOptionsResponse::get2() const
{
    return m_2;
}


void GetBalanceNotificationOptionsResponse::set2(utility::string_t value)
{
    m_2 = value;
    
}
utility::string_t GetBalanceNotificationOptionsResponse::get3() const
{
    return m_3;
}


void GetBalanceNotificationOptionsResponse::set3(utility::string_t value)
{
    m_3 = value;
    
}
utility::string_t GetBalanceNotificationOptionsResponse::get5() const
{
    return m_5;
}


void GetBalanceNotificationOptionsResponse::set5(utility::string_t value)
{
    m_5 = value;
    
}
utility::string_t GetBalanceNotificationOptionsResponse::get10() const
{
    return m_10;
}


void GetBalanceNotificationOptionsResponse::set10(utility::string_t value)
{
    m_10 = value;
    
}
utility::string_t GetBalanceNotificationOptionsResponse::get20() const
{
    return m_20;
}


void GetBalanceNotificationOptionsResponse::set20(utility::string_t value)
{
    m_20 = value;
    
}
utility::string_t GetBalanceNotificationOptionsResponse::get30() const
{
    return m_30;
}


void GetBalanceNotificationOptionsResponse::set30(utility::string_t value)
{
    m_30 = value;
    
}
utility::string_t GetBalanceNotificationOptionsResponse::get50() const
{
    return m_50;
}


void GetBalanceNotificationOptionsResponse::set50(utility::string_t value)
{
    m_50 = value;
    
}
utility::string_t GetBalanceNotificationOptionsResponse::get100() const
{
    return m_100;
}


void GetBalanceNotificationOptionsResponse::set100(utility::string_t value)
{
    m_100 = value;
    
}
utility::string_t GetBalanceNotificationOptionsResponse::get500() const
{
    return m_500;
}


void GetBalanceNotificationOptionsResponse::set500(utility::string_t value)
{
    m_500 = value;
    
}
utility::string_t GetBalanceNotificationOptionsResponse::get1000() const
{
    return m_1000;
}


void GetBalanceNotificationOptionsResponse::set1000(utility::string_t value)
{
    m_1000 = value;
    
}
}
}
}
}

