#ifndef _java_util_ArrayList$ArrayListSpliterator_h_
#define _java_util_ArrayList$ArrayListSpliterator_h_
//$ class java.util.ArrayList$ArrayListSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		class ArrayList;
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

class $import ArrayList$ArrayListSpliterator : public ::java::util::Spliterator {
	$class(ArrayList$ArrayListSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	ArrayList$ArrayListSpliterator();
	void init$(::java::util::ArrayList* this$0, int32_t origin, int32_t fence, int32_t expectedModCount);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	int32_t getFence();
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::ArrayList$ArrayListSpliterator* trySplit() override;
	::java::util::ArrayList* this$0 = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_ArrayList$ArrayListSpliterator_h_