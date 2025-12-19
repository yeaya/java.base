/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _java_lang_Logger_h_
#define _java_lang_Logger_h_

#include <java/lang/Object.h>
#include <inttypes.h>

namespace java {
    namespace lang {

class Logger {
public:
    enum LogLevel {
        LOG_DEBUG = 0,
        LOG_INFO,
        LOG_WARNING,
        LOG_ERROR,
        LOG_NONE
    };
    static LogLevel logLevel;
    static bool logConsole;
    static void init(const char* logFilePath);
    static void deinit();
    static void setLevel(LogLevel level);
    static void setLevel($String* level);
    static void setConsole($String* flag);
    static void log(LogLevel logLevel, char const* const format, ...);
    static bool isLoggable(LogLevel level) {
        return level >= Logger::logLevel;
	}
};

    } // lang
} // java

#define log_debug(...) if (::java::lang::Logger::logLevel <= ::java::lang::Logger::LOG_DEBUG) {::java::lang::Logger::log(::java::lang::Logger::LOG_DEBUG, __VA_ARGS__);}
#define log_info(...) if (::java::lang::Logger::logLevel <= ::java::lang::Logger::LOG_INFO) {::java::lang::Logger::log(::java::lang::Logger::LOG_INFO, __VA_ARGS__);}
#define log_warning(...) if (::java::lang::Logger::logLevel <= ::java::lang::Logger::LOG_INFO) {::java::lang::Logger::log(::java::lang::Logger::LOG_WARNING, __VA_ARGS__);}
#define log_error(...) if (::java::lang::Logger::logLevel <= ::java::lang::Logger::LOG_ERROR) {::java::lang::Logger::log(::java::lang::Logger::LOG_ERROR, __VA_ARGS__);}
#define log_out(...) ::java::lang::Logger::log(::java::lang::Logger::LOG_NONE, __VA_ARGS__);

#endif // _java_lang_Logger_h_