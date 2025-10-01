#ifndef _java_util_Spliterator$OfLong_h_
#define _java_util_Spliterator$OfLong_h_
//$ interface java.util.Spliterator$OfLong
//$ extends java.util.Spliterator$OfPrimitive

#include <java/util/Spliterator$OfPrimitive.h>

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

class $export Spliterator$OfLong : public ::java::util::Spliterator$OfPrimitive {
	$interface(Spliterator$OfLong, $NO_CLASS_INIT, ::java::util::Spliterator$OfPrimitive)
public:
	virtual void forEachRemaining(::java::util::function::LongConsumer* action);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual bool tryAdvance(::java::util::function::LongConsumer* action) {return false;}
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator$OfLong* trySplit() override {return nullptr;}
};

	} // util
} // java

#endif // _java_util_Spliterator$OfLong_h_