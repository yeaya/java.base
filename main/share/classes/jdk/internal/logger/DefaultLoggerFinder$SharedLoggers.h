#ifndef _jdk_internal_logger_DefaultLoggerFinder$SharedLoggers_h_
#define _jdk_internal_logger_DefaultLoggerFinder$SharedLoggers_h_
//$ class jdk.internal.logger.DefaultLoggerFinder$SharedLoggers
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class System$Logger;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class Map;
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

class $export DefaultLoggerFinder$SharedLoggers : public ::java::lang::Object {
	$class(DefaultLoggerFinder$SharedLoggers, 0, ::java::lang::Object)
public:
	DefaultLoggerFinder$SharedLoggers();
	void init$();
	::java::lang::System$Logger* get(::java::util::function::Function* loggerSupplier, $String* name);
	::java::util::Map* loggers = nullptr;
	::java::lang::ref::ReferenceQueue* queue = nullptr;
	static ::jdk::internal::logger::DefaultLoggerFinder$SharedLoggers* system;
	static ::jdk::internal::logger::DefaultLoggerFinder$SharedLoggers* application;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_DefaultLoggerFinder$SharedLoggers_h_