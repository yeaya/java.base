#ifndef _java_util_concurrent_FutureTask$WaitNode_h_
#define _java_util_concurrent_FutureTask$WaitNode_h_
//$ class java.util.concurrent.FutureTask$WaitNode
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Thread;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import FutureTask$WaitNode : public ::java::lang::Object {
	$class(FutureTask$WaitNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FutureTask$WaitNode();
	void init$();
	$volatile($Thread*) thread = nullptr;
	$volatile(::java::util::concurrent::FutureTask$WaitNode*) next = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_FutureTask$WaitNode_h_