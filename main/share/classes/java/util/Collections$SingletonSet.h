#ifndef _java_util_Collections$SingletonSet_h_
#define _java_util_Collections$SingletonSet_h_
//$ class java.util.Collections$SingletonSet
//$ extends java.util.AbstractSet
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/AbstractSet.h>

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
			class Predicate;
		}
	}
}

namespace java {
	namespace util {

class Collections$SingletonSet : public ::java::util::AbstractSet, public ::java::io::Serializable {
	$class(Collections$SingletonSet, $NO_CLASS_INIT, ::java::util::AbstractSet, ::java::io::Serializable)
public:
	Collections$SingletonSet();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	void init$(Object$* e);
	virtual bool contains(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractSet::toArray;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x2C52419829C0B1BF;
	$Object* element = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$SingletonSet_h_