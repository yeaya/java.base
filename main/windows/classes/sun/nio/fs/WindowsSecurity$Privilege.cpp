#include <sun/nio/fs/WindowsSecurity$Privilege.h>
#include <sun/nio/fs/WindowsSecurity.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

$Class* WindowsSecurity$Privilege::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"drop", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowsSecurity$Privilege, drop, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsSecurity$Privilege", "sun.nio.fs.WindowsSecurity", "Privilege", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.nio.fs.WindowsSecurity$Privilege",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsSecurity"
	};
	$loadClass(WindowsSecurity$Privilege, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsSecurity$Privilege);
	});
	return class$;
}

$Class* WindowsSecurity$Privilege::class$ = nullptr;

		} // fs
	} // nio
} // sun