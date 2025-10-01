#ifndef _DefaultAccessibility_h_
#define _DefaultAccessibility_h_
//$ class DefaultAccessibility
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export DefaultAccessibility : public ::java::lang::Object {
	$class(DefaultAccessibility, 0, ::java::lang::Object)
public:
	DefaultAccessibility();
	void init$();
	static void main($StringArray* args);
	static int32_t f;
};

#endif // _DefaultAccessibility_h_