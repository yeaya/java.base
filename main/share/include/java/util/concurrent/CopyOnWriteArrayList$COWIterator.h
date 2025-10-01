#ifndef _java_util_concurrent_CopyOnWriteArrayList$COWIterator_h_
#define _java_util_concurrent_CopyOnWriteArrayList$COWIterator_h_
//$ class java.util.concurrent.CopyOnWriteArrayList$COWIterator
//$ extends java.util.ListIterator

#include <java/lang/Array.h>
#include <java/util/ListIterator.h>

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

class $import CopyOnWriteArrayList$COWIterator : public ::java::util::ListIterator {
	$class(CopyOnWriteArrayList$COWIterator, $NO_CLASS_INIT, ::java::util::ListIterator)
public:
	CopyOnWriteArrayList$COWIterator();
	void init$($ObjectArray* es, int32_t initialCursor);
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
	$ObjectArray* snapshot = nullptr;
	int32_t cursor = 0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CopyOnWriteArrayList$COWIterator_h_