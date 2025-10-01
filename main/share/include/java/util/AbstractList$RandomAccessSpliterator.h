#ifndef _java_util_AbstractList$RandomAccessSpliterator_h_
#define _java_util_AbstractList$RandomAccessSpliterator_h_
//$ class java.util.AbstractList$RandomAccessSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		class AbstractList;
		class List;
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

class $import AbstractList$RandomAccessSpliterator : public ::java::util::Spliterator {
	$class(AbstractList$RandomAccessSpliterator, 0, ::java::util::Spliterator)
public:
	AbstractList$RandomAccessSpliterator();
	void init$(::java::util::List* list);
	void init$(::java::util::AbstractList$RandomAccessSpliterator* parent, int32_t origin, int32_t fence);
	virtual int32_t characteristics() override;
	static void checkAbstractListModCount(::java::util::AbstractList* alist, int32_t expectedModCount);
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	static $Object* get(::java::util::List* list, int32_t i);
	int32_t getFence();
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	static bool $assertionsDisabled;
	::java::util::List* list = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	::java::util::AbstractList* alist = nullptr;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_AbstractList$RandomAccessSpliterator_h_