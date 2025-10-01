#ifndef _jdk_internal_logger_LazyLoggers$LazyLoggerFactories_h_
#define _jdk_internal_logger_LazyLoggers$LazyLoggerFactories_h_
//$ class jdk.internal.logger.LazyLoggers$LazyLoggerFactories
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class LazyLoggers$LazyLoggerFactories : public ::java::lang::Object {
	$class(LazyLoggers$LazyLoggerFactories, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LazyLoggers$LazyLoggerFactories();
	void init$(::java::util::function::BiFunction* loggerSupplier);
	void init$(::java::util::function::BiFunction* loggerSupplier, ::java::lang::Void* unused);
	::java::util::function::BiFunction* loggerSupplier = nullptr;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_LazyLoggers$LazyLoggerFactories_h_