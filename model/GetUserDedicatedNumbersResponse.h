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
 * GetUserDedicatedNumbersResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_GetUserDedicatedNumbersResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_GetUserDedicatedNumbersResponse_H_


#include "../ModelBase.h"

#include "UsersInbound.h"
#include <vector>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GetUserDedicatedNumbersResponse
    : public ModelBase
{
public:
    GetUserDedicatedNumbersResponse();
    virtual ~GetUserDedicatedNumbersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetUserDedicatedNumbersResponse members

    /// <summary>
    /// 
    /// </summary>
    int32_t getPage() const;
        void setPage(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getPageCount() const;
        void setPageCount(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getLimit() const;
        void setLimit(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<UsersInbound>>& getResources();
        void setResources(std::vector<std::shared_ptr<UsersInbound>> value);

protected:
    int32_t m_Page;
        int32_t m_PageCount;
        int32_t m_Limit;
        std::vector<std::shared_ptr<UsersInbound>> m_Resources;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_GetUserDedicatedNumbersResponse_H_ */
