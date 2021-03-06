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
 * SwagComputerSet
 */
public class SwagComputerSet implements Swagger.MappedProperties {
    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get busyExecutors
     * @return busyExecutors
     */
    public Integer busyExecutors { get; set; }

    /**
     * Get computer
     * @return computer
     */
    public List<SwagHudsonMasterComputer> computer { get; set; }

    /**
     * Get displayName
     * @return displayName
     */
    public String displayName { get; set; }

    /**
     * Get totalExecutors
     * @return totalExecutors
     */
    public Integer totalExecutors { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public SwagComputerSet() {
        computer = new List<SwagHudsonMasterComputer>();
    }

    public static SwagComputerSet getExample() {
        SwagComputerSet computerSet = new SwagComputerSet();
        computerSet.propertyClass = 'aeiou';
        computerSet.busyExecutors = 123;
        computerSet.computer = new List<SwagHudsonMasterComputer>{SwagHudsonMasterComputer.getExample()};
        computerSet.displayName = 'aeiou';
        computerSet.totalExecutors = 123;
        return computerSet;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagComputerSet) {
            SwagComputerSet computerSet = (SwagComputerSet) obj;
            return this.propertyClass == computerSet.propertyClass
                && this.busyExecutors == computerSet.busyExecutors
                && this.computer == computerSet.computer
                && this.displayName == computerSet.displayName
                && this.totalExecutors == computerSet.totalExecutors;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (busyExecutors == null ? 0 : System.hashCode(busyExecutors));
        hashCode = (17 * hashCode) + (computer == null ? 0 : System.hashCode(computer));
        hashCode = (17 * hashCode) + (displayName == null ? 0 : System.hashCode(displayName));
        hashCode = (17 * hashCode) + (totalExecutors == null ? 0 : System.hashCode(totalExecutors));
        return hashCode;
    }
}

