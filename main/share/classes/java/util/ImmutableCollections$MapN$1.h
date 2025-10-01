#ifndef _java_util_ImmutableCollections$MapN$1_h_
#define _java_util_ImmutableCollections$MapN$1_h_
//$ class java.util.ImmutableCollections$MapN$1
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class ImmutableCollections$MapN;
		class Iterator;
	}
}

namespace java {
	namespace util {

class ImmutableCollections$MapN$1 : public ::java::util::AbstractSet {
	$class(ImmutableCollections$MapN$1, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	ImmutableCollections$MapN$1();
	void init$(::java::util::ImmutableCollections$MapN* this$0);
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::java::util::ImmutableCollections$MapN* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$MapN$1_h_