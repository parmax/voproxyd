#pragma once

#include "errors.h"

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <syslog.h>
#include <stdio.h>

extern int g_daemonize;

#define _log_syslog(...) syslog(LOG_NOTICE, __VA_ARGS__)
#define _log_stdout(...) do { printf(__VA_ARGS__); puts(""); } while (0)

#define log(...) \
    do { \
        if (g_daemonize) \
            _log_syslog(__VA_ARGS__); \
        else \
            _log_stdout(__VA_ARGS__); \
    } while (0)

#define die_detail(X, ...) do { log(__VA_ARGS__); exit(X); } while (0)

#define die(X, ...) die_detail(X, __VA_ARGS__)

