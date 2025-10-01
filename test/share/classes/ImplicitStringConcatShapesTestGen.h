#ifndef _ImplicitStringConcatShapesTestGen_h_
#define _ImplicitStringConcatShapesTestGen_h_
//$ class ImplicitStringConcatShapesTestGen
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ImplicitStringConcatShapesTestGen : public ::java::lang::Object {
	$class(ImplicitStringConcatShapesTestGen, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImplicitStringConcatShapesTestGen();
	void init$();
	static $String* escapeToUnicode($String* str);
	static $String* initValue($String* type, int32_t i);
	static void main($StringArray* args);
	static $String* stringValue($String* type, int32_t i);
	static $String* typeSig($String* type);
	static $String* typeValue($String* type, int32_t i);
};

#endif // _ImplicitStringConcatShapesTestGen_h_