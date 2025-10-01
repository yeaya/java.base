#ifndef _ReadReadLine_h_
#define _ReadReadLine_h_
//$ class ReadReadLine
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ReadReadLine : public ::java::lang::Object {
	$class(ReadReadLine, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReadReadLine();
	void init$();
	static void main($StringArray* args);
	static void test($String* s, int32_t good);
};

#endif // _ReadReadLine_h_