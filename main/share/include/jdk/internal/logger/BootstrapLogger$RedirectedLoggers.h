#ifndef _jdk_internal_logger_BootstrapLogger$RedirectedLoggers_h_
#define _jdk_internal_logger_BootstrapLogger$RedirectedLoggers_h_
//$ class jdk.internal.logger.BootstrapLogger$RedirectedLoggers
//$ extends java.util.function.Function

#include <java/util/function/Function.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace util {
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace logger {
			class LazyLoggers$LazyLoggerAccessor;
			class SurrogateLogger;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class $import BootstrapLogger$RedirectedLoggers : public ::java::util::function::Function {
	$class(BootstrapLogger$RedirectedLoggers, 0, ::java::util::function::Function)
public:
	BootstrapLogger$RedirectedLoggers();
	void init$();
	::jdk::internal::logger::SurrogateLogger* apply(::jdk::internal::logger::LazyLoggers$LazyLoggerAccessor* t);
	virtual $Object* apply(Object$* t) override;
	::java::util::Map* drainLoggersMap();
	::jdk::internal::logger::SurrogateLogger* get(::jdk::internal::logger::LazyLoggers$LazyLoggerAccessor* a);
	static void replaceSurrogateLoggers(::java::util::Map* accessors);
	::java::util::Map* redirectedLoggers = nullptr;
	bool cleared = false;
	static ::jdk::internal::logger::BootstrapLogger$RedirectedLoggers* INSTANCE;
};

		} // logger
	} // internal
} // jdk

#pragma pop_macro("INSTANCE")

#endif // _jdk_internal_logger_BootstrapLogger$RedirectedLoggers_h_