package io.swagger.model;


import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;

public class PipelineFolderImpl  {
  
  @ApiModelProperty(value = "")
  private String propertyClass = null;
  @ApiModelProperty(value = "")
  private String displayName = null;
  @ApiModelProperty(value = "")
  private String fullName = null;
  @ApiModelProperty(value = "")
  private String name = null;
  @ApiModelProperty(value = "")
  private String organization = null;
  @ApiModelProperty(value = "")
  private Integer numberOfFolders = null;
  @ApiModelProperty(value = "")
  private Integer numberOfPipelines = null;

 /**
   * Get propertyClass
   * @return propertyClass
  **/
  public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public PipelineFolderImpl propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

 /**
   * Get displayName
   * @return displayName
  **/
  public String getDisplayName() {
    return displayName;
  }

  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  public PipelineFolderImpl displayName(String displayName) {
    this.displayName = displayName;
    return this;
  }

 /**
   * Get fullName
   * @return fullName
  **/
  public String getFullName() {
    return fullName;
  }

  public void setFullName(String fullName) {
    this.fullName = fullName;
  }

  public PipelineFolderImpl fullName(String fullName) {
    this.fullName = fullName;
    return this;
  }

 /**
   * Get name
   * @return name
  **/
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public PipelineFolderImpl name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Get organization
   * @return organization
  **/
  public String getOrganization() {
    return organization;
  }

  public void setOrganization(String organization) {
    this.organization = organization;
  }

  public PipelineFolderImpl organization(String organization) {
    this.organization = organization;
    return this;
  }

 /**
   * Get numberOfFolders
   * @return numberOfFolders
  **/
  public Integer getNumberOfFolders() {
    return numberOfFolders;
  }

  public void setNumberOfFolders(Integer numberOfFolders) {
    this.numberOfFolders = numberOfFolders;
  }

  public PipelineFolderImpl numberOfFolders(Integer numberOfFolders) {
    this.numberOfFolders = numberOfFolders;
    return this;
  }

 /**
   * Get numberOfPipelines
   * @return numberOfPipelines
  **/
  public Integer getNumberOfPipelines() {
    return numberOfPipelines;
  }

  public void setNumberOfPipelines(Integer numberOfPipelines) {
    this.numberOfPipelines = numberOfPipelines;
  }

  public PipelineFolderImpl numberOfPipelines(Integer numberOfPipelines) {
    this.numberOfPipelines = numberOfPipelines;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PipelineFolderImpl {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    fullName: ").append(toIndentedString(fullName)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    organization: ").append(toIndentedString(organization)).append("\n");
    sb.append("    numberOfFolders: ").append(toIndentedString(numberOfFolders)).append("\n");
    sb.append("    numberOfPipelines: ").append(toIndentedString(numberOfPipelines)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

