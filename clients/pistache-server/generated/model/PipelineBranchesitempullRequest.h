/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/
/*
 * PipelineBranchesitempullRequest.h
 *
 * 
 */

#ifndef PipelineBranchesitempullRequest_H_
#define PipelineBranchesitempullRequest_H_


#include "ModelBase.h"

#include <string>
#include "PipelineBranchesitempullRequestlinks.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineBranchesitempullRequest
    : public ModelBase
{
public:
    PipelineBranchesitempullRequest();
    virtual ~PipelineBranchesitempullRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PipelineBranchesitempullRequest members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PipelineBranchesitempullRequestlinks> getLinks() const;
    void setLinks(std::shared_ptr<PipelineBranchesitempullRequestlinks> value);
    bool linksIsSet() const;
    void unset_links();
    /// <summary>
    /// 
    /// </summary>
    std::string getAuthor() const;
    void setAuthor(std::string value);
    bool authorIsSet() const;
    void unsetAuthor();
    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    std::string getTitle() const;
    void setTitle(std::string value);
    bool titleIsSet() const;
    void unsetTitle();
    /// <summary>
    /// 
    /// </summary>
    std::string getUrl() const;
    void setUrl(std::string value);
    bool urlIsSet() const;
    void unsetUrl();
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    bool classIsSet() const;
    void unset_class();

protected:
    std::shared_ptr<PipelineBranchesitempullRequestlinks> m__links;
    bool m__linksIsSet;
    std::string m_Author;
    bool m_AuthorIsSet;
    std::string m_Id;
    bool m_IdIsSet;
    std::string m_Title;
    bool m_TitleIsSet;
    std::string m_Url;
    bool m_UrlIsSet;
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* PipelineBranchesitempullRequest_H_ */