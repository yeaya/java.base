#ifndef _jdk_internal_logger_BootstrapLogger$LoggingBackend_h_
#define _jdk_internal_logger_BootstrapLogger$LoggingBackend_h_
//$ class jdk.internal.logger.BootstrapLogger$LoggingBackend
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("JUL_WITH_CONFIG")
#undef JUL_WITH_CONFIG
#pragma push_macro("CUSTOM")
#undef CUSTOM
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("JUL_DEFAULT")
#undef JUL_DEFAULT

namespace jdk {
	namespace internal {
		namespace logger {

class BootstrapLogger$LoggingBackend : public ::java::lang::Enum {
	$class(BootstrapLogger$LoggingBackend, 0, ::java::lang::Enum)
public:
	BootstrapLogger$LoggingBackend();
	static $Array<::jdk::internal::logger::BootstrapLogger$LoggingBackend>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, bool useLoggerFinder);
	static ::jdk::internal::logger::BootstrapLogger$LoggingBackend* valueOf($String* name);
	static $Array<::jdk::internal::logger::BootstrapLogger$LoggingBackend>* values();
	static ::jdk::internal::logger::BootstrapLogger$LoggingBackend* NONE;
	static ::jdk::internal::logger::BootstrapLogger$LoggingBackend* JUL_DEFAULT;
	static ::jdk::internal::logger::BootstrapLogger$LoggingBackend* JUL_WITH_CONFIG;
	static ::jdk::internal::logger::BootstrapLogger$LoggingBackend* CUSTOM;
	static $Array<::jdk::internal::logger::BootstrapLogger$LoggingBackend>* $VALUES;
	bool useLoggerFinder = false;
};

		} // logger
	} // internal
} // jdk

#pragma pop_macro("JUL_WITH_CONFIG")
#pragma pop_macro("CUSTOM")
#pragma pop_macro("NONE")
#pragma pop_macro("JUL_DEFAULT")

#endif // _jdk_internal_logger_BootstrapLogger$LoggingBackend_h_