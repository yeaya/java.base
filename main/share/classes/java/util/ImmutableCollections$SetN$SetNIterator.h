#ifndef _java_util_ImmutableCollections$SetN$SetNIterator_h_
#define _java_util_ImmutableCollections$SetN$SetNIterator_h_
//$ class java.util.ImmutableCollections$SetN$SetNIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class ImmutableCollections$SetN;
	}
}

namespace java {
	namespace util {

class ImmutableCollections$SetN$SetNIterator : public ::java::util::Iterator {
	$class(ImmutableCollections$SetN$SetNIterator, $PRELOAD | $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ImmutableCollections$SetN$SetNIterator();
	void init$(::java::util::ImmutableCollections$SetN* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::util::ImmutableCollections$SetN* this$0 = nullptr;
	int32_t remaining = 0;
	int32_t idx = 0;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$SetN$SetNIterator_h_