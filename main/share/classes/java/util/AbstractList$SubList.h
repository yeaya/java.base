#ifndef _java_util_AbstractList$SubList_h_
#define _java_util_AbstractList$SubList_h_
//$ class java.util.AbstractList$SubList
//$ extends java.util.AbstractList

#include <java/util/AbstractList.h>

namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class List;
		class ListIterator;
	}
}

namespace java {
	namespace util {

class AbstractList$SubList : public ::java::util::AbstractList {
	$class(AbstractList$SubList, $NO_CLASS_INIT, ::java::util::AbstractList)
public:
	AbstractList$SubList();
	using ::java::util::AbstractList::add;
	void init$(::java::util::AbstractList* root, int32_t fromIndex, int32_t toIndex);
	void init$(::java::util::AbstractList$SubList* parent, int32_t fromIndex, int32_t toIndex);
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	void checkForComodification();
	virtual $Object* get(int32_t index) override;
	virtual ::java::util::Iterator* iterator() override;
	using ::java::util::AbstractList::listIterator;
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	$String* outOfBoundsMsg(int32_t index);
	void rangeCheckForAdd(int32_t index);
	using ::java::util::AbstractList::remove;
	virtual $Object* remove(int32_t index) override;
	virtual void removeRange(int32_t fromIndex, int32_t toIndex) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	virtual int32_t size() override;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	using ::java::util::AbstractList::toArray;
	void updateSizeAndModCount(int32_t sizeChange);
	::java::util::AbstractList* root = nullptr;
	::java::util::AbstractList$SubList* parent = nullptr;
	int32_t offset = 0;
	int32_t size$ = 0;
};

	} // util
} // java

#endif // _java_util_AbstractList$SubList_h_