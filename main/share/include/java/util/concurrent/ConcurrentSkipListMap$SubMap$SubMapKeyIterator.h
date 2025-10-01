#ifndef _java_util_concurrent_ConcurrentSkipListMap$SubMap$SubMapKeyIterator_h_
#define _java_util_concurrent_ConcurrentSkipListMap$SubMap$SubMapKeyIterator_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapKeyIterator
//$ extends java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapIter

#include <java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapIter.h>

namespace java {
	namespace util {
		class Comparator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentSkipListMap$SubMap;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentSkipListMap$SubMap$SubMapKeyIterator : public ::java::util::concurrent::ConcurrentSkipListMap$SubMap$SubMapIter {
	$class(ConcurrentSkipListMap$SubMap$SubMapKeyIterator, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentSkipListMap$SubMap$SubMapIter)
public:
	ConcurrentSkipListMap$SubMap$SubMapKeyIterator();
	void init$(::java::util::concurrent::ConcurrentSkipListMap$SubMap* this$0);
	virtual int32_t characteristics() override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual $Object* next() override;
	::java::util::concurrent::ConcurrentSkipListMap$SubMap* this$0 = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$SubMap$SubMapKeyIterator_h_