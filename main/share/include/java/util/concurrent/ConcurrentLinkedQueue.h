#ifndef _java_util_concurrent_ConcurrentLinkedQueue_h_
#define _java_util_concurrent_ConcurrentLinkedQueue_h_
//$ class java.util.concurrent.ConcurrentLinkedQueue
//$ extends java.util.AbstractQueue
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractQueue.h>

#pragma push_macro("HEAD")
#undef HEAD
#pragma push_macro("ITEM")
#undef ITEM
#pragma push_macro("MAX_HOPS")
#undef MAX_HOPS
#pragma push_macro("NEXT")
#undef NEXT
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
			class ConcurrentLinkedQueue$Node;
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

class $import ConcurrentLinkedQueue : public ::java::util::AbstractQueue, public ::java::io::Serializable {
	$class(ConcurrentLinkedQueue, 0, ::java::util::AbstractQueue, ::java::io::Serializable)
public:
	ConcurrentLinkedQueue();
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::util::Collection* c);
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	bool bulkRemove(::java::util::function::Predicate* filter);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::concurrent::ConcurrentLinkedQueue$Node* first();
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual void forEachFrom(::java::util::function::Consumer* action, ::java::util::concurrent::ConcurrentLinkedQueue$Node* p);
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	static bool lambda$clear$2(Object$* e);
	static bool lambda$removeAll$0(::java::util::Collection* c, Object$* e);
	static bool lambda$retainAll$1(::java::util::Collection* c, Object$* e);
	virtual bool offer(Object$* e) override;
	virtual $Object* peek() override;
	virtual $Object* poll() override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::java::util::AbstractQueue::remove;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	::java::util::concurrent::ConcurrentLinkedQueue$Node* skipDeadNodes(::java::util::concurrent::ConcurrentLinkedQueue$Node* pred, ::java::util::concurrent::ConcurrentLinkedQueue$Node* c, ::java::util::concurrent::ConcurrentLinkedQueue$Node* p, ::java::util::concurrent::ConcurrentLinkedQueue$Node* q);
	virtual ::java::util::Spliterator* spliterator() override;
	::java::util::concurrent::ConcurrentLinkedQueue$Node* succ(::java::util::concurrent::ConcurrentLinkedQueue$Node* p);
	using ::java::util::AbstractQueue::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	$ObjectArray* toArrayInternal($ObjectArray* a);
	virtual $String* toString() override;
	bool tryCasSuccessor(::java::util::concurrent::ConcurrentLinkedQueue$Node* pred, ::java::util::concurrent::ConcurrentLinkedQueue$Node* c, ::java::util::concurrent::ConcurrentLinkedQueue$Node* p);
	void updateHead(::java::util::concurrent::ConcurrentLinkedQueue$Node* h, ::java::util::concurrent::ConcurrentLinkedQueue$Node* p);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x02BAFB2A664C708C;
	$volatile(::java::util::concurrent::ConcurrentLinkedQueue$Node*) head = nullptr;
	$volatile(::java::util::concurrent::ConcurrentLinkedQueue$Node*) tail = nullptr;
	static const int32_t MAX_HOPS = 8;
	static ::java::lang::invoke::VarHandle* HEAD;
	static ::java::lang::invoke::VarHandle* TAIL;
	static ::java::lang::invoke::VarHandle* ITEM;
	static ::java::lang::invoke::VarHandle* NEXT;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("HEAD")
#pragma pop_macro("ITEM")
#pragma pop_macro("MAX_HOPS")
#pragma pop_macro("NEXT")
#pragma pop_macro("TAIL")

#endif // _java_util_concurrent_ConcurrentLinkedQueue_h_