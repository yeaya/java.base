#ifndef _java_util_Spliterator$OfInt_h_
#define _java_util_Spliterator$OfInt_h_
//$ interface java.util.Spliterator$OfInt
//$ extends java.util.Spliterator$OfPrimitive

#include <java/util/Spliterator$OfPrimitive.h>

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

class $import Spliterator$OfInt : public ::java::util::Spliterator$OfPrimitive {
	$interface(Spliterator$OfInt, $NO_CLASS_INIT, ::java::util::Spliterator$OfPrimitive)
public:
	virtual void forEachRemaining(::java::util::function::IntConsumer* action);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual bool tryAdvance(::java::util::function::IntConsumer* action) {return false;}
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator$OfInt* trySplit() override {return nullptr;}
};

	} // util
} // java

#endif // _java_util_Spliterator$OfInt_h_