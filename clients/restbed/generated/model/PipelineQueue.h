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
 * PipelineQueue.h
 *
 * 
 */

#ifndef PipelineQueue_H_
#define PipelineQueue_H_



#include "QueueItemImpl.h"
#include <vector>
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineQueue
{
public:
    PipelineQueue();
    virtual ~PipelineQueue();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelineQueue members
    

protected:
};

}
}
}
}

#endif /* PipelineQueue_H_ */
