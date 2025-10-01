#ifndef _DriveRelativePath_h_
#define _DriveRelativePath_h_
//$ class DriveRelativePath
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export DriveRelativePath : public ::java::lang::Object {
	$class(DriveRelativePath, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DriveRelativePath();
	void init$();
	static void fail($String* s);
	static void main($StringArray* args);
};

#endif // _DriveRelativePath_h_