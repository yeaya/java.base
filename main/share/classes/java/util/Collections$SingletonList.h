#ifndef _java_util_Collections$SingletonList_h_
#define _java_util_Collections$SingletonList_h_
//$ class java.util.Collections$SingletonList
//$ extends java.util.AbstractList
//$ implements java.util.RandomAccess,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/AbstractList.h>
#include <java/util/RandomAccess.h>

namespace java {
	namespace util {
		class Comparator;
		class Iterator;
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

class Collections$SingletonList : public ::java::util::AbstractList, public ::java::util::RandomAccess, public ::java::io::Serializable {
	$class(Collections$SingletonList, $NO_CLASS_INIT, ::java::util::AbstractList, ::java::util::RandomAccess, ::java::io::Serializable)
public:
	Collections$SingletonList();
	using ::java::util::AbstractList::addAll;
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	void init$(Object$* obj);
	virtual bool contains(Object$* obj) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual $Object* get(int32_t index) override;
	virtual int32_t hashCode() override;
	virtual ::java::util::Iterator* iterator() override;
	using ::java::util::AbstractList::remove;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual void replaceAll(::java::util::function::UnaryOperator* operator$) override;
	virtual int32_t size() override;
	virtual void sort(::java::util::Comparator* c) override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractList::toArray;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x2AEF29103CA79B97;
	$Object* element = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$SingletonList_h_