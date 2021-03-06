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
 * SwagGithubFile
 */
public class SwagGithubFile implements Swagger.MappedProperties {
    /**
     * Get content
     * @return content
     */
    public SwagGithubContent content { get; set; }

    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static SwagGithubFile getExample() {
        SwagGithubFile githubFile = new SwagGithubFile();
        githubFile.content = SwagGithubContent.getExample();
        githubFile.propertyClass = 'aeiou';
        return githubFile;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagGithubFile) {
            SwagGithubFile githubFile = (SwagGithubFile) obj;
            return this.content == githubFile.content
                && this.propertyClass == githubFile.propertyClass;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (content == null ? 0 : System.hashCode(content));
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        return hashCode;
    }
}

