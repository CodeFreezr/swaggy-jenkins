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
 * SwagHudson
 */
public class SwagHudson implements Swagger.MappedProperties {
    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get assignedLabels
     * @return assignedLabels
     */
    public List<SwagHudsonassignedLabels> assignedLabels { get; set; }

    /**
     * Get mode
     * @return mode
     */
    public String mode { get; set; }

    /**
     * Get nodeDescription
     * @return nodeDescription
     */
    public String nodeDescription { get; set; }

    /**
     * Get nodeName
     * @return nodeName
     */
    public String nodeName { get; set; }

    /**
     * Get numExecutors
     * @return numExecutors
     */
    public Integer numExecutors { get; set; }

    /**
     * Get description
     * @return description
     */
    public String description { get; set; }

    /**
     * Get jobs
     * @return jobs
     */
    public List<SwagFreeStyleProject> jobs { get; set; }

    /**
     * Get primaryView
     * @return primaryView
     */
    public SwagAllView primaryView { get; set; }

    /**
     * Get quietingDown
     * @return quietingDown
     */
    public Boolean quietingDown { get; set; }

    /**
     * Get slaveAgentPort
     * @return slaveAgentPort
     */
    public Integer slaveAgentPort { get; set; }

    /**
     * Get unlabeledLoad
     * @return unlabeledLoad
     */
    public SwagUnlabeledLoadStatistics unlabeledLoad { get; set; }

    /**
     * Get useCrumbs
     * @return useCrumbs
     */
    public Boolean useCrumbs { get; set; }

    /**
     * Get useSecurity
     * @return useSecurity
     */
    public Boolean useSecurity { get; set; }

    /**
     * Get views
     * @return views
     */
    public List<SwagAllView> views { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public SwagHudson() {
        assignedLabels = new List<SwagHudsonassignedLabels>();
        jobs = new List<SwagFreeStyleProject>();
        views = new List<SwagAllView>();
    }

    public static SwagHudson getExample() {
        SwagHudson hudson = new SwagHudson();
        hudson.propertyClass = 'aeiou';
        hudson.assignedLabels = new List<SwagHudsonassignedLabels>{SwagHudsonassignedLabels.getExample()};
        hudson.mode = 'aeiou';
        hudson.nodeDescription = 'aeiou';
        hudson.nodeName = 'aeiou';
        hudson.numExecutors = 123;
        hudson.description = 'aeiou';
        hudson.jobs = new List<SwagFreeStyleProject>{SwagFreeStyleProject.getExample()};
        hudson.primaryView = SwagAllView.getExample();
        hudson.quietingDown = true;
        hudson.slaveAgentPort = 123;
        hudson.unlabeledLoad = SwagUnlabeledLoadStatistics.getExample();
        hudson.useCrumbs = true;
        hudson.useSecurity = true;
        hudson.views = new List<SwagAllView>{SwagAllView.getExample()};
        return hudson;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagHudson) {
            SwagHudson hudson = (SwagHudson) obj;
            return this.propertyClass == hudson.propertyClass
                && this.assignedLabels == hudson.assignedLabels
                && this.mode == hudson.mode
                && this.nodeDescription == hudson.nodeDescription
                && this.nodeName == hudson.nodeName
                && this.numExecutors == hudson.numExecutors
                && this.description == hudson.description
                && this.jobs == hudson.jobs
                && this.primaryView == hudson.primaryView
                && this.quietingDown == hudson.quietingDown
                && this.slaveAgentPort == hudson.slaveAgentPort
                && this.unlabeledLoad == hudson.unlabeledLoad
                && this.useCrumbs == hudson.useCrumbs
                && this.useSecurity == hudson.useSecurity
                && this.views == hudson.views;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (assignedLabels == null ? 0 : System.hashCode(assignedLabels));
        hashCode = (17 * hashCode) + (mode == null ? 0 : System.hashCode(mode));
        hashCode = (17 * hashCode) + (nodeDescription == null ? 0 : System.hashCode(nodeDescription));
        hashCode = (17 * hashCode) + (nodeName == null ? 0 : System.hashCode(nodeName));
        hashCode = (17 * hashCode) + (numExecutors == null ? 0 : System.hashCode(numExecutors));
        hashCode = (17 * hashCode) + (description == null ? 0 : System.hashCode(description));
        hashCode = (17 * hashCode) + (jobs == null ? 0 : System.hashCode(jobs));
        hashCode = (17 * hashCode) + (primaryView == null ? 0 : System.hashCode(primaryView));
        hashCode = (17 * hashCode) + (quietingDown == null ? 0 : System.hashCode(quietingDown));
        hashCode = (17 * hashCode) + (slaveAgentPort == null ? 0 : System.hashCode(slaveAgentPort));
        hashCode = (17 * hashCode) + (unlabeledLoad == null ? 0 : System.hashCode(unlabeledLoad));
        hashCode = (17 * hashCode) + (useCrumbs == null ? 0 : System.hashCode(useCrumbs));
        hashCode = (17 * hashCode) + (useSecurity == null ? 0 : System.hashCode(useSecurity));
        hashCode = (17 * hashCode) + (views == null ? 0 : System.hashCode(views));
        return hashCode;
    }
}

