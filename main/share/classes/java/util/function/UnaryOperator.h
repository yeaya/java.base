#ifndef _java_util_function_UnaryOperator_h_
#define _java_util_function_UnaryOperator_h_
//$ interface java.util.function.UnaryOperator
//$ extends java.util.function.Function

#include <java/util/function/Function.h>

namespace java {
	namespace util {
		namespace function {

class $export UnaryOperator : public ::java::util::function::Function {
	$interface(UnaryOperator, $NO_CLASS_INIT, ::java::util::function::Function)
public:
	static ::java::util::function::UnaryOperator* identity();
	static $Object* lambda$identity$0(Object$* t);
};

		} // function
	} // util
} // java

#endif // _java_util_function_UnaryOperator_h_