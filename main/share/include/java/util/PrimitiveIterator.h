#ifndef _java_util_PrimitiveIterator_h_
#define _java_util_PrimitiveIterator_h_
//$ interface java.util.PrimitiveIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {

class $import PrimitiveIterator : public ::java::util::Iterator {
	$interface(PrimitiveIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	using ::java::util::Iterator::forEachRemaining;
	virtual void forEachRemaining(Object$* action) {}
};

	} // util
} // java

#endif // _java_util_PrimitiveIterator_h_