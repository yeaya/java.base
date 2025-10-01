#ifndef _java_util_concurrent_Flow_h_
#define _java_util_concurrent_Flow_h_
//$ class java.util.concurrent.Flow
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_BUFFER_SIZE")
#undef DEFAULT_BUFFER_SIZE

namespace java {
	namespace util {
		namespace concurrent {

class $import Flow : public ::java::lang::Object {
	$class(Flow, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Flow();
	void init$();
	static int32_t defaultBufferSize();
	static const int32_t DEFAULT_BUFFER_SIZE = 256;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("DEFAULT_BUFFER_SIZE")

#endif // _java_util_concurrent_Flow_h_