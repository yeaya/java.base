#include <sun/nio/fs/WindowsSecurity$Privilege.h>

#include <sun/nio/fs/WindowsSecurity.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _WindowsSecurity$Privilege_MethodInfo_[] = {
	{"drop", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowsSecurity$Privilege, drop, void)},
	{}
};

$InnerClassInfo _WindowsSecurity$Privilege_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsSecurity$Privilege", "sun.nio.fs.WindowsSecurity", "Privilege", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WindowsSecurity$Privilege_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.nio.fs.WindowsSecurity$Privilege",
	nullptr,
	nullptr,
	nullptr,
	_WindowsSecurity$Privilege_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsSecurity$Privilege_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsSecurity"
};

$Object* allocate$WindowsSecurity$Privilege($Class* clazz) {
	return $of($alloc(WindowsSecurity$Privilege));
}

$Class* WindowsSecurity$Privilege::load$($String* name, bool initialize) {
	$loadClass(WindowsSecurity$Privilege, name, initialize, &_WindowsSecurity$Privilege_ClassInfo_, allocate$WindowsSecurity$Privilege);
	return class$;
}

$Class* WindowsSecurity$Privilege::class$ = nullptr;

		} // fs
	} // nio
} // sun