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
 * BranchImplpermissions.h
 *
 * 
 */

#ifndef BranchImplpermissions_H_
#define BranchImplpermissions_H_


#include "ModelBase.h"

#include <string>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  BranchImplpermissions
    : public ModelBase
{
public:
    BranchImplpermissions();
    virtual ~BranchImplpermissions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// BranchImplpermissions members

    /// <summary>
    /// 
    /// </summary>
    bool getCreate() const;
    void setCreate(bool value);
    bool createIsSet() const;
    void unsetCreate();
    /// <summary>
    /// 
    /// </summary>
    bool getRead() const;
    void setRead(bool value);
    bool readIsSet() const;
    void unsetRead();
    /// <summary>
    /// 
    /// </summary>
    bool getStart() const;
    void setStart(bool value);
    bool startIsSet() const;
    void unsetStart();
    /// <summary>
    /// 
    /// </summary>
    bool getStop() const;
    void setStop(bool value);
    bool stopIsSet() const;
    void unsetStop();
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    bool classIsSet() const;
    void unset_class();

protected:
    bool m_Create;
    bool m_CreateIsSet;
    bool m_Read;
    bool m_ReadIsSet;
    bool m_Start;
    bool m_StartIsSet;
    bool m_Stop;
    bool m_StopIsSet;
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* BranchImplpermissions_H_ */
