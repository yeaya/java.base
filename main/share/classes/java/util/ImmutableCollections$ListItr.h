#ifndef _java_util_ImmutableCollections$ListItr_h_
#define _java_util_ImmutableCollections$ListItr_h_
//$ class java.util.ImmutableCollections$ListItr
//$ extends java.util.ListIterator

#include <java/util/ListIterator.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace util {

class ImmutableCollections$ListItr : public ::java::util::ListIterator {
	$class(ImmutableCollections$ListItr, $PRELOAD | $NO_CLASS_INIT, ::java::util::ListIterator)
public:
	ImmutableCollections$ListItr();
	void init$(::java::util::List* list, int32_t size);
	void init$(::java::util::List* list, int32_t size, int32_t index);
	virtual void add(Object$* e) override;
	virtual bool hasNext() override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	virtual void set(Object$* e) override;
	::java::util::List* list = nullptr;
	int32_t size = 0;
	bool isListIterator = false;
	int32_t cursor = 0;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$ListItr_h_