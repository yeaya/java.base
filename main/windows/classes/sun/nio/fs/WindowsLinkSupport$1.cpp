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

void WindowsLinkSupport$1::init$($WindowsPath* val$t) {
	$set(this, val$t, val$t);
}

$Object* WindowsLinkSupport$1::run() {
	return $of($nc(this->val$t)->toAbsolutePath());
}

WindowsLinkSupport$1::WindowsLinkSupport$1() {
}

$Class* WindowsLinkSupport$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$t", "Lsun/nio/fs/WindowsPath;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLinkSupport$1, val$t)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/WindowsPath;)V", "()V", 0, $method(WindowsLinkSupport$1, init$, void, $WindowsPath*)},
		{"run", "()Lsun/nio/fs/WindowsPath;", nullptr, $PUBLIC, $virtualMethod(WindowsLinkSupport$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.WindowsLinkSupport",
		"getFinalPath",
		"(Lsun/nio/fs/WindowsPath;Z)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsLinkSupport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsLinkSupport$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/nio/fs/WindowsPath;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsLinkSupport"
	};
	$loadClass(WindowsLinkSupport$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLinkSupport$1);
	});
	return class$;
}

$Class* WindowsLinkSupport$1::class$ = nullptr;

		} // fs
	} // nio
} // sun