/**
 * TextMagic API
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * MessageIn.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_MessageIn_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_MessageIn_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MessageIn
    : public ModelBase
{
public:
    MessageIn();
    virtual ~MessageIn();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MessageIn members

    /// <summary>
    /// The ID of the inbound message.
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// The sender’s phone number.
    /// </summary>
    utility::string_t getSender() const;
        void setSender(utility::string_t value);
    /// <summary>
    /// The receiver’s phone number (i.e. your dedicated or shared reply number).
    /// </summary>
    utility::string_t getReceiver() const;
        void setReceiver(utility::string_t value);
    /// <summary>
    /// The time when the message reached the TextMagic API endpoint.
    /// </summary>
    utility::datetime getMessageTime() const;
        void setMessageTime(utility::datetime value);
    /// <summary>
    /// The text from the received message.
    /// </summary>
    utility::string_t getText() const;
        void setText(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getContactId() const;
    bool contactIdIsSet() const;
    void unsetContactId();
    void setContactId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFirstName() const;
    bool firstNameIsSet() const;
    void unsetFirstName();
    void setFirstName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLastName() const;
    bool lastNameIsSet() const;
    void unsetLastName();
    void setLastName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAvatar() const;
        void setAvatar(utility::string_t value);

protected:
    int32_t m_Id;
        utility::string_t m_Sender;
        utility::string_t m_Receiver;
        utility::datetime m_MessageTime;
        utility::string_t m_Text;
        int32_t m_ContactId;
    bool m_ContactIdIsSet;
    utility::string_t m_FirstName;
    bool m_FirstNameIsSet;
    utility::string_t m_LastName;
    bool m_LastNameIsSet;
    utility::string_t m_Avatar;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_MessageIn_H_ */
