#ifndef _java_util_ArrayPrefixHelpers$IntCumulateTask_h_
#define _java_util_ArrayPrefixHelpers$IntCumulateTask_h_
//$ class java.util.ArrayPrefixHelpers$IntCumulateTask
//$ extends java.util.concurrent.CountedCompleter

#include <java/lang/Array.h>
#include <java/util/concurrent/CountedCompleter.h>

namespace java {
	namespace util {
		namespace function {
			class IntBinaryOperator;
		}
	}
}

namespace java {
	namespace util {

class ArrayPrefixHelpers$IntCumulateTask : public ::java::util::concurrent::CountedCompleter {
	$class(ArrayPrefixHelpers$IntCumulateTask, $NO_CLASS_INIT, ::java::util::concurrent::CountedCompleter)
public:
	ArrayPrefixHelpers$IntCumulateTask();
	void init$(::java::util::ArrayPrefixHelpers$IntCumulateTask* parent, ::java::util::function::IntBinaryOperator* function, $ints* array, int32_t lo, int32_t hi);
	void init$(::java::util::ArrayPrefixHelpers$IntCumulateTask* parent, ::java::util::function::IntBinaryOperator* function, $ints* array, int32_t origin, int32_t fence, int32_t threshold, int32_t lo, int32_t hi);
	virtual void compute() override;
	$ints* array = nullptr;
	::java::util::function::IntBinaryOperator* function = nullptr;
	::java::util::ArrayPrefixHelpers$IntCumulateTask* left = nullptr;
	::java::util::ArrayPrefixHelpers$IntCumulateTask* right = nullptr;
	int32_t in = 0;
	int32_t out = 0;
	int32_t lo = 0;
	int32_t hi = 0;
	int32_t origin = 0;
	int32_t fence = 0;
	int32_t threshold = 0;
	static const int64_t serialVersionUID = (int64_t)0x33C9DBF10C857601;
};

	} // util
} // java

#endif // _java_util_ArrayPrefixHelpers$IntCumulateTask_h_