#ifndef _SpecialInterfaceCall_SpecialInterfaceCall$I1_h_
#define _SpecialInterfaceCall_SpecialInterfaceCall$I1_h_
//$ interface SpecialInterfaceCall.SpecialInterfaceCall$I1
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace SpecialInterfaceCall {

class $export SpecialInterfaceCall$I1 : public ::java::lang::Object {
	$interface(SpecialInterfaceCall$I1, $NO_CLASS_INIT, ::java::lang::Object)
public:
	void priv_m();
	virtual void pub_m();
};

} // SpecialInterfaceCall

#endif // _SpecialInterfaceCall_SpecialInterfaceCall$I1_h_