# coding: utf-8

from __future__ import absolute_import
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, _class: str=None, timestamp: int=None, path: str=None, size: int=None):
        """
        HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace - a model defined in Swagger

        :param _class: The _class of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :type _class: str
        :param timestamp: The timestamp of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :type timestamp: int
        :param path: The path of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :type path: str
        :param size: The size of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :type size: int
        """
        self.swagger_types = {
            '_class': str,
            'timestamp': int,
            'path': str,
            'size': int
        }

        self.attribute_map = {
            '_class': '_class',
            'timestamp': 'timestamp',
            'path': 'path',
            'size': 'size'
        }

        self.__class = _class
        self._timestamp = timestamp
        self._path = path
        self._size = size

    @classmethod
    def from_dict(cls, dikt) -> 'HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The hudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :rtype: HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace
        """
        return deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """
        Gets the _class of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :return: The _class of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :param _class: The _class of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :type _class: str
        """

        self.__class = _class

    @property
    def timestamp(self) -> int:
        """
        Gets the timestamp of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :return: The timestamp of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :rtype: int
        """
        return self._timestamp

    @timestamp.setter
    def timestamp(self, timestamp: int):
        """
        Sets the timestamp of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :param timestamp: The timestamp of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :type timestamp: int
        """

        self._timestamp = timestamp

    @property
    def path(self) -> str:
        """
        Gets the path of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :return: The path of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :rtype: str
        """
        return self._path

    @path.setter
    def path(self, path: str):
        """
        Sets the path of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :param path: The path of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :type path: str
        """

        self._path = path

    @property
    def size(self) -> int:
        """
        Gets the size of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :return: The size of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :rtype: int
        """
        return self._size

    @size.setter
    def size(self, size: int):
        """
        Sets the size of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :param size: The size of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :type size: int
        """

        self._size = size
