#ifndef _java_lang_Throwable$SentinelHolder_h_
#define _java_lang_Throwable$SentinelHolder_h_
//$ class java.lang.Throwable$SentinelHolder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("STACK_TRACE_SENTINEL")
#undef STACK_TRACE_SENTINEL
#pragma push_macro("STACK_TRACE_ELEMENT_SENTINEL")
#undef STACK_TRACE_ELEMENT_SENTINEL

namespace java {
	namespace lang {
		class StackTraceElement;
	}
}

namespace java {
	namespace lang {

class Throwable$SentinelHolder : public ::java::lang::Object {
	$class(Throwable$SentinelHolder, 0, ::java::lang::Object)
public:
	Throwable$SentinelHolder();
	void init$();
	static ::java::lang::StackTraceElement* STACK_TRACE_ELEMENT_SENTINEL;
	static $Array<::java::lang::StackTraceElement>* STACK_TRACE_SENTINEL;
};

	} // lang
} // java

#pragma pop_macro("STACK_TRACE_SENTINEL")
#pragma pop_macro("STACK_TRACE_ELEMENT_SENTINEL")

#endif // _java_lang_Throwable$SentinelHolder_h_