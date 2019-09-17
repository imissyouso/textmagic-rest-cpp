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



#include "MessageOut.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

MessageOut::MessageOut()
{
    m_Id = 0;
    m_ContactId = 0;
    m_SessionId = 0;
    m_Receiver = utility::conversions::to_string_t("");
    m_ReceiverIsSet = false;
    m_MessageTime = utility::datetime();
    m_Status = utility::conversions::to_string_t("");
    m_Avatar = utility::conversions::to_string_t("");
    m_Text = utility::conversions::to_string_t("");
    m_Deleted = false;
    m_DeletedIsSet = false;
    m_Charset = utility::conversions::to_string_t("");
    m_CharsetLabel = utility::conversions::to_string_t("");
    m_FirstName = utility::conversions::to_string_t("");
    m_LastName = utility::conversions::to_string_t("");
    m_Country = utility::conversions::to_string_t("");
    m_Sender = utility::conversions::to_string_t("");
    m_SenderIsSet = false;
    m_Phone = utility::conversions::to_string_t("");
    m_PhoneIsSet = false;
    m_Price = 0.0f;
    m_PriceIsSet = false;
    m_PartsCount = 0;
    m_FromEmail = utility::conversions::to_string_t("");
    m_FromEmailIsSet = false;
    m_FromNumber = utility::conversions::to_string_t("");
    m_FromNumberIsSet = false;
    m_SmscId = utility::conversions::to_string_t("");
    m_SmscIdIsSet = false;
    m_Contact = utility::conversions::to_string_t("");
    m_ContactIsSet = false;
    m_Source = utility::conversions::to_string_t("");
    m_SourceIsSet = false;
    m_DeliveredCount = 0;
    m_DeliveredCountIsSet = false;
    m_NumbersCount = 0;
    m_NumbersCountIsSet = false;
    m_UserId = 0;
    m_UserIdIsSet = false;
    m_CreditsPrice = utility::conversions::to_string_t("");
    m_CreditsPriceIsSet = false;
    m_Chars = 0;
    m_CharsIsSet = false;
}

MessageOut::~MessageOut()
{
}

void MessageOut::validate()
{
    // TODO: implement validation
}

web::json::value MessageOut::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("contactId")] = ModelBase::toJson(m_ContactId);
    val[utility::conversions::to_string_t("sessionId")] = ModelBase::toJson(m_SessionId);
    if(m_ReceiverIsSet)
    {
        val[utility::conversions::to_string_t("receiver")] = ModelBase::toJson(m_Receiver);
    }
    val[utility::conversions::to_string_t("messageTime")] = ModelBase::toJson(m_MessageTime);
    val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    val[utility::conversions::to_string_t("avatar")] = ModelBase::toJson(m_Avatar);
    val[utility::conversions::to_string_t("text")] = ModelBase::toJson(m_Text);
    if(m_DeletedIsSet)
    {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(m_Deleted);
    }
    val[utility::conversions::to_string_t("charset")] = ModelBase::toJson(m_Charset);
    val[utility::conversions::to_string_t("charsetLabel")] = ModelBase::toJson(m_CharsetLabel);
    val[utility::conversions::to_string_t("firstName")] = ModelBase::toJson(m_FirstName);
    val[utility::conversions::to_string_t("lastName")] = ModelBase::toJson(m_LastName);
    val[utility::conversions::to_string_t("country")] = ModelBase::toJson(m_Country);
    if(m_SenderIsSet)
    {
        val[utility::conversions::to_string_t("sender")] = ModelBase::toJson(m_Sender);
    }
    if(m_PhoneIsSet)
    {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(m_Phone);
    }
    if(m_PriceIsSet)
    {
        val[utility::conversions::to_string_t("price")] = ModelBase::toJson(m_Price);
    }
    val[utility::conversions::to_string_t("partsCount")] = ModelBase::toJson(m_PartsCount);
    if(m_FromEmailIsSet)
    {
        val[utility::conversions::to_string_t("fromEmail")] = ModelBase::toJson(m_FromEmail);
    }
    if(m_FromNumberIsSet)
    {
        val[utility::conversions::to_string_t("fromNumber")] = ModelBase::toJson(m_FromNumber);
    }
    if(m_SmscIdIsSet)
    {
        val[utility::conversions::to_string_t("smscId")] = ModelBase::toJson(m_SmscId);
    }
    if(m_ContactIsSet)
    {
        val[utility::conversions::to_string_t("contact")] = ModelBase::toJson(m_Contact);
    }
    if(m_SourceIsSet)
    {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(m_Source);
    }
    if(m_DeliveredCountIsSet)
    {
        val[utility::conversions::to_string_t("deliveredCount")] = ModelBase::toJson(m_DeliveredCount);
    }
    if(m_NumbersCountIsSet)
    {
        val[utility::conversions::to_string_t("numbersCount")] = ModelBase::toJson(m_NumbersCount);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }
    if(m_CreditsPriceIsSet)
    {
        val[utility::conversions::to_string_t("creditsPrice")] = ModelBase::toJson(m_CreditsPrice);
    }
    if(m_CharsIsSet)
    {
        val[utility::conversions::to_string_t("chars")] = ModelBase::toJson(m_Chars);
    }

    return val;
}

