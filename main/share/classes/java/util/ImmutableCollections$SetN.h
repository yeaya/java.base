#ifndef _java_util_ImmutableCollections$SetN_h_
#define _java_util_ImmutableCollections$SetN_h_
//$ class java.util.ImmutableCollections$SetN
//$ extends java.util.ImmutableCollections$AbstractImmutableSet
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/ImmutableCollections$AbstractImmutableSet.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace util {

class ImmutableCollections$SetN : public ::java::util::ImmutableCollections$AbstractImmutableSet, public ::java::io::Serializable {
	$class(ImmutableCollections$SetN, $PRELOAD | $NO_CLASS_INIT, ::java::util::ImmutableCollections$AbstractImmutableSet, ::java::io::Serializable)
public:
	ImmutableCollections$SetN();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	void init$($ObjectArray* input);
	virtual bool contains(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	int32_t probe(Object$* pe);
	void readObject(::java::io::ObjectInputStream* in);
	virtual int32_t size() override;
	using ::java::util::ImmutableCollections$AbstractImmutableSet::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	$Object* writeReplace();
	$ObjectArray* elements = nullptr;
	int32_t size$ = 0;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$SetN_h_