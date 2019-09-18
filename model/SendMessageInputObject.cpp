/**
 * TextMagic API Documentation
 * # Overview ## Introduction <img style=\"float: right; margin-left: 10px; width: 100px;\" src=\"images/phone.png\"> TextMagic SMS API is a platform for building your own messaging app using our messaging infrastructure. It allows you to send and receive SMS text messages, query information about inbound and outbound messages, manage contacts, create templates (i.e. message formats and static texts) and schedule recurrent SMS messages as well as process bulk SMS messages. <button name=\"button\" onclick=\"http://www.google.com\" class=\"btn\">Try TextMagic API for Free</button>  ### Two Ways to Use TextMagic API * [REST API](https://www.textmagic.com/docs/api/start/) – get full access to TextMagic’s messaging gateway features * [Email to SMS API](https://www.textmagic.com/docs/api/send-email-to-sms/) – set up two-way SMS communication without the need to write any additional code  ### Code Libraries We have created a set of client libraries for the most popular programming languages (such as REST API Java and REST API PHP). These libraries allow you to integrate our API into your code in minutes. Just choose your preferred language to get started:  ## Getting started Get Started with the TextMagic REST API To start sending text messages using the TextMagic REST API, just follow these steps: 1. Generate the API credentials 1. Connect to our API endpoint This page provides all the information you need to get started. Here, we explain the following steps:  How to obtain the API credentials The API endpoint How the REST API works The next step How to obtain the API credentials  ### How to obtain the API credentials To start sending text messages, you need to create an API key. API keys are similar to an account password; the difference is that an API key only provides access to the API: you cannot log in to TextMagic Online using the API key.  Your program sends the login credentials with each API request as HTTP headers: `X-TM-Username` is your TextMagic username, while `X-TM-Key` is your API key.  How to obtain an API key:  1. Log in to TextMagic (or start a free trial if you haven’t registered yet). 1. Go to the API settings page. 1. Click the Add new API key button. 1. Enter an app name for this key. Note, it’s just a label, so pick any name. 1. Click Generate new key. 1. You should now see your new API key in the green notification banner above the table:  ![alt text](images/credentials.png)  > Note for API v1 users > V1 keys are not compatible with the V2 version of the TextMagic REST API, so you will need to generate a new API key to use the V2 endpoint.  ### The API endpoint The TextMagic REST API endpoint is: ``` https://rest.textmagic.com/api/v2 ``` All the URLs referenced in this documentation should use this base URL.  ### How the REST API works REST APIs use the HTTP protocol to send and receive messages. REST messages are usually encoded as JSON documents and are an improvement over older methods such as the XML based SOAP protocol. REST APIs use the same set of methods that web browsers use: POST, GET, PUT or DELETE. These correspond to the CRUD operations: create, read, update and delete. Often, REST URIs provide direct CRUD access to entities or collections of entities, for example: http://api.foo.com/people. In this instance, to delete a person’s endpoint, you might simply call the endpoint DELETE http://api.foo.com/people/{id}. REST makes these types of operations simple.  > Example > > Let’s take the entity most often used in messaging: contacts. Imagine you want to perform operations on your contacts list: well, it’s only a matter of calling the following endpoints: > * GET /api/v2/contacts (get all of your contacts) > * GET /api/v2/contacts/{id} (get a specific contact) > * POST /api/v2/contacts (create a new contact) > * PUT /api/v2/contacts/{id} (update an existing contact) > * DELETE /api/v2/contacts/{id} (delete an existing contact) It’s that simple! In fact, that’s all you need to do to manage the contacts in your TextMagic account!  ## Sandbox Sandbox is a tool to test TextMagic REST API requests without the need to install any applications or write any code. Here, we explain the following details about Sandbox: * The credentials area * Command documentation * How it works  <a href=\"\">Go to TextMagic Sandbox</a>  ### The credentials area To make requests using your TextMagic account, you need to enter your account username and your API key into the corresponding fields. You may also Save them in your browser or press Clear to erase them.  ![alt text](images/sandbox.png) 
 *
 * OpenAPI spec version: 2
 * Contact: support@textmagi.biz
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "SendMessageInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

SendMessageInputObject::SendMessageInputObject()
{
    m_Text = utility::conversions::to_string_t("");
    m_TextIsSet = false;
    m_TemplateId = 0;
    m_TemplateIdIsSet = false;
    m_SendingTime = 0;
    m_SendingTimeIsSet = false;
    m_SendingDateTime = utility::conversions::to_string_t("");
    m_SendingDateTimeIsSet = false;
    m_SendingTimezone = utility::conversions::to_string_t("");
    m_SendingTimezoneIsSet = false;
    m_Contacts = utility::conversions::to_string_t("");
    m_ContactsIsSet = false;
    m_Lists = utility::conversions::to_string_t("");
    m_ListsIsSet = false;
    m_Phones = utility::conversions::to_string_t("");
    m_PhonesIsSet = false;
    m_CutExtra = false;
    m_CutExtraIsSet = false;
    m_PartsCount = 0;
    m_PartsCountIsSet = false;
    m_ReferenceId = 0;
    m_ReferenceIdIsSet = false;
    m_From = utility::conversions::to_string_t("");
    m_FromIsSet = false;
    m_Rule = utility::conversions::to_string_t("");
    m_RuleIsSet = false;
    m_CreateChat = false;
    m_CreateChatIsSet = false;
    m_Tts = false;
    m_TtsIsSet = false;
    m_Local = false;
    m_LocalIsSet = false;
    m_LocalCountry = utility::conversions::to_string_t("");
    m_LocalCountryIsSet = false;
}

SendMessageInputObject::~SendMessageInputObject()
{
}

void SendMessageInputObject::validate()
{
    // TODO: implement validation
}

web::json::value SendMessageInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_TextIsSet)
    {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(m_Text);
    }
    if(m_TemplateIdIsSet)
    {
        val[utility::conversions::to_string_t("templateId")] = ModelBase::toJson(m_TemplateId);
    }
    if(m_SendingTimeIsSet)
    {
        val[utility::conversions::to_string_t("sendingTime")] = ModelBase::toJson(m_SendingTime);
    }
    if(m_SendingDateTimeIsSet)
    {
        val[utility::conversions::to_string_t("sendingDateTime")] = ModelBase::toJson(m_SendingDateTime);
    }
    if(m_SendingTimezoneIsSet)
    {
        val[utility::conversions::to_string_t("sendingTimezone")] = ModelBase::toJson(m_SendingTimezone);
    }
    if(m_ContactsIsSet)
    {
        val[utility::conversions::to_string_t("contacts")] = ModelBase::toJson(m_Contacts);
    }
    if(m_ListsIsSet)
    {
        val[utility::conversions::to_string_t("lists")] = ModelBase::toJson(m_Lists);
    }
    if(m_PhonesIsSet)
    {
        val[utility::conversions::to_string_t("phones")] = ModelBase::toJson(m_Phones);
    }
    if(m_CutExtraIsSet)
    {
        val[utility::conversions::to_string_t("cutExtra")] = ModelBase::toJson(m_CutExtra);
    }
    if(m_PartsCountIsSet)
    {
        val[utility::conversions::to_string_t("partsCount")] = ModelBase::toJson(m_PartsCount);
    }
    if(m_ReferenceIdIsSet)
    {
        val[utility::conversions::to_string_t("referenceId")] = ModelBase::toJson(m_ReferenceId);
    }
    if(m_FromIsSet)
    {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(m_From);
    }
    if(m_RuleIsSet)
    {
        val[utility::conversions::to_string_t("rule")] = ModelBase::toJson(m_Rule);
    }
    if(m_CreateChatIsSet)
    {
        val[utility::conversions::to_string_t("createChat")] = ModelBase::toJson(m_CreateChat);
    }
    if(m_TtsIsSet)
    {
        val[utility::conversions::to_string_t("tts")] = ModelBase::toJson(m_Tts);
    }
    if(m_LocalIsSet)
    {
        val[utility::conversions::to_string_t("local")] = ModelBase::toJson(m_Local);
    }
    if(m_LocalCountryIsSet)
    {
        val[utility::conversions::to_string_t("localCountry")] = ModelBase::toJson(m_LocalCountry);
    }

    return val;
}

void SendMessageInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("text")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("text")];
        if(!fieldValue.is_null())
        {
            setText(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("templateId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("templateId")];
        if(!fieldValue.is_null())
        {
            setTemplateId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sendingTime")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("sendingTime")];
        if(!fieldValue.is_null())
        {
            setSendingTime(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sendingDateTime")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("sendingDateTime")];
        if(!fieldValue.is_null())
        {
            setSendingDateTime(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sendingTimezone")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("sendingTimezone")];
        if(!fieldValue.is_null())
        {
            setSendingTimezone(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contacts")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("contacts")];
        if(!fieldValue.is_null())
        {
            setContacts(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("phones")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("phones")];
        if(!fieldValue.is_null())
        {
            setPhones(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cutExtra")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("cutExtra")];
        if(!fieldValue.is_null())
        {
            setCutExtra(ModelBase::boolFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("referenceId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("referenceId")];
        if(!fieldValue.is_null())
        {
            setReferenceId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("from")];
        if(!fieldValue.is_null())
        {
            setFrom(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("rule")];
        if(!fieldValue.is_null())
        {
            setRule(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createChat")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("createChat")];
        if(!fieldValue.is_null())
        {
            setCreateChat(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tts")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("tts")];
        if(!fieldValue.is_null())
        {
            setTts(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("local")];
        if(!fieldValue.is_null())
        {
            setLocal(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("localCountry")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("localCountry")];
        if(!fieldValue.is_null())
        {
            setLocalCountry(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void SendMessageInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_TextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("text"), m_Text));
        
    }
    if(m_TemplateIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("templateId"), m_TemplateId));
    }
    if(m_SendingTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sendingTime"), m_SendingTime));
    }
    if(m_SendingDateTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sendingDateTime"), m_SendingDateTime));
        
    }
    if(m_SendingTimezoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sendingTimezone"), m_SendingTimezone));
        
    }
    if(m_ContactsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contacts"), m_Contacts));
        
    }
    if(m_ListsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lists"), m_Lists));
        
    }
    if(m_PhonesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phones"), m_Phones));
        
    }
    if(m_CutExtraIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cutExtra"), m_CutExtra));
    }
    if(m_PartsCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("partsCount"), m_PartsCount));
    }
    if(m_ReferenceIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("referenceId"), m_ReferenceId));
    }
    if(m_FromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("from"), m_From));
        
    }
    if(m_RuleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rule"), m_Rule));
        
    }
    if(m_CreateChatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createChat"), m_CreateChat));
    }
    if(m_TtsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tts"), m_Tts));
    }
    if(m_LocalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("local"), m_Local));
    }
    if(m_LocalCountryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("localCountry"), m_LocalCountry));
        
    }
}

void SendMessageInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("text")))
    {
        setText(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("text"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("templateId")))
    {
        setTemplateId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("templateId"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sendingTime")))
    {
        setSendingTime(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sendingTime"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sendingDateTime")))
    {
        setSendingDateTime(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sendingDateTime"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sendingTimezone")))
    {
        setSendingTimezone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sendingTimezone"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("contacts")))
    {
        setContacts(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("contacts"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lists")))
    {
        setLists(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lists"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("phones")))
    {
        setPhones(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phones"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cutExtra")))
    {
        setCutExtra(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("cutExtra"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("partsCount")))
    {
        setPartsCount(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("partsCount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("referenceId")))
    {
        setReferenceId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("referenceId"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("from")))
    {
        setFrom(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("from"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("rule")))
    {
        setRule(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("rule"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createChat")))
    {
        setCreateChat(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("createChat"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tts")))
    {
        setTts(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("tts"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("local")))
    {
        setLocal(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("local"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("localCountry")))
    {
        setLocalCountry(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("localCountry"))));
    }
}

utility::string_t SendMessageInputObject::getText() const
{
    return m_Text;
}


void SendMessageInputObject::setText(utility::string_t value)
{
    m_Text = value;
    m_TextIsSet = true;
}
bool SendMessageInputObject::textIsSet() const
{
    return m_TextIsSet;
}

void SendMessageInputObject::unsetText()
{
    m_TextIsSet = false;
}

int32_t SendMessageInputObject::getTemplateId() const
{
    return m_TemplateId;
}


void SendMessageInputObject::setTemplateId(int32_t value)
{
    m_TemplateId = value;
    m_TemplateIdIsSet = true;
}
bool SendMessageInputObject::templateIdIsSet() const
{
    return m_TemplateIdIsSet;
}

void SendMessageInputObject::unsetTemplateId()
{
    m_TemplateIdIsSet = false;
}

int32_t SendMessageInputObject::getSendingTime() const
{
    return m_SendingTime;
}


void SendMessageInputObject::setSendingTime(int32_t value)
{
    m_SendingTime = value;
    m_SendingTimeIsSet = true;
}
bool SendMessageInputObject::sendingTimeIsSet() const
{
    return m_SendingTimeIsSet;
}

void SendMessageInputObject::unsetSendingTime()
{
    m_SendingTimeIsSet = false;
}

utility::string_t SendMessageInputObject::getSendingDateTime() const
{
    return m_SendingDateTime;
}


void SendMessageInputObject::setSendingDateTime(utility::string_t value)
{
    m_SendingDateTime = value;
    m_SendingDateTimeIsSet = true;
}
bool SendMessageInputObject::sendingDateTimeIsSet() const
{
    return m_SendingDateTimeIsSet;
}

void SendMessageInputObject::unsetSendingDateTime()
{
    m_SendingDateTimeIsSet = false;
}

utility::string_t SendMessageInputObject::getSendingTimezone() const
{
    return m_SendingTimezone;
}


void SendMessageInputObject::setSendingTimezone(utility::string_t value)
{
    m_SendingTimezone = value;
    m_SendingTimezoneIsSet = true;
}
bool SendMessageInputObject::sendingTimezoneIsSet() const
{
    return m_SendingTimezoneIsSet;
}

void SendMessageInputObject::unsetSendingTimezone()
{
    m_SendingTimezoneIsSet = false;
}

utility::string_t SendMessageInputObject::getContacts() const
{
    return m_Contacts;
}


void SendMessageInputObject::setContacts(utility::string_t value)
{
    m_Contacts = value;
    m_ContactsIsSet = true;
}
bool SendMessageInputObject::contactsIsSet() const
{
    return m_ContactsIsSet;
}

void SendMessageInputObject::unsetContacts()
{
    m_ContactsIsSet = false;
}

utility::string_t SendMessageInputObject::getLists() const
{
    return m_Lists;
}


void SendMessageInputObject::setLists(utility::string_t value)
{
    m_Lists = value;
    m_ListsIsSet = true;
}
bool SendMessageInputObject::listsIsSet() const
{
    return m_ListsIsSet;
}

void SendMessageInputObject::unsetLists()
{
    m_ListsIsSet = false;
}

utility::string_t SendMessageInputObject::getPhones() const
{
    return m_Phones;
}


void SendMessageInputObject::setPhones(utility::string_t value)
{
    m_Phones = value;
    m_PhonesIsSet = true;
}
bool SendMessageInputObject::phonesIsSet() const
{
    return m_PhonesIsSet;
}

void SendMessageInputObject::unsetPhones()
{
    m_PhonesIsSet = false;
}

bool SendMessageInputObject::isCutExtra() const
{
    return m_CutExtra;
}


void SendMessageInputObject::setCutExtra(bool value)
{
    m_CutExtra = value;
    m_CutExtraIsSet = true;
}
bool SendMessageInputObject::cutExtraIsSet() const
{
    return m_CutExtraIsSet;
}

void SendMessageInputObject::unsetCutExtra()
{
    m_CutExtraIsSet = false;
}

int32_t SendMessageInputObject::getPartsCount() const
{
    return m_PartsCount;
}


void SendMessageInputObject::setPartsCount(int32_t value)
{
    m_PartsCount = value;
    m_PartsCountIsSet = true;
}
bool SendMessageInputObject::partsCountIsSet() const
{
    return m_PartsCountIsSet;
}

void SendMessageInputObject::unsetPartsCount()
{
    m_PartsCountIsSet = false;
}

int32_t SendMessageInputObject::getReferenceId() const
{
    return m_ReferenceId;
}


void SendMessageInputObject::setReferenceId(int32_t value)
{
    m_ReferenceId = value;
    m_ReferenceIdIsSet = true;
}
bool SendMessageInputObject::referenceIdIsSet() const
{
    return m_ReferenceIdIsSet;
}

void SendMessageInputObject::unsetReferenceId()
{
    m_ReferenceIdIsSet = false;
}

utility::string_t SendMessageInputObject::getFrom() const
{
    return m_From;
}


void SendMessageInputObject::setFrom(utility::string_t value)
{
    m_From = value;
    m_FromIsSet = true;
}
bool SendMessageInputObject::fromIsSet() const
{
    return m_FromIsSet;
}

void SendMessageInputObject::unsetFrom()
{
    m_FromIsSet = false;
}

utility::string_t SendMessageInputObject::getRule() const
{
    return m_Rule;
}


void SendMessageInputObject::setRule(utility::string_t value)
{
    m_Rule = value;
    m_RuleIsSet = true;
}
bool SendMessageInputObject::ruleIsSet() const
{
    return m_RuleIsSet;
}

void SendMessageInputObject::unsetRule()
{
    m_RuleIsSet = false;
}

bool SendMessageInputObject::isCreateChat() const
{
    return m_CreateChat;
}


void SendMessageInputObject::setCreateChat(bool value)
{
    m_CreateChat = value;
    m_CreateChatIsSet = true;
}
bool SendMessageInputObject::createChatIsSet() const
{
    return m_CreateChatIsSet;
}

void SendMessageInputObject::unsetCreateChat()
{
    m_CreateChatIsSet = false;
}

bool SendMessageInputObject::isTts() const
{
    return m_Tts;
}


void SendMessageInputObject::setTts(bool value)
{
    m_Tts = value;
    m_TtsIsSet = true;
}
bool SendMessageInputObject::ttsIsSet() const
{
    return m_TtsIsSet;
}

void SendMessageInputObject::unsetTts()
{
    m_TtsIsSet = false;
}

bool SendMessageInputObject::isLocal() const
{
    return m_Local;
}


void SendMessageInputObject::setLocal(bool value)
{
    m_Local = value;
    m_LocalIsSet = true;
}
bool SendMessageInputObject::localIsSet() const
{
    return m_LocalIsSet;
}

void SendMessageInputObject::unsetLocal()
{
    m_LocalIsSet = false;
}

utility::string_t SendMessageInputObject::getLocalCountry() const
{
    return m_LocalCountry;
}


void SendMessageInputObject::setLocalCountry(utility::string_t value)
{
    m_LocalCountry = value;
    m_LocalCountryIsSet = true;
}
bool SendMessageInputObject::localCountryIsSet() const
{
    return m_LocalCountryIsSet;
}

void SendMessageInputObject::unsetLocalCountry()
{
    m_LocalCountryIsSet = false;
}

}
}
}
}

