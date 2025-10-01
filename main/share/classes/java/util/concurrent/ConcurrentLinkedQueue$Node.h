#ifndef _java_util_concurrent_ConcurrentLinkedQueue$Node_h_
#define _java_util_concurrent_ConcurrentLinkedQueue$Node_h_
//$ class java.util.concurrent.ConcurrentLinkedQueue$Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentLinkedQueue$Node : public ::java::lang::Object {
	$class(ConcurrentLinkedQueue$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConcurrentLinkedQueue$Node();
	void init$(Object$* item);
	void init$();
	void appendRelaxed(::java::util::concurrent::ConcurrentLinkedQueue$Node* next);
	bool casItem(Object$* cmp, Object$* val);
	$volatile($Object*) item = nullptr;
	$volatile(::java::util::concurrent::ConcurrentLinkedQueue$Node*) next = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentLinkedQueue$Node_h_