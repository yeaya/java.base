#include <java/lang/module/ModuleFinder$1.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {
		namespace module {

void ModuleFinder$1::init$() {
}

$Optional* ModuleFinder$1::find($String* name) {
	$Objects::requireNonNull(name);
	return $Optional::empty();
}

$Set* ModuleFinder$1::findAll() {
	return $Set::of();
}

ModuleFinder$1::ModuleFinder$1() {
}

$Class* ModuleFinder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ModuleFinder$1, init$, void)},
		{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(ModuleFinder$1, find, $Optional*, $String*)},
		{"findAll", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(ModuleFinder$1, findAll, $Set*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.module.ModuleFinder",
		"of",
		"([Ljava/nio/file/Path;)Ljava/lang/module/ModuleFinder;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.module.ModuleFinder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.module.ModuleFinder$1",
		"java.lang.Object",
		"java.lang.module.ModuleFinder",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.module.ModuleFinder"
	};
	$loadClass(ModuleFinder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleFinder$1);
	});
	return class$;
}

$Class* ModuleFinder$1::class$ = nullptr;

		} // module
	} // lang
} // java