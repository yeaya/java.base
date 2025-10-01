#ifndef _java_util_Collection_h_
#define _java_util_Collection_h_
//$ interface java.util.Collection
//$ extends java.lang.Iterable

#include <java/lang/Array.h>
#include <java/lang/Iterable.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
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

class $import Collection : public ::java::lang::Iterable {
	$interface(Collection, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Iterable)
public:
	virtual bool add(Object$* e) {return false;}
	virtual bool addAll(::java::util::Collection* c) {return false;}
	virtual void clear() {}
	virtual bool contains(Object$* o) {return false;}
	virtual bool containsAll(::java::util::Collection* c) {return false;}
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() {return false;}
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	virtual ::java::util::stream::Stream* parallelStream();
	virtual bool remove(Object$* o) {return false;}
	virtual bool removeAll(::java::util::Collection* c) {return false;}
	virtual bool removeIf(::java::util::function::Predicate* filter);
	virtual bool retainAll(::java::util::Collection* c) {return false;}
	virtual int32_t size() {return 0;}
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream();
	virtual $ObjectArray* toArray() {return nullptr;}
	virtual $ObjectArray* toArray($ObjectArray* a) {return nullptr;}
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator);
};

	} // util
} // java

#endif // _java_util_Collection_h_