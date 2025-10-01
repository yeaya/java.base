#ifndef _java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_h_
#define _java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_h_
//$ class java.util.concurrent.CopyOnWriteArrayList$COWSubListIterator
//$ extends java.util.ListIterator

#include <java/util/ListIterator.h>

namespace java {
	namespace util {
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
		namespace concurrent {

class CopyOnWriteArrayList$COWSubListIterator : public ::java::util::ListIterator {
	$class(CopyOnWriteArrayList$COWSubListIterator, $NO_CLASS_INIT, ::java::util::ListIterator)
public:
	CopyOnWriteArrayList$COWSubListIterator();
	void init$(::java::util::List* l, int32_t index, int32_t offset, int32_t size);
	virtual void add(Object$* e) override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	virtual void set(Object$* e) override;
	::java::util::ListIterator* it = nullptr;
	int32_t offset = 0;
	int32_t size = 0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CopyOnWriteArrayList$COWSubListIterator_h_