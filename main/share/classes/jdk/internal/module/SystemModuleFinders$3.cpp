#include <jdk/internal/module/SystemModuleFinders$3.h>
#include <jdk/internal/module/SystemModuleFinders.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace module {

void SystemModuleFinders$3::init$($bytes* val$hash) {
	$set(this, val$hash, val$hash);
}

$bytes* SystemModuleFinders$3::generate($String* algorithm) {
	return this->val$hash;
}

SystemModuleFinders$3::SystemModuleFinders$3() {
}

$Class* SystemModuleFinders$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$hash", "[B", nullptr, $FINAL | $SYNTHETIC, $field(SystemModuleFinders$3, val$hash)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", "()V", 0, $method(SystemModuleFinders$3, init$, void, $bytes*)},
		{"generate", "(Ljava/lang/String;)[B", nullptr, $PUBLIC, $virtualMethod(SystemModuleFinders$3, generate, $bytes*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.module.SystemModuleFinders",
		"hashSupplier",
		"(Ljava/util/Map;Ljava/lang/String;)Ljdk/internal/module/ModuleHashes$HashSupplier;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.SystemModuleFinders$3", nullptr, nullptr, 0},
		{"jdk.internal.module.ModuleHashes$HashSupplier", "jdk.internal.module.ModuleHashes", "HashSupplier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.SystemModuleFinders$3",
		"java.lang.Object",
		"jdk.internal.module.ModuleHashes$HashSupplier",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.module.SystemModuleFinders"
	};
	$loadClass(SystemModuleFinders$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemModuleFinders$3);
	});
	return class$;
}

$Class* SystemModuleFinders$3::class$ = nullptr;

		} // module
	} // internal
} // jdk