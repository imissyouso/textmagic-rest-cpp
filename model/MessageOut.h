/**
 * TextMagic API Documentation
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2
 * Contact: support@textmagi.biz
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * MessageOut.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_MessageOut_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_MessageOut_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MessageOut
    : public ModelBase
{
public:
    MessageOut();
    virtual ~MessageOut();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MessageOut members

    /// <summary>
    /// 
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getContactId() const;
        void setContactId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getSessionId() const;
        void setSessionId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getReceiver() const;
    bool receiverIsSet() const;
    void unsetReceiver();
    void setReceiver(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getMessageTime() const;
        void setMessageTime(utility::datetime value);
    /// <summary>
    /// q - queued s - scheduled queue e - sending error r - enroute a - acked d - delivered b - buffered f - failed u - unknown j - rejected i - bulk insert p - scheduled suspend h - queue suspend
    /// </summary>
    utility::string_t getStatus() const;
        void setStatus(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAvatar() const;
        void setAvatar(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getText() const;
        void setText(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    bool isDeleted() const;
    bool deletedIsSet() const;
    void unsetDeleted();
    void setDeleted(bool value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCharset() const;
        void setCharset(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCharsetLabel() const;
        void setCharsetLabel(utility::string_t value);
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
    utility::string_t getCountry() const;
        void setCountry(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSender() const;
    bool senderIsSet() const;
    void unsetSender();
    void setSender(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPhone() const;
    bool phoneIsSet() const;
    void unsetPhone();
    void setPhone(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    float getPrice() const;
    bool priceIsSet() const;
    void unsetPrice();
    void setPrice(float value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getPartsCount() const;
        void setPartsCount(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFromEmail() const;
    bool fromEmailIsSet() const;
    void unsetFromEmail();
    void setFromEmail(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFromNumber() const;
    bool fromNumberIsSet() const;
    void unsetFromNumber();
    void setFromNumber(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSmscId() const;
    bool smscIdIsSet() const;
    void unsetSmscId();
    void setSmscId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getContact() const;
    bool contactIsSet() const;
    void unsetContact();
    void setContact(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSource() const;
    bool sourceIsSet() const;
    void unsetSource();
    void setSource(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getDeliveredCount() const;
    bool deliveredCountIsSet() const;
    void unsetDeliveredCount();
    void setDeliveredCount(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getNumbersCount() const;
    bool numbersCountIsSet() const;
    void unsetNumbersCount();
    void setNumbersCount(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();
    void setUserId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCreditsPrice() const;
    bool creditsPriceIsSet() const;
    void unsetCreditsPrice();
    void setCreditsPrice(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getChars() const;
    bool charsIsSet() const;
    void unsetChars();
    void setChars(int32_t value);

protected:
    int32_t m_Id;
        int32_t m_ContactId;
        int32_t m_SessionId;
        utility::string_t m_Receiver;
    bool m_ReceiverIsSet;
    utility::datetime m_MessageTime;
        utility::string_t m_Status;
        utility::string_t m_Avatar;
        utility::string_t m_Text;
        bool m_Deleted;
    bool m_DeletedIsSet;
    utility::string_t m_Charset;
        utility::string_t m_CharsetLabel;
        utility::string_t m_FirstName;
        utility::string_t m_LastName;
        utility::string_t m_Country;
        utility::string_t m_Sender;
    bool m_SenderIsSet;
    utility::string_t m_Phone;
    bool m_PhoneIsSet;
    float m_Price;
    bool m_PriceIsSet;
    int32_t m_PartsCount;
        utility::string_t m_FromEmail;
    bool m_FromEmailIsSet;
    utility::string_t m_FromNumber;
    bool m_FromNumberIsSet;
    utility::string_t m_SmscId;
    bool m_SmscIdIsSet;
    utility::string_t m_Contact;
    bool m_ContactIsSet;
    utility::string_t m_Source;
    bool m_SourceIsSet;
    int32_t m_DeliveredCount;
    bool m_DeliveredCountIsSet;
    int32_t m_NumbersCount;
    bool m_NumbersCountIsSet;
    int32_t m_UserId;
    bool m_UserIdIsSet;
    utility::string_t m_CreditsPrice;
    bool m_CreditsPriceIsSet;
    int32_t m_Chars;
    bool m_CharsIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_MessageOut_H_ */
