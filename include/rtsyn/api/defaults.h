/**
 * @file rtsyn/api/defaults.h
 * @author Sergio Hidalgo (sergiohg.dev@gmail.com)
 * @brief Default values for the RTSyn API process.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) Sergio Hidalgo 2026
 */
#ifndef RTSYN_API_DEFAULTS_H
#define RTSYN_API_DEFAULTS_H

/**
 * @brief Default bind address used by the API server.
 */
#define RTSYN_API_DEFAULT_HOST "0.0.0.0"

/**
 * @brief Default TCP port used by the API server.
 */
#define RTSYN_API_DEFAULT_PORT 17190

/**
 * @brief Default file path where the API mirrors telemetry value snapshots.
 */
#define RTSYN_API_DEFAULT_VALUES_FILE "/tmp/rtsyn-values"

/**
 * @brief Maximum telemetry events drained from the queue in one API poll.
 */
#define RTSYN_API_DEFAULT_MAX_TELEMETRY_EVENTS_PER_DRAIN 256

/**
 * @brief Maximum telemetry events retained in the API recent-event buffer.
 */
#define RTSYN_API_DEFAULT_RECENT_TELEMETRY_EVENTS 256

/**
 * @brief Default interval, in milliseconds, between telemetry queue drain attempts.
 */
#define RTSYN_API_DEFAULT_TELEMETRY_DRAIN_PERIOD_MS 5

#define RTSYN_API_HTTP_STATUS_ACCEPTED           202
#define RTSYN_API_HTTP_STATUS_BAD_REQUEST        400
#define RTSYN_API_HTTP_STATUS_UNAVAILABLE        503

#define RTSYN_API_ENV_HOST                       "RTSYN_API_HOST"
#define RTSYN_API_ENV_PORT                       "RTSYN_API_PORT"
#define RTSYN_API_ENV_CREATE_QUEUES              "RTSYN_API_CREATE_QUEUES"
#define RTSYN_API_ENV_VALUES_FILE                "RTSYN_VALUES_FILE"

#define RTSYN_API_ENDPOINT_HEALTH                "/health"
#define RTSYN_API_ENDPOINT_CAPABILITIES          "/capabilities"
#define RTSYN_API_ENDPOINT_RUNTIME_NODES         "/runtime/nodes"
#define RTSYN_API_ENDPOINT_TELEMETRY_EVENTS      "/telemetry/events"
#define RTSYN_API_ENDPOINT_TELEMETRY_VALUES_FILE "/telemetry/values-file"
#define RTSYN_API_ENDPOINT_TELEMETRY_CSV_FILE    "/telemetry/csv-file"
/**
 * @brief Endpoint used to read the latest runtime timing measurements.
 */
#define RTSYN_API_ENDPOINT_MEASUREMENTS          "/measurements"
#define RTSYN_API_ENDPOINT_COMMAND_GLOBAL        "/commands/global"
#define RTSYN_API_ENDPOINT_COMMAND_PLUGIN        "/commands/plugin"
#define RTSYN_API_ENDPOINT_COMMAND_LOAD_PLUGIN   "/commands/plugin/load"
#define RTSYN_API_ENDPOINT_COMMAND_ADD_PLUGIN    "/commands/plugin/add"
#define RTSYN_API_ENDPOINT_COMMAND_LOAD_DEVICE   "/commands/device/load"
#define RTSYN_API_ENDPOINT_COMMAND_ADD_DEVICE    "/commands/device/add"

/**
 * @brief Endpoint used to request runtime node removal by ID.
 */
#define RTSYN_API_ENDPOINT_COMMAND_REMOVE_NODE   "/commands/node/remove"

/**
 * @brief Endpoint used to request a runtime connection creation.
 */
#define RTSYN_API_ENDPOINT_COMMAND_ADD_CONNECTION "/commands/connection/add"

/**
 * @brief Endpoint used to request a runtime connection removal.
 */
#define RTSYN_API_ENDPOINT_COMMAND_REMOVE_CONNECTION "/commands/connection/remove"
#define RTSYN_API_ENDPOINT_COMMAND_PORT_VALUES   "/commands/port-values"
#define RTSYN_API_ENDPOINT_COMMAND_VARIABLES     "/commands/variables"
#define RTSYN_API_ENDPOINT_COMMAND_SET_PARAM     "/commands/param"
#define RTSYN_API_ENDPOINT_COMMAND_RUNTIME_PERIOD "/commands/runtime/period"
#define RTSYN_API_ENDPOINT_COMMAND_RUNTIME_PRIORITY "/commands/runtime/priority"
#define RTSYN_API_ENDPOINT_COMMAND_RUNTIME_DEADLINE_TOLERANCE "/commands/runtime/deadline-tolerance"

#endif // RTSYN_API_DEFAULTS_H
