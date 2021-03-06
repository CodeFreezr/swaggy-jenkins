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


#include "HudsonMasterComputerexecutors.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

HudsonMasterComputerexecutors::HudsonMasterComputerexecutors(QString* json) {
    init();
    this->fromJson(*json);
}

HudsonMasterComputerexecutors::HudsonMasterComputerexecutors() {
    init();
}

HudsonMasterComputerexecutors::~HudsonMasterComputerexecutors() {
    this->cleanup();
}

void
HudsonMasterComputerexecutors::init() {
    current_executable = new FreeStyleBuild();
    idle = false;
    likely_stuck = false;
    number = 0;
    progress = 0;
    _class = new QString("");
}

void
HudsonMasterComputerexecutors::cleanup() {
    
    if(current_executable != nullptr) {
        delete current_executable;
    }





    if(_class != nullptr) {
        delete _class;
    }
}

HudsonMasterComputerexecutors*
HudsonMasterComputerexecutors::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
HudsonMasterComputerexecutors::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&current_executable, pJson["currentExecutable"], "FreeStyleBuild", "FreeStyleBuild");
    ::Swagger::setValue(&idle, pJson["idle"], "bool", "");
    ::Swagger::setValue(&likely_stuck, pJson["likelyStuck"], "bool", "");
    ::Swagger::setValue(&number, pJson["number"], "qint32", "");
    ::Swagger::setValue(&progress, pJson["progress"], "qint32", "");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
HudsonMasterComputerexecutors::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
HudsonMasterComputerexecutors::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("currentExecutable"), current_executable, obj, QString("FreeStyleBuild"));

    obj->insert("idle", QJsonValue(idle));

    obj->insert("likelyStuck", QJsonValue(likely_stuck));

    obj->insert("number", QJsonValue(number));

    obj->insert("progress", QJsonValue(progress));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

FreeStyleBuild*
HudsonMasterComputerexecutors::getCurrentExecutable() {
    return current_executable;
}
void
HudsonMasterComputerexecutors::setCurrentExecutable(FreeStyleBuild* current_executable) {
    this->current_executable = current_executable;
}

bool
HudsonMasterComputerexecutors::getIdle() {
    return idle;
}
void
HudsonMasterComputerexecutors::setIdle(bool idle) {
    this->idle = idle;
}

bool
HudsonMasterComputerexecutors::getLikelyStuck() {
    return likely_stuck;
}
void
HudsonMasterComputerexecutors::setLikelyStuck(bool likely_stuck) {
    this->likely_stuck = likely_stuck;
}

qint32
HudsonMasterComputerexecutors::getNumber() {
    return number;
}
void
HudsonMasterComputerexecutors::setNumber(qint32 number) {
    this->number = number;
}

qint32
HudsonMasterComputerexecutors::getProgress() {
    return progress;
}
void
HudsonMasterComputerexecutors::setProgress(qint32 progress) {
    this->progress = progress;
}

QString*
HudsonMasterComputerexecutors::getClass() {
    return _class;
}
void
HudsonMasterComputerexecutors::setClass(QString* _class) {
    this->_class = _class;
}


}

