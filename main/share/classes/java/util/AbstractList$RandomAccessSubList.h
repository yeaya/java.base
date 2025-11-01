#ifndef _java_util_AbstractList$RandomAccessSubList_h_
#define _java_util_AbstractList$RandomAccessSubList_h_
//$ class java.util.AbstractList$RandomAccessSubList
//$ extends java.util.AbstractList$SubList
//$ implements java.util.RandomAccess

#include <java/util/AbstractList$SubList.h>
#include <java/util/RandomAccess.h>

namespace java {
	namespace util {
		class AbstractList;
		class List;
	}
}

namespace java {
	namespace util {

class AbstractList$RandomAccessSubList : public ::java::util::AbstractList$SubList, public ::java::util::RandomAccess {
	$class(AbstractList$RandomAccessSubList, $NO_CLASS_INIT, ::java::util::AbstractList$SubList, ::java::util::RandomAccess)
public:
	AbstractList$RandomAccessSubList();
	using ::java::util::AbstractList$SubList::add;
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::AbstractList* root, int32_t fromIndex, int32_t toIndex);
	void init$(::java::util::AbstractList$RandomAccessSubList* parent, int32_t fromIndex, int32_t toIndex);
	using ::java::util::AbstractList$SubList::remove;
	using ::java::util::AbstractList$SubList::listIterator;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	using ::java::util::AbstractList$SubList::toArray;
	virtual $String* toString() override;
};

	} // util
} // java

#endif // _java_util_AbstractList$RandomAccessSubList_h_