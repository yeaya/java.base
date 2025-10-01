#ifndef _java_util_function_IntPredicate_h_
#define _java_util_function_IntPredicate_h_
//$ interface java.util.function.IntPredicate
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export IntPredicate : public ::java::lang::Object {
	$interface(IntPredicate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::function::IntPredicate* and$(::java::util::function::IntPredicate* other);
	bool lambda$and$0(::java::util::function::IntPredicate* other, int32_t value);
	bool lambda$negate$1(int32_t value);
	bool lambda$or$2(::java::util::function::IntPredicate* other, int32_t value);
	virtual ::java::util::function::IntPredicate* negate();
	virtual ::java::util::function::IntPredicate* or$(::java::util::function::IntPredicate* other);
	virtual bool test(int32_t value) {return false;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_IntPredicate_h_