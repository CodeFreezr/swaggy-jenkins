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


#include "GithubRepositories.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

GithubRepositories::GithubRepositories(QString* json) {
    init();
    this->fromJson(*json);
}

GithubRepositories::GithubRepositories() {
    init();
}

GithubRepositories::~GithubRepositories() {
    this->cleanup();
}

void
GithubRepositories::init() {
    _class = new QString("");
    _links = new GithubRepositorieslinks();
    items = new QList<GithubRepository*>();
    last_page = 0;
    next_page = 0;
    page_size = 0;
}

void
GithubRepositories::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(_links != nullptr) {
        delete _links;
    }

    if(items != nullptr) {
        QList<GithubRepository*>* arr = items;
        foreach(GithubRepository* o, *arr) {
            delete o;
        }
        delete items;
    }



}

GithubRepositories*
GithubRepositories::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
GithubRepositories::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    ::Swagger::setValue(&_links, pJson["_links"], "GithubRepositorieslinks", "GithubRepositorieslinks");
    
    ::Swagger::setValue(&items, pJson["items"], "QList", "GithubRepository");
    
    ::Swagger::setValue(&last_page, pJson["lastPage"], "qint32", "");
    ::Swagger::setValue(&next_page, pJson["nextPage"], "qint32", "");
    ::Swagger::setValue(&page_size, pJson["pageSize"], "qint32", "");
}

QString
GithubRepositories::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
GithubRepositories::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    toJsonValue(QString("_links"), _links, obj, QString("GithubRepositorieslinks"));

    QJsonArray itemsJsonArray;
    toJsonArray((QList<void*>*)items, &itemsJsonArray, "items", "GithubRepository");
    obj->insert("items", itemsJsonArray);

    obj->insert("lastPage", QJsonValue(last_page));

    obj->insert("nextPage", QJsonValue(next_page));

    obj->insert("pageSize", QJsonValue(page_size));

    return obj;
}

QString*
GithubRepositories::getClass() {
    return _class;
}
void
GithubRepositories::setClass(QString* _class) {
    this->_class = _class;
}

GithubRepositorieslinks*
GithubRepositories::getLinks() {
    return _links;
}
void
GithubRepositories::setLinks(GithubRepositorieslinks* _links) {
    this->_links = _links;
}

QList<GithubRepository*>*
GithubRepositories::getItems() {
    return items;
}
void
GithubRepositories::setItems(QList<GithubRepository*>* items) {
    this->items = items;
}

qint32
GithubRepositories::getLastPage() {
    return last_page;
}
void
GithubRepositories::setLastPage(qint32 last_page) {
    this->last_page = last_page;
}

qint32
GithubRepositories::getNextPage() {
    return next_page;
}
void
GithubRepositories::setNextPage(qint32 next_page) {
    this->next_page = next_page;
}

qint32
GithubRepositories::getPageSize() {
    return page_size;
}
void
GithubRepositories::setPageSize(qint32 page_size) {
    this->page_size = page_size;
}


}
