#ifndef _jdk_internal_logger_LoggerFinderLoader$ErrorPolicy_h_
#define _jdk_internal_logger_LoggerFinderLoader$ErrorPolicy_h_
//$ class jdk.internal.logger.LoggerFinderLoader$ErrorPolicy
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("QUIET")
#undef QUIET
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("WARNING")
#undef WARNING
#pragma push_macro("DEBUG")
#undef DEBUG

namespace jdk {
	namespace internal {
		namespace logger {

class LoggerFinderLoader$ErrorPolicy : public ::java::lang::Enum {
	$class(LoggerFinderLoader$ErrorPolicy, 0, ::java::lang::Enum)
public:
	LoggerFinderLoader$ErrorPolicy();
	static $Array<::jdk::internal::logger::LoggerFinderLoader$ErrorPolicy>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::jdk::internal::logger::LoggerFinderLoader$ErrorPolicy* valueOf($String* name);
	static $Array<::jdk::internal::logger::LoggerFinderLoader$ErrorPolicy>* values();
	static ::jdk::internal::logger::LoggerFinderLoader$ErrorPolicy* ERROR;
	static ::jdk::internal::logger::LoggerFinderLoader$ErrorPolicy* WARNING;
	static ::jdk::internal::logger::LoggerFinderLoader$ErrorPolicy* DEBUG;
	static ::jdk::internal::logger::LoggerFinderLoader$ErrorPolicy* QUIET;
	static $Array<::jdk::internal::logger::LoggerFinderLoader$ErrorPolicy>* $VALUES;
};

		} // logger
	} // internal
} // jdk

#pragma pop_macro("QUIET")
#pragma pop_macro("ERROR")
#pragma pop_macro("WARNING")
#pragma pop_macro("DEBUG")

#endif // _jdk_internal_logger_LoggerFinderLoader$ErrorPolicy_h_