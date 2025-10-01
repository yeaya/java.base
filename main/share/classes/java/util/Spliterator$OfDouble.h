#ifndef _java_util_Spliterator$OfDouble_h_
#define _java_util_Spliterator$OfDouble_h_
//$ interface java.util.Spliterator$OfDouble
//$ extends java.util.Spliterator$OfPrimitive

#include <java/util/Spliterator$OfPrimitive.h>

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

class $export Spliterator$OfDouble : public ::java::util::Spliterator$OfPrimitive {
	$interface(Spliterator$OfDouble, $NO_CLASS_INIT, ::java::util::Spliterator$OfPrimitive)
public:
	virtual void forEachRemaining(::java::util::function::DoubleConsumer* action);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual bool tryAdvance(::java::util::function::DoubleConsumer* action) {return false;}
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator$OfDouble* trySplit() override {return nullptr;}
};

	} // util
} // java

#endif // _java_util_Spliterator$OfDouble_h_