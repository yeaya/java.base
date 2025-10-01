#ifndef _StaticInterfaceMethodInWayOfDefault$B_h_
#define _StaticInterfaceMethodInWayOfDefault$B_h_
//$ interface StaticInterfaceMethodInWayOfDefault$B
//$ extends StaticInterfaceMethodInWayOfDefault$A_v1

#include <StaticInterfaceMethodInWayOfDefault$A_v1.h>

class $export StaticInterfaceMethodInWayOfDefault$B : public ::StaticInterfaceMethodInWayOfDefault$A_v1 {
	$interface(StaticInterfaceMethodInWayOfDefault$B, $NO_CLASS_INIT, ::StaticInterfaceMethodInWayOfDefault$A_v1)
public:
	static void m();
};

#endif // _StaticInterfaceMethodInWayOfDefault$B_h_