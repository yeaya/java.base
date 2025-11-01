#ifndef _java_util_concurrent_LinkedTransferQueue_h_
#define _java_util_concurrent_LinkedTransferQueue_h_
//$ class java.util.concurrent.LinkedTransferQueue
//$ extends java.util.AbstractQueue
//$ implements java.util.concurrent.TransferQueue,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractQueue.h>
#include <java/util/concurrent/TransferQueue.h>

#pragma push_macro("ASYNC")
#undef ASYNC
#pragma push_macro("HEAD")
#undef HEAD
#pragma push_macro("ITEM")
#undef ITEM
#pragma push_macro("MAX_HOPS")
#undef MAX_HOPS
#pragma push_macro("NEXT")
#undef NEXT
#pragma push_macro("NOW")
#undef NOW
#pragma push_macro("SPIN_FOR_TIMEOUT_THRESHOLD")
#undef SPIN_FOR_TIMEOUT_THRESHOLD
#pragma push_macro("SWEEP_THRESHOLD")
#undef SWEEP_THRESHOLD
#pragma push_macro("SYNC")
#undef SYNC
#pragma push_macro("TAIL")
#undef TAIL
#pragma push_macro("TIMED")
#undef TIMED
#pragma push_macro("WAITER")
#undef WAITER

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
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
			class LinkedTransferQueue$Node;
			class TimeUnit;
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

class $import LinkedTransferQueue : public ::java::util::AbstractQueue, public ::java::util::concurrent::TransferQueue, public ::java::io::Serializable {
	$class(LinkedTransferQueue, 0, ::java::util::AbstractQueue, ::java::util::concurrent::TransferQueue, ::java::io::Serializable)
public:
	LinkedTransferQueue();
	virtual bool addAll(::java::util::Collection* c) override;
	virtual $Object* clone() override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual $Object* element() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::util::Collection* c);
	virtual bool add(Object$* e) override;
	$Object* awaitMatch(::java::util::concurrent::LinkedTransferQueue$Node* s, ::java::util::concurrent::LinkedTransferQueue$Node* pred, Object$* e, bool timed, int64_t nanos);
	bool bulkRemove(::java::util::function::Predicate* filter);
	bool casHead(::java::util::concurrent::LinkedTransferQueue$Node* cmp, ::java::util::concurrent::LinkedTransferQueue$Node* val);
	bool casTail(::java::util::concurrent::LinkedTransferQueue$Node* cmp, ::java::util::concurrent::LinkedTransferQueue$Node* val);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	int32_t countOfMode(bool data);
	virtual int32_t drainTo(::java::util::Collection* c) override;
	virtual int32_t drainTo(::java::util::Collection* c, int32_t maxElements) override;
	::java::util::concurrent::LinkedTransferQueue$Node* firstDataNode();
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual void forEachFrom(::java::util::function::Consumer* action, ::java::util::concurrent::LinkedTransferQueue$Node* p);
	virtual int32_t getWaitingConsumerCount() override;
	virtual bool hasWaitingConsumer() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	static bool lambda$clear$2(Object$* e);
	static bool lambda$removeAll$0(::java::util::Collection* c, Object$* e);
	static bool lambda$retainAll$1(::java::util::Collection* c, Object$* e);
	virtual bool offer(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual bool offer(Object$* e) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* peek() override;
	virtual $Object* poll(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* poll() override;
	virtual void put(Object$* e) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual int32_t remainingCapacity() override;
	virtual $Object* remove() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	::java::util::concurrent::LinkedTransferQueue$Node* skipDeadNodes(::java::util::concurrent::LinkedTransferQueue$Node* pred, ::java::util::concurrent::LinkedTransferQueue$Node* c, ::java::util::concurrent::LinkedTransferQueue$Node* p, ::java::util::concurrent::LinkedTransferQueue$Node* q);
	void skipDeadNodesNearHead(::java::util::concurrent::LinkedTransferQueue$Node* h, ::java::util::concurrent::LinkedTransferQueue$Node* p);
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	void sweep();
	virtual $Object* take() override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	$ObjectArray* toArrayInternal($ObjectArray* a);
	virtual $String* toString() override;
	virtual void transfer(Object$* e) override;
	bool tryCasSuccessor(::java::util::concurrent::LinkedTransferQueue$Node* pred, ::java::util::concurrent::LinkedTransferQueue$Node* c, ::java::util::concurrent::LinkedTransferQueue$Node* p);
	virtual bool tryTransfer(Object$* e) override;
	virtual bool tryTransfer(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	void unsplice(::java::util::concurrent::LinkedTransferQueue$Node* pred, ::java::util::concurrent::LinkedTransferQueue$Node* s);
	void writeObject(::java::io::ObjectOutputStream* s);
	$Object* xfer(Object$* e, bool haveData, int32_t how, int64_t nanos);
	static const int64_t serialVersionUID = (int64_t)0xD345336E1F5C3E9A;
	static const int64_t SPIN_FOR_TIMEOUT_THRESHOLD = (int64_t)1023;
	static const int32_t SWEEP_THRESHOLD = 32;
	$volatile(::java::util::concurrent::LinkedTransferQueue$Node*) head = nullptr;
	$volatile(::java::util::concurrent::LinkedTransferQueue$Node*) tail = nullptr;
	$volatile(bool) needSweep = false;
	static const int32_t NOW = 0;
	static const int32_t ASYNC = 1;
	static const int32_t SYNC = 2;
	static const int32_t TIMED = 3;
	static const int32_t MAX_HOPS = 8;
	static ::java::lang::invoke::VarHandle* HEAD;
	static ::java::lang::invoke::VarHandle* TAIL;
	static ::java::lang::invoke::VarHandle* ITEM;
	static ::java::lang::invoke::VarHandle* NEXT;
	static ::java::lang::invoke::VarHandle* WAITER;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("ASYNC")
#pragma pop_macro("HEAD")
#pragma pop_macro("ITEM")
#pragma pop_macro("MAX_HOPS")
#pragma pop_macro("NEXT")
#pragma pop_macro("NOW")
#pragma pop_macro("SPIN_FOR_TIMEOUT_THRESHOLD")
#pragma pop_macro("SWEEP_THRESHOLD")
#pragma pop_macro("SYNC")
#pragma pop_macro("TAIL")
#pragma pop_macro("TIMED")
#pragma pop_macro("WAITER")

#endif // _java_util_concurrent_LinkedTransferQueue_h_