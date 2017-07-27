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


#include "SWGGetPipelineBranchesitem_pullRequest__links.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGGetPipelineBranchesitem_pullRequest__links::SWGGetPipelineBranchesitem_pullRequest__links(QString* json) {
    init();
    this->fromJson(*json);
}

SWGGetPipelineBranchesitem_pullRequest__links::SWGGetPipelineBranchesitem_pullRequest__links() {
    init();
}

SWGGetPipelineBranchesitem_pullRequest__links::~SWGGetPipelineBranchesitem_pullRequest__links() {
    this->cleanup();
}

void
SWGGetPipelineBranchesitem_pullRequest__links::init() {
    self = new QString("");
    _class = new QString("");
}

void
SWGGetPipelineBranchesitem_pullRequest__links::cleanup() {
    
    if(self != nullptr) {
        delete self;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

SWGGetPipelineBranchesitem_pullRequest__links*
SWGGetPipelineBranchesitem_pullRequest__links::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGGetPipelineBranchesitem_pullRequest__links::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&self, pJson["self"], "QString", "QString");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
SWGGetPipelineBranchesitem_pullRequest__links::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGGetPipelineBranchesitem_pullRequest__links::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("self"), self, obj, QString("QString"));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

QString*
SWGGetPipelineBranchesitem_pullRequest__links::getSelf() {
    return self;
}
void
SWGGetPipelineBranchesitem_pullRequest__links::setSelf(QString* self) {
    this->self = self;
}

QString*
SWGGetPipelineBranchesitem_pullRequest__links::getClass() {
    return _class;
}
void
SWGGetPipelineBranchesitem_pullRequest__links::setClass(QString* _class) {
    this->_class = _class;
}


}
