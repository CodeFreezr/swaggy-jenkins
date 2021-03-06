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



#include "GithubRepositorylinks.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GithubRepositorylinks::GithubRepositorylinks()
{
    m_SelfIsSet = false;
    m__class = U("");
    m__classIsSet = false;
}

GithubRepositorylinks::~GithubRepositorylinks()
{
}

void GithubRepositorylinks::validate()
{
    // TODO: implement validation
}

web::json::value GithubRepositorylinks::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SelfIsSet)
    {
        val[U("self")] = ModelBase::toJson(m_Self);
    }
    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void GithubRepositorylinks::fromJson(web::json::value& val)
{
    if(val.has_field(U("self")))
    {
        if(!val[U("self")].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val[U("self")]);
            setSelf( newItem );
        }
    }
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
}

void GithubRepositorylinks::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_SelfIsSet)
    {
        if (m_Self.get())
        {
            m_Self->toMultipart(multipart, U("self."));
        }
        
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
}

void GithubRepositorylinks::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("self")))
    {
        if(multipart->hasContent(U("self")))
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromMultiPart(multipart, U("self."));
            setSelf( newItem );
        }
    }
    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
    }
}

std::shared_ptr<Link> GithubRepositorylinks::getSelf() const
{
    return m_Self;
}


void GithubRepositorylinks::setSelf(std::shared_ptr<Link> value)
{
    m_Self = value;
    m_SelfIsSet = true;
}
bool GithubRepositorylinks::selfIsSet() const
{
    return m_SelfIsSet;
}

void GithubRepositorylinks::unsetSelf()
{
    m_SelfIsSet = false;
}

utility::string_t GithubRepositorylinks::getClass() const
{
    return m__class;
}


void GithubRepositorylinks::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GithubRepositorylinks::classIsSet() const
{
    return m__classIsSet;
}

void GithubRepositorylinks::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

