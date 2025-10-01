#ifndef _java_util_ImmutableCollections$Map1_h_
#define _java_util_ImmutableCollections$Map1_h_
//$ class java.util.ImmutableCollections$Map1
//$ extends java.util.ImmutableCollections$AbstractImmutableMap

#include <java/util/ImmutableCollections$AbstractImmutableMap.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace util {

class ImmutableCollections$Map1 : public ::java::util::ImmutableCollections$AbstractImmutableMap {
	$class(ImmutableCollections$Map1, $PRELOAD | $NO_CLASS_INIT, ::java::util::ImmutableCollections$AbstractImmutableMap)
public:
	ImmutableCollections$Map1();
	void init$(Object$* k0, Object$* v0);
	virtual bool containsKey(Object$* o) override;
	virtual bool containsValue(Object$* o) override;
	virtual ::java::util::Set* entrySet() override;
	virtual $Object* get(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	void readObject(::java::io::ObjectInputStream* in);
	virtual int32_t size() override;
	$Object* writeReplace();
	$Object* k0 = nullptr;
	$Object* v0 = nullptr;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$Map1_h_