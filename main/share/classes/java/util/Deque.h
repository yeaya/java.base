#ifndef _java_util_Deque_h_
#define _java_util_Deque_h_
//$ interface java.util.Deque
//$ extends java.util.Queue

#include <java/util/Queue.h>

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace util {

class $export Deque : public ::java::util::Queue {
	$interface(Deque, $PRELOAD | $NO_CLASS_INIT, ::java::util::Queue)
public:
	virtual bool add(Object$* e) override {return false;}
	virtual bool addAll(::java::util::Collection* c) override {return false;}
	virtual void addFirst(Object$* e) {}
	virtual void addLast(Object$* e) {}
	virtual bool contains(Object$* o) override {return false;}
	virtual ::java::util::Iterator* descendingIterator() {return nullptr;}
	virtual $Object* element() override {return nullptr;}
	virtual $Object* getFirst() {return nullptr;}
	virtual $Object* getLast() {return nullptr;}
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	virtual bool offer(Object$* e) override {return false;}
	virtual bool offerFirst(Object$* e) {return false;}
	virtual bool offerLast(Object$* e) {return false;}
	virtual $Object* peek() override {return nullptr;}
	virtual $Object* peekFirst() {return nullptr;}
	virtual $Object* peekLast() {return nullptr;}
	virtual $Object* poll() override {return nullptr;}
	virtual $Object* pollFirst() {return nullptr;}
	virtual $Object* pollLast() {return nullptr;}
	virtual $Object* pop() {return nullptr;}
	virtual void push(Object$* e) {}
	virtual $Object* remove() override {return nullptr;}
	virtual bool remove(Object$* o) override {return false;}
	virtual $Object* removeFirst() {return nullptr;}
	virtual bool removeFirstOccurrence(Object$* o) {return false;}
	virtual $Object* removeLast() {return nullptr;}
	virtual bool removeLastOccurrence(Object$* o) {return false;}
	virtual int32_t size() override {return 0;}
};

	} // util
} // java

#endif // _java_util_Deque_h_