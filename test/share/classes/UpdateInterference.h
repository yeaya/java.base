#ifndef _UpdateInterference_h_
#define _UpdateInterference_h_
//$ class UpdateInterference
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export UpdateInterference : public ::java::lang::Object {
	$class(UpdateInterference, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UpdateInterference();
	void init$();
	static void main($StringArray* args);
	static $volatile(bool) stop;
};

#endif // _UpdateInterference_h_