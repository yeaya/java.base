#ifndef _Create_h_
#define _Create_h_
//$ class Create
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Create : public ::java::lang::Object {
	$class(Create, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Create();
	void init$();
	static $String* createFileName(int32_t length);
	static void main($StringArray* args);
	static const int32_t length = 512;
};

#endif // _Create_h_