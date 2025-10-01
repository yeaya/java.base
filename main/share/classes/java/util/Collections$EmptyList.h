#ifndef _java_util_Collections$EmptyList_h_
#define _java_util_Collections$EmptyList_h_
//$ class java.util.Collections$EmptyList
//$ extends java.util.AbstractList
//$ implements java.util.RandomAccess,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractList.h>
#include <java/util/RandomAccess.h>

namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class Iterator;
		class ListIterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Predicate;
			class UnaryOperator;
		}
	}
}

namespace java {
	namespace util {

class Collections$EmptyList : public ::java::util::AbstractList, public ::java::util::RandomAccess, public ::java::io::Serializable {
	$class(Collections$EmptyList, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractList, ::java::util::RandomAccess, ::java::io::Serializable)
public:
	Collections$EmptyList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::AbstractList::addAll;
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	virtual void clear() override;
	virtual bool contains(Object$* obj) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual $Object* get(int32_t index) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	using ::java::util::AbstractList::listIterator;
	virtual ::java::util::ListIterator* listIterator() override;
	$Object* readResolve();
	using ::java::util::AbstractList::remove;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual void replaceAll(::java::util::function::UnaryOperator* operator$) override;
	virtual int32_t size() override;
	virtual void sort(::java::util::Comparator* c) override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractList::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x7AB817B43CA79EDE;
};

	} // util
} // java

#endif // _java_util_Collections$EmptyList_h_