#ifndef _java_util_ImmutableCollections$SubList_h_
#define _java_util_ImmutableCollections$SubList_h_
//$ class java.util.ImmutableCollections$SubList
//$ extends java.util.ImmutableCollections$AbstractImmutableList

#include <java/lang/Array.h>
#include <java/util/ImmutableCollections$AbstractImmutableList.h>

namespace java {
	namespace util {
		class Iterator;
		class List;
		class ListIterator;
	}
}

namespace java {
	namespace util {

class ImmutableCollections$SubList : public ::java::util::ImmutableCollections$AbstractImmutableList {
	$class(ImmutableCollections$SubList, 0, ::java::util::ImmutableCollections$AbstractImmutableList)
public:
	ImmutableCollections$SubList();
	using ::java::util::ImmutableCollections$AbstractImmutableList::add;
	using ::java::util::ImmutableCollections$AbstractImmutableList::addAll;
	using ::java::util::ImmutableCollections$AbstractImmutableList::listIterator;
	void init$(::java::util::ImmutableCollections$AbstractImmutableList* root, int32_t offset, int32_t size);
	bool allowNulls();
	static ::java::util::ImmutableCollections$SubList* fromList(::java::util::ImmutableCollections$AbstractImmutableList* list, int32_t fromIndex, int32_t toIndex);
	static ::java::util::ImmutableCollections$SubList* fromSubList(::java::util::ImmutableCollections$SubList* parent, int32_t fromIndex, int32_t toIndex);
	virtual $Object* get(int32_t index) override;
	virtual int32_t indexOf(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t lastIndexOf(Object$* o) override;
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	void rangeCheck(int32_t index);
	using ::java::util::ImmutableCollections$AbstractImmutableList::remove;
	virtual int32_t size() override;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	using ::java::util::ImmutableCollections$AbstractImmutableList::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	static bool $assertionsDisabled;
	::java::util::ImmutableCollections$AbstractImmutableList* root = nullptr;
	int32_t offset = 0;
	int32_t size$ = 0;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$SubList_h_