#ifndef _java_util_Collections$CheckedQueue_h_
#define _java_util_Collections$CheckedQueue_h_
//$ class java.util.Collections$CheckedQueue
//$ extends java.util.Collections$CheckedCollection
//$ implements java.util.Queue

#include <java/util/Collections$CheckedCollection.h>
#include <java/util/Queue.h>

namespace java {
	namespace util {

class $export Collections$CheckedQueue : public ::java::util::Collections$CheckedCollection, public ::java::util::Queue {
	$class(Collections$CheckedQueue, $NO_CLASS_INIT, ::java::util::Collections$CheckedCollection, ::java::util::Queue)
public:
	Collections$CheckedQueue();
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* coll) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* coll) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	void init$(::java::util::Queue* queue, $Class* elementType);
	virtual $Object* element() override;
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool offer(Object$* e) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* peek() override;
	virtual $Object* poll() override;
	virtual bool remove(Object$* o) override;
	virtual $Object* remove() override;
	virtual bool removeAll(::java::util::Collection* coll) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* coll) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* f) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x13E39424E458CBB7;
	::java::util::Queue* queue = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$CheckedQueue_h_