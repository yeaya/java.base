#ifndef _PrivateInterfaceCall$I3_h_
#define _PrivateInterfaceCall$I3_h_
//$ interface PrivateInterfaceCall$I3
//$ extends PrivateInterfaceCall$I2

#include <PrivateInterfaceCall$I2.h>

class $export PrivateInterfaceCall$I3 : public ::PrivateInterfaceCall$I2 {
	$interface(PrivateInterfaceCall$I3, $NO_CLASS_INIT, ::PrivateInterfaceCall$I2)
public:
	static void init();
	static void invokeInterfaceMH(::PrivateInterfaceCall$I2* i);
};

#endif // _PrivateInterfaceCall$I3_h_