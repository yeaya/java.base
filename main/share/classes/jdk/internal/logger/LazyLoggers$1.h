#ifndef _jdk_internal_logger_LazyLoggers$1_h_
#define _jdk_internal_logger_LazyLoggers$1_h_
//$ class jdk.internal.logger.LazyLoggers$1
//$ extends java.util.function.BiFunction

#include <java/util/function/BiFunction.h>

namespace java {
	namespace lang {
		class Module;
		class System$Logger;
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class LazyLoggers$1 : public ::java::util::function::BiFunction {
	$class(LazyLoggers$1, $NO_CLASS_INIT, ::java::util::function::BiFunction)
public:
	LazyLoggers$1();
	void init$();
	virtual ::java::lang::System$Logger* apply($String* name, ::java::lang::Module* module);
	virtual $Object* apply(Object$* name, Object$* module) override;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_LazyLoggers$1_h_