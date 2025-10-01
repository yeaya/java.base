#ifndef _java_util_concurrent_ConcurrentHashMap$TableStack_h_
#define _java_util_concurrent_ConcurrentHashMap$TableStack_h_
//$ class java.util.concurrent.ConcurrentHashMap$TableStack
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap$Node;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentHashMap$TableStack : public ::java::lang::Object {
	$class(ConcurrentHashMap$TableStack, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConcurrentHashMap$TableStack();
	void init$();
	int32_t length = 0;
	int32_t index = 0;
	$Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab = nullptr;
	::java::util::concurrent::ConcurrentHashMap$TableStack* next = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$TableStack_h_