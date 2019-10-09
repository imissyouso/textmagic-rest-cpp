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
 * DeleteContacsFromListObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_DeleteContacsFromListObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_DeleteContacsFromListObject_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  DeleteContacsFromListObject
    : public ModelBase
{
public:
    DeleteContacsFromListObject();
    virtual ~DeleteContacsFromListObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DeleteContacsFromListObject members

    /// <summary>
    /// Comma-separated array of [Contacts](http://docs.textmagictesting.com/#tag/Contacts) IDs. 
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

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_DeleteContacsFromListObject_H_ */
