#include <sun/nio/fs/WindowsNativeDispatcher$AclInformation.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

void WindowsNativeDispatcher$AclInformation::init$() {
}

int32_t WindowsNativeDispatcher$AclInformation::aceCount() {
	return this->aceCount$;
}

WindowsNativeDispatcher$AclInformation::WindowsNativeDispatcher$AclInformation() {
}

$Class* WindowsNativeDispatcher$AclInformation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"aceCount", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$AclInformation, aceCount$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsNativeDispatcher$AclInformation, init$, void)},
		{"aceCount", "()I", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$AclInformation, aceCount, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsNativeDispatcher$AclInformation", "sun.nio.fs.WindowsNativeDispatcher", "AclInformation", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsNativeDispatcher$AclInformation",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsNativeDispatcher"
	};
	$loadClass(WindowsNativeDispatcher$AclInformation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsNativeDispatcher$AclInformation);
	});
	return class$;
}

$Class* WindowsNativeDispatcher$AclInformation::class$ = nullptr;

		} // fs
	} // nio
} // sun