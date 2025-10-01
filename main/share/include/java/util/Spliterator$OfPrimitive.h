#ifndef _java_util_Spliterator$OfPrimitive_h_
#define _java_util_Spliterator$OfPrimitive_h_
//$ interface java.util.Spliterator$OfPrimitive
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {

class $import Spliterator$OfPrimitive : public ::java::util::Spliterator {
	$interface(Spliterator$OfPrimitive, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	using ::java::util::Spliterator::forEachRemaining;
	virtual void forEachRemaining(Object$* action);
	using ::java::util::Spliterator::tryAdvance;
	virtual bool tryAdvance(Object$* action) {return false;}
	virtual ::java::util::Spliterator* trySplit() override {return nullptr;}
};

	} // util
} // java

#endif // _java_util_Spliterator$OfPrimitive_h_