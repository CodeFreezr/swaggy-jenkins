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
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Models
{

    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class IojenkinsblueoceanrestimplpipelineBranchImpl :  IEquatable<IojenkinsblueoceanrestimplpipelineBranchImpl>
    {

        /// <summary>
        /// Initializes a new instance of the <see cref="IojenkinsblueoceanrestimplpipelineBranchImpl" /> class.
        /// </summary>
        /// <param name="Class">Class.</param>
        /// <param name="DisplayName">DisplayName.</param>
        /// <param name="EstimatedDurationInMillis">EstimatedDurationInMillis.</param>
        /// <param name="FullDisplayName">FullDisplayName.</param>
        /// <param name="FullName">FullName.</param>
        /// <param name="Name">Name.</param>
        /// <param name="Organization">Organization.</param>
        /// <param name="Parameters">Parameters.</param>
        /// <param name="Permissions">Permissions.</param>
        /// <param name="WeatherScore">WeatherScore.</param>
        /// <param name="PullRequest">PullRequest.</param>
        public IojenkinsblueoceanrestimplpipelineBranchImpl(string Class = default(string), string DisplayName = default(string), int? EstimatedDurationInMillis = default(int?), string FullDisplayName = default(string), string FullName = default(string), string Name = default(string), string Organization = default(string), List<HudsonmodelStringParameterDefinition> Parameters = default(List<HudsonmodelStringParameterDefinition>), IojenkinsblueoceanrestimplpipelineBranchImplPermissions Permissions = default(IojenkinsblueoceanrestimplpipelineBranchImplPermissions), int? WeatherScore = default(int?), string PullRequest = default(string))
        {
            this.Class = Class;
            this.DisplayName = DisplayName;
            this.EstimatedDurationInMillis = EstimatedDurationInMillis;
            this.FullDisplayName = FullDisplayName;
            this.FullName = FullName;
            this.Name = Name;
            this.Organization = Organization;
            this.Parameters = Parameters;
            this.Permissions = Permissions;
            this.WeatherScore = WeatherScore;
            this.PullRequest = PullRequest;
            
        }

        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }
        /// <summary>
        /// Gets or Sets DisplayName
        /// </summary>
        [DataMember(Name="displayName")]
        public string DisplayName { get; set; }
        /// <summary>
        /// Gets or Sets EstimatedDurationInMillis
        /// </summary>
        [DataMember(Name="estimatedDurationInMillis")]
        public int? EstimatedDurationInMillis { get; set; }
        /// <summary>
        /// Gets or Sets FullDisplayName
        /// </summary>
        [DataMember(Name="fullDisplayName")]
        public string FullDisplayName { get; set; }
        /// <summary>
        /// Gets or Sets FullName
        /// </summary>
        [DataMember(Name="fullName")]
        public string FullName { get; set; }
        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name")]
        public string Name { get; set; }
        /// <summary>
        /// Gets or Sets Organization
        /// </summary>
        [DataMember(Name="organization")]
        public string Organization { get; set; }
        /// <summary>
        /// Gets or Sets Parameters
        /// </summary>
        [DataMember(Name="parameters")]
        public List<HudsonmodelStringParameterDefinition> Parameters { get; set; }
        /// <summary>
        /// Gets or Sets Permissions
        /// </summary>
        [DataMember(Name="permissions")]
        public IojenkinsblueoceanrestimplpipelineBranchImplPermissions Permissions { get; set; }
        /// <summary>
        /// Gets or Sets WeatherScore
        /// </summary>
        [DataMember(Name="weatherScore")]
        public int? WeatherScore { get; set; }
        /// <summary>
        /// Gets or Sets PullRequest
        /// </summary>
        [DataMember(Name="pullRequest")]
        public string PullRequest { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class IojenkinsblueoceanrestimplpipelineBranchImpl {\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  EstimatedDurationInMillis: ").Append(EstimatedDurationInMillis).Append("\n");
            sb.Append("  FullDisplayName: ").Append(FullDisplayName).Append("\n");
            sb.Append("  FullName: ").Append(FullName).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Organization: ").Append(Organization).Append("\n");
            sb.Append("  Parameters: ").Append(Parameters).Append("\n");
            sb.Append("  Permissions: ").Append(Permissions).Append("\n");
            sb.Append("  WeatherScore: ").Append(WeatherScore).Append("\n");
            sb.Append("  PullRequest: ").Append(PullRequest).Append("\n");
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
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            if (obj.GetType() != GetType()) return false;
            return Equals((IojenkinsblueoceanrestimplpipelineBranchImpl)obj);
        }

        /// <summary>
        /// Returns true if IojenkinsblueoceanrestimplpipelineBranchImpl instances are equal
        /// </summary>
        /// <param name="other">Instance of IojenkinsblueoceanrestimplpipelineBranchImpl to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(IojenkinsblueoceanrestimplpipelineBranchImpl other)
        {

            if (ReferenceEquals(null, other)) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    this.Class == other.Class ||
                    this.Class != null &&
                    this.Class.Equals(other.Class)
                ) && 
                (
                    this.DisplayName == other.DisplayName ||
                    this.DisplayName != null &&
                    this.DisplayName.Equals(other.DisplayName)
                ) && 
                (
                    this.EstimatedDurationInMillis == other.EstimatedDurationInMillis ||
                    this.EstimatedDurationInMillis != null &&
                    this.EstimatedDurationInMillis.Equals(other.EstimatedDurationInMillis)
                ) && 
                (
                    this.FullDisplayName == other.FullDisplayName ||
                    this.FullDisplayName != null &&
                    this.FullDisplayName.Equals(other.FullDisplayName)
                ) && 
                (
                    this.FullName == other.FullName ||
                    this.FullName != null &&
                    this.FullName.Equals(other.FullName)
                ) && 
                (
                    this.Name == other.Name ||
                    this.Name != null &&
                    this.Name.Equals(other.Name)
                ) && 
                (
                    this.Organization == other.Organization ||
                    this.Organization != null &&
                    this.Organization.Equals(other.Organization)
                ) && 
                (
                    this.Parameters == other.Parameters ||
                    this.Parameters != null &&
                    this.Parameters.SequenceEqual(other.Parameters)
                ) && 
                (
                    this.Permissions == other.Permissions ||
                    this.Permissions != null &&
                    this.Permissions.Equals(other.Permissions)
                ) && 
                (
                    this.WeatherScore == other.WeatherScore ||
                    this.WeatherScore != null &&
                    this.WeatherScore.Equals(other.WeatherScore)
                ) && 
                (
                    this.PullRequest == other.PullRequest ||
                    this.PullRequest != null &&
                    this.PullRequest.Equals(other.PullRequest)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            // credit: http://stackoverflow.com/a/263416/677735
            unchecked // Overflow is fine, just wrap
            {
                int hash = 41;
                // Suitable nullity checks etc, of course :)
                    if (this.Class != null)
                    hash = hash * 59 + this.Class.GetHashCode();
                    if (this.DisplayName != null)
                    hash = hash * 59 + this.DisplayName.GetHashCode();
                    if (this.EstimatedDurationInMillis != null)
                    hash = hash * 59 + this.EstimatedDurationInMillis.GetHashCode();
                    if (this.FullDisplayName != null)
                    hash = hash * 59 + this.FullDisplayName.GetHashCode();
                    if (this.FullName != null)
                    hash = hash * 59 + this.FullName.GetHashCode();
                    if (this.Name != null)
                    hash = hash * 59 + this.Name.GetHashCode();
                    if (this.Organization != null)
                    hash = hash * 59 + this.Organization.GetHashCode();
                    if (this.Parameters != null)
                    hash = hash * 59 + this.Parameters.GetHashCode();
                    if (this.Permissions != null)
                    hash = hash * 59 + this.Permissions.GetHashCode();
                    if (this.WeatherScore != null)
                    hash = hash * 59 + this.WeatherScore.GetHashCode();
                    if (this.PullRequest != null)
                    hash = hash * 59 + this.PullRequest.GetHashCode();
                return hash;
            }
        }

        #region Operators

        public static bool operator ==(IojenkinsblueoceanrestimplpipelineBranchImpl left, IojenkinsblueoceanrestimplpipelineBranchImpl right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(IojenkinsblueoceanrestimplpipelineBranchImpl left, IojenkinsblueoceanrestimplpipelineBranchImpl right)
        {
            return !Equals(left, right);
        }

        #endregion Operators

    }
}