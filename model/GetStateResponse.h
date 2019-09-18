/**
 * TextMagic API Documentation
 * # Overview ## Introduction 22 <img style=\"float: right; margin-left: 10px; width: 100px;\" src=\"images/phone.png\"> TextMagic SMS API is a platform for building your own messaging app using our messaging infrastructure. It allows you to send and receive SMS text messages, query information about inbound and outbound messages, manage contacts, create templates (i.e. message formats and static texts) and schedule recurrent SMS messages as well as process bulk SMS messages. <button name=\"button\" onclick=\"http://www.google.com\" class=\"btn\">Try TextMagic API for Free</button>  ### Two Ways to Use TextMagic API * [REST API](https://www.textmagic.com/docs/api/start/) – get full access to TextMagic’s messaging gateway features * [Email to SMS API](https://www.textmagic.com/docs/api/send-email-to-sms/) – set up two-way SMS communication without the need to write any additional code  ### Code Libraries We have created a set of client libraries for the most popular programming languages (such as REST API Java and REST API PHP). These libraries allow you to integrate our API into your code in minutes. Just choose your preferred language to get started:  ## Getting started Get Started with the TextMagic REST API To start sending text messages using the TextMagic REST API, just follow these steps: 1. Generate the API credentials 1. Connect to our API endpoint This page provides all the information you need to get started. Here, we explain the following steps:  How to obtain the API credentials The API endpoint How the REST API works The next step How to obtain the API credentials  ### How to obtain the API credentials To start sending text messages, you need to create an API key. API keys are similar to an account password; the difference is that an API key only provides access to the API: you cannot log in to TextMagic Online using the API key.  Your program sends the login credentials with each API request as HTTP headers: `X-TM-Username` is your TextMagic username, while `X-TM-Key` is your API key.  How to obtain an API key:  1. Log in to TextMagic (or start a free trial if you haven’t registered yet). 1. Go to the API settings page. 1. Click the Add new API key button. 1. Enter an app name for this key. Note, it’s just a label, so pick any name. 1. Click Generate new key. 1. You should now see your new API key in the green notification banner above the table:  ![alt text](images/credentials.png)  > Note for API v1 users > V1 keys are not compatible with the V2 version of the TextMagic REST API, so you will need to generate a new API key to use the V2 endpoint.  ### The API endpoint The TextMagic REST API endpoint is: ``` https://rest.textmagic.com/api/v2 ``` All the URLs referenced in this documentation should use this base URL.  ### How the REST API works REST APIs use the HTTP protocol to send and receive messages. REST messages are usually encoded as JSON documents and are an improvement over older methods such as the XML based SOAP protocol. REST APIs use the same set of methods that web browsers use: POST, GET, PUT or DELETE. These correspond to the CRUD operations: create, read, update and delete. Often, REST URIs provide direct CRUD access to entities or collections of entities, for example: http://api.foo.com/people. In this instance, to delete a person’s endpoint, you might simply call the endpoint DELETE http://api.foo.com/people/{id}. REST makes these types of operations simple.  > Example > > Let’s take the entity most often used in messaging: contacts. Imagine you want to perform operations on your contacts list: well, it’s only a matter of calling the following endpoints: > * GET /api/v2/contacts (get all of your contacts) > * GET /api/v2/contacts/{id} (get a specific contact) > * POST /api/v2/contacts (create a new contact) > * PUT /api/v2/contacts/{id} (update an existing contact) > * DELETE /api/v2/contacts/{id} (delete an existing contact) It’s that simple! In fact, that’s all you need to do to manage the contacts in your TextMagic account!  ## Sandbox Sandbox is a tool to test TextMagic REST API requests without the need to install any applications or write any code. Here, we explain the following details about Sandbox: * The credentials area * Command documentation * How it works  <a href=\"\">Go to TextMagic Sandbox</a>  ### The credentials area To make requests using your TextMagic account, you need to enter your account username and your API key into the corresponding fields. You may also Save them in your browser or press Clear to erase them.  ![alt text](images/sandbox.png) 
 *
 * OpenAPI spec version: 2
 * Contact: support@textmagi.biz
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * GetStateResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_GetStateResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_GetStateResponse_H_


#include "../ModelBase.h"


namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GetStateResponse
    : public ModelBase
{
public:
    GetStateResponse();
    virtual ~GetStateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetStateResponse members

    /// <summary>
    /// 
    /// </summary>
    int32_t getSystemCacheClear() const;
        void setSystemCacheClear(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getSystemExit() const;
        void setSystemExit(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getSystemAlert() const;
        void setSystemAlert(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getSystemAccountStateChanged() const;
        void setSystemAccountStateChanged(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageDeleted() const;
        void setMessageDeleted(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageIncoming() const;
        void setMessageIncoming(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageIncomingDeleted() const;
        void setMessageIncomingDeleted(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageStateChanged() const;
        void setMessageStateChanged(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageBulkEnd() const;
        void setMessageBulkEnd(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageWipeEnd() const;
        void setMessageWipeEnd(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageSent() const;
        void setMessageSent(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageSessionDeleted() const;
        void setMessageSessionDeleted(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageCacheClear() const;
        void setMessageCacheClear(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageIncomingCacheClear() const;
        void setMessageIncomingCacheClear(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageScheduleAdded() const;
        void setMessageScheduleAdded(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageScheduleStateChanged() const;
        void setMessageScheduleStateChanged(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageScheduleDeleted() const;
        void setMessageScheduleDeleted(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageScheduleCacheClear() const;
        void setMessageScheduleCacheClear(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMessageTemplateCacheClear() const;
        void setMessageTemplateCacheClear(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getCallFinished() const;
        void setCallFinished(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getChatCreated() const;
        void setChatCreated(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getChatMarkedAsRead() const;
        void setChatMarkedAsRead(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getChatMuted() const;
        void setChatMuted(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getChatUnmuted() const;
        void setChatUnmuted(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getChatDeleted() const;
        void setChatDeleted(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getChatClosed() const;
        void setChatClosed(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getChatReopened() const;
        void setChatReopened(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getChatCacheClear() const;
        void setChatCacheClear(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getContactAdded() const;
        void setContactAdded(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getContactDeleted() const;
        void setContactDeleted(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getContactStateChanged() const;
        void setContactStateChanged(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getListAdded() const;
        void setListAdded(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getListDeleted() const;
        void setListDeleted(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getListStateChanged() const;
        void setListStateChanged(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getContactWipeEnd() const;
        void setContactWipeEnd(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getContactImportEnd() const;
        void setContactImportEnd(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getContactCacheClear() const;
        void setContactCacheClear(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getListCacheClear() const;
        void setListCacheClear(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getCustomFieldsCacheClear() const;
        void setCustomFieldsCacheClear(int32_t value);

protected:
    int32_t m_SystemCacheClear;
        int32_t m_SystemExit;
        int32_t m_SystemAlert;
        int32_t m_SystemAccountStateChanged;
        int32_t m_MessageDeleted;
        int32_t m_MessageIncoming;
        int32_t m_MessageIncomingDeleted;
        int32_t m_MessageStateChanged;
        int32_t m_MessageBulkEnd;
        int32_t m_MessageWipeEnd;
        int32_t m_MessageSent;
        int32_t m_MessageSessionDeleted;
        int32_t m_MessageCacheClear;
        int32_t m_MessageIncomingCacheClear;
        int32_t m_MessageScheduleAdded;
        int32_t m_MessageScheduleStateChanged;
        int32_t m_MessageScheduleDeleted;
        int32_t m_MessageScheduleCacheClear;
        int32_t m_MessageTemplateCacheClear;
        int32_t m_CallFinished;
        int32_t m_ChatCreated;
        int32_t m_ChatMarkedAsRead;
        int32_t m_ChatMuted;
        int32_t m_ChatUnmuted;
        int32_t m_ChatDeleted;
        int32_t m_ChatClosed;
        int32_t m_ChatReopened;
        int32_t m_ChatCacheClear;
        int32_t m_ContactAdded;
        int32_t m_ContactDeleted;
        int32_t m_ContactStateChanged;
        int32_t m_ListAdded;
        int32_t m_ListDeleted;
        int32_t m_ListStateChanged;
        int32_t m_ContactWipeEnd;
        int32_t m_ContactImportEnd;
        int32_t m_ContactCacheClear;
        int32_t m_ListCacheClear;
        int32_t m_CustomFieldsCacheClear;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_GetStateResponse_H_ */
