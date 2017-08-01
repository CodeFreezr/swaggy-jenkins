//
// HudsonmodelCauseAction.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class HudsonmodelCauseAction: JSONEncodable {

    public var _class: String?
    public var causes: [HudsonmodelCauseUserIdCause]?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["causes"] = self.causes?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}