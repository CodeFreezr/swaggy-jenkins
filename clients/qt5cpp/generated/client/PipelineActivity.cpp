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


#include "PipelineActivity.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

PipelineActivity::PipelineActivity(QString* json) {
    init();
    this->fromJson(*json);
}

PipelineActivity::PipelineActivity() {
    init();
}

PipelineActivity::~PipelineActivity() {
    this->cleanup();
}

void
PipelineActivity::init() {
    _class = new QString("");
    artifacts = new QList<PipelineActivityartifacts*>();
    duration_in_millis = 0;
    estimated_duration_in_millis = 0;
    en_queue_time = new QString("");
    end_time = new QString("");
    id = new QString("");
    organization = new QString("");
    pipeline = new QString("");
    result = new QString("");
    run_summary = new QString("");
    start_time = new QString("");
    state = new QString("");
    type = new QString("");
    commit_id = new QString("");
}

void
PipelineActivity::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(artifacts != nullptr) {
        QList<PipelineActivityartifacts*>* arr = artifacts;
        foreach(PipelineActivityartifacts* o, *arr) {
            delete o;
        }
        delete artifacts;
    }



    if(en_queue_time != nullptr) {
        delete en_queue_time;
    }

    if(end_time != nullptr) {
        delete end_time;
    }

    if(id != nullptr) {
        delete id;
    }

    if(organization != nullptr) {
        delete organization;
    }

    if(pipeline != nullptr) {
        delete pipeline;
    }

    if(result != nullptr) {
        delete result;
    }

    if(run_summary != nullptr) {
        delete run_summary;
    }

    if(start_time != nullptr) {
        delete start_time;
    }

    if(state != nullptr) {
        delete state;
    }

    if(type != nullptr) {
        delete type;
    }

    if(commit_id != nullptr) {
        delete commit_id;
    }
}

PipelineActivity*
PipelineActivity::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
PipelineActivity::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::Swagger::setValue(&artifacts, pJson["artifacts"], "QList", "PipelineActivityartifacts");
    
    ::Swagger::setValue(&duration_in_millis, pJson["durationInMillis"], "qint32", "");
    ::Swagger::setValue(&estimated_duration_in_millis, pJson["estimatedDurationInMillis"], "qint32", "");
    ::Swagger::setValue(&en_queue_time, pJson["enQueueTime"], "QString", "QString");
    ::Swagger::setValue(&end_time, pJson["endTime"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    ::Swagger::setValue(&organization, pJson["organization"], "QString", "QString");
    ::Swagger::setValue(&pipeline, pJson["pipeline"], "QString", "QString");
    ::Swagger::setValue(&result, pJson["result"], "QString", "QString");
    ::Swagger::setValue(&run_summary, pJson["runSummary"], "QString", "QString");
    ::Swagger::setValue(&start_time, pJson["startTime"], "QString", "QString");
    ::Swagger::setValue(&state, pJson["state"], "QString", "QString");
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
    ::Swagger::setValue(&commit_id, pJson["commitId"], "QString", "QString");
}

QString
PipelineActivity::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
PipelineActivity::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    QJsonArray artifactsJsonArray;
    toJsonArray((QList<void*>*)artifacts, &artifactsJsonArray, "artifacts", "PipelineActivityartifacts");
    obj->insert("artifacts", artifactsJsonArray);

    obj->insert("durationInMillis", QJsonValue(duration_in_millis));

    obj->insert("estimatedDurationInMillis", QJsonValue(estimated_duration_in_millis));

    toJsonValue(QString("enQueueTime"), en_queue_time, obj, QString("QString"));

    toJsonValue(QString("endTime"), end_time, obj, QString("QString"));

    toJsonValue(QString("id"), id, obj, QString("QString"));

    toJsonValue(QString("organization"), organization, obj, QString("QString"));

    toJsonValue(QString("pipeline"), pipeline, obj, QString("QString"));

    toJsonValue(QString("result"), result, obj, QString("QString"));

    toJsonValue(QString("runSummary"), run_summary, obj, QString("QString"));

    toJsonValue(QString("startTime"), start_time, obj, QString("QString"));

    toJsonValue(QString("state"), state, obj, QString("QString"));

    toJsonValue(QString("type"), type, obj, QString("QString"));

    toJsonValue(QString("commitId"), commit_id, obj, QString("QString"));

    return obj;
}

QString*
PipelineActivity::getClass() {
    return _class;
}
void
PipelineActivity::setClass(QString* _class) {
    this->_class = _class;
}

QList<PipelineActivityartifacts*>*
PipelineActivity::getArtifacts() {
    return artifacts;
}
void
PipelineActivity::setArtifacts(QList<PipelineActivityartifacts*>* artifacts) {
    this->artifacts = artifacts;
}

qint32
PipelineActivity::getDurationInMillis() {
    return duration_in_millis;
}
void
PipelineActivity::setDurationInMillis(qint32 duration_in_millis) {
    this->duration_in_millis = duration_in_millis;
}

qint32
PipelineActivity::getEstimatedDurationInMillis() {
    return estimated_duration_in_millis;
}
void
PipelineActivity::setEstimatedDurationInMillis(qint32 estimated_duration_in_millis) {
    this->estimated_duration_in_millis = estimated_duration_in_millis;
}

QString*
PipelineActivity::getEnQueueTime() {
    return en_queue_time;
}
void
PipelineActivity::setEnQueueTime(QString* en_queue_time) {
    this->en_queue_time = en_queue_time;
}

QString*
PipelineActivity::getEndTime() {
    return end_time;
}
void
PipelineActivity::setEndTime(QString* end_time) {
    this->end_time = end_time;
}

QString*
PipelineActivity::getId() {
    return id;
}
void
PipelineActivity::setId(QString* id) {
    this->id = id;
}

QString*
PipelineActivity::getOrganization() {
    return organization;
}
void
PipelineActivity::setOrganization(QString* organization) {
    this->organization = organization;
}

QString*
PipelineActivity::getPipeline() {
    return pipeline;
}
void
PipelineActivity::setPipeline(QString* pipeline) {
    this->pipeline = pipeline;
}

QString*
PipelineActivity::getResult() {
    return result;
}
void
PipelineActivity::setResult(QString* result) {
    this->result = result;
}

QString*
PipelineActivity::getRunSummary() {
    return run_summary;
}
void
PipelineActivity::setRunSummary(QString* run_summary) {
    this->run_summary = run_summary;
}

QString*
PipelineActivity::getStartTime() {
    return start_time;
}
void
PipelineActivity::setStartTime(QString* start_time) {
    this->start_time = start_time;
}

QString*
PipelineActivity::getState() {
    return state;
}
void
PipelineActivity::setState(QString* state) {
    this->state = state;
}

QString*
PipelineActivity::getType() {
    return type;
}
void
PipelineActivity::setType(QString* type) {
    this->type = type;
}

QString*
PipelineActivity::getCommitId() {
    return commit_id;
}
void
PipelineActivity::setCommitId(QString* commit_id) {
    this->commit_id = commit_id;
}


}

