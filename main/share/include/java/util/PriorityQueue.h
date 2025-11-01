#ifndef _java_util_PriorityQueue_h_
#define _java_util_PriorityQueue_h_
//$ class java.util.PriorityQueue
//$ extends java.util.AbstractQueue
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractQueue.h>

#pragma push_macro("DEFAULT_INITIAL_CAPACITY")
#undef DEFAULT_INITIAL_CAPACITY

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
		class SortedSet;
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

class $import PriorityQueue : public ::java::util::AbstractQueue, public ::java::io::Serializable {
	$class(PriorityQueue, $NO_CLASS_INIT, ::java::util::AbstractQueue, ::java::io::Serializable)
public:
	PriorityQueue();
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t initialCapacity);
	void init$(::java::util::Comparator* comparator);
	void init$(int32_t initialCapacity, ::java::util::Comparator* comparator);
	void init$(::java::util::Collection* c);
	void init$(::java::util::PriorityQueue* c);
	void init$(::java::util::SortedSet* c);
	virtual bool add(Object$* e) override;
	bool bulkRemove(::java::util::function::Predicate* filter);
	virtual void clear() override;
	virtual ::java::util::Comparator* comparator();
	virtual bool contains(Object$* o) override;
	static $ObjectArray* ensureNonEmpty($ObjectArray* es);
	virtual void forEach(::java::util::function::Consumer* action) override;
	void grow(int32_t minCapacity);
	void heapify();
	int32_t indexOf(Object$* o);
	void initElementsFromCollection(::java::util::Collection* c);
	void initFromCollection(::java::util::Collection* c);
	void initFromPriorityQueue(::java::util::PriorityQueue* c);
	static bool isClear($longs* bits, int32_t i);
	virtual ::java::util::Iterator* iterator() override;
	static bool lambda$removeAll$0(::java::util::Collection* c, Object$* e);
	static bool lambda$retainAll$1(::java::util::Collection* c, Object$* e);
	static $longs* nBits(int32_t n);
	virtual bool offer(Object$* e) override;
	virtual $Object* peek() override;
	virtual $Object* poll() override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::java::util::AbstractQueue::remove;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual $Object* removeAt(int32_t i);
	virtual void removeEq(Object$* o);
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	static void setBit($longs* bits, int32_t i);
	void siftDown(int32_t k, Object$* x);
	static void siftDownComparable(int32_t k, Object$* x, $ObjectArray* es, int32_t n);
	static void siftDownUsingComparator(int32_t k, Object$* x, $ObjectArray* es, int32_t n, ::java::util::Comparator* cmp);
	void siftUp(int32_t k, Object$* x);
	static void siftUpComparable(int32_t k, Object$* x, $ObjectArray* es);
	static void siftUpUsingComparator(int32_t k, Object$* x, $ObjectArray* es, ::java::util::Comparator* cmp);
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractQueue::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x94DA30B4FB3F82B1;
	static const int32_t DEFAULT_INITIAL_CAPACITY = 11;
	$ObjectArray* queue = nullptr;
	int32_t size$ = 0;
	::java::util::Comparator* comparator$ = nullptr;
	int32_t modCount = 0;
};

	} // util
} // java

#pragma pop_macro("DEFAULT_INITIAL_CAPACITY")

#endif // _java_util_PriorityQueue_h_