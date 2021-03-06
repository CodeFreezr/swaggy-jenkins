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



#include "ResponseTimeMonitorData.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace io {
namespace swagger {
namespace server {
namespace model {

ResponseTimeMonitorData::ResponseTimeMonitorData()
{
    m__class = "";
    m_Timestamp = 0;
    m_Average = 0;
    
}

ResponseTimeMonitorData::~ResponseTimeMonitorData()
{
}

std::string ResponseTimeMonitorData::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	pt.put("Timestamp", m_Timestamp);
	pt.put("Average", m_Average);
	write_json(ss, pt, false);
	return ss.str();
}

void ResponseTimeMonitorData::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
	m_Timestamp = pt.get("Timestamp", 0);
	m_Average = pt.get("Average", 0);
}

std::string ResponseTimeMonitorData::getClass() const
{
    return m__class;
}
void ResponseTimeMonitorData::setClass(std::string value)
{
    m__class = value;
}
int32_t ResponseTimeMonitorData::getTimestamp() const
{
    return m_Timestamp;
}
void ResponseTimeMonitorData::setTimestamp(int32_t value)
{
    m_Timestamp = value;
}
int32_t ResponseTimeMonitorData::getAverage() const
{
    return m_Average;
}
void ResponseTimeMonitorData::setAverage(int32_t value)
{
    m_Average = value;
}

}
}
}
}

