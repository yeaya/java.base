#include <sun/nio/fs/WindowsChannelFactory$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

void WindowsChannelFactory$1::init$() {
}

WindowsChannelFactory$1::WindowsChannelFactory$1() {
}

$Class* WindowsChannelFactory$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WindowsChannelFactory$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.WindowsChannelFactory",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsChannelFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsChannelFactory$1",
		"java.lang.Object",
		"java.nio.file.OpenOption",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsChannelFactory"
	};
	$loadClass(WindowsChannelFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsChannelFactory$1);
	});
	return class$;
}

$Class* WindowsChannelFactory$1::class$ = nullptr;

		} // fs
	} // nio
} // sun