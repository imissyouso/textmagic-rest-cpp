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
 * DoEmailLookupResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_DoEmailLookupResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_DoEmailLookupResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  DoEmailLookupResponse
    : public ModelBase
{
public:
    DoEmailLookupResponse();
    virtual ~DoEmailLookupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DoEmailLookupResponse members

    /// <summary>
    /// The email address passed to the call.
    /// </summary>
    utility::string_t getAddress() const;
        void setAddress(utility::string_t value);
    /// <summary>
    /// The email is &#x60;valid&#x60; or &#x60;invalid&#x60;.
    /// </summary>
    utility::string_t getStatus() const;
        void setStatus(utility::string_t value);
    /// <summary>
    /// The delivery status of the email address is&#x60;deliverable&#x60;, &#x60;undeliverable&#x60;  or &#x60;unknown&#x60;.
    /// </summary>
    utility::string_t getDeliverability() const;
        void setDeliverability(utility::string_t value);
    /// <summary>
    /// The reason why the checked email is invalid/undeliverable.
    /// </summary>
    utility::string_t getReason() const;
        void setReason(utility::string_t value);
    /// <summary>
    /// The risk score of the email is&#x60;high&#x60;, &#x60;medium&#x60;, &#x60;low&#x60; or &#x60;null&#x60;.
    /// </summary>
    utility::string_t getRisk() const;
        void setRisk(utility::string_t value);
    /// <summary>
    /// The email address type (domain) is &#x60;free&#x60; or &#x60;corporate&#x60;.
    /// </summary>
    utility::string_t getAddressType() const;
        void setAddressType(utility::string_t value);
    /// <summary>
    /// This is be &#x60;true&#x60; if the domain is in the list of disposable email addresses, otherwise returns as &#x60;false&#x60;.
    /// </summary>
    bool isIsDisposableAddress() const;
        void setIsDisposableAddress(bool value);
    /// <summary>
    /// Null if nothing is suggested, however, if there is a potential typo in the email address, the closest suggestion is provided.
    /// </summary>
    utility::string_t getSuggestion() const;
        void setSuggestion(utility::string_t value);
    /// <summary>
    /// Checks the mailbox part of the email whether it matches a specific role type (‘admin’, ‘sales’, ‘webmaster’)
    /// </summary>
    utility::string_t getEmailRole() const;
        void setEmailRole(utility::string_t value);
    /// <summary>
    /// The local part of the email address.
    /// </summary>
    utility::string_t getLocalPart() const;
        void setLocalPart(utility::string_t value);
    /// <summary>
    /// The domain part of the email address.
    /// </summary>
    utility::string_t getDomainPart() const;
        void setDomainPart(utility::string_t value);
    /// <summary>
    /// Email exchange server domain name (MX record value).
    /// </summary>
    utility::string_t getExchange() const;
        void setExchange(utility::string_t value);
    /// <summary>
    /// MX record preference.
    /// </summary>
    int32_t getPreference() const;
        void setPreference(int32_t value);
    /// <summary>
    /// &#x60;true&#x60; if the email address exists in TextMagic whitelist. 
    /// </summary>
    bool isIsInWhiteList() const;
        void setIsInWhiteList(bool value);
    /// <summary>
    /// &#x60;true&#x60; if the email address exists in TextMagic blacklist. 
    /// </summary>
    bool isIsInBlackList() const;
        void setIsInBlackList(bool value);
    /// <summary>
    /// &#x60;true&#x60; if the email address domain has an MX record. 
    /// </summary>
    bool isHasMx() const;
        void setHasMx(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool isHasAa() const;
        void setHasAa(bool value);
    /// <summary>
    /// &#x60;true&#x60; if the email address domain has an AAAA record (IPv6). 
    /// </summary>
    bool isHasAaaa() const;
        void setHasAaaa(bool value);

protected:
    utility::string_t m_Address;
        utility::string_t m_Status;
        utility::string_t m_Deliverability;
        utility::string_t m_Reason;
        utility::string_t m_Risk;
        utility::string_t m_AddressType;
        bool m_IsDisposableAddress;
        utility::string_t m_Suggestion;
        utility::string_t m_EmailRole;
        utility::string_t m_LocalPart;
        utility::string_t m_DomainPart;
        utility::string_t m_Exchange;
        int32_t m_Preference;
        bool m_IsInWhiteList;
        bool m_IsInBlackList;
        bool m_HasMx;
        bool m_HasAa;
        bool m_HasAaaa;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_DoEmailLookupResponse_H_ */
