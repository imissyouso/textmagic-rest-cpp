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
 * BadRequestResponse_errors.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_BadRequestResponse_errors_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_BadRequestResponse_errors_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"
#include <vector>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BadRequestResponse_errors
    : public ModelBase
{
public:
    BadRequestResponse_errors();
    virtual ~BadRequestResponse_errors();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BadRequestResponse_errors members

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getCommon();
    bool commonIsSet() const;
    void unsetCommon();
    void setCommon(std::vector<utility::string_t> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getFields() const;
    bool fieldsIsSet() const;
    void unsetFields();
    void setFields(std::shared_ptr<Object> value);

protected:
    std::vector<utility::string_t> m_Common;
    bool m_CommonIsSet;
    std::shared_ptr<Object> m_Fields;
    bool m_FieldsIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_BadRequestResponse_errors_H_ */
