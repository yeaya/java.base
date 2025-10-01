#ifndef _java_util_function_Function_h_
#define _java_util_function_Function_h_
//$ interface java.util.function.Function
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import Function : public ::java::lang::Object {
	$interface(Function, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::function::Function* andThen(::java::util::function::Function* after);
	virtual $Object* apply(Object$* t) {return nullptr;}
	virtual ::java::util::function::Function* compose(::java::util::function::Function* before);
	static ::java::util::function::Function* identity();
	$Object* lambda$andThen$1(::java::util::function::Function* after, Object$* t);
	$Object* lambda$compose$0(::java::util::function::Function* before, Object$* v);
	static $Object* lambda$identity$2(Object$* t);
};

		} // function
	} // util
} // java

#endif // _java_util_function_Function_h_