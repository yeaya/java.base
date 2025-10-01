#ifndef _java_util_concurrent_LinkedBlockingDeque$LBDSpliterator_h_
#define _java_util_concurrent_LinkedBlockingDeque$LBDSpliterator_h_
//$ class java.util.concurrent.LinkedBlockingDeque$LBDSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

#pragma push_macro("MAX_BATCH")
#undef MAX_BATCH

namespace java {
	namespace util {
		namespace concurrent {
			class LinkedBlockingDeque;
			class LinkedBlockingDeque$Node;
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

class LinkedBlockingDeque$LBDSpliterator : public ::java::util::Spliterator {
	$class(LinkedBlockingDeque$LBDSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	LinkedBlockingDeque$LBDSpliterator();
	void init$(::java::util::concurrent::LinkedBlockingDeque* this$0);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::concurrent::LinkedBlockingDeque* this$0 = nullptr;
	static const int32_t MAX_BATCH = 33554432; // 1 << 25
	::java::util::concurrent::LinkedBlockingDeque$Node* current = nullptr;
	int32_t batch = 0;
	bool exhausted = false;
	int64_t est = 0;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("MAX_BATCH")

#endif // _java_util_concurrent_LinkedBlockingDeque$LBDSpliterator_h_