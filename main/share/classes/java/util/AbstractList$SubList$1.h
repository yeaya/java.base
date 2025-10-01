#ifndef _java_util_AbstractList$SubList$1_h_
#define _java_util_AbstractList$SubList$1_h_
//$ class java.util.AbstractList$SubList$1
//$ extends java.util.ListIterator

#include <java/util/ListIterator.h>

namespace java {
	namespace util {
		class AbstractList$SubList;
	}
}

namespace java {
	namespace util {

class AbstractList$SubList$1 : public ::java::util::ListIterator {
	$class(AbstractList$SubList$1, $NO_CLASS_INIT, ::java::util::ListIterator)
public:
	AbstractList$SubList$1();
	void init$(::java::util::AbstractList$SubList* this$0, int32_t val$index);
	virtual void add(Object$* e) override;
	virtual bool hasNext() override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	virtual void set(Object$* e) override;
	::java::util::AbstractList$SubList* this$0 = nullptr;
	int32_t val$index = 0;
	::java::util::ListIterator* i = nullptr;
};

	} // util
} // java

#endif // _java_util_AbstractList$SubList$1_h_