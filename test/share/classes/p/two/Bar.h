#ifndef _p_two_Bar_h_
#define _p_two_Bar_h_
//$ class p.two.Bar
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace p {
	namespace two {

class $export Bar : public ::java::lang::Object {
	$class(Bar, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Bar();
	void init$();
	virtual $String* toString() override;
};

	} // two
} // p

#endif // _p_two_Bar_h_