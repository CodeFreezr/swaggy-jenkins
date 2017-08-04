/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

import { ClockDifference } from './clockDifference';
import { DiskSpaceMonitorDescriptorDiskSpace } from './diskSpaceMonitorDescriptorDiskSpace';
import { ResponseTimeMonitorData } from './responseTimeMonitorData';
import { SwapSpaceMonitorMemoryUsage2 } from './swapSpaceMonitorMemoryUsage2';


export interface HudsonMasterComputermonitorData {
    hudsonNodeMonitorsSwapSpaceMonitor?: SwapSpaceMonitorMemoryUsage2;

    hudsonNodeMonitorsTemporarySpaceMonitor?: DiskSpaceMonitorDescriptorDiskSpace;

    hudsonNodeMonitorsDiskSpaceMonitor?: DiskSpaceMonitorDescriptorDiskSpace;

    hudsonNodeMonitorsArchitectureMonitor?: string;

    hudsonNodeMonitorsResponseTimeMonitor?: ResponseTimeMonitorData;

    hudsonNodeMonitorsClockMonitor?: ClockDifference;

    class?: string;

}