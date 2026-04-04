#include <jdk/internal/jrtfs/SystemImage$2.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <jdk/internal/jrtfs/SystemImage.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $SystemImage = ::jdk::internal::jrtfs::SystemImage;

namespace jdk {
	namespace internal {
		namespace jrtfs {

void SystemImage$2::init$() {
}

$Object* SystemImage$2::run() {
	$init($SystemImage);
	return $of($Boolean::valueOf($Files::isRegularFile($SystemImage::moduleImageFile, $$new($LinkOptionArray, 0))));
}

SystemImage$2::SystemImage$2() {
}

$Class* SystemImage$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SystemImage$2, init$, void)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(SystemImage$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.jrtfs.SystemImage",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jrtfs.SystemImage$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.jrtfs.SystemImage$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.jrtfs.SystemImage"
	};
	$loadClass(SystemImage$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemImage$2);
	});
	return class$;
}

$Class* SystemImage$2::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk