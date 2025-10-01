#ifndef _java_util_Collections$EmptySet_h_
#define _java_util_Collections$EmptySet_h_
//$ class java.util.Collections$EmptySet
//$ extends java.util.AbstractSet
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class Spliterator;
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

class Collections$EmptySet : public ::java::util::AbstractSet, public ::java::io::Serializable {
	$class(Collections$EmptySet, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractSet, ::java::io::Serializable)
public:
	Collections$EmptySet();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	void init$();
	virtual void clear() override;
	virtual bool contains(Object$* obj) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	$Object* readResolve();
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractSet::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x15F5721DB403CB28;
};

	} // util
} // java

#endif // _java_util_Collections$EmptySet_h_