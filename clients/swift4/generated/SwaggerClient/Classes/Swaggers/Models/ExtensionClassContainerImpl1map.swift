//
// ExtensionClassContainerImpl1map.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class ExtensionClassContainerImpl1map: Codable {

    public var ioJenkinsBlueoceanServiceEmbeddedRestPipelineImpl: ExtensionClassImpl?
    public var ioJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl: ExtensionClassImpl?
    public var _class: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case ioJenkinsBlueoceanServiceEmbeddedRestPipelineImpl = "io.jenkins.blueocean.service.embedded.rest.PipelineImpl"
        case ioJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl = "io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl"
        case _class = "_class"
    }

}
