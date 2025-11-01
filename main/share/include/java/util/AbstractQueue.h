#ifndef _java_util_AbstractQueue_h_
#define _java_util_AbstractQueue_h_
//$ class java.util.AbstractQueue
//$ extends java.util.AbstractCollection
//$ implements java.util.Queue

#include <java/util/AbstractCollection.h>
#include <java/util/Queue.h>

namespace java {
	namespace util {
		class Collection;
	}
}

namespace java {
	namespace util {

class $import AbstractQueue : public ::java::util::AbstractCollection, public ::java::util::Queue {
	$class(AbstractQueue, $NO_CLASS_INIT, ::java::util::AbstractCollection, ::java::util::Queue)
public:
	AbstractQueue();
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual void clear() override;
	virtual $Object* element() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual bool remove(Object$* o) override;
	virtual $Object* remove() override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override {return 0;}
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $String* toString() override;
};

	} // util
} // java

#endif // _java_util_AbstractQueue_h_