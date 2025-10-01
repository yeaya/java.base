#ifndef _java_util_ArrayDeque$DeqSpliterator_h_
#define _java_util_ArrayDeque$DeqSpliterator_h_
//$ class java.util.ArrayDeque$DeqSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		class ArrayDeque;
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

class $import ArrayDeque$DeqSpliterator : public ::java::util::Spliterator {
	$class(ArrayDeque$DeqSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	ArrayDeque$DeqSpliterator();
	void init$(::java::util::ArrayDeque* this$0);
	void init$(::java::util::ArrayDeque* this$0, int32_t origin, int32_t fence);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	int32_t getFence();
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::ArrayDeque$DeqSpliterator* trySplit() override;
	::java::util::ArrayDeque* this$0 = nullptr;
	int32_t fence = 0;
	int32_t cursor = 0;
};

	} // util
} // java

#endif // _java_util_ArrayDeque$DeqSpliterator_h_