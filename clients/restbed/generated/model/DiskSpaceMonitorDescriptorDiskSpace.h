/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * DiskSpaceMonitorDescriptorDiskSpace.h
 *
 * 
 */

#ifndef DiskSpaceMonitorDescriptorDiskSpace_H_
#define DiskSpaceMonitorDescriptorDiskSpace_H_



#include <string>
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  DiskSpaceMonitorDescriptorDiskSpace
{
public:
    DiskSpaceMonitorDescriptorDiskSpace();
    virtual ~DiskSpaceMonitorDescriptorDiskSpace();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// DiskSpaceMonitorDescriptorDiskSpace members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getTimestamp() const;
    void setTimestamp(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getPath() const;
    void setPath(std::string value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getSize() const;
    void setSize(int32_t value);

protected:
    std::string m__class;
    int32_t m_Timestamp;
    std::string m_Path;
    int32_t m_Size;
};

}
}
}
}

#endif /* DiskSpaceMonitorDescriptorDiskSpace_H_ */
