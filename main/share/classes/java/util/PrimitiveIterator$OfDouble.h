#ifndef _java_util_PrimitiveIterator$OfDouble_h_
#define _java_util_PrimitiveIterator$OfDouble_h_
//$ interface java.util.PrimitiveIterator$OfDouble
//$ extends java.util.PrimitiveIterator

#include <java/util/PrimitiveIterator.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class DoubleConsumer;
		}
	}
}

namespace java {
	namespace util {

class $export PrimitiveIterator$OfDouble : public ::java::util::PrimitiveIterator {
	$interface(PrimitiveIterator$OfDouble, $NO_CLASS_INIT, ::java::util::PrimitiveIterator)
public:
	virtual void forEachRemaining(::java::util::function::DoubleConsumer* action);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual $Object* next() override;
	virtual double nextDouble() {return 0.0;}
};

	} // util
} // java

#endif // _java_util_PrimitiveIterator$OfDouble_h_