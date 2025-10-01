#ifndef _java_util_LinkedList_h_
#define _java_util_LinkedList_h_
//$ class java.util.LinkedList
//$ extends java.util.AbstractSequentialList
//$ implements java.util.Deque,java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Deque.h>

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
		class LinkedList$Node;
		class ListIterator;
		class Spliterator;
	}
}

namespace java {
	namespace util {

class $export LinkedList : public ::java::util::AbstractSequentialList, public ::java::util::Deque, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(LinkedList, $NO_CLASS_INIT, ::java::util::AbstractSequentialList, ::java::util::Deque, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	LinkedList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::util::Collection* c);
	virtual bool add(Object$* e) override;
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	virtual void addFirst(Object$* e) override;
	virtual void addLast(Object$* e) override;
	void checkElementIndex(int32_t index);
	void checkPositionIndex(int32_t index);
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* descendingIterator() override;
	virtual $Object* element() override;
	virtual $Object* get(int32_t index) override;
	virtual $Object* getFirst() override;
	virtual $Object* getLast() override;
	virtual int32_t indexOf(Object$* o) override;
	bool isElementIndex(int32_t index);
	virtual bool isEmpty() override;
	bool isPositionIndex(int32_t index);
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t lastIndexOf(Object$* o) override;
	virtual void linkBefore(Object$* e, ::java::util::LinkedList$Node* succ);
	void linkFirst(Object$* e);
	virtual void linkLast(Object$* e);
	using ::java::util::AbstractSequentialList::listIterator;
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	virtual ::java::util::LinkedList$Node* node(int32_t index);
	virtual bool offer(Object$* e) override;
	virtual bool offerFirst(Object$* e) override;
	virtual bool offerLast(Object$* e) override;
	$String* outOfBoundsMsg(int32_t index);
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
	virtual bool remove(Object$* o) override;
	virtual $Object* remove(int32_t index) override;
	virtual $Object* remove() override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual $Object* removeFirst() override;
	virtual bool removeFirstOccurrence(Object$* o) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual $Object* removeLast() override;
	virtual bool removeLastOccurrence(Object$* o) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	::java::util::LinkedList* superClone();
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	virtual $Object* unlink(::java::util::LinkedList$Node* x);
	$Object* unlinkFirst(::java::util::LinkedList$Node* f);
	$Object* unlinkLast(::java::util::LinkedList$Node* l);
	void writeObject(::java::io::ObjectOutputStream* s);
	int32_t size$ = 0;
	::java::util::LinkedList$Node* first = nullptr;
	::java::util::LinkedList$Node* last = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x0C29535D4A608822;
};

	} // util
} // java

#endif // _java_util_LinkedList_h_