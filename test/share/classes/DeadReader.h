#ifndef _DeadReader_h_
#define _DeadReader_h_
//$ class DeadReader
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export DeadReader : public ::java::lang::Object {
	$class(DeadReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DeadReader();
	void init$();
	static void main($StringArray* argv);
};

#endif // _DeadReader_h_