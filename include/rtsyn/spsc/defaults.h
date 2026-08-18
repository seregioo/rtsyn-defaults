/**
 * @file rtsyn/spsc/defaults.h
 * @author Sergio Hidalgo (sergiohg.dev@gmail.com)
 * @brief Default shared-memory names for RTSyn SPSC queues.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) Sergio Hidalgo 2026
 */
#ifndef RTSYN_SPSC_DEFAULTS_H
#define RTSYN_SPSC_DEFAULTS_H

#define RTSYN_SPSC_DEFAULT_COMMAND_QUEUE          "/rtsyn_commands"
#define RTSYN_SPSC_DEFAULT_RESULT_QUEUE           "/rtsyn_command_results"
#define RTSYN_SPSC_DEFAULT_TELEMETRY_QUEUE        "/rtsyn_telemetry"
#define RTSYN_SPSC_DEFAULT_TELEMETRY_VALUES_QUEUE "/rtsyn_telemetry_values"

/**
 * @brief Maximum shared-memory object name length accepted by RTSyn SPSC.
 */
#define RTSYN_SPSC_SHM_NAME_MAX 256

/**
 * @brief Page size used when the platform page-size query is unavailable.
 */
#define RTSYN_SPSC_FALLBACK_PAGE_SIZE 4096

#define RTSYN_SPSC_ENV_COMMAND_QUEUE              "RTSYN_COMMAND_QUEUE"
#define RTSYN_SPSC_ENV_RESULT_QUEUE               "RTSYN_RESULT_QUEUE"
#define RTSYN_SPSC_ENV_TELEMETRY_QUEUE            "RTSYN_TELEMETRY_QUEUE"
#define RTSYN_SPSC_ENV_TELEMETRY_VALUES_QUEUE     "RTSYN_TELEMETRY_VALUES"

#endif // RTSYN_SPSC_DEFAULTS_H
