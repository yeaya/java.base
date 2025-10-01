#ifndef _Responses_h_
#define _Responses_h_
//$ class Responses
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Responses : public ::java::lang::Object {
	$class(Responses, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Responses();
	void init$();
	static $Array<::java::lang::Object, 2>* getTests();
	static void main($StringArray* args);
};

#endif // _Responses_h_