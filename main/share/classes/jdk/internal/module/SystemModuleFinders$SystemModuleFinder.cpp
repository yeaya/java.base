#include <jdk/internal/module/SystemModuleFinders$SystemModuleFinder.h>
#include <java/lang/module/ModuleReference.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jdk/internal/module/SystemModuleFinders.h>
#include <jcpp.h>

using $ModuleReferenceArray = $Array<::java::lang::module::ModuleReference>;
using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;

namespace jdk {
	namespace internal {
		namespace module {

void SystemModuleFinders$SystemModuleFinder::init$($ModuleReferenceArray* array, $Map$EntryArray* map) {
	$set(this, mrefs, $Set::of(array));
	$set(this, nameToModule, $Map::ofEntries(map));
}

void SystemModuleFinders$SystemModuleFinder::init$($Set* mrefs, $Map* nameToModule) {
	$set(this, mrefs, $Set::copyOf(mrefs));
	$set(this, nameToModule, $Map::copyOf(nameToModule));
}

$Optional* SystemModuleFinders$SystemModuleFinder::find($String* name) {
	$Objects::requireNonNull(name);
	return $Optional::ofNullable($$cast($ModuleReference, $nc(this->nameToModule)->get(name)));
}

$Set* SystemModuleFinders$SystemModuleFinder::findAll() {
	return this->mrefs;
}

SystemModuleFinders$SystemModuleFinder::SystemModuleFinders$SystemModuleFinder() {
}

$Class* SystemModuleFinders$SystemModuleFinder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mrefs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $FINAL, $field(SystemModuleFinders$SystemModuleFinder, mrefs)},
		{"nameToModule", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/module/ModuleReference;>;", $FINAL, $field(SystemModuleFinders$SystemModuleFinder, nameToModule)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/module/ModuleReference;[Ljava/util/Map$Entry;)V", "([Ljava/lang/module/ModuleReference;[Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/module/ModuleReference;>;)V", 0, $method(SystemModuleFinders$SystemModuleFinder, init$, void, $ModuleReferenceArray*, $Map$EntryArray*)},
		{"<init>", "(Ljava/util/Set;Ljava/util/Map;)V", "(Ljava/util/Set<Ljava/lang/module/ModuleReference;>;Ljava/util/Map<Ljava/lang/String;Ljava/lang/module/ModuleReference;>;)V", 0, $method(SystemModuleFinders$SystemModuleFinder, init$, void, $Set*, $Map*)},
		{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(SystemModuleFinders$SystemModuleFinder, find, $Optional*, $String*)},
		{"findAll", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PUBLIC, $virtualMethod(SystemModuleFinders$SystemModuleFinder, findAll, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.SystemModuleFinders$SystemModuleFinder", "jdk.internal.module.SystemModuleFinders", "SystemModuleFinder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.SystemModuleFinders$SystemModuleFinder",
		"java.lang.Object",
		"java.lang.module.ModuleFinder",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.module.SystemModuleFinders"
	};
	$loadClass(SystemModuleFinders$SystemModuleFinder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemModuleFinders$SystemModuleFinder);
	});
	return class$;
}

$Class* SystemModuleFinders$SystemModuleFinder::class$ = nullptr;

		} // module
	} // internal
} // jdk