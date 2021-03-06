/**
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

import * as models from './models';

export interface BranchImpl {
    "class"?: string;
    "displayName"?: string;
    "estimatedDurationInMillis"?: number;
    "fullDisplayName"?: string;
    "fullName"?: string;
    "name"?: string;
    "organization"?: string;
    "parameters"?: Array<models.StringParameterDefinition>;
    "permissions"?: models.BranchImplpermissions;
    "weatherScore"?: number;
    "pullRequest"?: string;
    "links"?: models.BranchImpllinks;
    "latestRun"?: models.PipelineRunImpl;
}

