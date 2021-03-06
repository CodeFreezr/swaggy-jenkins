package io.swagger.model;

import io.swagger.model.FreeStyleBuild;
import javax.validation.constraints.*;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;

public class HudsonMasterComputerexecutors  {
  
  @ApiModelProperty(value = "")
  private FreeStyleBuild currentExecutable = null;
  @ApiModelProperty(value = "")
  private Boolean idle = null;
  @ApiModelProperty(value = "")
  private Boolean likelyStuck = null;
  @ApiModelProperty(value = "")
  private Integer number = null;
  @ApiModelProperty(value = "")
  private Integer progress = null;
  @ApiModelProperty(value = "")
  private String propertyClass = null;

 /**
   * Get currentExecutable
   * @return currentExecutable
  **/
  public FreeStyleBuild getCurrentExecutable() {
    return currentExecutable;
  }

  public void setCurrentExecutable(FreeStyleBuild currentExecutable) {
    this.currentExecutable = currentExecutable;
  }

  public HudsonMasterComputerexecutors currentExecutable(FreeStyleBuild currentExecutable) {
    this.currentExecutable = currentExecutable;
    return this;
  }

 /**
   * Get idle
   * @return idle
  **/
  public Boolean isIdle() {
    return idle;
  }

  public void setIdle(Boolean idle) {
    this.idle = idle;
  }

  public HudsonMasterComputerexecutors idle(Boolean idle) {
    this.idle = idle;
    return this;
  }

 /**
   * Get likelyStuck
   * @return likelyStuck
  **/
  public Boolean isLikelyStuck() {
    return likelyStuck;
  }

  public void setLikelyStuck(Boolean likelyStuck) {
    this.likelyStuck = likelyStuck;
  }

  public HudsonMasterComputerexecutors likelyStuck(Boolean likelyStuck) {
    this.likelyStuck = likelyStuck;
    return this;
  }

 /**
   * Get number
   * @return number
  **/
  public Integer getNumber() {
    return number;
  }

  public void setNumber(Integer number) {
    this.number = number;
  }

  public HudsonMasterComputerexecutors number(Integer number) {
    this.number = number;
    return this;
  }

 /**
   * Get progress
   * @return progress
  **/
  public Integer getProgress() {
    return progress;
  }

  public void setProgress(Integer progress) {
    this.progress = progress;
  }

  public HudsonMasterComputerexecutors progress(Integer progress) {
    this.progress = progress;
    return this;
  }

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

  public HudsonMasterComputerexecutors propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonMasterComputerexecutors {\n");
    
    sb.append("    currentExecutable: ").append(toIndentedString(currentExecutable)).append("\n");
    sb.append("    idle: ").append(toIndentedString(idle)).append("\n");
    sb.append("    likelyStuck: ").append(toIndentedString(likelyStuck)).append("\n");
    sb.append("    number: ").append(toIndentedString(number)).append("\n");
    sb.append("    progress: ").append(toIndentedString(progress)).append("\n");
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
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

