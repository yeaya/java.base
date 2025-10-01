#ifndef _java_util_concurrent_ConcurrentLinkedDeque$CLDSpliterator_h_
#define _java_util_concurrent_ConcurrentLinkedDeque$CLDSpliterator_h_
//$ class java.util.concurrent.ConcurrentLinkedDeque$CLDSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

#pragma push_macro("MAX_BATCH")
#undef MAX_BATCH

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentLinkedDeque;
			class ConcurrentLinkedDeque$Node;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentLinkedDeque$CLDSpliterator : public ::java::util::Spliterator {
	$class(ConcurrentLinkedDeque$CLDSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	ConcurrentLinkedDeque$CLDSpliterator();
	void init$(::java::util::concurrent::ConcurrentLinkedDeque* this$0);
	virtual int32_t characteristics() override;
	::java::util::concurrent::ConcurrentLinkedDeque$Node* current();
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	void setCurrent(::java::util::concurrent::ConcurrentLinkedDeque$Node* p);
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::concurrent::ConcurrentLinkedDeque* this$0 = nullptr;
	static const int32_t MAX_BATCH = 33554432; // 1 << 25
	::java::util::concurrent::ConcurrentLinkedDeque$Node* current$ = nullptr;
	int32_t batch = 0;
	bool exhausted = false;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("MAX_BATCH")

#endif // _java_util_concurrent_ConcurrentLinkedDeque$CLDSpliterator_h_