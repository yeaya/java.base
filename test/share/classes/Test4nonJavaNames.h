#ifndef _Test4nonJavaNames_h_
#define _Test4nonJavaNames_h_
//$ class Test4nonJavaNames
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CLASS_FILE")
#undef CLASS_FILE
#pragma push_macro("CLASS_NAME")
#undef CLASS_NAME

class $export Test4nonJavaNames : public ::java::lang::Object {
	$class(Test4nonJavaNames, 0, ::java::lang::Object)
public:
	Test4nonJavaNames();
	void init$();
	static void main($StringArray* args);
	static $String* CLASS_NAME;
	static $bytes* CLASS_FILE;
};

#pragma pop_macro("CLASS_FILE")
#pragma pop_macro("CLASS_NAME")

#endif // _Test4nonJavaNames_h_