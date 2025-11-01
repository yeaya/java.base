#ifndef _java_util_Vector_h_
#define _java_util_Vector_h_
//$ class java.util.Vector
//$ extends java.util.AbstractList
//$ implements java.util.RandomAccess,java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/util/AbstractList.h>
#include <java/util/RandomAccess.h>

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
		class Enumeration;
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

class $import Vector : public ::java::util::AbstractList, public ::java::util::RandomAccess, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(Vector, $NO_CLASS_INIT, ::java::util::AbstractList, ::java::util::RandomAccess, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	Vector();
	virtual void finalize() override;
	void init$(int32_t initialCapacity, int32_t capacityIncrement);
	void init$(int32_t initialCapacity);
	void init$();
	void init$(::java::util::Collection* c);
	void add(Object$* e, $ObjectArray* elementData, int32_t s);
	virtual bool add(Object$* e) override;
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	virtual void addElement(Object$* obj);
	bool bulkRemove(::java::util::function::Predicate* filter);
	virtual int32_t capacity();
	virtual void checkInvariants();
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual void copyInto($ObjectArray* anArray);
	virtual $Object* elementAt(int32_t index);
	static $Object* elementAt($ObjectArray* es, int32_t index);
	virtual $Object* elementData(int32_t index);
	virtual ::java::util::Enumeration* elements();
	virtual void ensureCapacity(int32_t minCapacity);
	virtual bool equals(Object$* o) override;
	virtual $Object* firstElement();
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual $Object* get(int32_t index) override;
	$ObjectArray* grow(int32_t minCapacity);
	$ObjectArray* grow();
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(Object$* o) override;
	virtual int32_t indexOf(Object$* o, int32_t index);
	virtual void insertElementAt(Object$* obj, int32_t index);
	static bool isClear($longs* bits, int32_t i);
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	static bool lambda$removeAll$0(::java::util::Collection* c, Object$* e);
	static bool lambda$retainAll$1(::java::util::Collection* c, Object$* e);
	virtual $Object* lastElement();
	virtual int32_t lastIndexOf(Object$* o) override;
	virtual int32_t lastIndexOf(Object$* o, int32_t index);
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	virtual ::java::util::ListIterator* listIterator() override;
	static $longs* nBits(int32_t n);
	void readObject(::java::io::ObjectInputStream* in);
	virtual bool remove(Object$* o) override;
	virtual $Object* remove(int32_t index) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual void removeAllElements();
	virtual bool removeElement(Object$* obj);
	virtual void removeElementAt(int32_t index);
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual void removeRange(int32_t fromIndex, int32_t toIndex) override;
	virtual void replaceAll(::java::util::function::UnaryOperator* operator$) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	static void setBit($longs* bits, int32_t i);
	virtual void setElementAt(Object$* obj, int32_t index);
	virtual void setSize(int32_t newSize);
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
	$ObjectArray* elementData$ = nullptr;
	int32_t elementCount = 0;
	int32_t capacityIncrement = 0;
	static const int64_t serialVersionUID = (int64_t)0xD9977D5B803BAF01;
};

	} // util
} // java

#endif // _java_util_Vector_h_