void MessageOut::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contactId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("contactId")];
        if(!fieldValue.is_null())
        {
            setContactId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sessionId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("sessionId")];
        if(!fieldValue.is_null())
        {
            setSessionId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("receiver")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("receiver")];
        if(!fieldValue.is_null())
        {
            setReceiver(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("messageTime")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("messageTime")];
        if(!fieldValue.is_null())
        {
            setMessageTime(ModelBase::dateFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("avatar")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("avatar")];
        if(!fieldValue.is_null())
        {
            setAvatar(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("text")];
        if(!fieldValue.is_null())
        {
            setText(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("deleted")];
        if(!fieldValue.is_null())
        {
            setDeleted(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charset")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("charset")];
        if(!fieldValue.is_null())
        {
            setCharset(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charsetLabel")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("charsetLabel")];
        if(!fieldValue.is_null())
        {
            setCharsetLabel(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("country")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("country")];
        if(!fieldValue.is_null())
        {
            setCountry(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sender")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("sender")];
        if(!fieldValue.is_null())
        {
            setSender(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("price")];
        if(!fieldValue.is_null())
        {
            setPrice(ModelBase::floatFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partsCount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("partsCount")];
        if(!fieldValue.is_null())
        {
            setPartsCount(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fromEmail")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("fromEmail")];
        if(!fieldValue.is_null())
        {
            setFromEmail(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fromNumber")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("fromNumber")];
        if(!fieldValue.is_null())
        {
            setFromNumber(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smscId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("smscId")];
        if(!fieldValue.is_null())
        {
            setSmscId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contact")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("contact")];
        if(!fieldValue.is_null())
        {
            setContact(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("source")];
        if(!fieldValue.is_null())
        {
            setSource(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deliveredCount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("deliveredCount")];
        if(!fieldValue.is_null())
        {
            setDeliveredCount(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("numbersCount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("numbersCount")];
        if(!fieldValue.is_null())
        {
            setNumbersCount(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("userId")];
        if(!fieldValue.is_null())
        {
            setUserId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creditsPrice")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("creditsPrice")];
        if(!fieldValue.is_null())
        {
            setCreditsPrice(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chars")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("chars")];
        if(!fieldValue.is_null())
        {
            setChars(ModelBase::int32_tFromJson(fieldValue));
        }
    }
}

void MessageOut::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contactId"), m_ContactId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sessionId"), m_SessionId));
    if(m_ReceiverIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("receiver"), m_Receiver));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("messageTime"), m_MessageTime));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("avatar"), m_Avatar));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("text"), m_Text));
    if(m_DeletedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deleted"), m_Deleted));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("charset"), m_Charset));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("charsetLabel"), m_CharsetLabel));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstName"), m_FirstName));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastName"), m_LastName));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("country"), m_Country));
    if(m_SenderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sender"), m_Sender));
        
    }
    if(m_PhoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phone"), m_Phone));
        
    }
    if(m_PriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("price"), m_Price));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("partsCount"), m_PartsCount));
    if(m_FromEmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fromEmail"), m_FromEmail));
        
    }
    if(m_FromNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fromNumber"), m_FromNumber));
        
    }
    if(m_SmscIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("smscId"), m_SmscId));
        
    }
    if(m_ContactIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contact"), m_Contact));
        
    }
    if(m_SourceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("source"), m_Source));
        
    }
    if(m_DeliveredCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deliveredCount"), m_DeliveredCount));
    }
    if(m_NumbersCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("numbersCount"), m_NumbersCount));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
    if(m_CreditsPriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("creditsPrice"), m_CreditsPrice));
        
    }
    if(m_CharsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("chars"), m_Chars));
    }
}

void MessageOut::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setContactId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("contactId"))));
    setSessionId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sessionId"))));
    if(multipart->hasContent(utility::conversions::to_string_t("receiver")))
    {
        setReceiver(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("receiver"))));
    }
    setMessageTime(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("messageTime"))));
    setStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("status"))));
    setAvatar(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("avatar"))));
    setText(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("text"))));
    if(multipart->hasContent(utility::conversions::to_string_t("deleted")))
    {
        setDeleted(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("deleted"))));
    }
    setCharset(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("charset"))));
    setCharsetLabel(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("charsetLabel"))));
    setFirstName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstName"))));
    setLastName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastName"))));
    setCountry(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("country"))));
    if(multipart->hasContent(utility::conversions::to_string_t("sender")))
    {
        setSender(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sender"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("phone")))
    {
        setPhone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phone"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("price")))
    {
        setPrice(ModelBase::floatFromHttpContent(multipart->getContent(utility::conversions::to_string_t("price"))));
    }
    setPartsCount(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("partsCount"))));
    if(multipart->hasContent(utility::conversions::to_string_t("fromEmail")))
    {
        setFromEmail(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fromEmail"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fromNumber")))
    {
        setFromNumber(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fromNumber"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("smscId")))
    {
        setSmscId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("smscId"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("contact")))
    {
        setContact(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("contact"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("source")))
    {
        setSource(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("source"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deliveredCount")))
    {
        setDeliveredCount(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("deliveredCount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("numbersCount")))
    {
        setNumbersCount(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("numbersCount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        setUserId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("creditsPrice")))
    {
        setCreditsPrice(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("creditsPrice"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("chars")))
    {
        setChars(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("chars"))));
    }
}

int32_t MessageOut::getId() const
{
    return m_Id;
}


void MessageOut::setId(int32_t value)
{
    m_Id = value;
    
}
int32_t MessageOut::getContactId() const
{
    return m_ContactId;
}


void MessageOut::setContactId(int32_t value)
{
    m_ContactId = value;
    
}
int32_t MessageOut::getSessionId() const
{
    return m_SessionId;
}


void MessageOut::setSessionId(int32_t value)
{
    m_SessionId = value;
    
}
utility::string_t MessageOut::getReceiver() const
{
    return m_Receiver;
}


void MessageOut::setReceiver(utility::string_t value)
{
    m_Receiver = value;
    m_ReceiverIsSet = true;
}
bool MessageOut::receiverIsSet() const
{
    return m_ReceiverIsSet;
}

void MessageOut::unsetReceiver()
{
    m_ReceiverIsSet = false;
}

utility::datetime MessageOut::getMessageTime() const
{
    return m_MessageTime;
}


void MessageOut::setMessageTime(utility::datetime value)
{
    m_MessageTime = value;
    
}
utility::string_t MessageOut::getStatus() const
{
    return m_Status;
}


void MessageOut::setStatus(utility::string_t value)
{
    m_Status = value;
    
}
utility::string_t MessageOut::getAvatar() const
{
    return m_Avatar;
}


void MessageOut::setAvatar(utility::string_t value)
{
    m_Avatar = value;
    
}
utility::string_t MessageOut::getText() const
{
    return m_Text;
}


void MessageOut::setText(utility::string_t value)
{
    m_Text = value;
    
}
bool MessageOut::isDeleted() const
{
    return m_Deleted;
}


void MessageOut::setDeleted(bool value)
{
    m_Deleted = value;
    m_DeletedIsSet = true;
}
bool MessageOut::deletedIsSet() const
{
    return m_DeletedIsSet;
}

void MessageOut::unsetDeleted()
{
    m_DeletedIsSet = false;
}

utility::string_t MessageOut::getCharset() const
{
    return m_Charset;
}


void MessageOut::setCharset(utility::string_t value)
{
    m_Charset = value;
    
}
utility::string_t MessageOut::getCharsetLabel() const
{
    return m_CharsetLabel;
}


void MessageOut::setCharsetLabel(utility::string_t value)
{
    m_CharsetLabel = value;
    
}
utility::string_t MessageOut::getFirstName() const
{
    return m_FirstName;
}


void MessageOut::setFirstName(utility::string_t value)
{
    m_FirstName = value;
    
}
utility::string_t MessageOut::getLastName() const
{
    return m_LastName;
}


void MessageOut::setLastName(utility::string_t value)
{
    m_LastName = value;
    
}
utility::string_t MessageOut::getCountry() const
{
    return m_Country;
}


void MessageOut::setCountry(utility::string_t value)
{
    m_Country = value;
    
}
utility::string_t MessageOut::getSender() const
{
    return m_Sender;
}


void MessageOut::setSender(utility::string_t value)
{
    m_Sender = value;
    m_SenderIsSet = true;
}
bool MessageOut::senderIsSet() const
{
    return m_SenderIsSet;
}

void MessageOut::unsetSender()
{
    m_SenderIsSet = false;
}

utility::string_t MessageOut::getPhone() const
{
    return m_Phone;
}


void MessageOut::setPhone(utility::string_t value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}
bool MessageOut::phoneIsSet() const
{
    return m_PhoneIsSet;
}

void MessageOut::unsetPhone()
{
    m_PhoneIsSet = false;
}

float MessageOut::getPrice() const
{
    return m_Price;
}


void MessageOut::setPrice(float value)
{
    m_Price = value;
    m_PriceIsSet = true;
}
bool MessageOut::priceIsSet() const
{
    return m_PriceIsSet;
}

void MessageOut::unsetPrice()
{
    m_PriceIsSet = false;
}

int32_t MessageOut::getPartsCount() const
{
    return m_PartsCount;
}


void MessageOut::setPartsCount(int32_t value)
{
    m_PartsCount = value;
    
}
utility::string_t MessageOut::getFromEmail() const
{
    return m_FromEmail;
}


void MessageOut::setFromEmail(utility::string_t value)
{
    m_FromEmail = value;
    m_FromEmailIsSet = true;
}
bool MessageOut::fromEmailIsSet() const
{
    return m_FromEmailIsSet;
}

void MessageOut::unsetFromEmail()
{
    m_FromEmailIsSet = false;
}

utility::string_t MessageOut::getFromNumber() const
{
    return m_FromNumber;
}


void MessageOut::setFromNumber(utility::string_t value)
{
    m_FromNumber = value;
    m_FromNumberIsSet = true;
}
bool MessageOut::fromNumberIsSet() const
{
    return m_FromNumberIsSet;
}

void MessageOut::unsetFromNumber()
{
    m_FromNumberIsSet = false;
}

utility::string_t MessageOut::getSmscId() const
{
    return m_SmscId;
}


void MessageOut::setSmscId(utility::string_t value)
{
    m_SmscId = value;
    m_SmscIdIsSet = true;
}
bool MessageOut::smscIdIsSet() const
{
    return m_SmscIdIsSet;
}

void MessageOut::unsetSmscId()
{
    m_SmscIdIsSet = false;
}

utility::string_t MessageOut::getContact() const
{
    return m_Contact;
}


void MessageOut::setContact(utility::string_t value)
{
    m_Contact = value;
    m_ContactIsSet = true;
}
bool MessageOut::contactIsSet() const
{
    return m_ContactIsSet;
}

void MessageOut::unsetContact()
{
    m_ContactIsSet = false;
}

utility::string_t MessageOut::getSource() const
{
    return m_Source;
}


void MessageOut::setSource(utility::string_t value)
{
    m_Source = value;
    m_SourceIsSet = true;
}
bool MessageOut::sourceIsSet() const
{
    return m_SourceIsSet;
}

void MessageOut::unsetSource()
{
    m_SourceIsSet = false;
}

int32_t MessageOut::getDeliveredCount() const
{
    return m_DeliveredCount;
}


void MessageOut::setDeliveredCount(int32_t value)
{
    m_DeliveredCount = value;
    m_DeliveredCountIsSet = true;
}
bool MessageOut::deliveredCountIsSet() const
{
    return m_DeliveredCountIsSet;
}

void MessageOut::unsetDeliveredCount()
{
    m_DeliveredCountIsSet = false;
}

int32_t MessageOut::getNumbersCount() const
{
    return m_NumbersCount;
}


void MessageOut::setNumbersCount(int32_t value)
{
    m_NumbersCount = value;
    m_NumbersCountIsSet = true;
}
bool MessageOut::numbersCountIsSet() const
{
    return m_NumbersCountIsSet;
}

void MessageOut::unsetNumbersCount()
{
    m_NumbersCountIsSet = false;
}

int32_t MessageOut::getUserId() const
{
    return m_UserId;
}


void MessageOut::setUserId(int32_t value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}
bool MessageOut::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void MessageOut::unsetUserId()
{
    m_UserIdIsSet = false;
}

utility::string_t MessageOut::getCreditsPrice() const
{
    return m_CreditsPrice;
}


void MessageOut::setCreditsPrice(utility::string_t value)
{
    m_CreditsPrice = value;
    m_CreditsPriceIsSet = true;
}
bool MessageOut::creditsPriceIsSet() const
{
    return m_CreditsPriceIsSet;
}

void MessageOut::unsetCreditsPrice()
{
    m_CreditsPriceIsSet = false;
}

int32_t MessageOut::getChars() const
{
    return m_Chars;
}


void MessageOut::setChars(int32_t value)
{
    m_Chars = value;
    m_CharsIsSet = true;
}
bool MessageOut::charsIsSet() const
{
    return m_CharsIsSet;
}

void MessageOut::unsetChars()
{
    m_CharsIsSet = false;
}

}
}
}
}
