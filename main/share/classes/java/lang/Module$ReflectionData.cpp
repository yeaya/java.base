#include <java/lang/Module$ReflectionData.h>
#include <java/lang/Module.h>
#include <java/lang/WeakPairMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakPairMap = ::java::lang::WeakPairMap;

namespace java {
	namespace lang {

$WeakPairMap* Module$ReflectionData::reads = nullptr;
$WeakPairMap* Module$ReflectionData::exports = nullptr;
$WeakPairMap* Module$ReflectionData::uses = nullptr;

void Module$ReflectionData::init$() {
}

void Module$ReflectionData::clinit$($Class* clazz) {
	$assignStatic(Module$ReflectionData::reads, $new($WeakPairMap));
	$assignStatic(Module$ReflectionData::exports, $new($WeakPairMap));
	$assignStatic(Module$ReflectionData::uses, $new($WeakPairMap));
}

Module$ReflectionData::Module$ReflectionData() {
}

$Class* Module$ReflectionData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"reads", "Ljava/lang/WeakPairMap;", "Ljava/lang/WeakPairMap<Ljava/lang/Module;Ljava/lang/Module;Ljava/lang/Boolean;>;", $STATIC | $FINAL, $staticField(Module$ReflectionData, reads)},
		{"exports", "Ljava/lang/WeakPairMap;", "Ljava/lang/WeakPairMap<Ljava/lang/Module;Ljava/lang/Module;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;>;", $STATIC | $FINAL, $staticField(Module$ReflectionData, exports)},
		{"uses", "Ljava/lang/WeakPairMap;", "Ljava/lang/WeakPairMap<Ljava/lang/Module;Ljava/lang/Class<*>;Ljava/lang/Boolean;>;", $STATIC | $FINAL, $staticField(Module$ReflectionData, uses)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Module$ReflectionData, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Module$ReflectionData", "java.lang.Module", "ReflectionData", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Module$ReflectionData",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Module"
	};
	$loadClass(Module$ReflectionData, name, initialize, &classInfo$$, Module$ReflectionData::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Module$ReflectionData);
	});
	return class$;
}

$Class* Module$ReflectionData::class$ = nullptr;

	} // lang
} // java