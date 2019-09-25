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
 * UpdateSenderSettingInputObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_UpdateSenderSettingInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_UpdateSenderSettingInputObject_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  UpdateSenderSettingInputObject
    : public ModelBase
{
public:
    UpdateSenderSettingInputObject();
    virtual ~UpdateSenderSettingInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UpdateSenderSettingInputObject members

    /// <summary>
    /// Available phone number in international E.164 format or senderid.
    /// </summary>
    utility::string_t getValue() const;
        void setValue(utility::string_t value);
    /// <summary>
    /// Country for which the setting will be set.
    /// </summary>
    utility::string_t getCountry() const;
        void setCountry(utility::string_t value);
    /// <summary>
    /// Set sender setting for specified chat only.
    /// </summary>
    int32_t getChatId() const;
    bool chatIdIsSet() const;
    void unsetChatId();
    void setChatId(int32_t value);

protected:
    utility::string_t m_Value;
        utility::string_t m_Country;
        int32_t m_ChatId;
    bool m_ChatIdIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_UpdateSenderSettingInputObject_H_ */
