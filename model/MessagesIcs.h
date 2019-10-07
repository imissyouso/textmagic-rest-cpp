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
 * MessagesIcs.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_MessagesIcs_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_MessagesIcs_H_


#include "../ModelBase.h"

#include "MessageSession.h"
#include "MessagesIcs_textParameters.h"
#include <cpprest/details/basic_types.h>
#include "MessagesIcs_parameters.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MessagesIcs
    : public ModelBase
{
public:
    MessagesIcs();
    virtual ~MessagesIcs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MessagesIcs members

    /// <summary>
    /// Schedule ID.
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// Next send date in [ISO 8601](https://en.wikipedia.org/?title&#x3D;ISO_8601) format. 
    /// </summary>
    utility::datetime getNextSend() const;
        void setNextSend(utility::datetime value);
    /// <summary>
    /// [iCal RRULE](http://www.kanzaki.com/docs/ical/rrule.html) string. 
    /// </summary>
    utility::string_t getRrule() const;
        void setRrule(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<MessageSession> getSession() const;
        void setSession(std::shared_ptr<MessageSession> value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getLastSent() const;
        void setLastSent(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getContactName() const;
        void setContactName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<MessagesIcs_parameters> getParameters() const;
        void setParameters(std::shared_ptr<MessagesIcs_parameters> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
        void setType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSummary() const;
        void setSummary(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<MessagesIcs_textParameters> getTextParameters() const;
        void setTextParameters(std::shared_ptr<MessagesIcs_textParameters> value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getFirstOccurrence() const;
        void setFirstOccurrence(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getLastOccurrence() const;
        void setLastOccurrence(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getRecipientsCount() const;
        void setRecipientsCount(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTimezone() const;
        void setTimezone(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    bool isCompleted() const;
        void setCompleted(bool value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAvatar() const;
        void setAvatar(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
        void setCreatedAt(utility::datetime value);

protected:
    int32_t m_Id;
        utility::datetime m_NextSend;
        utility::string_t m_Rrule;
        std::shared_ptr<MessageSession> m_Session;
        utility::datetime m_LastSent;
        utility::string_t m_ContactName;
        std::shared_ptr<MessagesIcs_parameters> m_Parameters;
        utility::string_t m_Type;
        utility::string_t m_Summary;
        std::shared_ptr<MessagesIcs_textParameters> m_TextParameters;
        utility::datetime m_FirstOccurrence;
        utility::datetime m_LastOccurrence;
        int32_t m_RecipientsCount;
        utility::string_t m_Timezone;
        bool m_Completed;
        utility::string_t m_Avatar;
        utility::datetime m_CreatedAt;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_MessagesIcs_H_ */
