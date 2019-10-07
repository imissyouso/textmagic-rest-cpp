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
 * Chat.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_Chat_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_Chat_H_


#include "../ModelBase.h"

#include "Country.h"
#include <cpprest/details/basic_types.h>
#include "Contact.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Chat
    : public ModelBase
{
public:
    Chat();
    virtual ~Chat();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Chat members

    /// <summary>
    /// Chat ID.
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getOriginalId() const;
        void setOriginalId(int32_t value);
    /// <summary>
    /// Chat partner phone number.
    /// </summary>
    utility::string_t getPhone() const;
        void setPhone(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Contact> getContact() const;
        void setContact(std::shared_ptr<Contact> value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getUnsubscribedContactId() const;
        void setUnsubscribedContactId(int32_t value);
    /// <summary>
    /// Unread incoming messages count.
    /// </summary>
    int32_t getUnread() const;
        void setUnread(int32_t value);
    /// <summary>
    /// Time when last incoming message arrived at this chat.
    /// </summary>
    utility::datetime getUpdatedAt() const;
        void setUpdatedAt(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
        void setStatus(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMute() const;
        void setMute(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLastMessage() const;
        void setLastMessage(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDirection() const;
        void setDirection(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFrom() const;
        void setFrom(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMutedUntil() const;
        void setMutedUntil(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getTimeLeftMute() const;
        void setTimeLeftMute(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Country> getCountry() const;
        void setCountry(std::shared_ptr<Country> value);

protected:
    int32_t m_Id;
        int32_t m_OriginalId;
        utility::string_t m_Phone;
        std::shared_ptr<Contact> m_Contact;
        int32_t m_UnsubscribedContactId;
        int32_t m_Unread;
        utility::datetime m_UpdatedAt;
        utility::string_t m_Status;
        int32_t m_Mute;
        utility::string_t m_LastMessage;
        utility::string_t m_Direction;
        utility::string_t m_From;
        utility::string_t m_MutedUntil;
        int32_t m_TimeLeftMute;
        std::shared_ptr<Country> m_Country;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_Chat_H_ */
