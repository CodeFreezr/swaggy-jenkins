# coding: utf-8

from __future__ import absolute_import
from swagger_server.models.github_content import GithubContent
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class GithubFile(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, content: GithubContent=None, _class: str=None):
        """
        GithubFile - a model defined in Swagger

        :param content: The content of this GithubFile.
        :type content: GithubContent
        :param _class: The _class of this GithubFile.
        :type _class: str
        """
        self.swagger_types = {
            'content': GithubContent,
            '_class': str
        }

        self.attribute_map = {
            'content': 'content',
            '_class': '_class'
        }

        self._content = content
        self.__class = _class

    @classmethod
    def from_dict(cls, dikt) -> 'GithubFile':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The GithubFile of this GithubFile.
        :rtype: GithubFile
        """
        return deserialize_model(dikt, cls)

    @property
    def content(self) -> GithubContent:
        """
        Gets the content of this GithubFile.

        :return: The content of this GithubFile.
        :rtype: GithubContent
        """
        return self._content

    @content.setter
    def content(self, content: GithubContent):
        """
        Sets the content of this GithubFile.

        :param content: The content of this GithubFile.
        :type content: GithubContent
        """

        self._content = content

    @property
    def _class(self) -> str:
        """
        Gets the _class of this GithubFile.

        :return: The _class of this GithubFile.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this GithubFile.

        :param _class: The _class of this GithubFile.
        :type _class: str
        """

        self.__class = _class

