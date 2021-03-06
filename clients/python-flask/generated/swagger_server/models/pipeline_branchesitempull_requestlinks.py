# coding: utf-8

from __future__ import absolute_import
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class PipelineBranchesitempullRequestlinks(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, _self: str=None, _class: str=None):
        """
        PipelineBranchesitempullRequestlinks - a model defined in Swagger

        :param _self: The _self of this PipelineBranchesitempullRequestlinks.
        :type _self: str
        :param _class: The _class of this PipelineBranchesitempullRequestlinks.
        :type _class: str
        """
        self.swagger_types = {
            '_self': str,
            '_class': str
        }

        self.attribute_map = {
            '_self': 'self',
            '_class': '_class'
        }

        self.__self = _self
        self.__class = _class

    @classmethod
    def from_dict(cls, dikt) -> 'PipelineBranchesitempullRequestlinks':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The PipelineBranchesitempullRequestlinks of this PipelineBranchesitempullRequestlinks.
        :rtype: PipelineBranchesitempullRequestlinks
        """
        return deserialize_model(dikt, cls)

    @property
    def _self(self) -> str:
        """
        Gets the _self of this PipelineBranchesitempullRequestlinks.

        :return: The _self of this PipelineBranchesitempullRequestlinks.
        :rtype: str
        """
        return self.__self

    @_self.setter
    def _self(self, _self: str):
        """
        Sets the _self of this PipelineBranchesitempullRequestlinks.

        :param _self: The _self of this PipelineBranchesitempullRequestlinks.
        :type _self: str
        """

        self.__self = _self

    @property
    def _class(self) -> str:
        """
        Gets the _class of this PipelineBranchesitempullRequestlinks.

        :return: The _class of this PipelineBranchesitempullRequestlinks.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this PipelineBranchesitempullRequestlinks.

        :param _class: The _class of this PipelineBranchesitempullRequestlinks.
        :type _class: str
        """

        self.__class = _class

