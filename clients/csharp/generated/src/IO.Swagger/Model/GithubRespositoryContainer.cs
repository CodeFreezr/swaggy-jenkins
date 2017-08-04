/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using SwaggerDateConverter = IO.Swagger.Client.SwaggerDateConverter;

namespace IO.Swagger.Model
{
    /// <summary>
    /// GithubRespositoryContainer
    /// </summary>
    [DataContract]
    public partial class GithubRespositoryContainer :  IEquatable<GithubRespositoryContainer>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="GithubRespositoryContainer" /> class.
        /// </summary>
        /// <param name="_Class">_Class.</param>
        /// <param name="Links">Links.</param>
        /// <param name="Repositories">Repositories.</param>
        public GithubRespositoryContainer(string _Class = default(string), GithubRespositoryContainerlinks Links = default(GithubRespositoryContainerlinks), GithubRepositories Repositories = default(GithubRepositories))
        {
            this._Class = _Class;
            this.Links = Links;
            this.Repositories = Repositories;
        }
        
        /// <summary>
        /// Gets or Sets _Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string _Class { get; set; }

        /// <summary>
        /// Gets or Sets Links
        /// </summary>
        [DataMember(Name="_links", EmitDefaultValue=false)]
        public GithubRespositoryContainerlinks Links { get; set; }

        /// <summary>
        /// Gets or Sets Repositories
        /// </summary>
        [DataMember(Name="repositories", EmitDefaultValue=false)]
        public GithubRepositories Repositories { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GithubRespositoryContainer {\n");
            sb.Append("  _Class: ").Append(_Class).Append("\n");
            sb.Append("  Links: ").Append(Links).Append("\n");
            sb.Append("  Repositories: ").Append(Repositories).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as GithubRespositoryContainer);
        }

        /// <summary>
        /// Returns true if GithubRespositoryContainer instances are equal
        /// </summary>
        /// <param name="input">Instance of GithubRespositoryContainer to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GithubRespositoryContainer input)
        {
            if (input == null)
                return false;

            return 
                (
                    this._Class == input._Class ||
                    (this._Class != null &&
                    this._Class.Equals(input._Class))
                ) && 
                (
                    this.Links == input.Links ||
                    (this.Links != null &&
                    this.Links.Equals(input.Links))
                ) && 
                (
                    this.Repositories == input.Repositories ||
                    (this.Repositories != null &&
                    this.Repositories.Equals(input.Repositories))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this._Class != null)
                    hashCode = hashCode * 59 + this._Class.GetHashCode();
                if (this.Links != null)
                    hashCode = hashCode * 59 + this.Links.GetHashCode();
                if (this.Repositories != null)
                    hashCode = hashCode * 59 + this.Repositories.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}