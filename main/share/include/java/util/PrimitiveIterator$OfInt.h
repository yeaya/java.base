#ifndef _java_util_PrimitiveIterator$OfInt_h_
#define _java_util_PrimitiveIterator$OfInt_h_
//$ interface java.util.PrimitiveIterator$OfInt
//$ extends java.util.PrimitiveIterator

#include <java/util/PrimitiveIterator.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class IntConsumer;
		}
	}
}

namespace java {
	namespace util {

class $import PrimitiveIterator$OfInt : public ::java::util::PrimitiveIterator {
	$interface(PrimitiveIterator$OfInt, $NO_CLASS_INIT, ::java::util::PrimitiveIterator)
public:
	virtual void forEachRemaining(::java::util::function::IntConsumer* action);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual $Object* next() override;
	virtual int32_t nextInt() {return 0;}
};

	} // util
} // java

#endif // _java_util_PrimitiveIterator$OfInt_h_