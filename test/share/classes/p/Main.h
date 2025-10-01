#ifndef _p_Main_h_
#define _p_Main_h_
//$ class p.Main
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace p {

class $export Main : public ::java::lang::Object {
	$class(Main, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Main();
	void init$();
	static void main($StringArray* args);
};

} // p

#endif // _p_Main_h_