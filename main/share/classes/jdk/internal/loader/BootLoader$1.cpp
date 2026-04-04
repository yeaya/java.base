#include <jdk/internal/loader/BootLoader$1.h>
#include <jdk/internal/loader/BootLoader.h>
#include <jdk/internal/loader/NativeLibraries.h>
#include <jdk/internal/loader/NativeLibrary.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BootLoader = ::jdk::internal::loader::BootLoader;

namespace jdk {
	namespace internal {
		namespace loader {

void BootLoader$1::init$($String* val$name) {
	$set(this, val$name, val$name);
}

$Object* BootLoader$1::run() {
	$$nc($BootLoader::getNativeLibraries())->loadLibrary(this->val$name);
	return nullptr;
}

BootLoader$1::BootLoader$1() {
}

$Class* BootLoader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BootLoader$1, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(BootLoader$1, init$, void, $String*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(BootLoader$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.BootLoader",
		"loadLibrary",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.BootLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.BootLoader$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.BootLoader"
	};
	$loadClass(BootLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BootLoader$1);
	});
	return class$;
}

$Class* BootLoader$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk