#ifndef _java_util_ArrayList$SubList_h_
#define _java_util_ArrayList$SubList_h_
//$ class java.util.ArrayList$SubList
//$ extends java.util.AbstractList
//$ implements java.util.RandomAccess

#include <java/lang/Array.h>
#include <java/util/AbstractList.h>
#include <java/util/RandomAccess.h>

namespace java {
	namespace util {
		class ArrayList;
		class Collection;
		class Iterator;
		class List;
		class ListIterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
			class UnaryOperator;
		}
	}
}

namespace java {
	namespace util {

class ArrayList$SubList : public ::java::util::AbstractList, public ::java::util::RandomAccess {
	$class(ArrayList$SubList, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractList, ::java::util::RandomAccess)
public:
	ArrayList$SubList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::AbstractList::add;
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::util::ArrayList* root, int32_t fromIndex, int32_t toIndex);
	void init$(::java::util::ArrayList$SubList* parent, int32_t fromIndex, int32_t toIndex);
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	bool batchRemove(::java::util::Collection* c, bool complement);
	void checkForComodification();
	virtual bool contains(Object$* o) override;
	virtual bool equals(Object$* o) override;
	virtual $Object* get(int32_t index) override;
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t lastIndexOf(Object$* o) override;
	using ::java::util::AbstractList::listIterator;
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	$String* outOfBoundsMsg(int32_t index);
	void rangeCheckForAdd(int32_t index);
	using ::java::util::AbstractList::remove;
	virtual $Object* remove(int32_t index) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual void removeRange(int32_t fromIndex, int32_t toIndex) override;
	virtual void replaceAll(::java::util::function::UnaryOperator* operator$) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	using ::java::util::AbstractList::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	void updateSizeAndModCount(int32_t sizeChange);
	::java::util::ArrayList* root = nullptr;
	::java::util::ArrayList$SubList* parent = nullptr;
	int32_t offset = 0;
	int32_t size$ = 0;
};

	} // util
} // java

#endif // _java_util_ArrayList$SubList_h_