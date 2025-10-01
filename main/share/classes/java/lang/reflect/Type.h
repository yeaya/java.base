#ifndef _java_lang_reflect_Type_h_
#define _java_lang_reflect_Type_h_
//$ interface java.lang.reflect.Type
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace reflect {

class $export Type : public ::java::lang::Object {
	$interface(Type, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getTypeName();
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_Type_h_