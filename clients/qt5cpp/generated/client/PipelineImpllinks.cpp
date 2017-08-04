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


#include "PipelineImpllinks.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

PipelineImpllinks::PipelineImpllinks(QString* json) {
    init();
    this->fromJson(*json);
}

PipelineImpllinks::PipelineImpllinks() {
    init();
}

PipelineImpllinks::~PipelineImpllinks() {
    this->cleanup();
}

void
PipelineImpllinks::init() {
    runs = new Link();
    self = new Link();
    queue = new Link();
    actions = new Link();
    _class = new QString("");
}

void
PipelineImpllinks::cleanup() {
    
    if(runs != nullptr) {
        delete runs;
    }

    if(self != nullptr) {
        delete self;
    }

    if(queue != nullptr) {
        delete queue;
    }

    if(actions != nullptr) {
        delete actions;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

PipelineImpllinks*
PipelineImpllinks::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
PipelineImpllinks::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&runs, pJson["runs"], "Link", "Link");
    ::Swagger::setValue(&self, pJson["self"], "Link", "Link");
    ::Swagger::setValue(&queue, pJson["queue"], "Link", "Link");
    ::Swagger::setValue(&actions, pJson["actions"], "Link", "Link");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
PipelineImpllinks::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
PipelineImpllinks::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("runs"), runs, obj, QString("Link"));

    toJsonValue(QString("self"), self, obj, QString("Link"));

    toJsonValue(QString("queue"), queue, obj, QString("Link"));

    toJsonValue(QString("actions"), actions, obj, QString("Link"));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

Link*
PipelineImpllinks::getRuns() {
    return runs;
}
void
PipelineImpllinks::setRuns(Link* runs) {
    this->runs = runs;
}

Link*
PipelineImpllinks::getSelf() {
    return self;
}
void
PipelineImpllinks::setSelf(Link* self) {
    this->self = self;
}

Link*
PipelineImpllinks::getQueue() {
    return queue;
}
void
PipelineImpllinks::setQueue(Link* queue) {
    this->queue = queue;
}

Link*
PipelineImpllinks::getActions() {
    return actions;
}
void
PipelineImpllinks::setActions(Link* actions) {
    this->actions = actions;
}

QString*
PipelineImpllinks::getClass() {
    return _class;
}
void
PipelineImpllinks::setClass(QString* _class) {
    this->_class = _class;
}


}
