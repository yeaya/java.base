#ifndef _java_util_ImmutableCollections$Set12$1_h_
#define _java_util_ImmutableCollections$Set12$1_h_
//$ class java.util.ImmutableCollections$Set12$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class ImmutableCollections$Set12;
	}
}

namespace java {
	namespace util {

class ImmutableCollections$Set12$1 : public ::java::util::Iterator {
	$class(ImmutableCollections$Set12$1, $PRELOAD | $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ImmutableCollections$Set12$1();
	void init$(::java::util::ImmutableCollections$Set12* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::util::ImmutableCollections$Set12* this$0 = nullptr;
	int32_t idx = 0;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$Set12$1_h_