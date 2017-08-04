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
 * Organisations.h
 * 
 * 
 */

#ifndef Organisations_H_
#define Organisations_H_

#include <QJsonObject>


#include "Organisation.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class Organisations: public SWGObject {
public:
    Organisations();
    Organisations(QString* json);
    virtual ~Organisations();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    Organisations* fromJson(QString &jsonString);


private:
};

}

#endif /* Organisations_H_ */