#include <jdk/internal/module/ModuleHashes$HashSupplier.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace module {

$Class* ModuleHashes$HashSupplier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"generate", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModuleHashes$HashSupplier, generate, $bytes*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleHashes$HashSupplier", "jdk.internal.module.ModuleHashes", "HashSupplier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.module.ModuleHashes$HashSupplier",
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
		"jdk.internal.module.ModuleHashes"
	};
	$loadClass(ModuleHashes$HashSupplier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHashes$HashSupplier);
	});
	return class$;
}

$Class* ModuleHashes$HashSupplier::class$ = nullptr;

		} // module
	} // internal
} // jdk