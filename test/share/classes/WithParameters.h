#ifndef _WithParameters_h_
#define _WithParameters_h_
//$ class WithParameters
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export WithParameters : public ::java::lang::Object {
	$class(WithParameters, 0, ::java::lang::Object)
public:
	WithParameters();
	void init$();
	static void main($StringArray* argv);
	virtual void test(int32_t test);
	static $ClassArray* qux_types;
	static $StringArray* qux_names;
};

#endif // _WithParameters_h_