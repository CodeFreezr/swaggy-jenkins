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
package io.swagger.client.models

import io.swagger.client.models.Link

/**
 * 
 * @param nodes 
 * @param log 
 * @param self 
 * @param actions 
 * @param steps 
 * @param _class 
 */
data class PipelineRunImpllinks (
    val nodes: Link? = null,
    val log: Link? = null,
    val self: Link? = null,
    val actions: Link? = null,
    val steps: Link? = null,
    val _class: kotlin.String? = null
) {

}
