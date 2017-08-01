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
 * SwagIojenkinsblueoceanserviceembedde
 */
public class SwagIojenkinsblueoceanserviceembedde implements Swagger.MappedProperties {
    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get displayName
     * @return displayName
     */
    public String displayName { get; set; }

    /**
     * Get fullName
     * @return fullName
     */
    public String fullName { get; set; }

    /**
     * Get name
     * @return name
     */
    public String name { get; set; }

    /**
     * Get organization
     * @return organization
     */
    public String organization { get; set; }

    /**
     * Get numberOfFolders
     * @return numberOfFolders
     */
    public Integer numberOfFolders { get; set; }

    /**
     * Get numberOfPipelines
     * @return numberOfPipelines
     */
    public Integer numberOfPipelines { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static SwagIojenkinsblueoceanserviceembedde getExample() {
        SwagIojenkinsblueoceanserviceembedde iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl = new SwagIojenkinsblueoceanserviceembedde();
        iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.propertyClass = 'aeiou';
        iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.displayName = 'aeiou';
        iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.fullName = 'aeiou';
        iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.name = 'aeiou';
        iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.organization = 'aeiou';
        iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.numberOfFolders = 123;
        iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.numberOfPipelines = 123;
        return iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagIojenkinsblueoceanserviceembedde) {
            SwagIojenkinsblueoceanserviceembedde iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl = (SwagIojenkinsblueoceanserviceembedde) obj;
            return this.propertyClass == iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.propertyClass
                && this.displayName == iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.displayName
                && this.fullName == iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.fullName
                && this.name == iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.name
                && this.organization == iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.organization
                && this.numberOfFolders == iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.numberOfFolders
                && this.numberOfPipelines == iojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.numberOfPipelines;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (displayName == null ? 0 : System.hashCode(displayName));
        hashCode = (17 * hashCode) + (fullName == null ? 0 : System.hashCode(fullName));
        hashCode = (17 * hashCode) + (name == null ? 0 : System.hashCode(name));
        hashCode = (17 * hashCode) + (organization == null ? 0 : System.hashCode(organization));
        hashCode = (17 * hashCode) + (numberOfFolders == null ? 0 : System.hashCode(numberOfFolders));
        hashCode = (17 * hashCode) + (numberOfPipelines == null ? 0 : System.hashCode(numberOfPipelines));
        return hashCode;
    }
}
