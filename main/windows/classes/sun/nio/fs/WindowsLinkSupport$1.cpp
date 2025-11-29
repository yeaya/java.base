#include <sun/nio/fs/WindowsLinkSupport$1.h>

#include <sun/nio/fs/WindowsLinkSupport.h>
#include <sun/nio/fs/WindowsPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WindowsPath = ::sun::nio::fs::WindowsPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsLinkSupport$1_FieldInfo_[] = {
	{"val$t", "Lsun/nio/fs/WindowsPath;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLinkSupport$1, val$t)},
	{}
};

$MethodInfo _WindowsLinkSupport$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/WindowsPath;)V", "()V", 0, $method(static_cast<void(WindowsLinkSupport$1::*)($WindowsPath*)>(&WindowsLinkSupport$1::init$))},
	{"run", "()Lsun/nio/fs/WindowsPath;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsLinkSupport$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.WindowsLinkSupport",
	"getFinalPath",
	"(Lsun/nio/fs/WindowsPath;Z)Ljava/lang/String;"
};

$InnerClassInfo _WindowsLinkSupport$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsLinkSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsLinkSupport$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsLinkSupport$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_WindowsLinkSupport$1_FieldInfo_,
	_WindowsLinkSupport$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/nio/fs/WindowsPath;>;",
	&_WindowsLinkSupport$1_EnclosingMethodInfo_,
	_WindowsLinkSupport$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsLinkSupport"
};

$Object* allocate$WindowsLinkSupport$1($Class* clazz) {
	return $of($alloc(WindowsLinkSupport$1));
}

void WindowsLinkSupport$1::init$($WindowsPath* val$t) {
	$set(this, val$t, val$t);
}

$Object* WindowsLinkSupport$1::run() {
	return $of($nc(this->val$t)->toAbsolutePath());
}

WindowsLinkSupport$1::WindowsLinkSupport$1() {
}

$Class* WindowsLinkSupport$1::load$($String* name, bool initialize) {
	$loadClass(WindowsLinkSupport$1, name, initialize, &_WindowsLinkSupport$1_ClassInfo_, allocate$WindowsLinkSupport$1);
	return class$;
}

$Class* WindowsLinkSupport$1::class$ = nullptr;

		} // fs
	} // nio
} // sun