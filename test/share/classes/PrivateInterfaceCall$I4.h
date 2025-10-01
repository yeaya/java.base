#ifndef _PrivateInterfaceCall$I4_h_
#define _PrivateInterfaceCall$I4_h_
//$ interface PrivateInterfaceCall$I4
//$ extends PrivateInterfaceCall$I1

#include <PrivateInterfaceCall$I1.h>

class $export PrivateInterfaceCall$I4 : public ::PrivateInterfaceCall$I1 {
	$interface(PrivateInterfaceCall$I4, $NO_CLASS_INIT, ::PrivateInterfaceCall$I1)
public:
	static void invokeDirect(::PrivateInterfaceCall$I4* i);
	static void invokeDirectFinal(::PrivateInterfaceCall$I4* i);
};

#endif // _PrivateInterfaceCall$I4_h_