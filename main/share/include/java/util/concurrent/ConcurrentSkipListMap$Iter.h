#ifndef _java_util_concurrent_ConcurrentSkipListMap$Iter_h_
#define _java_util_concurrent_ConcurrentSkipListMap$Iter_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$Iter
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentSkipListMap;
			class ConcurrentSkipListMap$Node;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentSkipListMap$Iter : public ::java::util::Iterator {
	$class(ConcurrentSkipListMap$Iter, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ConcurrentSkipListMap$Iter();
	void init$(::java::util::concurrent::ConcurrentSkipListMap* this$0);
	void advance(::java::util::concurrent::ConcurrentSkipListMap$Node* b);
	virtual bool hasNext() override;
	virtual void remove() override;
	::java::util::concurrent::ConcurrentSkipListMap* this$0 = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$Node* lastReturned = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$Node* next$ = nullptr;
	$Object* nextValue = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$Iter_h_