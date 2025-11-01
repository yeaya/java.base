#ifndef _java_util_ImmutableCollections$List12_h_
#define _java_util_ImmutableCollections$List12_h_
//$ class java.util.ImmutableCollections$List12
//$ extends java.util.ImmutableCollections$AbstractImmutableList
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/ImmutableCollections$AbstractImmutableList.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}

namespace java {
	namespace util {

class ImmutableCollections$List12 : public ::java::util::ImmutableCollections$AbstractImmutableList, public ::java::io::Serializable {
	$class(ImmutableCollections$List12, $PRELOAD | $NO_CLASS_INIT, ::java::util::ImmutableCollections$AbstractImmutableList, ::java::io::Serializable)
public:
	ImmutableCollections$List12();
	using ::java::util::ImmutableCollections$AbstractImmutableList::add;
	using ::java::util::ImmutableCollections$AbstractImmutableList::addAll;
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(Object$* e0);
	void init$(Object$* e0, Object$* e1);
	virtual $Object* get(int32_t index) override;
	virtual int32_t indexOf(Object$* o) override;
	virtual bool isEmpty() override;
	virtual int32_t lastIndexOf(Object$* o) override;
	void readObject(::java::io::ObjectInputStream* in);
	using ::java::util::ImmutableCollections$AbstractImmutableList::remove;
	virtual int32_t size() override;
	using ::java::util::ImmutableCollections$AbstractImmutableList::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	$Object* writeReplace();
	$Object* e0 = nullptr;
	$Object* e1 = nullptr;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$List12_h_