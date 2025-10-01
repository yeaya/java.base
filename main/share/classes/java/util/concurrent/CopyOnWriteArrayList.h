#ifndef _java_util_concurrent_CopyOnWriteArrayList_h_
#define _java_util_concurrent_CopyOnWriteArrayList_h_
//$ class java.util.concurrent.CopyOnWriteArrayList
//$ extends java.util.List
//$ implements java.util.RandomAccess,java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/util/List.h>
#include <java/util/RandomAccess.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class Iterator;
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
		namespace concurrent {

class $export CopyOnWriteArrayList : public ::java::util::List, public ::java::util::RandomAccess, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(CopyOnWriteArrayList, $PRELOAD | $NO_CLASS_INIT, ::java::util::List, ::java::util::RandomAccess, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	CopyOnWriteArrayList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	void init$();
	void init$(::java::util::Collection* c);
	void init$($ObjectArray* toCopyIn);
	virtual bool add(Object$* e) override;
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	virtual int32_t addAllAbsent(::java::util::Collection* c);
	virtual bool addIfAbsent(Object$* e);
	bool addIfAbsent(Object$* e, $ObjectArray* snapshot);
	bool bulkRemove(::java::util::function::Predicate* filter);
	virtual bool bulkRemove(::java::util::function::Predicate* filter, int32_t i, int32_t end);
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	static $Object* elementAt($ObjectArray* a, int32_t index);
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual $Object* get(int32_t index) override;
	$ObjectArray* getArray();
	virtual int32_t hashCode() override;
	static int32_t hashCodeOfRange($ObjectArray* es, int32_t from, int32_t to);
	virtual int32_t indexOf(Object$* o) override;
	virtual int32_t indexOf(Object$* e, int32_t index);
	static int32_t indexOfRange(Object$* o, $ObjectArray* es, int32_t from, int32_t to);
	static bool isClear($longs* bits, int32_t i);
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	static bool lambda$removeAll$0(::java::util::Collection* c, Object$* e);
	static ::java::lang::reflect::Field* lambda$resetLock$2();
	static bool lambda$retainAll$1(::java::util::Collection* c, Object$* e);
	virtual int32_t lastIndexOf(Object$* o) override;
	virtual int32_t lastIndexOf(Object$* e, int32_t index);
	static int32_t lastIndexOfRange(Object$* o, $ObjectArray* es, int32_t from, int32_t to);
	virtual ::java::util::ListIterator* listIterator() override;
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	static $longs* nBits(int32_t n);
	static $String* outOfBounds(int32_t index, int32_t size);
	void readObject(::java::io::ObjectInputStream* s);
	virtual $Object* remove(int32_t index) override;
	virtual bool remove(Object$* o) override;
	bool remove(Object$* o, $ObjectArray* snapshot, int32_t index);
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual void removeRange(int32_t fromIndex, int32_t toIndex);
	virtual void replaceAll(::java::util::function::UnaryOperator* operator$) override;
	virtual void replaceAllRange(::java::util::function::UnaryOperator* operator$, int32_t i, int32_t end);
	void resetLock();
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	void setArray($ObjectArray* a);
	static void setBit($longs* bits, int32_t i);
	virtual int32_t size() override;
	virtual void sort(::java::util::Comparator* c) override;
	virtual void sortRange(::java::util::Comparator* c, int32_t i, int32_t end);
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	using ::java::util::List::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x785D9FD546AB90C3;
	$Object* lock = nullptr;
	$volatile($ObjectArray*) array = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CopyOnWriteArrayList_h_