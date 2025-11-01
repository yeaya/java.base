#ifndef _java_util_concurrent_BlockingDeque_h_
#define _java_util_concurrent_BlockingDeque_h_
//$ interface java.util.concurrent.BlockingDeque
//$ extends java.util.concurrent.BlockingQueue,java.util.Deque

#include <java/util/Deque.h>
#include <java/util/concurrent/BlockingQueue.h>

namespace java {
	namespace util {
		namespace concurrent {
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import BlockingDeque : public ::java::util::concurrent::BlockingQueue, public ::java::util::Deque {
	$interface(BlockingDeque, $NO_CLASS_INIT, ::java::util::concurrent::BlockingQueue, ::java::util::Deque)
public:
	virtual bool add(Object$* e) override {return false;}
	virtual bool addAll(::java::util::Collection* c) override {return false;}
	virtual void addFirst(Object$* e) override {}
	virtual void addLast(Object$* e) override {}
	virtual void clear() override {}
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override {return false;}
	virtual bool containsAll(::java::util::Collection* c) override {return false;}
	virtual $Object* element() override {return nullptr;}
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override {return false;}
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	virtual bool offer(Object$* e) override {return false;}
	virtual bool offer(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override {return false;}
	virtual bool offerFirst(Object$* e) override {return false;}
	virtual bool offerFirst(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return false;}
	virtual bool offerLast(Object$* e) override {return false;}
	virtual bool offerLast(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return false;}
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* peek() override {return nullptr;}
	virtual $Object* poll() override {return nullptr;}
	virtual $Object* poll(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override {return nullptr;}
	using ::java::util::Deque::pollFirst;
	virtual $Object* pollFirst(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return nullptr;}
	using ::java::util::Deque::pollLast;
	virtual $Object* pollLast(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return nullptr;}
	virtual void push(Object$* e) override {}
	virtual void put(Object$* e) override {}
	virtual void putFirst(Object$* e) {}
	virtual void putLast(Object$* e) {}
	virtual $Object* remove() override {return nullptr;}
	virtual bool remove(Object$* o) override {return false;}
	virtual bool removeAll(::java::util::Collection* c) override {return false;}
	virtual bool removeFirstOccurrence(Object$* o) override {return false;}
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool removeLastOccurrence(Object$* o) override {return false;}
	virtual bool retainAll(::java::util::Collection* c) override {return false;}
	virtual int32_t size() override {return 0;}
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual $Object* take() override {return nullptr;}
	virtual $Object* takeFirst() {return nullptr;}
	virtual $Object* takeLast() {return nullptr;}
	virtual $ObjectArray* toArray() override {return nullptr;}
	virtual $ObjectArray* toArray($ObjectArray* a) override {return nullptr;}
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $String* toString() override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_BlockingDeque_h_