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
 * BadRequestResponse.h
 *
 * Returned when the form has errors
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_BadRequestResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_BadRequestResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "BadRequestResponse_errors.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// Returned when the form has errors
/// </summary>
class  BadRequestResponse
    : public ModelBase
{
public:
    BadRequestResponse();
    virtual ~BadRequestResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BadRequestResponse members

    /// <summary>
    /// HTTP error code.
    /// </summary>
    int32_t getCode() const;
    bool codeIsSet() const;
    void unsetCode();
    void setCode(int32_t value);
    /// <summary>
    /// Brief error message. You could display this message to your user or save it in a log.
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();
    void setMessage(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BadRequestResponse_errors> getErrors() const;
    bool errorsIsSet() const;
    void unsetErrors();
    void setErrors(std::shared_ptr<BadRequestResponse_errors> value);

protected:
    int32_t m_Code;
    bool m_CodeIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
    std::shared_ptr<BadRequestResponse_errors> m_Errors;
    bool m_ErrorsIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_BadRequestResponse_H_ */
