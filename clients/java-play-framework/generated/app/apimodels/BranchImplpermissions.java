package apimodels;

import java.util.Objects;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import javax.validation.constraints.*;
/**
 * BranchImplpermissions
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaPlayFrameworkCodegen", date = "2017-08-03T23:33:33.060Z")

public class BranchImplpermissions   {
  @JsonProperty("create")
  private Boolean create = null;

  @JsonProperty("read")
  private Boolean read = null;

  @JsonProperty("start")
  private Boolean start = null;

  @JsonProperty("stop")
  private Boolean stop = null;

  @JsonProperty("_class")
  private String propertyClass = null;

  public BranchImplpermissions create(Boolean create) {
    this.create = create;
    return this;
  }

   /**
   * Get create
   * @return create
  **/
    public Boolean isCreate() {
    return create;
  }

  public void setCreate(Boolean create) {
    this.create = create;
  }

  public BranchImplpermissions read(Boolean read) {
    this.read = read;
    return this;
  }

   /**
   * Get read
   * @return read
  **/
    public Boolean isRead() {
    return read;
  }

  public void setRead(Boolean read) {
    this.read = read;
  }

  public BranchImplpermissions start(Boolean start) {
    this.start = start;
    return this;
  }

   /**
   * Get start
   * @return start
  **/
    public Boolean isStart() {
    return start;
  }

  public void setStart(Boolean start) {
    this.start = start;
  }

  public BranchImplpermissions stop(Boolean stop) {
    this.stop = stop;
    return this;
  }

   /**
   * Get stop
   * @return stop
  **/
    public Boolean isStop() {
    return stop;
  }

  public void setStop(Boolean stop) {
    this.stop = stop;
  }

  public BranchImplpermissions propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BranchImplpermissions branchImplpermissions = (BranchImplpermissions) o;
    return Objects.equals(this.create, branchImplpermissions.create) &&
        Objects.equals(this.read, branchImplpermissions.read) &&
        Objects.equals(this.start, branchImplpermissions.start) &&
        Objects.equals(this.stop, branchImplpermissions.stop) &&
        Objects.equals(this.propertyClass, branchImplpermissions.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(create, read, start, stop, propertyClass);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BranchImplpermissions {\n");
    
    sb.append("    create: ").append(toIndentedString(create)).append("\n");
    sb.append("    read: ").append(toIndentedString(read)).append("\n");
    sb.append("    start: ").append(toIndentedString(start)).append("\n");
    sb.append("    stop: ").append(toIndentedString(stop)).append("\n");
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

  public void validate() {
    ValidatorFactory factory = Validation.buildDefaultValidatorFactory();
    Validator validator = factory.getValidator();
    Set<ConstraintViolation<BranchImplpermissions>> constraintViolations = validator.validate(this);
    if (constraintViolations.size() > 0) {
      StringBuilder errors = new StringBuilder();
      for (ConstraintViolation<BranchImplpermissions> contraintes : constraintViolations) {
        errors.append(String.format("%s.%s %s\n",
            contraintes.getRootBeanClass().getSimpleName(),
            contraintes.getPropertyPath(),
            contraintes.getMessage()));
      }
      throw new RuntimeException("Bean validation : " + errors);
    }
  }
}

