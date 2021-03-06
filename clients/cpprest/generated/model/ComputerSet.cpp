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



#include "ComputerSet.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ComputerSet::ComputerSet()
{
    m__class = U("");
    m__classIsSet = false;
    m_BusyExecutors = 0;
    m_BusyExecutorsIsSet = false;
    m_ComputerIsSet = false;
    m_DisplayName = U("");
    m_DisplayNameIsSet = false;
    m_TotalExecutors = 0;
    m_TotalExecutorsIsSet = false;
}

ComputerSet::~ComputerSet()
{
}

void ComputerSet::validate()
{
    // TODO: implement validation
}

web::json::value ComputerSet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m_BusyExecutorsIsSet)
    {
        val[U("busyExecutors")] = ModelBase::toJson(m_BusyExecutors);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Computer )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("computer")] = web::json::value::array(jsonArray);
        }
    }
    if(m_DisplayNameIsSet)
    {
        val[U("displayName")] = ModelBase::toJson(m_DisplayName);
    }
    if(m_TotalExecutorsIsSet)
    {
        val[U("totalExecutors")] = ModelBase::toJson(m_TotalExecutors);
    }

    return val;
}

void ComputerSet::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
    if(val.has_field(U("busyExecutors")))
    {
        setBusyExecutors(ModelBase::int32_tFromJson(val[U("busyExecutors")]));
    }
    {
        m_Computer.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("computer")))
        {
        for( auto& item : val[U("computer")].as_array() )
        {
            if(item.is_null())
            {
                m_Computer.push_back( std::shared_ptr<HudsonMasterComputer>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonMasterComputer> newItem(new HudsonMasterComputer());
                newItem->fromJson(item);
                m_Computer.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("displayName")))
    {
        setDisplayName(ModelBase::stringFromJson(val[U("displayName")]));
    }
    if(val.has_field(U("totalExecutors")))
    {
        setTotalExecutors(ModelBase::int32_tFromJson(val[U("totalExecutors")]));
    }
}

void ComputerSet::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
    if(m_BusyExecutorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("busyExecutors"), m_BusyExecutors));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Computer )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("computer"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_DisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("displayName"), m_DisplayName));
        
    }
    if(m_TotalExecutorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("totalExecutors"), m_TotalExecutors));
    }
}

void ComputerSet::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
    }
    if(multipart->hasContent(U("busyExecutors")))
    {
        setBusyExecutors(ModelBase::int32_tFromHttpContent(multipart->getContent(U("busyExecutors"))));
    }
    {
        m_Computer.clear();
        if(multipart->hasContent(U("computer")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("computer"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Computer.push_back( std::shared_ptr<HudsonMasterComputer>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonMasterComputer> newItem(new HudsonMasterComputer());
                newItem->fromJson(item);
                m_Computer.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("displayName")))
    {
        setDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(U("displayName"))));
    }
    if(multipart->hasContent(U("totalExecutors")))
    {
        setTotalExecutors(ModelBase::int32_tFromHttpContent(multipart->getContent(U("totalExecutors"))));
    }
}

utility::string_t ComputerSet::getClass() const
{
    return m__class;
}


void ComputerSet::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool ComputerSet::classIsSet() const
{
    return m__classIsSet;
}

void ComputerSet::unset_class()
{
    m__classIsSet = false;
}

int32_t ComputerSet::getBusyExecutors() const
{
    return m_BusyExecutors;
}


void ComputerSet::setBusyExecutors(int32_t value)
{
    m_BusyExecutors = value;
    m_BusyExecutorsIsSet = true;
}
bool ComputerSet::busyExecutorsIsSet() const
{
    return m_BusyExecutorsIsSet;
}

void ComputerSet::unsetBusyExecutors()
{
    m_BusyExecutorsIsSet = false;
}

std::vector<std::shared_ptr<HudsonMasterComputer>>& ComputerSet::getComputer()
{
    return m_Computer;
}

void ComputerSet::setComputer(std::vector<std::shared_ptr<HudsonMasterComputer>> value)
{
    m_Computer = value;
    m_ComputerIsSet = true;
}
bool ComputerSet::computerIsSet() const
{
    return m_ComputerIsSet;
}

void ComputerSet::unsetComputer()
{
    m_ComputerIsSet = false;
}

utility::string_t ComputerSet::getDisplayName() const
{
    return m_DisplayName;
}


void ComputerSet::setDisplayName(utility::string_t value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool ComputerSet::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}

void ComputerSet::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}

int32_t ComputerSet::getTotalExecutors() const
{
    return m_TotalExecutors;
}


void ComputerSet::setTotalExecutors(int32_t value)
{
    m_TotalExecutors = value;
    m_TotalExecutorsIsSet = true;
}
bool ComputerSet::totalExecutorsIsSet() const
{
    return m_TotalExecutorsIsSet;
}

void ComputerSet::unsetTotalExecutors()
{
    m_TotalExecutorsIsSet = false;
}

}
}
}
}

