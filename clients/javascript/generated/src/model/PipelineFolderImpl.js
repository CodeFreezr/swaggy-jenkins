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
    root.SwaggyJenkins.PipelineFolderImpl = factory(root.SwaggyJenkins.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';




  /**
   * The PipelineFolderImpl model module.
   * @module model/PipelineFolderImpl
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>PipelineFolderImpl</code>.
   * @alias module:model/PipelineFolderImpl
   * @class
   */
  var exports = function() {
    var _this = this;








  };

  /**
   * Constructs a <code>PipelineFolderImpl</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/PipelineFolderImpl} obj Optional instance to populate.
   * @return {module:model/PipelineFolderImpl} The populated <code>PipelineFolderImpl</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('displayName')) {
        obj['displayName'] = ApiClient.convertToType(data['displayName'], 'String');
      }
      if (data.hasOwnProperty('fullName')) {
        obj['fullName'] = ApiClient.convertToType(data['fullName'], 'String');
      }
      if (data.hasOwnProperty('name')) {
        obj['name'] = ApiClient.convertToType(data['name'], 'String');
      }
      if (data.hasOwnProperty('organization')) {
        obj['organization'] = ApiClient.convertToType(data['organization'], 'String');
      }
      if (data.hasOwnProperty('numberOfFolders')) {
        obj['numberOfFolders'] = ApiClient.convertToType(data['numberOfFolders'], 'Number');
      }
      if (data.hasOwnProperty('numberOfPipelines')) {
        obj['numberOfPipelines'] = ApiClient.convertToType(data['numberOfPipelines'], 'Number');
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {String} displayName
   */
  exports.prototype['displayName'] = undefined;
  /**
   * @member {String} fullName
   */
  exports.prototype['fullName'] = undefined;
  /**
   * @member {String} name
   */
  exports.prototype['name'] = undefined;
  /**
   * @member {String} organization
   */
  exports.prototype['organization'] = undefined;
  /**
   * @member {Number} numberOfFolders
   */
  exports.prototype['numberOfFolders'] = undefined;
  /**
   * @member {Number} numberOfPipelines
   */
  exports.prototype['numberOfPipelines'] = undefined;



  return exports;
}));

