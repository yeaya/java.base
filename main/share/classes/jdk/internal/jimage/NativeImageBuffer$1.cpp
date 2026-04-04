#include <jdk/internal/jimage/NativeImageBuffer$1.h>
#include <jdk/internal/jimage/NativeImageBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace jimage {

void NativeImageBuffer$1::init$() {
}

$Object* NativeImageBuffer$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("jimage"_s);
	return nullptr;
}

NativeImageBuffer$1::NativeImageBuffer$1() {
}

$Class* NativeImageBuffer$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NativeImageBuffer$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(NativeImageBuffer$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.jimage.NativeImageBuffer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.NativeImageBuffer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.jimage.NativeImageBuffer$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.jimage.NativeImageBuffer"
	};
	$loadClass(NativeImageBuffer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativeImageBuffer$1);
	});
	return class$;
}

$Class* NativeImageBuffer$1::class$ = nullptr;

		} // jimage
	} // internal
} // jdk