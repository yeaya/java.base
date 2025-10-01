#ifndef _java_util_AbstractSequentialList_h_
#define _java_util_AbstractSequentialList_h_
//$ class java.util.AbstractSequentialList
//$ extends java.util.AbstractList

#include <java/util/AbstractList.h>

namespace java {
	namespace util {
		class Collection;
		class Iterator;
	}
}

namespace java {
	namespace util {

class $import AbstractSequentialList : public ::java::util::AbstractList {
	$class(AbstractSequentialList, $NO_CLASS_INIT, ::java::util::AbstractList)
public:
	AbstractSequentialList();
	using ::java::util::AbstractList::add;
	using ::java::util::AbstractList::addAll;
	void init$();
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	virtual $Object* get(int32_t index) override;
	virtual ::java::util::Iterator* iterator() override;
	using ::java::util::AbstractList::listIterator;
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	using ::java::util::AbstractList::remove;
	virtual $Object* remove(int32_t index) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	using ::java::util::AbstractList::toArray;
};

	} // util
} // java

#endif // _java_util_AbstractSequentialList_h_