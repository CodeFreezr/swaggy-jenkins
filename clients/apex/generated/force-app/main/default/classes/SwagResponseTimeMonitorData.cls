/*
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

/**
 * SwagResponseTimeMonitorData
 */
public class SwagResponseTimeMonitorData implements Swagger.MappedProperties {
    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get timestamp
     * @return timestamp
     */
    public Integer timestamp { get; set; }

    /**
     * Get average
     * @return average
     */
    public Integer average { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static SwagResponseTimeMonitorData getExample() {
        SwagResponseTimeMonitorData responseTimeMonitorData = new SwagResponseTimeMonitorData();
        responseTimeMonitorData.propertyClass = 'aeiou';
        responseTimeMonitorData.timestamp = 123;
        responseTimeMonitorData.average = 123;
        return responseTimeMonitorData;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagResponseTimeMonitorData) {
            SwagResponseTimeMonitorData responseTimeMonitorData = (SwagResponseTimeMonitorData) obj;
            return this.propertyClass == responseTimeMonitorData.propertyClass
                && this.timestamp == responseTimeMonitorData.timestamp
                && this.average == responseTimeMonitorData.average;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (timestamp == null ? 0 : System.hashCode(timestamp));
        hashCode = (17 * hashCode) + (average == null ? 0 : System.hashCode(average));
        return hashCode;
    }
}

