#ifndef _java_util_ImmutableCollections$Set12_h_
#define _java_util_ImmutableCollections$Set12_h_
//$ class java.util.ImmutableCollections$Set12
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

class ImmutableCollections$Set12 : public ::java::util::ImmutableCollections$AbstractImmutableSet, public ::java::io::Serializable {
	$class(ImmutableCollections$Set12, $PRELOAD | $NO_CLASS_INIT, ::java::util::ImmutableCollections$AbstractImmutableSet, ::java::io::Serializable)
public:
	ImmutableCollections$Set12();
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	void init$(Object$* e0);
	void init$(Object$* e0, Object$* e1);
	virtual bool contains(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	void readObject(::java::io::ObjectInputStream* in);
	virtual int32_t size() override;
	using ::java::util::ImmutableCollections$AbstractImmutableSet::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	$Object* writeReplace();
	$Object* e0 = nullptr;
	$Object* e1 = nullptr;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$Set12_h_