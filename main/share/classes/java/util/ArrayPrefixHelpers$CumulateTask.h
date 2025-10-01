#ifndef _java_util_ArrayPrefixHelpers$CumulateTask_h_
#define _java_util_ArrayPrefixHelpers$CumulateTask_h_
//$ class java.util.ArrayPrefixHelpers$CumulateTask
//$ extends java.util.concurrent.CountedCompleter

#include <java/lang/Array.h>
#include <java/util/concurrent/CountedCompleter.h>

namespace java {
	namespace util {
		namespace function {
			class BinaryOperator;
		}
	}
}

namespace java {
	namespace util {

class ArrayPrefixHelpers$CumulateTask : public ::java::util::concurrent::CountedCompleter {
	$class(ArrayPrefixHelpers$CumulateTask, $NO_CLASS_INIT, ::java::util::concurrent::CountedCompleter)
public:
	ArrayPrefixHelpers$CumulateTask();
	void init$(::java::util::ArrayPrefixHelpers$CumulateTask* parent, ::java::util::function::BinaryOperator* function, $ObjectArray* array, int32_t lo, int32_t hi);
	void init$(::java::util::ArrayPrefixHelpers$CumulateTask* parent, ::java::util::function::BinaryOperator* function, $ObjectArray* array, int32_t origin, int32_t fence, int32_t threshold, int32_t lo, int32_t hi);
	virtual void compute() override;
	$ObjectArray* array = nullptr;
	::java::util::function::BinaryOperator* function = nullptr;
	::java::util::ArrayPrefixHelpers$CumulateTask* left = nullptr;
	::java::util::ArrayPrefixHelpers$CumulateTask* right = nullptr;
	$Object* in = nullptr;
	$Object* out = nullptr;
	int32_t lo = 0;
	int32_t hi = 0;
	int32_t origin = 0;
	int32_t fence = 0;
	int32_t threshold = 0;
	static const int64_t serialVersionUID = (int64_t)0x49767BC622E29967;
};

	} // util
} // java

#endif // _java_util_ArrayPrefixHelpers$CumulateTask_h_