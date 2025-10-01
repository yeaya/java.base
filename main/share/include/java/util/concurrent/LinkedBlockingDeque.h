#ifndef _java_util_concurrent_LinkedBlockingDeque_h_
#define _java_util_concurrent_LinkedBlockingDeque_h_
//$ class java.util.concurrent.LinkedBlockingDeque
//$ extends java.util.AbstractQueue
//$ implements java.util.concurrent.BlockingDeque,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractQueue.h>
#include <java/util/concurrent/BlockingDeque.h>

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
		namespace concurrent {
			class LinkedBlockingDeque$Node;
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Condition;
				class ReentrantLock;
			}
		}
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
		namespace concurrent {

class $import LinkedBlockingDeque : public ::java::util::AbstractQueue, public ::java::util::concurrent::BlockingDeque, public ::java::io::Serializable {
	$class(LinkedBlockingDeque, $NO_CLASS_INIT, ::java::util::AbstractQueue, ::java::util::concurrent::BlockingDeque, ::java::io::Serializable)
public:
	LinkedBlockingDeque();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t capacity);
	void init$(::java::util::Collection* c);
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual void addFirst(Object$* e) override;
	virtual void addLast(Object$* e) override;
	bool bulkRemove(::java::util::function::Predicate* filter);
	virtual void checkInvariants();
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* descendingIterator() override;
	virtual int32_t drainTo(::java::util::Collection* c) override;
	virtual int32_t drainTo(::java::util::Collection* c, int32_t maxElements) override;
	virtual $Object* element() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual void forEachFrom(::java::util::function::Consumer* action, ::java::util::concurrent::LinkedBlockingDeque$Node* p);
	virtual $Object* getFirst() override;
	virtual $Object* getLast() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	static bool lambda$removeAll$0(::java::util::Collection* c, Object$* e);
	static bool lambda$retainAll$1(::java::util::Collection* c, Object$* e);
	bool linkFirst(::java::util::concurrent::LinkedBlockingDeque$Node* node);
	bool linkLast(::java::util::concurrent::LinkedBlockingDeque$Node* node);
	virtual bool offer(Object$* e) override;
	virtual bool offer(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual bool offerFirst(Object$* e) override;
	virtual bool offerFirst(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual bool offerLast(Object$* e) override;
	virtual bool offerLast(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* peek() override;
	virtual $Object* peekFirst() override;
	virtual $Object* peekLast() override;
	virtual $Object* poll() override;
	virtual $Object* poll(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* pollFirst() override;
	virtual $Object* pollFirst(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* pollLast() override;
	virtual $Object* pollLast(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* pop() override;
	virtual void push(Object$* e) override;
	virtual void put(Object$* e) override;
	virtual void putFirst(Object$* e) override;
	virtual void putLast(Object$* e) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual int32_t remainingCapacity() override;
	virtual $Object* remove() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual $Object* removeFirst() override;
	virtual bool removeFirstOccurrence(Object$* o) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual $Object* removeLast() override;
	virtual bool removeLastOccurrence(Object$* o) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual ::java::util::concurrent::LinkedBlockingDeque$Node* succ(::java::util::concurrent::LinkedBlockingDeque$Node* p);
	virtual $Object* take() override;
	virtual $Object* takeFirst() override;
	virtual $Object* takeLast() override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	virtual void unlink(::java::util::concurrent::LinkedBlockingDeque$Node* x);
	$Object* unlinkFirst();
	$Object* unlinkLast();
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xFA9DDC6CE257FE26;
	::java::util::concurrent::LinkedBlockingDeque$Node* first = nullptr;
	::java::util::concurrent::LinkedBlockingDeque$Node* last = nullptr;
	int32_t count = 0;
	int32_t capacity = 0;
	::java::util::concurrent::locks::ReentrantLock* lock = nullptr;
	::java::util::concurrent::locks::Condition* notEmpty = nullptr;
	::java::util::concurrent::locks::Condition* notFull = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_LinkedBlockingDeque_h_