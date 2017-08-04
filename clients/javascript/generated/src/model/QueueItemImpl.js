/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.2.3-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.QueueItemImpl = factory(root.SwaggyJenkins.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';




  /**
   * The QueueItemImpl model module.
   * @module model/QueueItemImpl
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>QueueItemImpl</code>.
   * @alias module:model/QueueItemImpl
   * @class
   */
  var exports = function() {
    var _this = this;






  };

  /**
   * Constructs a <code>QueueItemImpl</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/QueueItemImpl} obj Optional instance to populate.
   * @return {module:model/QueueItemImpl} The populated <code>QueueItemImpl</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('expectedBuildNumber')) {
        obj['expectedBuildNumber'] = ApiClient.convertToType(data['expectedBuildNumber'], 'Number');
      }
      if (data.hasOwnProperty('id')) {
        obj['id'] = ApiClient.convertToType(data['id'], 'String');
      }
      if (data.hasOwnProperty('pipeline')) {
        obj['pipeline'] = ApiClient.convertToType(data['pipeline'], 'String');
      }
      if (data.hasOwnProperty('queuedTime')) {
        obj['queuedTime'] = ApiClient.convertToType(data['queuedTime'], 'Number');
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {Number} expectedBuildNumber
   */
  exports.prototype['expectedBuildNumber'] = undefined;
  /**
   * @member {String} id
   */
  exports.prototype['id'] = undefined;
  /**
   * @member {String} pipeline
   */
  exports.prototype['pipeline'] = undefined;
  /**
   * @member {Number} queuedTime
   */
  exports.prototype['queuedTime'] = undefined;



  return exports;
}));

