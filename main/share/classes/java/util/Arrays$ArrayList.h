#ifndef _java_util_Arrays$ArrayList_h_
#define _java_util_Arrays$ArrayList_h_
//$ class java.util.Arrays$ArrayList
//$ extends java.util.AbstractList
//$ implements java.util.RandomAccess,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
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
			class UnaryOperator;
		}
	}
}

namespace java {
	namespace util {

class Arrays$ArrayList : public ::java::util::AbstractList, public ::java::util::RandomAccess, public ::java::io::Serializable {
	$class(Arrays$ArrayList, $NO_CLASS_INIT, ::java::util::AbstractList, ::java::util::RandomAccess, ::java::io::Serializable)
public:
	Arrays$ArrayList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::AbstractList::addAll;
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($ObjectArray* array);
	virtual bool contains(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual $Object* get(int32_t index) override;
	virtual int32_t indexOf(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	using ::java::util::AbstractList::remove;
	virtual void replaceAll(::java::util::function::UnaryOperator* operator$) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	virtual int32_t size() override;
	virtual void sort(::java::util::Comparator* c) override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractList::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD9A43CBECD8806D2;
	$ObjectArray* a = nullptr;
};

	} // util
} // java

#endif // _java_util_Arrays$ArrayList_h_