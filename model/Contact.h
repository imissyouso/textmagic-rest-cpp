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
 * Contact.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_Contact_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_Contact_H_


#include "../ModelBase.h"

#include "Country.h"
#include "List.h"
#include "ContactCustomField.h"
#include <cpprest/details/basic_types.h>
#include "ContactImage.h"
#include "ContactNote.h"
#include <vector>
#include "User.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Contact
    : public ModelBase
{
public:
    Contact();
    virtual ~Contact();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Contact members

    /// <summary>
    /// Contact ID.
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    bool isFavorited() const;
        void setFavorited(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool isBlocked() const;
        void setBlocked(bool value);
    /// <summary>
    /// Contact first name.
    /// </summary>
    utility::string_t getFirstName() const;
        void setFirstName(utility::string_t value);
    /// <summary>
    /// Contact last name.
    /// </summary>
    utility::string_t getLastName() const;
        void setLastName(utility::string_t value);
    /// <summary>
    /// Company name.
    /// </summary>
    utility::string_t getCompanyName() const;
        void setCompanyName(utility::string_t value);
    /// <summary>
    /// Phone number in [E.164 format](https://en.wikipedia.org/wiki/E.164).
    /// </summary>
    utility::string_t getPhone() const;
        void setPhone(utility::string_t value);
    /// <summary>
    /// Contact email address.
    /// </summary>
    utility::string_t getEmail() const;
        void setEmail(utility::string_t value);
    /// <summary>
    /// Contact country.
    /// </summary>
    std::shared_ptr<Country> getCountry() const;
        void setCountry(std::shared_ptr<Country> value);
    /// <summary>
    /// See [Custom Fields](http://docs.textmagictesting.com/#tag/Custom-Fields) section.
    /// </summary>
    std::vector<std::shared_ptr<ContactCustomField>>& getCustomFields();
        void setCustomFields(std::vector<std::shared_ptr<ContactCustomField>> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<User> getUser() const;
        void setUser(std::shared_ptr<User> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<List>>& getLists();
        void setLists(std::vector<std::shared_ptr<List>> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPhoneType() const;
        void setPhoneType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ContactImage> getAvatar() const;
        void setAvatar(std::shared_ptr<ContactImage> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ContactNote>>& getNotes();
        void setNotes(std::vector<std::shared_ptr<ContactNote>> value);

protected:
    int32_t m_Id;
        bool m_Favorited;
        bool m_Blocked;
        utility::string_t m_FirstName;
        utility::string_t m_LastName;
        utility::string_t m_CompanyName;
        utility::string_t m_Phone;
        utility::string_t m_Email;
        std::shared_ptr<Country> m_Country;
        std::vector<std::shared_ptr<ContactCustomField>> m_CustomFields;
        std::shared_ptr<User> m_User;
        std::vector<std::shared_ptr<List>> m_Lists;
        utility::string_t m_PhoneType;
        std::shared_ptr<ContactImage> m_Avatar;
        std::vector<std::shared_ptr<ContactNote>> m_Notes;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_Contact_H_ */
