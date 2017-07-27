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

namespace IO.Swagger.Model
{
    /// <summary>
    /// GetPipelineBranchesitemLatestRun
    /// </summary>
    [DataContract]
    public partial class GetPipelineBranchesitemLatestRun :  IEquatable<GetPipelineBranchesitemLatestRun>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="GetPipelineBranchesitemLatestRun" /> class.
        /// </summary>
        /// <param name="DurationInMillis">DurationInMillis.</param>
        /// <param name="EstimatedDurationInMillis">EstimatedDurationInMillis.</param>
        /// <param name="EnQueueTime">EnQueueTime.</param>
        /// <param name="EndTime">EndTime.</param>
        /// <param name="Id">Id.</param>
        /// <param name="Organization">Organization.</param>
        /// <param name="Pipeline">Pipeline.</param>
        /// <param name="Result">Result.</param>
        /// <param name="RunSummary">RunSummary.</param>
        /// <param name="StartTime">StartTime.</param>
        /// <param name="State">State.</param>
        /// <param name="Type">Type.</param>
        /// <param name="CommitId">CommitId.</param>
        /// <param name="_Class">_Class.</param>
        public GetPipelineBranchesitemLatestRun(int? DurationInMillis = default(int?), int? EstimatedDurationInMillis = default(int?), string EnQueueTime = default(string), string EndTime = default(string), string Id = default(string), string Organization = default(string), string Pipeline = default(string), string Result = default(string), string RunSummary = default(string), string StartTime = default(string), string State = default(string), string Type = default(string), string CommitId = default(string), string _Class = default(string))
        {
            this.DurationInMillis = DurationInMillis;
            this.EstimatedDurationInMillis = EstimatedDurationInMillis;
            this.EnQueueTime = EnQueueTime;
            this.EndTime = EndTime;
            this.Id = Id;
            this.Organization = Organization;
            this.Pipeline = Pipeline;
            this.Result = Result;
            this.RunSummary = RunSummary;
            this.StartTime = StartTime;
            this.State = State;
            this.Type = Type;
            this.CommitId = CommitId;
            this._Class = _Class;
        }
        
