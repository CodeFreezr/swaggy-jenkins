package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;

@JsonInclude(JsonInclude.Include.NON_NULL) 
public class Body   {
  
  private Boolean favorite = null;

  public Body () {

  }

  public Body (Boolean favorite) {
    this.favorite = favorite;
  }

    
  @JsonProperty("favorite")
  public Boolean isFavorite() {
    return favorite;
  }
  public void setFavorite(Boolean favorite) {
    this.favorite = favorite;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Body body = (Body) o;
    return Objects.equals(favorite, body.favorite);
  }

  @Override
  public int hashCode() {
    return Objects.hash(favorite);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Body {\n");
    
    sb.append("    favorite: ").append(toIndentedString(favorite)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
