#ifndef _java_util_concurrent_ConcurrentLinkedDeque$Node_h_
#define _java_util_concurrent_ConcurrentLinkedDeque$Node_h_
//$ class java.util.concurrent.ConcurrentLinkedDeque$Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentLinkedDeque$Node : public ::java::lang::Object {
	$class(ConcurrentLinkedDeque$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConcurrentLinkedDeque$Node();
	void init$();
	$volatile(::java::util::concurrent::ConcurrentLinkedDeque$Node*) prev = nullptr;
	$volatile($Object*) item = nullptr;
	$volatile(::java::util::concurrent::ConcurrentLinkedDeque$Node*) next = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentLinkedDeque$Node_h_