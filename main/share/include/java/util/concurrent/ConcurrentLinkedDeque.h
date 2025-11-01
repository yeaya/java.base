#ifndef _java_util_concurrent_ConcurrentLinkedDeque_h_
#define _java_util_concurrent_ConcurrentLinkedDeque_h_
//$ class java.util.concurrent.ConcurrentLinkedDeque
//$ extends java.util.AbstractCollection
//$ implements java.util.Deque,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Deque.h>

#pragma push_macro("HEAD")
#undef HEAD
#pragma push_macro("HOPS")
#undef HOPS
#pragma push_macro("ITEM")
#undef ITEM
#pragma push_macro("NEXT")
#undef NEXT
#pragma push_macro("NEXT_TERMINATOR")
#undef NEXT_TERMINATOR
#pragma push_macro("PREV")
#undef PREV
#pragma push_macro("PREV_TERMINATOR")
#undef PREV_TERMINATOR
#pragma push_macro("TAIL")
#undef TAIL

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
			class ConcurrentLinkedDeque$Node;
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

class $import ConcurrentLinkedDeque : public ::java::util::AbstractCollection, public ::java::util::Deque, public ::java::io::Serializable {
	$class(ConcurrentLinkedDeque, 0, ::java::util::AbstractCollection, ::java::util::Deque, ::java::io::Serializable)
public:
	ConcurrentLinkedDeque();
	virtual $Object* clone() override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::util::Collection* c);
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual void addFirst(Object$* e) override;
	virtual void addLast(Object$* e) override;
	bool bulkRemove(::java::util::function::Predicate* filter);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* descendingIterator() override;
	virtual $Object* element() override;
	virtual ::java::util::concurrent::ConcurrentLinkedDeque$Node* first();
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual $Object* getFirst() override;
	virtual $Object* getLast() override;
	void initHeadTail(::java::util::concurrent::ConcurrentLinkedDeque$Node* h, ::java::util::concurrent::ConcurrentLinkedDeque$Node* t);
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	static bool lambda$removeAll$0(::java::util::Collection* c, Object$* e);
	static bool lambda$retainAll$1(::java::util::Collection* c, Object$* e);
	virtual ::java::util::concurrent::ConcurrentLinkedDeque$Node* last();
	void linkFirst(Object$* e);
	void linkLast(Object$* e);
	static ::java::util::concurrent::ConcurrentLinkedDeque$Node* newNode(Object$* item);
	virtual ::java::util::concurrent::ConcurrentLinkedDeque$Node* nextTerminator();
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
	::java::util::concurrent::ConcurrentLinkedDeque$Node* pred(::java::util::concurrent::ConcurrentLinkedDeque$Node* p);
	virtual ::java::util::concurrent::ConcurrentLinkedDeque$Node* prevTerminator();
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
	$Object* screenNullResult(Object$* v);
	virtual int32_t size() override;
	void skipDeletedPredecessors(::java::util::concurrent::ConcurrentLinkedDeque$Node* x);
	void skipDeletedSuccessors(::java::util::concurrent::ConcurrentLinkedDeque$Node* x);
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	::java::util::concurrent::ConcurrentLinkedDeque$Node* succ(::java::util::concurrent::ConcurrentLinkedDeque$Node* p);
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	$ObjectArray* toArrayInternal($ObjectArray* a);
	virtual $String* toString() override;
	virtual void unlink(::java::util::concurrent::ConcurrentLinkedDeque$Node* x);
	void unlinkFirst(::java::util::concurrent::ConcurrentLinkedDeque$Node* first, ::java::util::concurrent::ConcurrentLinkedDeque$Node* next);
	void unlinkLast(::java::util::concurrent::ConcurrentLinkedDeque$Node* last, ::java::util::concurrent::ConcurrentLinkedDeque$Node* prev);
	void updateHead();
	void updateTail();
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x0C29535D4A608822;
	$volatile(::java::util::concurrent::ConcurrentLinkedDeque$Node*) head = nullptr;
	$volatile(::java::util::concurrent::ConcurrentLinkedDeque$Node*) tail = nullptr;
	static ::java::util::concurrent::ConcurrentLinkedDeque$Node* PREV_TERMINATOR;
	static ::java::util::concurrent::ConcurrentLinkedDeque$Node* NEXT_TERMINATOR;
	static const int32_t HOPS = 2;
	static ::java::lang::invoke::VarHandle* HEAD;
	static ::java::lang::invoke::VarHandle* TAIL;
	static ::java::lang::invoke::VarHandle* PREV;
	static ::java::lang::invoke::VarHandle* NEXT;
	static ::java::lang::invoke::VarHandle* ITEM;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("HEAD")
#pragma pop_macro("HOPS")
#pragma pop_macro("ITEM")
#pragma pop_macro("NEXT")
#pragma pop_macro("NEXT_TERMINATOR")
#pragma pop_macro("PREV")
#pragma pop_macro("PREV_TERMINATOR")
#pragma pop_macro("TAIL")

#endif // _java_util_concurrent_ConcurrentLinkedDeque_h_