#ifndef _OldenCompilingWithDefaults_h_
#define _OldenCompilingWithDefaults_h_
//$ class OldenCompilingWithDefaults
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export OldenCompilingWithDefaults : public ::java::lang::Object {
	$class(OldenCompilingWithDefaults, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OldenCompilingWithDefaults();
	void init$();
	static void main($StringArray* args);
	static $Object* f;
};

#endif // _OldenCompilingWithDefaults_h_