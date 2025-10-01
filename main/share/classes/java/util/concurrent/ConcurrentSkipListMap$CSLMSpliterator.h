#ifndef _java_util_concurrent_ConcurrentSkipListMap$CSLMSpliterator_h_
#define _java_util_concurrent_ConcurrentSkipListMap$CSLMSpliterator_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$CSLMSpliterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Comparator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentSkipListMap$Index;
			class ConcurrentSkipListMap$Node;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentSkipListMap$CSLMSpliterator : public ::java::lang::Object {
	$class(ConcurrentSkipListMap$CSLMSpliterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConcurrentSkipListMap$CSLMSpliterator();
	void init$(::java::util::Comparator* comparator, ::java::util::concurrent::ConcurrentSkipListMap$Index* row, ::java::util::concurrent::ConcurrentSkipListMap$Node* origin, Object$* fence, int64_t est);
	int64_t estimateSize();
	::java::util::Comparator* comparator = nullptr;
	$Object* fence = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$Index* row = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$Node* current = nullptr;
	int64_t est = 0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$CSLMSpliterator_h_