#ifndef _java_lang_Void_h_
#define _java_lang_Void_h_
//$ class java.lang.Void
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("TYPE")
#undef TYPE

namespace java {
	namespace lang {

class $export Void : public ::java::lang::Object {
	$class(Void, $PRELOAD | $PREINIT, ::java::lang::Object)
public:
	Void();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	static $Class* TYPE;
	static ::java::lang::Void* VOID$;
};

	} // lang
} // java

#pragma pop_macro("TYPE")

#endif // _java_lang_Void_h_