#ifndef _java_util_concurrent_ConcurrentHashMap$BaseIterator_h_
#define _java_util_concurrent_ConcurrentHashMap$BaseIterator_h_
//$ class java.util.concurrent.ConcurrentHashMap$BaseIterator
//$ extends java.util.concurrent.ConcurrentHashMap$Traverser

#include <java/lang/Array.h>
#include <java/util/concurrent/ConcurrentHashMap$Traverser.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
			class ConcurrentHashMap$Node;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$BaseIterator : public ::java::util::concurrent::ConcurrentHashMap$Traverser {
	$class(ConcurrentHashMap$BaseIterator, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$Traverser)
public:
	ConcurrentHashMap$BaseIterator();
	void init$($Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab, int32_t size, int32_t index, int32_t limit, ::java::util::concurrent::ConcurrentHashMap* map);
	bool hasMoreElements();
	bool hasNext();
	void remove();
	::java::util::concurrent::ConcurrentHashMap* map = nullptr;
	::java::util::concurrent::ConcurrentHashMap$Node* lastReturned = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$BaseIterator_h_