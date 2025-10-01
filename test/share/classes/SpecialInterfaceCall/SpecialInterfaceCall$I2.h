#ifndef _SpecialInterfaceCall_SpecialInterfaceCall$I2_h_
#define _SpecialInterfaceCall_SpecialInterfaceCall$I2_h_
//$ interface SpecialInterfaceCall.SpecialInterfaceCall$I2
//$ extends SpecialInterfaceCall.SpecialInterfaceCall$I1

#include <SpecialInterfaceCall/SpecialInterfaceCall$I1.h>

namespace SpecialInterfaceCall {

class $export SpecialInterfaceCall$I2 : public ::SpecialInterfaceCall::SpecialInterfaceCall$I1 {
	$interface(SpecialInterfaceCall$I2, $NO_CLASS_INIT, ::SpecialInterfaceCall::SpecialInterfaceCall$I1)
public:
	static void invokeDirect(::SpecialInterfaceCall::SpecialInterfaceCall$I2* i);
	static void invokeSpecialMH(::SpecialInterfaceCall::SpecialInterfaceCall$I2* i);
	static void invokeSpecialObjectFinalMH(::SpecialInterfaceCall::SpecialInterfaceCall$I2* i);
	static void invokeSpecialObjectMH(::SpecialInterfaceCall::SpecialInterfaceCall$I2* i);
	void priv_m();
	virtual void pub_m() override;
};

} // SpecialInterfaceCall

#endif // _SpecialInterfaceCall_SpecialInterfaceCall$I2_h_