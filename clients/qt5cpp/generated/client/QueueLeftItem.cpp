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


#include "QueueLeftItem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

QueueLeftItem::QueueLeftItem(QString* json) {
    init();
    this->fromJson(*json);
}

QueueLeftItem::QueueLeftItem() {
    init();
}

QueueLeftItem::~QueueLeftItem() {
    this->cleanup();
}

void
QueueLeftItem::init() {
    _class = new QString("");
    actions = new QList<CauseAction*>();
    blocked = false;
    buildable = false;
    id = 0;
    in_queue_since = 0;
    params = new QString("");
    stuck = false;
    task = new FreeStyleProject();
    url = new QString("");
    why = new QString("");
    cancelled = false;
    executable = new FreeStyleBuild();
}

void
QueueLeftItem::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(actions != nullptr) {
        QList<CauseAction*>* arr = actions;
        foreach(CauseAction* o, *arr) {
            delete o;
        }
        delete actions;
    }





    if(params != nullptr) {
        delete params;
    }


    if(task != nullptr) {
        delete task;
    }

    if(url != nullptr) {
        delete url;
    }

    if(why != nullptr) {
        delete why;
    }


    if(executable != nullptr) {
        delete executable;
    }
}

QueueLeftItem*
QueueLeftItem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
QueueLeftItem::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::Swagger::setValue(&actions, pJson["actions"], "QList", "CauseAction");
    
    ::Swagger::setValue(&blocked, pJson["blocked"], "bool", "");
    ::Swagger::setValue(&buildable, pJson["buildable"], "bool", "");
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    ::Swagger::setValue(&in_queue_since, pJson["inQueueSince"], "qint32", "");
    ::Swagger::setValue(&params, pJson["params"], "QString", "QString");
    ::Swagger::setValue(&stuck, pJson["stuck"], "bool", "");
    ::Swagger::setValue(&task, pJson["task"], "FreeStyleProject", "FreeStyleProject");
    ::Swagger::setValue(&url, pJson["url"], "QString", "QString");
    ::Swagger::setValue(&why, pJson["why"], "QString", "QString");
    ::Swagger::setValue(&cancelled, pJson["cancelled"], "bool", "");
    ::Swagger::setValue(&executable, pJson["executable"], "FreeStyleBuild", "FreeStyleBuild");
}

QString
QueueLeftItem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
QueueLeftItem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    QJsonArray actionsJsonArray;
    toJsonArray((QList<void*>*)actions, &actionsJsonArray, "actions", "CauseAction");
    obj->insert("actions", actionsJsonArray);

    obj->insert("blocked", QJsonValue(blocked));

    obj->insert("buildable", QJsonValue(buildable));

    obj->insert("id", QJsonValue(id));

    obj->insert("inQueueSince", QJsonValue(in_queue_since));

    toJsonValue(QString("params"), params, obj, QString("QString"));

    obj->insert("stuck", QJsonValue(stuck));

    toJsonValue(QString("task"), task, obj, QString("FreeStyleProject"));

    toJsonValue(QString("url"), url, obj, QString("QString"));

    toJsonValue(QString("why"), why, obj, QString("QString"));

    obj->insert("cancelled", QJsonValue(cancelled));

    toJsonValue(QString("executable"), executable, obj, QString("FreeStyleBuild"));

    return obj;
}

QString*
QueueLeftItem::getClass() {
    return _class;
}
void
QueueLeftItem::setClass(QString* _class) {
    this->_class = _class;
}

QList<CauseAction*>*
QueueLeftItem::getActions() {
    return actions;
}
void
QueueLeftItem::setActions(QList<CauseAction*>* actions) {
    this->actions = actions;
}

bool
QueueLeftItem::getBlocked() {
    return blocked;
}
void
QueueLeftItem::setBlocked(bool blocked) {
    this->blocked = blocked;
}

bool
QueueLeftItem::getBuildable() {
    return buildable;
}
void
QueueLeftItem::setBuildable(bool buildable) {
    this->buildable = buildable;
}

qint32
QueueLeftItem::getId() {
    return id;
}
void
QueueLeftItem::setId(qint32 id) {
    this->id = id;
}

qint32
QueueLeftItem::getInQueueSince() {
    return in_queue_since;
}
void
QueueLeftItem::setInQueueSince(qint32 in_queue_since) {
    this->in_queue_since = in_queue_since;
}

QString*
QueueLeftItem::getParams() {
    return params;
}
void
QueueLeftItem::setParams(QString* params) {
    this->params = params;
}

bool
QueueLeftItem::getStuck() {
    return stuck;
}
void
QueueLeftItem::setStuck(bool stuck) {
    this->stuck = stuck;
}

FreeStyleProject*
QueueLeftItem::getTask() {
    return task;
}
void
QueueLeftItem::setTask(FreeStyleProject* task) {
    this->task = task;
}

QString*
QueueLeftItem::getUrl() {
    return url;
}
void
QueueLeftItem::setUrl(QString* url) {
    this->url = url;
}

QString*
QueueLeftItem::getWhy() {
    return why;
}
void
QueueLeftItem::setWhy(QString* why) {
    this->why = why;
}

bool
QueueLeftItem::getCancelled() {
    return cancelled;
}
void
QueueLeftItem::setCancelled(bool cancelled) {
    this->cancelled = cancelled;
}

FreeStyleBuild*
QueueLeftItem::getExecutable() {
    return executable;
}
void
QueueLeftItem::setExecutable(FreeStyleBuild* executable) {
    this->executable = executable;
}


}

