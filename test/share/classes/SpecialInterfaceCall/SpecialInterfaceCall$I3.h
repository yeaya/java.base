#ifndef _SpecialInterfaceCall_SpecialInterfaceCall$I3_h_
#define _SpecialInterfaceCall_SpecialInterfaceCall$I3_h_
//$ interface SpecialInterfaceCall.SpecialInterfaceCall$I3
//$ extends SpecialInterfaceCall.SpecialInterfaceCall$I2

#include <SpecialInterfaceCall/SpecialInterfaceCall$I2.h>

namespace SpecialInterfaceCall {

class $export SpecialInterfaceCall$I3 : public ::SpecialInterfaceCall::SpecialInterfaceCall$I2 {
	$interface(SpecialInterfaceCall$I3, $NO_CLASS_INIT, ::SpecialInterfaceCall::SpecialInterfaceCall$I2)
public:
	static void invokeSpecialMH(::SpecialInterfaceCall::SpecialInterfaceCall$I3* i);
};

} // SpecialInterfaceCall

#endif // _SpecialInterfaceCall_SpecialInterfaceCall$I3_h_