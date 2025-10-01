#ifndef _java_util_ImmutableCollections$MapN$MapNIterator_h_
#define _java_util_ImmutableCollections$MapN$MapNIterator_h_
//$ class java.util.ImmutableCollections$MapN$MapNIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class ImmutableCollections$MapN;
	}
}

namespace java {
	namespace util {

class ImmutableCollections$MapN$MapNIterator : public ::java::util::Iterator {
	$class(ImmutableCollections$MapN$MapNIterator, $PRELOAD | $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ImmutableCollections$MapN$MapNIterator();
	void init$(::java::util::ImmutableCollections$MapN* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	int32_t nextIndex();
	::java::util::ImmutableCollections$MapN* this$0 = nullptr;
	int32_t remaining = 0;
	int32_t idx = 0;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$MapN$MapNIterator_h_