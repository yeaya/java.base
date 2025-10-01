#ifndef _java_util_Collections$AsLIFOQueue_h_
#define _java_util_Collections$AsLIFOQueue_h_
//$ class java.util.Collections$AsLIFOQueue
//$ extends java.util.AbstractQueue
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractQueue.h>

namespace java {
	namespace util {
		class Collection;
		class Deque;
		class Iterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class IntFunction;
			class Predicate;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace util {

class $export Collections$AsLIFOQueue : public ::java::util::AbstractQueue, public ::java::io::Serializable {
	$class(Collections$AsLIFOQueue, $NO_CLASS_INIT, ::java::util::AbstractQueue, ::java::io::Serializable)
public:
	Collections$AsLIFOQueue();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Deque* q);
	virtual bool add(Object$* e) override;
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual $Object* element() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool offer(Object$* e) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* peek() override;
	virtual $Object* poll() override;
	virtual $Object* remove() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* f) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x19020D92ECA0694C;
	::java::util::Deque* q = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$AsLIFOQueue_h_