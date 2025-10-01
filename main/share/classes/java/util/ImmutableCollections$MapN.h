#ifndef _java_util_ImmutableCollections$MapN_h_
#define _java_util_ImmutableCollections$MapN_h_
//$ class java.util.ImmutableCollections$MapN
//$ extends java.util.ImmutableCollections$AbstractImmutableMap

#include <java/lang/Array.h>
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

class ImmutableCollections$MapN : public ::java::util::ImmutableCollections$AbstractImmutableMap {
	$class(ImmutableCollections$MapN, $PRELOAD | $NO_CLASS_INIT, ::java::util::ImmutableCollections$AbstractImmutableMap)
public:
	ImmutableCollections$MapN();
	void init$($ObjectArray* input);
	virtual bool containsKey(Object$* o) override;
	virtual bool containsValue(Object$* o) override;
	virtual ::java::util::Set* entrySet() override;
	virtual $Object* get(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	int32_t probe(Object$* pk);
	void readObject(::java::io::ObjectInputStream* in);
	virtual int32_t size() override;
	$Object* writeReplace();
	$ObjectArray* table = nullptr;
	int32_t size$ = 0;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$MapN_h_