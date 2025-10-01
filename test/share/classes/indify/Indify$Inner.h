#ifndef _indify_Indify$Inner_h_
#define _indify_Indify$Inner_h_
//$ interface indify.Indify$Inner
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace indify {
	class Indify$Outer;
}

namespace indify {

class $export Indify$Inner : public ::java::lang::Object {
	$interface(Indify$Inner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void linkOuter(::indify::Indify$Outer* o) {}
	virtual ::indify::Indify$Outer* outer() {return nullptr;}
};

} // indify

#endif // _indify_Indify$Inner_h_