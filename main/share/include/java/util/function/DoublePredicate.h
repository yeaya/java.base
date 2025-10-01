#ifndef _java_util_function_DoublePredicate_h_
#define _java_util_function_DoublePredicate_h_
//$ interface java.util.function.DoublePredicate
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import DoublePredicate : public ::java::lang::Object {
	$interface(DoublePredicate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::function::DoublePredicate* and$(::java::util::function::DoublePredicate* other);
	bool lambda$and$0(::java::util::function::DoublePredicate* other, double value);
	bool lambda$negate$1(double value);
	bool lambda$or$2(::java::util::function::DoublePredicate* other, double value);
	virtual ::java::util::function::DoublePredicate* negate();
	virtual ::java::util::function::DoublePredicate* or$(::java::util::function::DoublePredicate* other);
	virtual bool test(double value) {return false;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_DoublePredicate_h_