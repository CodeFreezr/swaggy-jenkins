# coding: utf-8

"""
    Swaggy Jenkins

    Jenkins API clients generated from Swagger / Open API specification

    OpenAPI spec version: 0.1.0
    Contact: blah@cliffano.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from pprint import pformat
from six import iteritems
import re


class GenericResource(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """


    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        '_class': 'str',
        'display_name': 'str',
        'duration_in_millis': 'int',
        'id': 'str',
        'result': 'str',
        'start_time': 'str'
    }

    attribute_map = {
        '_class': '_class',
        'display_name': 'displayName',
        'duration_in_millis': 'durationInMillis',
        'id': 'id',
        'result': 'result',
        'start_time': 'startTime'
    }

    def __init__(self, _class=None, display_name=None, duration_in_millis=None, id=None, result=None, start_time=None):
        """
        GenericResource - a model defined in Swagger
        """

        self.__class = None
        self._display_name = None
        self._duration_in_millis = None
        self._id = None
        self._result = None
        self._start_time = None
        self.discriminator = None

        if _class is not None:
          self._class = _class
        if display_name is not None:
          self.display_name = display_name
        if duration_in_millis is not None:
          self.duration_in_millis = duration_in_millis
        if id is not None:
          self.id = id
        if result is not None:
          self.result = result
        if start_time is not None:
          self.start_time = start_time

    @property
    def _class(self):
        """
        Gets the _class of this GenericResource.

        :return: The _class of this GenericResource.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this GenericResource.

        :param _class: The _class of this GenericResource.
        :type: str
        """

        self.__class = _class

    @property
    def display_name(self):
        """
        Gets the display_name of this GenericResource.

        :return: The display_name of this GenericResource.
        :rtype: str
        """
        return self._display_name

    @display_name.setter
    def display_name(self, display_name):
        """
        Sets the display_name of this GenericResource.

        :param display_name: The display_name of this GenericResource.
        :type: str
        """

        self._display_name = display_name

    @property
    def duration_in_millis(self):
        """
        Gets the duration_in_millis of this GenericResource.

        :return: The duration_in_millis of this GenericResource.
        :rtype: int
        """
        return self._duration_in_millis

    @duration_in_millis.setter
    def duration_in_millis(self, duration_in_millis):
        """
        Sets the duration_in_millis of this GenericResource.

        :param duration_in_millis: The duration_in_millis of this GenericResource.
        :type: int
        """

        self._duration_in_millis = duration_in_millis

    @property
    def id(self):
        """
        Gets the id of this GenericResource.

        :return: The id of this GenericResource.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """
        Sets the id of this GenericResource.

        :param id: The id of this GenericResource.
        :type: str
        """

        self._id = id

    @property
    def result(self):
        """
        Gets the result of this GenericResource.

        :return: The result of this GenericResource.
        :rtype: str
        """
        return self._result

    @result.setter
    def result(self, result):
        """
        Sets the result of this GenericResource.

        :param result: The result of this GenericResource.
        :type: str
        """

        self._result = result

    @property
    def start_time(self):
        """
        Gets the start_time of this GenericResource.

        :return: The start_time of this GenericResource.
        :rtype: str
        """
        return self._start_time

    @start_time.setter
    def start_time(self, start_time):
        """
        Sets the start_time of this GenericResource.

        :param start_time: The start_time of this GenericResource.
        :type: str
        """

        self._start_time = start_time

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        if not isinstance(other, GenericResource):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other