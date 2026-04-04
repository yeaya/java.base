#include <jdk/internal/module/ModuleBootstrap$1.h>
#include <java/lang/module/ModuleReference.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jdk/internal/module/ModuleBootstrap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;

namespace jdk {
	namespace internal {
		namespace module {

void ModuleBootstrap$1::init$($Map* val$map, $Set* val$mrefs) {
	$set(this, val$map, val$map);
	$set(this, val$mrefs, val$mrefs);
}

$Optional* ModuleBootstrap$1::find($String* name) {
	return $Optional::ofNullable($$cast($ModuleReference, $nc(this->val$map)->get(name)));
}

$Set* ModuleBootstrap$1::findAll() {
	return this->val$mrefs;
}

ModuleBootstrap$1::ModuleBootstrap$1() {
}

$Class* ModuleBootstrap$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$mrefs", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(ModuleBootstrap$1, val$mrefs)},
		{"val$map", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(ModuleBootstrap$1, val$map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/util/Set;)V", "()V", 0, $method(ModuleBootstrap$1, init$, void, $Map*, $Set*)},
		{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(ModuleBootstrap$1, find, $Optional*, $String*)},
		{"findAll", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(ModuleBootstrap$1, findAll, $Set*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.module.ModuleBootstrap",
		"limitFinder",
		"(Ljava/lang/module/ModuleFinder;Ljava/util/Set;Ljava/util/Set;)Ljava/lang/module/ModuleFinder;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleBootstrap$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.ModuleBootstrap$1",
		"java.lang.Object",
		"java.lang.module.ModuleFinder",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.module.ModuleBootstrap"
	};
	$loadClass(ModuleBootstrap$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleBootstrap$1);
	});
	return class$;
}

$Class* ModuleBootstrap$1::class$ = nullptr;

		} // module
	} // internal
} // jdk