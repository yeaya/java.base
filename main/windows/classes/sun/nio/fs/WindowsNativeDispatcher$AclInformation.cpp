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

$FieldInfo _WindowsNativeDispatcher$AclInformation_FieldInfo_[] = {
	{"aceCount", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$AclInformation, aceCount$)},
	{}
};

$MethodInfo _WindowsNativeDispatcher$AclInformation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsNativeDispatcher$AclInformation::*)()>(&WindowsNativeDispatcher$AclInformation::init$))},
	{"aceCount", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsNativeDispatcher$AclInformation_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsNativeDispatcher$AclInformation", "sun.nio.fs.WindowsNativeDispatcher", "AclInformation", $STATIC},
	{}
};

$ClassInfo _WindowsNativeDispatcher$AclInformation_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsNativeDispatcher$AclInformation",
	"java.lang.Object",
	nullptr,
	_WindowsNativeDispatcher$AclInformation_FieldInfo_,
	_WindowsNativeDispatcher$AclInformation_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsNativeDispatcher$AclInformation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsNativeDispatcher"
};

$Object* allocate$WindowsNativeDispatcher$AclInformation($Class* clazz) {
	return $of($alloc(WindowsNativeDispatcher$AclInformation));
}

void WindowsNativeDispatcher$AclInformation::init$() {
}

int32_t WindowsNativeDispatcher$AclInformation::aceCount() {
	return this->aceCount$;
}

WindowsNativeDispatcher$AclInformation::WindowsNativeDispatcher$AclInformation() {
}

$Class* WindowsNativeDispatcher$AclInformation::load$($String* name, bool initialize) {
	$loadClass(WindowsNativeDispatcher$AclInformation, name, initialize, &_WindowsNativeDispatcher$AclInformation_ClassInfo_, allocate$WindowsNativeDispatcher$AclInformation);
	return class$;
}

$Class* WindowsNativeDispatcher$AclInformation::class$ = nullptr;

		} // fs
	} // nio
} // sun