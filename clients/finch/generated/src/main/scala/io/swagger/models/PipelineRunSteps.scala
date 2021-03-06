package io.swagger.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import io.swagger._
import io.swagger.models.ArrayList
import io.swagger.models.GenericResource
import scala.collection.immutable.Seq

/**
 * 
 */
case class PipelineRunSteps()

object PipelineRunSteps {
    /**
     * Creates the codec for converting PipelineRunSteps from and to JSON.
     */
    implicit val decoder: Decoder[PipelineRunSteps] = deriveDecoder
    implicit val encoder: ObjectEncoder[PipelineRunSteps] = deriveEncoder
}
