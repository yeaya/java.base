#ifndef _java_util_ImmutableCollections$AbstractImmutableList_h_
#define _java_util_ImmutableCollections$AbstractImmutableList_h_
//$ class java.util.ImmutableCollections$AbstractImmutableList
//$ extends java.util.ImmutableCollections$AbstractImmutableCollection
//$ implements java.util.List,java.util.RandomAccess

#include <java/util/ImmutableCollections$AbstractImmutableCollection.h>
#include <java/util/List.h>
#include <java/util/RandomAccess.h>

namespace java {
	namespace lang {
		class IndexOutOfBoundsException;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class Iterator;
		class ListIterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class UnaryOperator;
		}
	}
}

namespace java {
	namespace util {

class ImmutableCollections$AbstractImmutableList : public ::java::util::ImmutableCollections$AbstractImmutableCollection, public ::java::util::List, public ::java::util::RandomAccess {
	$class(ImmutableCollections$AbstractImmutableList, $PRELOAD | $NO_CLASS_INIT, ::java::util::ImmutableCollections$AbstractImmutableCollection, ::java::util::List, ::java::util::RandomAccess)
public:
	ImmutableCollections$AbstractImmutableList();
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	void init$();
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	virtual bool contains(Object$* o) override;
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::util::ListIterator* listIterator() override;
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	virtual ::java::lang::IndexOutOfBoundsException* outOfBounds(int32_t index);
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual bool remove(Object$* o) override;
	virtual $Object* remove(int32_t index) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual void replaceAll(::java::util::function::UnaryOperator* operator$) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	virtual int32_t size() override {return 0;}
	virtual void sort(::java::util::Comparator* c) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	static void subListRangeCheck(int32_t fromIndex, int32_t toIndex, int32_t size);
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $String* toString() override;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$AbstractImmutableList_h_