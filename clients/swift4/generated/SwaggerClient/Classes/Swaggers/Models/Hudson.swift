//
// Hudson.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class Hudson: Codable {

    public var _class: String?
    public var assignedLabels: [HudsonassignedLabels]?
    public var mode: String?
    public var nodeDescription: String?
    public var nodeName: String?
    public var numExecutors: Int?
    public var description: String?
    public var jobs: [FreeStyleProject]?
    public var primaryView: AllView?
    public var quietingDown: Bool?
    public var slaveAgentPort: Int?
    public var unlabeledLoad: UnlabeledLoadStatistics?
    public var useCrumbs: Bool?
    public var useSecurity: Bool?
    public var views: [AllView]?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case _class = "_class"
        case assignedLabels = "assignedLabels"
        case mode = "mode"
        case nodeDescription = "nodeDescription"
        case nodeName = "nodeName"
        case numExecutors = "numExecutors"
        case description = "description"
        case jobs = "jobs"
        case primaryView = "primaryView"
        case quietingDown = "quietingDown"
        case slaveAgentPort = "slaveAgentPort"
        case unlabeledLoad = "unlabeledLoad"
        case useCrumbs = "useCrumbs"
        case useSecurity = "useSecurity"
        case views = "views"
    }

}
