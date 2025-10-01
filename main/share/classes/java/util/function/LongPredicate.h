#ifndef _java_util_function_LongPredicate_h_
#define _java_util_function_LongPredicate_h_
//$ interface java.util.function.LongPredicate
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export LongPredicate : public ::java::lang::Object {
	$interface(LongPredicate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::function::LongPredicate* and$(::java::util::function::LongPredicate* other);
	bool lambda$and$0(::java::util::function::LongPredicate* other, int64_t value);
	bool lambda$negate$1(int64_t value);
	bool lambda$or$2(::java::util::function::LongPredicate* other, int64_t value);
	virtual ::java::util::function::LongPredicate* negate();
	virtual ::java::util::function::LongPredicate* or$(::java::util::function::LongPredicate* other);
	virtual bool test(int64_t value) {return false;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_LongPredicate_h_