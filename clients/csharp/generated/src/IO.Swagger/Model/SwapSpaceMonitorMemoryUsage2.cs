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
    /// SwapSpaceMonitorMemoryUsage2
    /// </summary>
    [DataContract]
    public partial class SwapSpaceMonitorMemoryUsage2 :  IEquatable<SwapSpaceMonitorMemoryUsage2>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="SwapSpaceMonitorMemoryUsage2" /> class.
        /// </summary>
        /// <param name="_Class">_Class.</param>
        /// <param name="AvailablePhysicalMemory">AvailablePhysicalMemory.</param>
        /// <param name="AvailableSwapSpace">AvailableSwapSpace.</param>
        /// <param name="TotalPhysicalMemory">TotalPhysicalMemory.</param>
        /// <param name="TotalSwapSpace">TotalSwapSpace.</param>
        public SwapSpaceMonitorMemoryUsage2(string _Class = default(string), int? AvailablePhysicalMemory = default(int?), int? AvailableSwapSpace = default(int?), int? TotalPhysicalMemory = default(int?), int? TotalSwapSpace = default(int?))
        {
            this._Class = _Class;
            this.AvailablePhysicalMemory = AvailablePhysicalMemory;
            this.AvailableSwapSpace = AvailableSwapSpace;
            this.TotalPhysicalMemory = TotalPhysicalMemory;
            this.TotalSwapSpace = TotalSwapSpace;
        }
        
        /// <summary>
        /// Gets or Sets _Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string _Class { get; set; }

        /// <summary>
        /// Gets or Sets AvailablePhysicalMemory
        /// </summary>
        [DataMember(Name="availablePhysicalMemory", EmitDefaultValue=false)]
        public int? AvailablePhysicalMemory { get; set; }

        /// <summary>
        /// Gets or Sets AvailableSwapSpace
        /// </summary>
        [DataMember(Name="availableSwapSpace", EmitDefaultValue=false)]
        public int? AvailableSwapSpace { get; set; }

        /// <summary>
        /// Gets or Sets TotalPhysicalMemory
        /// </summary>
        [DataMember(Name="totalPhysicalMemory", EmitDefaultValue=false)]
        public int? TotalPhysicalMemory { get; set; }

        /// <summary>
        /// Gets or Sets TotalSwapSpace
        /// </summary>
        [DataMember(Name="totalSwapSpace", EmitDefaultValue=false)]
        public int? TotalSwapSpace { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SwapSpaceMonitorMemoryUsage2 {\n");
            sb.Append("  _Class: ").Append(_Class).Append("\n");
            sb.Append("  AvailablePhysicalMemory: ").Append(AvailablePhysicalMemory).Append("\n");
            sb.Append("  AvailableSwapSpace: ").Append(AvailableSwapSpace).Append("\n");
            sb.Append("  TotalPhysicalMemory: ").Append(TotalPhysicalMemory).Append("\n");
            sb.Append("  TotalSwapSpace: ").Append(TotalSwapSpace).Append("\n");
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
            return this.Equals(input as SwapSpaceMonitorMemoryUsage2);
        }

        /// <summary>
        /// Returns true if SwapSpaceMonitorMemoryUsage2 instances are equal
        /// </summary>
        /// <param name="input">Instance of SwapSpaceMonitorMemoryUsage2 to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(SwapSpaceMonitorMemoryUsage2 input)
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
                    this.AvailablePhysicalMemory == input.AvailablePhysicalMemory ||
                    (this.AvailablePhysicalMemory != null &&
                    this.AvailablePhysicalMemory.Equals(input.AvailablePhysicalMemory))
                ) && 
                (
                    this.AvailableSwapSpace == input.AvailableSwapSpace ||
                    (this.AvailableSwapSpace != null &&
                    this.AvailableSwapSpace.Equals(input.AvailableSwapSpace))
                ) && 
                (
                    this.TotalPhysicalMemory == input.TotalPhysicalMemory ||
                    (this.TotalPhysicalMemory != null &&
                    this.TotalPhysicalMemory.Equals(input.TotalPhysicalMemory))
                ) && 
                (
                    this.TotalSwapSpace == input.TotalSwapSpace ||
                    (this.TotalSwapSpace != null &&
                    this.TotalSwapSpace.Equals(input.TotalSwapSpace))
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
                if (this.AvailablePhysicalMemory != null)
                    hashCode = hashCode * 59 + this.AvailablePhysicalMemory.GetHashCode();
                if (this.AvailableSwapSpace != null)
                    hashCode = hashCode * 59 + this.AvailableSwapSpace.GetHashCode();
                if (this.TotalPhysicalMemory != null)
                    hashCode = hashCode * 59 + this.TotalPhysicalMemory.GetHashCode();
                if (this.TotalSwapSpace != null)
                    hashCode = hashCode * 59 + this.TotalSwapSpace.GetHashCode();
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
