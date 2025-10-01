#ifndef _java_util_ArrayPrefixHelpers$LongCumulateTask_h_
#define _java_util_ArrayPrefixHelpers$LongCumulateTask_h_
//$ class java.util.ArrayPrefixHelpers$LongCumulateTask
//$ extends java.util.concurrent.CountedCompleter

#include <java/lang/Array.h>
#include <java/util/concurrent/CountedCompleter.h>

namespace java {
	namespace util {
		namespace function {
			class LongBinaryOperator;
		}
	}
}

namespace java {
	namespace util {

class ArrayPrefixHelpers$LongCumulateTask : public ::java::util::concurrent::CountedCompleter {
	$class(ArrayPrefixHelpers$LongCumulateTask, $NO_CLASS_INIT, ::java::util::concurrent::CountedCompleter)
public:
	ArrayPrefixHelpers$LongCumulateTask();
	void init$(::java::util::ArrayPrefixHelpers$LongCumulateTask* parent, ::java::util::function::LongBinaryOperator* function, $longs* array, int32_t lo, int32_t hi);
	void init$(::java::util::ArrayPrefixHelpers$LongCumulateTask* parent, ::java::util::function::LongBinaryOperator* function, $longs* array, int32_t origin, int32_t fence, int32_t threshold, int32_t lo, int32_t hi);
	virtual void compute() override;
	$longs* array = nullptr;
	::java::util::function::LongBinaryOperator* function = nullptr;
	::java::util::ArrayPrefixHelpers$LongCumulateTask* left = nullptr;
	::java::util::ArrayPrefixHelpers$LongCumulateTask* right = nullptr;
	int64_t in = 0;
	int64_t out = 0;
	int32_t lo = 0;
	int32_t hi = 0;
	int32_t origin = 0;
	int32_t fence = 0;
	int32_t threshold = 0;
	static const int64_t serialVersionUID = (int64_t)0xB9952CFBA13F924F;
};

	} // util
} // java

#endif // _java_util_ArrayPrefixHelpers$LongCumulateTask_h_