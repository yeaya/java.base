#ifndef _java_util_function_Predicate_h_
#define _java_util_function_Predicate_h_
//$ interface java.util.function.Predicate
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export Predicate : public ::java::lang::Object {
	$interface(Predicate, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::function::Predicate* and$(::java::util::function::Predicate* other);
	static ::java::util::function::Predicate* isEqual(Object$* targetRef);
	bool lambda$and$0(::java::util::function::Predicate* other, Object$* t);
	static bool lambda$isEqual$3(Object$* targetRef, Object$* object);
	bool lambda$negate$1(Object$* t);
	bool lambda$or$2(::java::util::function::Predicate* other, Object$* t);
	virtual ::java::util::function::Predicate* negate();
	static ::java::util::function::Predicate* not$(::java::util::function::Predicate* target);
	virtual ::java::util::function::Predicate* or$(::java::util::function::Predicate* other);
	virtual bool test(Object$* t) {return false;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_Predicate_h_