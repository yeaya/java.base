#ifndef _jdk_internal_logger_SimpleConsoleLogger$CallerFinder_h_
#define _jdk_internal_logger_SimpleConsoleLogger$CallerFinder_h_
//$ class jdk.internal.logger.SimpleConsoleLogger$CallerFinder
//$ extends java.util.function.Predicate

#include <java/util/function/Predicate.h>

#pragma push_macro("WALKER")
#undef WALKER

namespace java {
	namespace lang {
		class StackWalker;
		class StackWalker$StackFrame;
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class $import SimpleConsoleLogger$CallerFinder : public ::java::util::function::Predicate {
	$class(SimpleConsoleLogger$CallerFinder, 0, ::java::util::function::Predicate)
public:
	SimpleConsoleLogger$CallerFinder();
	void init$();
	::java::util::Optional* get();
	bool isLoggerImplFrame($String* cname);
	::java::util::Optional* lambda$get$0(::java::util::stream::Stream* s);
	bool test(::java::lang::StackWalker$StackFrame* t);
	virtual bool test(Object$* t) override;
	static ::java::lang::StackWalker* WALKER;
	bool lookingForLogger = false;
};

		} // logger
	} // internal
} // jdk

#pragma pop_macro("WALKER")

#endif // _jdk_internal_logger_SimpleConsoleLogger$CallerFinder_h_