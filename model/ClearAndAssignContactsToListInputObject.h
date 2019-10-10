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
 * ClearAndAssignContactsToListInputObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_ClearAndAssignContactsToListInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_ClearAndAssignContactsToListInputObject_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ClearAndAssignContactsToListInputObject
    : public ModelBase
{
public:
    ClearAndAssignContactsToListInputObject();
    virtual ~ClearAndAssignContactsToListInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ClearAndAssignContactsToListInputObject members

    /// <summary>
    /// Contact ID(s), separated by comma or &#39;all&#39; to add all contacts belonging to the current user
    /// </summary>
    utility::string_t getContacts() const;
        void setContacts(utility::string_t value);

protected:
    utility::string_t m_Contacts;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_ClearAndAssignContactsToListInputObject_H_ */