        /// <summary>
        /// Gets or Sets DurationInMillis
        /// </summary>
        [DataMember(Name="durationInMillis", EmitDefaultValue=false)]
        public int? DurationInMillis { get; set; }
        /// <summary>
        /// Gets or Sets EstimatedDurationInMillis
        /// </summary>
        [DataMember(Name="estimatedDurationInMillis", EmitDefaultValue=false)]
        public int? EstimatedDurationInMillis { get; set; }
        /// <summary>
        /// Gets or Sets EnQueueTime
        /// </summary>
        [DataMember(Name="enQueueTime", EmitDefaultValue=false)]
        public string EnQueueTime { get; set; }
        /// <summary>
        /// Gets or Sets EndTime
        /// </summary>
        [DataMember(Name="endTime", EmitDefaultValue=false)]
        public string EndTime { get; set; }
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }
        /// <summary>
        /// Gets or Sets Organization
        /// </summary>
        [DataMember(Name="organization", EmitDefaultValue=false)]
        public string Organization { get; set; }
        /// <summary>
        /// Gets or Sets Pipeline
        /// </summary>
        [DataMember(Name="pipeline", EmitDefaultValue=false)]
        public string Pipeline { get; set; }
        /// <summary>
        /// Gets or Sets Result
        /// </summary>
        [DataMember(Name="result", EmitDefaultValue=false)]
        public string Result { get; set; }
        /// <summary>
        /// Gets or Sets RunSummary
        /// </summary>
        [DataMember(Name="runSummary", EmitDefaultValue=false)]
        public string RunSummary { get; set; }
        /// <summary>
        /// Gets or Sets StartTime
        /// </summary>
        [DataMember(Name="startTime", EmitDefaultValue=false)]
        public string StartTime { get; set; }
        /// <summary>
        /// Gets or Sets State
        /// </summary>
        [DataMember(Name="state", EmitDefaultValue=false)]
        public string State { get; set; }
        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public string Type { get; set; }
        /// <summary>
        /// Gets or Sets CommitId
        /// </summary>
        [DataMember(Name="commitId", EmitDefaultValue=false)]
        public string CommitId { get; set; }
        /// <summary>
        /// Gets or Sets _Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string _Class { get; set; }
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GetPipelineBranchesitemLatestRun {\n");
            sb.Append("  DurationInMillis: ").Append(DurationInMillis).Append("\n");
            sb.Append("  EstimatedDurationInMillis: ").Append(EstimatedDurationInMillis).Append("\n");
            sb.Append("  EnQueueTime: ").Append(EnQueueTime).Append("\n");
            sb.Append("  EndTime: ").Append(EndTime).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Organization: ").Append(Organization).Append("\n");
            sb.Append("  Pipeline: ").Append(Pipeline).Append("\n");
            sb.Append("  Result: ").Append(Result).Append("\n");
            sb.Append("  RunSummary: ").Append(RunSummary).Append("\n");
            sb.Append("  StartTime: ").Append(StartTime).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  CommitId: ").Append(CommitId).Append("\n");
            sb.Append("  _Class: ").Append(_Class).Append("\n");
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
            // credit: http://stackoverflow.com/a/10454552/677735
            return this.Equals(obj as GetPipelineBranchesitemLatestRun);
        }

        /// <summary>
        /// Returns true if GetPipelineBranchesitemLatestRun instances are equal
        /// </summary>
        /// <param name="other">Instance of GetPipelineBranchesitemLatestRun to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GetPipelineBranchesitemLatestRun other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.DurationInMillis == other.DurationInMillis ||
                    this.DurationInMillis != null &&
                    this.DurationInMillis.Equals(other.DurationInMillis)
                ) && 
                (
                    this.EstimatedDurationInMillis == other.EstimatedDurationInMillis ||
                    this.EstimatedDurationInMillis != null &&
                    this.EstimatedDurationInMillis.Equals(other.EstimatedDurationInMillis)
                ) && 
                (
                    this.EnQueueTime == other.EnQueueTime ||
                    this.EnQueueTime != null &&
                    this.EnQueueTime.Equals(other.EnQueueTime)
                ) && 
                (
                    this.EndTime == other.EndTime ||
                    this.EndTime != null &&
                    this.EndTime.Equals(other.EndTime)
                ) && 
                (
                    this.Id == other.Id ||
                    this.Id != null &&
                    this.Id.Equals(other.Id)
                ) && 
                (
                    this.Organization == other.Organization ||
                    this.Organization != null &&
                    this.Organization.Equals(other.Organization)
                ) && 
                (
                    this.Pipeline == other.Pipeline ||
                    this.Pipeline != null &&
                    this.Pipeline.Equals(other.Pipeline)
                ) && 
                (
                    this.Result == other.Result ||
                    this.Result != null &&
                    this.Result.Equals(other.Result)
                ) && 
                (
                    this.RunSummary == other.RunSummary ||
                    this.RunSummary != null &&
                    this.RunSummary.Equals(other.RunSummary)
                ) && 
                (
                    this.StartTime == other.StartTime ||
                    this.StartTime != null &&
                    this.StartTime.Equals(other.StartTime)
                ) && 
                (
                    this.State == other.State ||
                    this.State != null &&
                    this.State.Equals(other.State)
                ) && 
                (
                    this.Type == other.Type ||
                    this.Type != null &&
                    this.Type.Equals(other.Type)
                ) && 
                (
                    this.CommitId == other.CommitId ||
                    this.CommitId != null &&
                    this.CommitId.Equals(other.CommitId)
                ) && 
                (
                    this._Class == other._Class ||
                    this._Class != null &&
                    this._Class.Equals(other._Class)
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
                if (this.DurationInMillis != null)
                    hash = hash * 59 + this.DurationInMillis.GetHashCode();
                if (this.EstimatedDurationInMillis != null)
                    hash = hash * 59 + this.EstimatedDurationInMillis.GetHashCode();
                if (this.EnQueueTime != null)
                    hash = hash * 59 + this.EnQueueTime.GetHashCode();
                if (this.EndTime != null)
                    hash = hash * 59 + this.EndTime.GetHashCode();
                if (this.Id != null)
                    hash = hash * 59 + this.Id.GetHashCode();
                if (this.Organization != null)
                    hash = hash * 59 + this.Organization.GetHashCode();
                if (this.Pipeline != null)
                    hash = hash * 59 + this.Pipeline.GetHashCode();
                if (this.Result != null)
                    hash = hash * 59 + this.Result.GetHashCode();
                if (this.RunSummary != null)
                    hash = hash * 59 + this.RunSummary.GetHashCode();
                if (this.StartTime != null)
                    hash = hash * 59 + this.StartTime.GetHashCode();
                if (this.State != null)
                    hash = hash * 59 + this.State.GetHashCode();
                if (this.Type != null)
                    hash = hash * 59 + this.Type.GetHashCode();
                if (this.CommitId != null)
                    hash = hash * 59 + this.CommitId.GetHashCode();
                if (this._Class != null)
                    hash = hash * 59 + this._Class.GetHashCode();
                return hash;
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