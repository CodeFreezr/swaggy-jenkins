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
 * SwagEmptyChangeLogSet
 */
public class SwagEmptyChangeLogSet implements Swagger.MappedProperties {
    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get kind
     * @return kind
     */
    public String kind { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static SwagEmptyChangeLogSet getExample() {
        SwagEmptyChangeLogSet emptyChangeLogSet = new SwagEmptyChangeLogSet();
        emptyChangeLogSet.propertyClass = 'aeiou';
        emptyChangeLogSet.kind = 'aeiou';
        return emptyChangeLogSet;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagEmptyChangeLogSet) {
            SwagEmptyChangeLogSet emptyChangeLogSet = (SwagEmptyChangeLogSet) obj;
            return this.propertyClass == emptyChangeLogSet.propertyClass
                && this.kind == emptyChangeLogSet.kind;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (kind == null ? 0 : System.hashCode(kind));
        return hashCode;
    }
}

