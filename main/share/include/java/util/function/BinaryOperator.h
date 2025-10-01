#ifndef _java_util_function_BinaryOperator_h_
#define _java_util_function_BinaryOperator_h_
//$ interface java.util.function.BinaryOperator
//$ extends java.util.function.BiFunction

#include <java/util/function/BiFunction.h>

namespace java {
	namespace util {
		class Comparator;
	}
}

namespace java {
	namespace util {
		namespace function {

class $import BinaryOperator : public ::java::util::function::BiFunction {
	$interface(BinaryOperator, $PRELOAD | $NO_CLASS_INIT, ::java::util::function::BiFunction)
public:
	static $Object* lambda$maxBy$1(::java::util::Comparator* comparator, Object$* a, Object$* b);
	static $Object* lambda$minBy$0(::java::util::Comparator* comparator, Object$* a, Object$* b);
	static ::java::util::function::BinaryOperator* maxBy(::java::util::Comparator* comparator);
	static ::java::util::function::BinaryOperator* minBy(::java::util::Comparator* comparator);
};

		} // function
	} // util
} // java

#endif // _java_util_function_BinaryOperator_h_