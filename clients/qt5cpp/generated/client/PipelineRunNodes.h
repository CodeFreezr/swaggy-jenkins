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
 * PipelineRunNodes.h
 * 
 * 
 */

#ifndef PipelineRunNodes_H_
#define PipelineRunNodes_H_

#include <QJsonObject>


#include "PipelineRunNode.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class PipelineRunNodes: public SWGObject {
public:
    PipelineRunNodes();
    PipelineRunNodes(QString* json);
    virtual ~PipelineRunNodes();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    PipelineRunNodes* fromJson(QString &jsonString);


private:
};

}

#endif /* PipelineRunNodes_H_ */