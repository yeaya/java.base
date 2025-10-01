#ifndef _java_util_ArrayList$SubList$2_h_
#define _java_util_ArrayList$SubList$2_h_
//$ class java.util.ArrayList$SubList$2
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		class ArrayList$SubList;
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

class ArrayList$SubList$2 : public ::java::util::Spliterator {
	$class(ArrayList$SubList$2, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	ArrayList$SubList$2();
	void init$(::java::util::ArrayList$SubList* this$0);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	int32_t getFence();
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::ArrayList$SubList* this$0 = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_ArrayList$SubList$2_h_