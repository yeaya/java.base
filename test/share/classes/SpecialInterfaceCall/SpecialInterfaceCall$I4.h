#ifndef _SpecialInterfaceCall_SpecialInterfaceCall$I4_h_
#define _SpecialInterfaceCall_SpecialInterfaceCall$I4_h_
//$ interface SpecialInterfaceCall.SpecialInterfaceCall$I4
//$ extends SpecialInterfaceCall.SpecialInterfaceCall$I1

#include <SpecialInterfaceCall/SpecialInterfaceCall$I1.h>

namespace SpecialInterfaceCall {

class $export SpecialInterfaceCall$I4 : public ::SpecialInterfaceCall::SpecialInterfaceCall$I1 {
	$interface(SpecialInterfaceCall$I4, $NO_CLASS_INIT, ::SpecialInterfaceCall::SpecialInterfaceCall$I1)
public:
	static void invokeDirect(::SpecialInterfaceCall::SpecialInterfaceCall$I4* i);
	static void invokeDirectFinal(::SpecialInterfaceCall::SpecialInterfaceCall$I4* i);
};

} // SpecialInterfaceCall

#endif // _SpecialInterfaceCall_SpecialInterfaceCall$I4_h_