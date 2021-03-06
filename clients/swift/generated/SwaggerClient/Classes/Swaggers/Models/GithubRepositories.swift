//
// GithubRepositories.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class GithubRepositories: JSONEncodable {
    public var _class: String?
    public var links: GithubRepositorieslinks?
    public var items: [GithubRepository]?
    public var lastPage: Int32?
    public var nextPage: Int32?
    public var pageSize: Int32?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["_links"] = self.links?.encodeToJSON()
        nillableDictionary["items"] = self.items?.encodeToJSON()
        nillableDictionary["lastPage"] = self.lastPage?.encodeToJSON()
        nillableDictionary["nextPage"] = self.nextPage?.encodeToJSON()
        nillableDictionary["pageSize"] = self.pageSize?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
