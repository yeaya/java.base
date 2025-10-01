#ifndef _p_App_h_
#define _p_App_h_
//$ class p.App
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace p {

class $export App : public ::java::lang::Object {
	$class(App, $NO_CLASS_INIT, ::java::lang::Object)
public:
	App();
	void init$();
	static void main($StringArray* args);
};

} // p

#endif // _p_App_h_