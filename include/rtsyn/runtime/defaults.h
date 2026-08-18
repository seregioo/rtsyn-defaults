/**
 * @file rtsyn/runtime/defaults.h
 * @author Sergio Hidalgo (sergiohg.dev@gmail.com)
 * @brief Default values for RTSyn runtime configuration.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) Sergio Hidalgo 2026
 */
#ifndef RTSYN_RUNTIME_DEFAULTS_H
#define RTSYN_RUNTIME_DEFAULTS_H

/**
 * @brief Default maximum number of runtime nodes accepted for each node type.
 */
#define RTSYN_RUNTIME_DEFAULT_CONFIG_MAX_NODES_PER_TYPE 64

/**
 * @brief Default runtime cycle period, in nanoseconds.
 */
#define RTSYN_RUNTIME_DEFAULT_CONFIG_PERIOD_NS 1000000

#endif // RTSYN_RUNTIME_DEFAULTS_H
