#ifndef _java_util_ArrayDeque_h_
#define _java_util_ArrayDeque_h_
//$ class java.util.ArrayDeque
//$ extends java.util.AbstractCollection
//$ implements java.util.Deque,java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Integer.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Deque.h>

#pragma push_macro("MAX_ARRAY_SIZE")
#undef MAX_ARRAY_SIZE
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Predicate;
		}
	}
}

namespace java {
	namespace util {

class $export ArrayDeque : public ::java::util::AbstractCollection, public ::java::util::Deque, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(ArrayDeque, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractCollection, ::java::util::Deque, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	ArrayDeque();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t numElements);
	void init$(::java::util::Collection* c);
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual void addFirst(Object$* e) override;
	virtual void addLast(Object$* e) override;
	bool bulkRemove(::java::util::function::Predicate* filter);
	bool bulkRemoveModified(::java::util::function::Predicate* filter, int32_t beg);
	virtual void checkInvariants();
	static void circularClear($ObjectArray* es, int32_t i, int32_t end);
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	void copyElements(::java::util::Collection* c);
	static int32_t dec(int32_t i, int32_t modulus);
	virtual bool delete$(int32_t i);
	virtual ::java::util::Iterator* descendingIterator() override;
	virtual $Object* element() override;
	static $Object* elementAt($ObjectArray* es, int32_t i);
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual $Object* getFirst() override;
	virtual $Object* getLast() override;
	void grow(int32_t needed);
	static int32_t inc(int32_t i, int32_t modulus);
	static int32_t inc(int32_t i, int32_t distance, int32_t modulus);
	static bool isClear($longs* bits, int32_t i);
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	static bool lambda$removeAll$0(::java::util::Collection* c, Object$* e);
	static bool lambda$retainAll$1(::java::util::Collection* c, Object$* e);
	static $longs* nBits(int32_t n);
	int32_t newCapacity(int32_t needed, int32_t jump);
	static $Object* nonNullElementAt($ObjectArray* es, int32_t i);
	virtual bool offer(Object$* e) override;
	virtual bool offerFirst(Object$* e) override;
	virtual bool offerLast(Object$* e) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* peek() override;
	virtual $Object* peekFirst() override;
	virtual $Object* peekLast() override;
	virtual $Object* poll() override;
	virtual $Object* pollFirst() override;
	virtual $Object* pollLast() override;
	virtual $Object* pop() override;
	virtual void push(Object$* e) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual $Object* remove() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual $Object* removeFirst() override;
	virtual bool removeFirstOccurrence(Object$* o) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual $Object* removeLast() override;
	virtual bool removeLastOccurrence(Object$* o) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	static void setBit($longs* bits, int32_t i);
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	static int32_t sub(int32_t i, int32_t j, int32_t modulus);
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $ObjectArray* toArray() override;
	$ObjectArray* toArray($Class* klazz);
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	$ObjectArray* elements = nullptr;
	int32_t head = 0;
	int32_t tail = 0;
	static const int32_t MAX_ARRAY_SIZE = 0x7FFFFFF7; // ::java::lang::Integer::MAX_VALUE - 8
	static const int64_t serialVersionUID = (int64_t)0x207CDA2E240DA08B;
};

	} // util
} // java

#pragma pop_macro("MAX_ARRAY_SIZE")
#pragma pop_macro("MAX_VALUE")

#endif // _java_util_ArrayDeque_h_