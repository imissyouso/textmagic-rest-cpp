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
 * MessagingStatItem.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_MessagingStatItem_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_MessagingStatItem_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MessagingStatItem
    : public ModelBase
{
public:
    MessagingStatItem();
    virtual ~MessagingStatItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MessagingStatItem members

    /// <summary>
    /// the number of incoming messages divided by the number of total messages.
    /// </summary>
    float getReplyRate() const;
        void setReplyRate(float value);
    /// <summary>
    /// Time interval start, empty if the **by** parameter was set to **off**. 
    /// </summary>
    utility::datetime getDate() const;
        void setDate(utility::datetime value);
    /// <summary>
    /// Message delivery rate:the number of delivered messages divided by the number of total messages.
    /// </summary>
    float getDeliveryRate() const;
        void setDeliveryRate(float value);
    /// <summary>
    /// Cost for sent messages during this period. The costs are in the [Account](http://docs.textmagictesting.com/#tag/User) currency. 
    /// </summary>
    float getCosts() const;
        void setCosts(float value);
    /// <summary>
    /// Total received messages count.
    /// </summary>
    int32_t getMessagesReceived() const;
        void setMessagesReceived(int32_t value);
    /// <summary>
    /// Delivered messages count. As messages are retried for up to 48 hours, this value could change.
    /// </summary>
    int32_t getMessagesSentDelivered() const;
        void setMessagesSentDelivered(int32_t value);
    /// <summary>
    /// Messages accepted for delivery (in queue), but not yet delivered.
    /// </summary>
    int32_t getMessagesSentAccepted() const;
        void setMessagesSentAccepted(int32_t value);
    /// <summary>
    /// Messages buffered by endpoint cell phone operators.
    /// </summary>
    int32_t getMessagesSentBuffered() const;
        void setMessagesSentBuffered(int32_t value);
    /// <summary>
    /// Messages that have failed for whatever reason, e.g. the destination phone was switched off for 48 hours or the recipient phone account is out of service.
    /// </summary>
    int32_t getMessagesSentFailed() const;
        void setMessagesSentFailed(int32_t value);
    /// <summary>
    /// Messages that were rejected: invalid Sender ID used (e.g. you cannot use the Sender ID or your own mobile number when sending to the United States and Canada.) 
    /// </summary>
    int32_t getMessagesSentRejected() const;
        void setMessagesSentRejected(int32_t value);
    /// <summary>
    /// Total sent messages **parts** count. Note that this is not equal to the sent messages count, because one message could consist of 1 to 6 parts and users are charged per part, not per message.
    /// </summary>
    int32_t getMessagesSentParts() const;
        void setMessagesSentParts(int32_t value);

protected:
    float m_ReplyRate;
        utility::datetime m_date;
        float m_DeliveryRate;
        float m_Costs;
        int32_t m_MessagesReceived;
        int32_t m_MessagesSentDelivered;
        int32_t m_MessagesSentAccepted;
        int32_t m_MessagesSentBuffered;
        int32_t m_MessagesSentFailed;
        int32_t m_MessagesSentRejected;
        int32_t m_MessagesSentParts;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_MessagingStatItem_H_ */
