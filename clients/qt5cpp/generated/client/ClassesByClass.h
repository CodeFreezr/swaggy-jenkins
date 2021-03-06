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
 * ClassesByClass.h
 * 
 * 
 */

#ifndef ClassesByClass_H_
#define ClassesByClass_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class ClassesByClass: public SWGObject {
public:
    ClassesByClass();
    ClassesByClass(QString* json);
    virtual ~ClassesByClass();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    ClassesByClass* fromJson(QString &jsonString);

    QList<QString*>* getClasses();
    void setClasses(QList<QString*>* classes);

    QString* getClass();
    void setClass(QString* _class);


private:
    QList<QString*>* classes;
    QString* _class;
};

}

#endif /* ClassesByClass_H_ */
