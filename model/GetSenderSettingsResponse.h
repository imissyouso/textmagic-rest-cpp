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
 * GetSenderSettingsResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_GetSenderSettingsResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_GetSenderSettingsResponse_H_


#include "../ModelBase.h"

#include "SenderSettingsItem.h"
#include <vector>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GetSenderSettingsResponse
    : public ModelBase
{
public:
    GetSenderSettingsResponse();
    virtual ~GetSenderSettingsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetSenderSettingsResponse members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SenderSettingsItem>>& getUser();
        void setUser(std::vector<std::shared_ptr<SenderSettingsItem>> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SenderSettingsItem>>& getSpecial();
        void setSpecial(std::vector<std::shared_ptr<SenderSettingsItem>> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SenderSettingsItem>>& getOther();
        void setOther(std::vector<std::shared_ptr<SenderSettingsItem>> value);

protected:
    std::vector<std::shared_ptr<SenderSettingsItem>> m_User;
        std::vector<std::shared_ptr<SenderSettingsItem>> m_Special;
        std::vector<std::shared_ptr<SenderSettingsItem>> m_Other;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_GetSenderSettingsResponse_H_ */
