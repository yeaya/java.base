#ifndef _StaticInterfaceMethodInWayOfDefault$C_v1_h_
#define _StaticInterfaceMethodInWayOfDefault$C_v1_h_
//$ interface StaticInterfaceMethodInWayOfDefault$C_v1
//$ extends StaticInterfaceMethodInWayOfDefault$B

#include <StaticInterfaceMethodInWayOfDefault$B.h>

class $export StaticInterfaceMethodInWayOfDefault$C_v1 : public ::StaticInterfaceMethodInWayOfDefault$B {
	$interface(StaticInterfaceMethodInWayOfDefault$C_v1, $NO_CLASS_INIT, ::StaticInterfaceMethodInWayOfDefault$B)
public:
	virtual void m();
};

#endif // _StaticInterfaceMethodInWayOfDefault$C_v1_h_