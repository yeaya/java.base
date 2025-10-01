#ifndef _java_lang_Compiler_h_
#define _java_lang_Compiler_h_
//$ class java.lang.Compiler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {

class $export Compiler : public ::java::lang::Object {
	$class(Compiler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Compiler();
	void init$();
	static $Object* command(Object$* any);
	static bool compileClass($Class* clazz);
	static bool compileClasses($String* string);
	static void disable();
	static void enable();
};

	} // lang
} // java

#endif // _java_lang_Compiler_h_