<?php
/**
 * SwapSpaceMonitorMemoryUsage2
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swaagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Model;

use \ArrayAccess;

/**
 * SwapSpaceMonitorMemoryUsage2 Class Doc Comment
 *
 * @category    Class
 * @package     Swagger\Client
 * @author      Swagger Codegen team
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class SwapSpaceMonitorMemoryUsage2 implements ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $swaggerModelName = 'SwapSpaceMonitorMemoryUsage2';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerTypes = [
        '_class' => 'string',
        'available_physical_memory' => 'int',
        'available_swap_space' => 'int',
        'total_physical_memory' => 'int',
        'total_swap_space' => 'int'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerFormats = [
        '_class' => null,
        'available_physical_memory' => null,
        'available_swap_space' => null,
        'total_physical_memory' => null,
        'total_swap_space' => null
    ];

    public static function swaggerTypes()
    {
        return self::$swaggerTypes;
    }

    public static function swaggerFormats()
    {
        return self::$swaggerFormats;
    }

    /**
     * Array of attributes where the key is the local name, and the value is the original name
     * @var string[]
     */
    protected static $attributeMap = [
        '_class' => '_class',
        'available_physical_memory' => 'availablePhysicalMemory',
        'available_swap_space' => 'availableSwapSpace',
        'total_physical_memory' => 'totalPhysicalMemory',
        'total_swap_space' => 'totalSwapSpace'
    ];


    /**
     * Array of attributes to setter functions (for deserialization of responses)
     * @var string[]
     */
    protected static $setters = [
        '_class' => 'setClass',
        'available_physical_memory' => 'setAvailablePhysicalMemory',
        'available_swap_space' => 'setAvailableSwapSpace',
        'total_physical_memory' => 'setTotalPhysicalMemory',
        'total_swap_space' => 'setTotalSwapSpace'
    ];


    /**
     * Array of attributes to getter functions (for serialization of requests)
     * @var string[]
     */
    protected static $getters = [
        '_class' => 'getClass',
        'available_physical_memory' => 'getAvailablePhysicalMemory',
        'available_swap_space' => 'getAvailableSwapSpace',
        'total_physical_memory' => 'getTotalPhysicalMemory',
        'total_swap_space' => 'getTotalSwapSpace'
    ];

    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    public static function setters()
    {
        return self::$setters;
    }

    public static function getters()
    {
        return self::$getters;
    }

    

    

    /**
     * Associative array for storing property values
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['_class'] = isset($data['_class']) ? $data['_class'] : null;
        $this->container['available_physical_memory'] = isset($data['available_physical_memory']) ? $data['available_physical_memory'] : null;
        $this->container['available_swap_space'] = isset($data['available_swap_space']) ? $data['available_swap_space'] : null;
        $this->container['total_physical_memory'] = isset($data['total_physical_memory']) ? $data['total_physical_memory'] : null;
        $this->container['total_swap_space'] = isset($data['total_swap_space']) ? $data['total_swap_space'] : null;
    }

    /**
     * show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalid_properties = [];

        return $invalid_properties;
    }

    /**
     * validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {

        return true;
    }


    /**
     * Gets _class
     * @return string
     */
    public function getClass()
    {
        return $this->container['_class'];
    }

    /**
     * Sets _class
     * @param string $_class
     * @return $this
     */
    public function setClass($_class)
    {
        $this->container['_class'] = $_class;

        return $this;
    }

    /**
     * Gets available_physical_memory
     * @return int
     */
    public function getAvailablePhysicalMemory()
    {
        return $this->container['available_physical_memory'];
    }

    /**
     * Sets available_physical_memory
     * @param int $available_physical_memory
     * @return $this
     */
    public function setAvailablePhysicalMemory($available_physical_memory)
    {
        $this->container['available_physical_memory'] = $available_physical_memory;

        return $this;
    }

    /**
     * Gets available_swap_space
     * @return int
     */
    public function getAvailableSwapSpace()
    {
        return $this->container['available_swap_space'];
    }

    /**
     * Sets available_swap_space
     * @param int $available_swap_space
     * @return $this
     */
    public function setAvailableSwapSpace($available_swap_space)
    {
        $this->container['available_swap_space'] = $available_swap_space;

        return $this;
    }

    /**
     * Gets total_physical_memory
     * @return int
     */
    public function getTotalPhysicalMemory()
    {
        return $this->container['total_physical_memory'];
    }

    /**
     * Sets total_physical_memory
     * @param int $total_physical_memory
     * @return $this
     */
    public function setTotalPhysicalMemory($total_physical_memory)
    {
        $this->container['total_physical_memory'] = $total_physical_memory;

        return $this;
    }

    /**
     * Gets total_swap_space
     * @return int
     */
    public function getTotalSwapSpace()
    {
        return $this->container['total_swap_space'];
    }

    /**
     * Sets total_swap_space
     * @param int $total_swap_space
     * @return $this
     */
    public function setTotalSwapSpace($total_swap_space)
    {
        $this->container['total_swap_space'] = $total_swap_space;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     * @param  integer $offset Offset
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     * @param  integer $offset Offset
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     * @param  integer $offset Offset
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) { // use JSON pretty print
            return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this), JSON_PRETTY_PRINT);
        }

        return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this));
    }
}

