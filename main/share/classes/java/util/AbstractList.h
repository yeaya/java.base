#ifndef _java_util_AbstractList_h_
#define _java_util_AbstractList_h_
//$ class java.util.AbstractList
//$ extends java.util.AbstractCollection
//$ implements java.util.List

#include <java/util/AbstractCollection.h>
#include <java/util/List.h>

namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class ListIterator;
	}
}

namespace java {
	namespace util {

class $export AbstractList : public ::java::util::AbstractCollection, public ::java::util::List {
	$class(AbstractList, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractCollection, ::java::util::List)
public:
	AbstractList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool addAll(::java::util::Collection* c) override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual $Object* get(int32_t index) override {return nullptr;}
	void init$();
	virtual bool add(Object$* e) override;
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	virtual void clear() override;
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(Object$* o) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t lastIndexOf(Object$* o) override;
	virtual ::java::util::ListIterator* listIterator() override;
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	$String* outOfBoundsMsg(int32_t index);
	virtual ::java::util::stream::Stream* parallelStream() override;
	void rangeCheckForAdd(int32_t index);
	virtual bool remove(Object$* o) override;
	virtual $Object* remove(int32_t index) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual void removeRange(int32_t fromIndex, int32_t toIndex);
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	virtual int32_t size() override {return 0;}
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	static void subListRangeCheck(int32_t fromIndex, int32_t toIndex, int32_t size);
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $String* toString() override;
	int32_t modCount = 0;
};

	} // util
} // java

#endif // _java_util_AbstractList_h_