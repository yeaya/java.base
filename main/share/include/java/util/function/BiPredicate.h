#ifndef _java_util_function_BiPredicate_h_
#define _java_util_function_BiPredicate_h_
//$ interface java.util.function.BiPredicate
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $import BiPredicate : public ::java::lang::Object {
	$interface(BiPredicate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::function::BiPredicate* and$(::java::util::function::BiPredicate* other);
	bool lambda$and$0(::java::util::function::BiPredicate* other, Object$* t, Object$* u);
	bool lambda$negate$1(Object$* t, Object$* u);
	bool lambda$or$2(::java::util::function::BiPredicate* other, Object$* t, Object$* u);
	virtual ::java::util::function::BiPredicate* negate();
	virtual ::java::util::function::BiPredicate* or$(::java::util::function::BiPredicate* other);
	virtual bool test(Object$* t, Object$* u) {return false;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_BiPredicate_h_