#ifndef _java_util_concurrent_ConcurrentHashMap$Traverser_h_
#define _java_util_concurrent_ConcurrentHashMap$Traverser_h_
//$ class java.util.concurrent.ConcurrentHashMap$Traverser
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap$Node;
			class ConcurrentHashMap$TableStack;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentHashMap$Traverser : public ::java::lang::Object {
	$class(ConcurrentHashMap$Traverser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConcurrentHashMap$Traverser();
	void init$($Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab, int32_t size, int32_t index, int32_t limit);
	::java::util::concurrent::ConcurrentHashMap$Node* advance();
	void pushState($Array<::java::util::concurrent::ConcurrentHashMap$Node>* t, int32_t i, int32_t n);
	void recoverState(int32_t n);
	$Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab = nullptr;
	::java::util::concurrent::ConcurrentHashMap$Node* next = nullptr;
	::java::util::concurrent::ConcurrentHashMap$TableStack* stack = nullptr;
	::java::util::concurrent::ConcurrentHashMap$TableStack* spare = nullptr;
	int32_t index = 0;
	int32_t baseIndex = 0;
	int32_t baseLimit = 0;
	int32_t baseSize = 0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$Traverser_h_