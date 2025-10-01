#ifndef _java_util_ImmutableCollections$ListN_h_
#define _java_util_ImmutableCollections$ListN_h_
//$ class java.util.ImmutableCollections$ListN
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

class ImmutableCollections$ListN : public ::java::util::ImmutableCollections$AbstractImmutableList, public ::java::io::Serializable {
	$class(ImmutableCollections$ListN, $PRELOAD | $NO_CLASS_INIT, ::java::util::ImmutableCollections$AbstractImmutableList, ::java::io::Serializable)
public:
	ImmutableCollections$ListN();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::ImmutableCollections$AbstractImmutableList::add;
	using ::java::util::ImmutableCollections$AbstractImmutableList::addAll;
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($ObjectArray* elements, bool allowNulls);
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
	$ObjectArray* elements = nullptr;
	bool allowNulls = false;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$ListN_h_