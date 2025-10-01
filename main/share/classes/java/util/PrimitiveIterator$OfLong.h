#ifndef _java_util_PrimitiveIterator$OfLong_h_
#define _java_util_PrimitiveIterator$OfLong_h_
//$ interface java.util.PrimitiveIterator$OfLong
//$ extends java.util.PrimitiveIterator

#include <java/util/PrimitiveIterator.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class LongConsumer;
		}
	}
}

namespace java {
	namespace util {

class $export PrimitiveIterator$OfLong : public ::java::util::PrimitiveIterator {
	$interface(PrimitiveIterator$OfLong, $NO_CLASS_INIT, ::java::util::PrimitiveIterator)
public:
	virtual void forEachRemaining(::java::util::function::LongConsumer* action);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual $Object* next() override;
	virtual int64_t nextLong() {return 0;}
};

	} // util
} // java

#endif // _java_util_PrimitiveIterator$OfLong_h_