#ifndef _java_util_ArrayList_h_
#define _java_util_ArrayList_h_
//$ class java.util.ArrayList
//$ extends java.util.AbstractList
//$ implements java.util.RandomAccess,java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/util/AbstractList.h>
#include <java/util/RandomAccess.h>

#pragma push_macro("EMPTY_ELEMENTDATA")
#undef EMPTY_ELEMENTDATA
#pragma push_macro("DEFAULTCAPACITY_EMPTY_ELEMENTDATA")
#undef DEFAULTCAPACITY_EMPTY_ELEMENTDATA
#pragma push_macro("DEFAULT_CAPACITY")
#undef DEFAULT_CAPACITY

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class Iterator;
		class List;
		class ListIterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Predicate;
			class UnaryOperator;
		}
	}
}

namespace java {
	namespace util {

class $import ArrayList : public ::java::util::AbstractList, public ::java::util::RandomAccess, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(ArrayList, $PRELOAD, ::java::util::AbstractList, ::java::util::RandomAccess, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	ArrayList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	void init$(int32_t initialCapacity);
	void init$();
	void init$(::java::util::Collection* c);
	void add(Object$* e, $ObjectArray* elementData, int32_t s);
	virtual bool add(Object$* e) override;
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	virtual bool batchRemove(::java::util::Collection* c, bool complement, int32_t from, int32_t end);
	void checkForComodification(int32_t expectedModCount);
	virtual void checkInvariants();
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	static $Object* elementAt($ObjectArray* es, int32_t index);
	virtual $Object* elementData(int32_t index);
	virtual void ensureCapacity(int32_t minCapacity);
	virtual bool equals(Object$* o) override;
	bool equalsArrayList(::java::util::ArrayList* other);
	virtual bool equalsRange(::java::util::List* other, int32_t from, int32_t to);
	void fastRemove($ObjectArray* es, int32_t i);
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual $Object* get(int32_t index) override;
	$ObjectArray* grow(int32_t minCapacity);
	$ObjectArray* grow();
	virtual int32_t hashCode() override;
	virtual int32_t hashCodeRange(int32_t from, int32_t to);
	virtual int32_t indexOf(Object$* o) override;
	virtual int32_t indexOfRange(Object$* o, int32_t start, int32_t end);
	static bool isClear($longs* bits, int32_t i);
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t lastIndexOf(Object$* o) override;
	virtual int32_t lastIndexOfRange(Object$* o, int32_t start, int32_t end);
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	virtual ::java::util::ListIterator* listIterator() override;
	static $longs* nBits(int32_t n);
	$String* outOfBoundsMsg(int32_t index);
	static $String* outOfBoundsMsg(int32_t fromIndex, int32_t toIndex);
	void rangeCheckForAdd(int32_t index);
	void readObject(::java::io::ObjectInputStream* s);
	virtual $Object* remove(int32_t index) override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool removeIf(::java::util::function::Predicate* filter, int32_t i, int32_t end);
	virtual void removeRange(int32_t fromIndex, int32_t toIndex) override;
	virtual void replaceAll(::java::util::function::UnaryOperator* operator$) override;
	void replaceAllRange(::java::util::function::UnaryOperator* operator$, int32_t i, int32_t end);
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	static void setBit($longs* bits, int32_t i);
	void shiftTailOverGap($ObjectArray* es, int32_t lo, int32_t hi);
	virtual int32_t size() override;
	virtual void sort(::java::util::Comparator* c) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	using ::java::util::AbstractList::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	virtual void trimToSize();
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x7881D21D99C7619D;
	static const int32_t DEFAULT_CAPACITY = 10;
	static $ObjectArray* EMPTY_ELEMENTDATA;
	static $ObjectArray* DEFAULTCAPACITY_EMPTY_ELEMENTDATA;
	$ObjectArray* elementData$ = nullptr;
	int32_t size$ = 0;
};

	} // util
} // java

#pragma pop_macro("EMPTY_ELEMENTDATA")
#pragma pop_macro("DEFAULTCAPACITY_EMPTY_ELEMENTDATA")
#pragma pop_macro("DEFAULT_CAPACITY")

#endif // _java_util_ArrayList_h_