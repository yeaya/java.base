#ifndef _java_util_function_Supplier_h_
#define _java_util_function_Supplier_h_
//$ interface java.util.function.Supplier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {

class $export Supplier : public ::java::lang::Object {
	$interface(Supplier, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* get() {return nullptr;}
};

		} // function
	} // util
} // java

#endif // _java_util_function_Supplier_h_