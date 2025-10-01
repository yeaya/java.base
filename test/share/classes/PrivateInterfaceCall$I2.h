#ifndef _PrivateInterfaceCall$I2_h_
#define _PrivateInterfaceCall$I2_h_
//$ interface PrivateInterfaceCall$I2
//$ extends PrivateInterfaceCall$I1

#include <PrivateInterfaceCall$I1.h>

class $export PrivateInterfaceCall$I2 : public ::PrivateInterfaceCall$I1 {
	$interface(PrivateInterfaceCall$I2, $NO_CLASS_INIT, ::PrivateInterfaceCall$I1)
public:
	static void init();
	static void invokeDirect(::PrivateInterfaceCall$I2* i);
	static void invokeInterfaceMH(::PrivateInterfaceCall$I2* i);
	static void invokeInterfaceObjectFinalMH(::PrivateInterfaceCall$I2* i);
	static void invokeInterfaceObjectMH(::PrivateInterfaceCall$I2* i);
	void priv_m();
};

#endif // _PrivateInterfaceCall$I2_h_