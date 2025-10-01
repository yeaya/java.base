#ifndef _jdk_internal_logger_SimpleConsoleLogger$Formatting_h_
#define _jdk_internal_logger_SimpleConsoleLogger$Formatting_h_
//$ class jdk.internal.logger.SimpleConsoleLogger$Formatting
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SIMPLE_CONSOLE_LOGGER_FORMAT")
#undef SIMPLE_CONSOLE_LOGGER_FORMAT
#pragma push_macro("DEFAULT_FORMAT_PROP_KEY")
#undef DEFAULT_FORMAT_PROP_KEY
#pragma push_macro("JUL_FORMAT_PROP_KEY")
#undef JUL_FORMAT_PROP_KEY
#pragma push_macro("DEFAULT_FORMAT")
#undef DEFAULT_FORMAT

namespace java {
	namespace lang {
		class StackWalker$StackFrame;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class $export SimpleConsoleLogger$Formatting : public ::java::lang::Object {
	$class(SimpleConsoleLogger$Formatting, 0, ::java::lang::Object)
public:
	SimpleConsoleLogger$Formatting();
	void init$();
	static $String* formatMessage($String* format, $ObjectArray* parameters);
	static $String* getSimpleFormat($String* key, ::java::util::function::Function* defaultPropertyGetter);
	static bool isFilteredFrame(::java::lang::StackWalker$StackFrame* st);
	static $String* DEFAULT_FORMAT;
	static $String* DEFAULT_FORMAT_PROP_KEY;
	static $String* JUL_FORMAT_PROP_KEY;
	static $String* SIMPLE_CONSOLE_LOGGER_FORMAT;
	static $StringArray* skips;
};

		} // logger
	} // internal
} // jdk

#pragma pop_macro("SIMPLE_CONSOLE_LOGGER_FORMAT")
#pragma pop_macro("DEFAULT_FORMAT_PROP_KEY")
#pragma pop_macro("JUL_FORMAT_PROP_KEY")
#pragma pop_macro("DEFAULT_FORMAT")

#endif // _jdk_internal_logger_SimpleConsoleLogger$Formatting_h_