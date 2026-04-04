#include <jdk/internal/module/ModuleTarget.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace module {

void ModuleTarget::init$($String* targetPlatform) {
	$set(this, targetPlatform$, targetPlatform);
}

$String* ModuleTarget::targetPlatform() {
	return this->targetPlatform$;
}

ModuleTarget::ModuleTarget() {
}

$Class* ModuleTarget::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"targetPlatform", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ModuleTarget, targetPlatform$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ModuleTarget, init$, void, $String*)},
		{"targetPlatform", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(ModuleTarget, targetPlatform, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.module.ModuleTarget",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleTarget, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleTarget);
	});
	return class$;
}

$Class* ModuleTarget::class$ = nullptr;

		} // module
	} // internal
} // jdk