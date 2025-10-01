#ifndef _BigReadWrite_h_
#define _BigReadWrite_h_
//$ class BigReadWrite
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export BigReadWrite : public ::java::lang::Object {
	$class(BigReadWrite, 0, ::java::lang::Object)
public:
	BigReadWrite();
	void init$();
	static void main($StringArray* args);
	static int32_t testSize;
};

#endif // _BigReadWrite_h_