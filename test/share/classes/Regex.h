#ifndef _Regex_h_
#define _Regex_h_
//$ class Regex
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Regex : public ::java::lang::Object {
	$class(Regex, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Regex();
	void init$();
	static void ck(bool x, bool ans);
	static void ck($String* x, $String* ans);
	static void ck($StringArray* x, $StringArray* ans);
	static void main($StringArray* args);
	static void testLiteralReplacement();
};

#endif // _Regex_h_