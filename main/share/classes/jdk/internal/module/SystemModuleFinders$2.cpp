#include <jdk/internal/module/SystemModuleFinders$2.h>
#include <java/net/URI.h>
#include <jdk/internal/module/SystemModuleFinders$SystemModuleReader.h>
#include <jdk/internal/module/SystemModuleFinders.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $SystemModuleFinders$SystemModuleReader = ::jdk::internal::module::SystemModuleFinders$SystemModuleReader;

namespace jdk {
	namespace internal {
		namespace module {

void SystemModuleFinders$2::init$($String* val$mn, $URI* val$uri) {
	$set(this, val$mn, val$mn);
	$set(this, val$uri, val$uri);
}

$Object* SystemModuleFinders$2::get() {
	return $new($SystemModuleFinders$SystemModuleReader, this->val$mn, this->val$uri);
}

SystemModuleFinders$2::SystemModuleFinders$2() {
}

$Class* SystemModuleFinders$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$uri", "Ljava/net/URI;", nullptr, $FINAL | $SYNTHETIC, $field(SystemModuleFinders$2, val$uri)},
		{"val$mn", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SystemModuleFinders$2, val$mn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/net/URI;)V", nullptr, 0, $method(SystemModuleFinders$2, init$, void, $String*, $URI*)},
		{"get", "()Ljava/lang/module/ModuleReader;", nullptr, $PUBLIC, $virtualMethod(SystemModuleFinders$2, get, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.module.SystemModuleFinders",
		"toModuleReference",
		"(Ljava/lang/module/ModuleDescriptor;Ljdk/internal/module/ModuleTarget;Ljdk/internal/module/ModuleHashes;Ljdk/internal/module/ModuleHashes$HashSupplier;Ljdk/internal/module/ModuleResolution;)Ljava/lang/module/ModuleReference;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.SystemModuleFinders$2", nullptr, nullptr, 0},
		{"jdk.internal.module.ModuleHashes$HashSupplier", "jdk.internal.module.ModuleHashes", "HashSupplier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.SystemModuleFinders$2",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Supplier<Ljava/lang/module/ModuleReader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.module.SystemModuleFinders"
	};
	$loadClass(SystemModuleFinders$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemModuleFinders$2);
	});
	return class$;
}

$Class* SystemModuleFinders$2::class$ = nullptr;

		} // module
	} // internal
} // jdk