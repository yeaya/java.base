#ifndef _DriveOnly_h_
#define _DriveOnly_h_
//$ class DriveOnly
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export DriveOnly : public ::java::lang::Object {
	$class(DriveOnly, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DriveOnly();
	void init$();
	static void main($StringArray* args);
};

#endif // _DriveOnly_h_