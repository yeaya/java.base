#ifndef _java_util_ArrayPrefixHelpers$DoubleCumulateTask_h_
#define _java_util_ArrayPrefixHelpers$DoubleCumulateTask_h_
//$ class java.util.ArrayPrefixHelpers$DoubleCumulateTask
//$ extends java.util.concurrent.CountedCompleter

#include <java/lang/Array.h>
#include <java/util/concurrent/CountedCompleter.h>

namespace java {
	namespace util {
		namespace function {
			class DoubleBinaryOperator;
		}
	}
}

namespace java {
	namespace util {

class ArrayPrefixHelpers$DoubleCumulateTask : public ::java::util::concurrent::CountedCompleter {
	$class(ArrayPrefixHelpers$DoubleCumulateTask, $NO_CLASS_INIT, ::java::util::concurrent::CountedCompleter)
public:
	ArrayPrefixHelpers$DoubleCumulateTask();
	void init$(::java::util::ArrayPrefixHelpers$DoubleCumulateTask* parent, ::java::util::function::DoubleBinaryOperator* function, $doubles* array, int32_t lo, int32_t hi);
	void init$(::java::util::ArrayPrefixHelpers$DoubleCumulateTask* parent, ::java::util::function::DoubleBinaryOperator* function, $doubles* array, int32_t origin, int32_t fence, int32_t threshold, int32_t lo, int32_t hi);
	virtual void compute() override;
	$doubles* array = nullptr;
	::java::util::function::DoubleBinaryOperator* function = nullptr;
	::java::util::ArrayPrefixHelpers$DoubleCumulateTask* left = nullptr;
	::java::util::ArrayPrefixHelpers$DoubleCumulateTask* right = nullptr;
	double in = 0.0;
	double out = 0.0;
	int32_t lo = 0;
	int32_t hi = 0;
	int32_t origin = 0;
	int32_t fence = 0;
	int32_t threshold = 0;
	static const int64_t serialVersionUID = (int64_t)0xF7DABE10650E651F;
};

	} // util
} // java

#endif // _java_util_ArrayPrefixHelpers$DoubleCumulateTask_h_