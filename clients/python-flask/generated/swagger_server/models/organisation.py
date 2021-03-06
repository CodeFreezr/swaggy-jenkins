# coding: utf-8

from __future__ import absolute_import
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class Organisation(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, _class: str=None, name: str=None):
        """
        Organisation - a model defined in Swagger

        :param _class: The _class of this Organisation.
        :type _class: str
        :param name: The name of this Organisation.
        :type name: str
        """
        self.swagger_types = {
            '_class': str,
            'name': str
        }

        self.attribute_map = {
            '_class': '_class',
            'name': 'name'
        }

        self.__class = _class
        self._name = name

    @classmethod
    def from_dict(cls, dikt) -> 'Organisation':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The Organisation of this Organisation.
        :rtype: Organisation
        """
        return deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """
        Gets the _class of this Organisation.

        :return: The _class of this Organisation.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this Organisation.

        :param _class: The _class of this Organisation.
        :type _class: str
        """

        self.__class = _class

    @property
    def name(self) -> str:
        """
        Gets the name of this Organisation.

        :return: The name of this Organisation.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name: str):
        """
        Sets the name of this Organisation.

        :param name: The name of this Organisation.
        :type name: str
        """

        self._name = name

