#ifndef _java_util_Collections$CheckedCollection_h_
#define _java_util_Collections$CheckedCollection_h_
//$ class java.util.Collections$CheckedCollection
//$ extends java.util.Collection
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/Collection.h>

namespace java {
	namespace util {
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

class $export Collections$CheckedCollection : public ::java::util::Collection, public ::java::io::Serializable {
	$class(Collections$CheckedCollection, $NO_CLASS_INIT, ::java::util::Collection, ::java::io::Serializable)
public:
	Collections$CheckedCollection();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Collection* c, $Class* type);
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* coll) override;
	$String* badElementMsg(Object$* o);
	virtual ::java::util::Collection* checkedCopyOf(::java::util::Collection* coll);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* coll) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual bool remove(Object$* o) override;
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
	virtual $Object* typeCheck(Object$* o);
	$ObjectArray* zeroLengthElementArray();
	static const int64_t serialVersionUID = (int64_t)0x15E96DFD18E6CC6F;
	::java::util::Collection* c = nullptr;
	$Class* type = nullptr;
	$ObjectArray* zeroLengthElementArray$ = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$CheckedCollection_h_