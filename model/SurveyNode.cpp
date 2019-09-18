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



#include "SurveyNode.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

SurveyNode::SurveyNode()
{
    m_Id = 0;
    m_Label = utility::conversions::to_string_t("");
    m_Body = utility::conversions::to_string_t("");
    m_NodeType = utility::conversions::to_string_t("");
    m_IsEndNode = false;
    m_SendDelay = 0;
}

SurveyNode::~SurveyNode()
{
}

void SurveyNode::validate()
{
    // TODO: implement validation
}

web::json::value SurveyNode::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("label")] = ModelBase::toJson(m_Label);
    val[utility::conversions::to_string_t("body")] = ModelBase::toJson(m_Body);
    val[utility::conversions::to_string_t("nodeType")] = ModelBase::toJson(m_NodeType);
    val[utility::conversions::to_string_t("isEndNode")] = ModelBase::toJson(m_IsEndNode);
    val[utility::conversions::to_string_t("sendDelay")] = ModelBase::toJson(m_SendDelay);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_StartNodes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("startNodes")] = web::json::value::array(jsonArray);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_EndNodes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("endNodes")] = web::json::value::array(jsonArray);
    }

    return val;
}

void SurveyNode::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("label")];
        if(!fieldValue.is_null())
        {
            setLabel(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("body")];
        if(!fieldValue.is_null())
        {
            setBody(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeType")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("nodeType")];
        if(!fieldValue.is_null())
        {
            setNodeType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isEndNode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("isEndNode")];
        if(!fieldValue.is_null())
        {
            setIsEndNode(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sendDelay")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("sendDelay")];
        if(!fieldValue.is_null())
        {
            setSendDelay(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    {
        m_StartNodes.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("startNodes")))
        {
        for( auto& item : val[utility::conversions::to_string_t("startNodes")].as_array() )
        {
            m_StartNodes.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    {
        m_EndNodes.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("endNodes")))
        {
        for( auto& item : val[utility::conversions::to_string_t("endNodes")].as_array() )
        {
            m_EndNodes.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void SurveyNode::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("label"), m_Label));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("body"), m_Body));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeType"), m_NodeType));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isEndNode"), m_IsEndNode));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sendDelay"), m_SendDelay));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_StartNodes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("startNodes"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_EndNodes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("endNodes"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void SurveyNode::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setLabel(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("label"))));
    setBody(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("body"))));
    setNodeType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeType"))));
    setIsEndNode(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("isEndNode"))));
    setSendDelay(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sendDelay"))));
    {
        m_StartNodes.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("startNodes"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_StartNodes.push_back(ModelBase::stringFromJson(item));
        }
    }
    {
        m_EndNodes.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("endNodes"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_EndNodes.push_back(ModelBase::stringFromJson(item));
        }
    }
}

int32_t SurveyNode::getId() const
{
    return m_Id;
}


void SurveyNode::setId(int32_t value)
{
    m_Id = value;
    
}
utility::string_t SurveyNode::getLabel() const
{
    return m_Label;
}


void SurveyNode::setLabel(utility::string_t value)
{
    m_Label = value;
    
}
utility::string_t SurveyNode::getBody() const
{
    return m_Body;
}


void SurveyNode::setBody(utility::string_t value)
{
    m_Body = value;
    
}
utility::string_t SurveyNode::getNodeType() const
{
    return m_NodeType;
}


void SurveyNode::setNodeType(utility::string_t value)
{
    m_NodeType = value;
    
}
bool SurveyNode::isIsEndNode() const
{
    return m_IsEndNode;
}


void SurveyNode::setIsEndNode(bool value)
{
    m_IsEndNode = value;
    
}
int32_t SurveyNode::getSendDelay() const
{
    return m_SendDelay;
}


void SurveyNode::setSendDelay(int32_t value)
{
    m_SendDelay = value;
    
}
std::vector<utility::string_t>& SurveyNode::getStartNodes()
{
    return m_StartNodes;
}

void SurveyNode::setStartNodes(std::vector<utility::string_t> value)
{
    m_StartNodes = value;
    
}
std::vector<utility::string_t>& SurveyNode::getEndNodes()
{
    return m_EndNodes;
}

void SurveyNode::setEndNodes(std::vector<utility::string_t> value)
{
    m_EndNodes = value;
    
}
}
}
}
}

