/**
 * @file rtsyn/engine/defaults.h
 * @author Sergio Hidalgo (sergiohg.dev@gmail.com)
 * @brief Default values for the RTSyn engine.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) Sergio Hidalgo 2026
 */
#ifndef RTSYN_ENGINE_DEFAULTS_H
#define RTSYN_ENGINE_DEFAULTS_H

#include <pthread.h>
#include <sched.h>

/**
 * @brief Maximum number of queued commands processed by one engine cycle.
 */
#define RTSYN_ENGINE_DEFAULT_COMMAND_BUDGET                  64u

/**
 * @brief Maximum number of node telemetry subscriptions tracked by one engine.
 */
#define RTSYN_ENGINE_DEFAULT_TELEMETRY_SUBSCRIPTION_CAPACITY 64u

/**
 * @brief Default pthread scheduling policy for the engine RT thread.
 *
 * `SCHED_FIFO` is the realtime policy used by the preempt-rt backend.
 */
#define RTSYN_ENGINE_DEFAULT_RT_THREAD_POLICY                SCHED_FIFO

/**
 * @brief Default pthread scheduling priority for the engine RT thread.
 *
 * Linux exposes realtime priorities in the 1..99 range for `SCHED_FIFO`; this
 * default selects the maximum priority.
 */
#define RTSYN_ENGINE_DEFAULT_RT_THREAD_PRIORITY              99

/**
 * @brief Default pthread scheduling inheritance mode for the engine RT thread.
 */
#define RTSYN_ENGINE_DEFAULT_RT_THREAD_INHERITSCHED          PTHREAD_EXPLICIT_SCHED

/**
 * @brief Default pthread scheduling policy for the engine wait thread.
 *
 * The wait thread is not part of the realtime execution path.
 */
#define RTSYN_ENGINE_DEFAULT_WAIT_THREAD_POLICY              SCHED_OTHER

/**
 * @brief Default pthread scheduling priority for the engine wait thread.
 */
#define RTSYN_ENGINE_DEFAULT_WAIT_THREAD_PRIORITY            0

/**
 * @brief Default pthread scheduling inheritance mode for the engine wait thread.
 */
#define RTSYN_ENGINE_DEFAULT_WAIT_THREAD_INHERITSCHED        PTHREAD_INHERIT_SCHED

#define RTSYN_ENGINE_DEFAULT_THREAD_POLICY                   RTSYN_ENGINE_DEFAULT_RT_THREAD_POLICY
#define RTSYN_ENGINE_DEFAULT_THREAD_PRIORITY                 RTSYN_ENGINE_DEFAULT_RT_THREAD_PRIORITY
#define RTSYN_ENGINE_DEFAULT_THREAD_INHERITSCHED             RTSYN_ENGINE_DEFAULT_RT_THREAD_INHERITSCHED

#endif // RTSYN_ENGINE_DEFAULTS_H
