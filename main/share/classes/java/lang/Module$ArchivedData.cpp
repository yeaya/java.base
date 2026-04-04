#include <java/lang/Module$ArchivedData.h>
#include <java/lang/Module.h>
#include <java/util/Set.h>
#include <jdk/internal/misc/CDS.h>
#include <jcpp.h>

#undef ALL_UNNAMED_MODULE
#undef ALL_UNNAMED_MODULE_SET
#undef EVERYONE_MODULE
#undef EVERYONE_SET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $CDS = ::jdk::internal::misc::CDS;

namespace java {
	namespace lang {

Module$ArchivedData* Module$ArchivedData::archivedData = nullptr;

void Module$ArchivedData::init$() {
	$init($Module);
	$set(this, allUnnamedModule, $Module::ALL_UNNAMED_MODULE);
	$set(this, allUnnamedModules, $Module::ALL_UNNAMED_MODULE_SET);
	$set(this, everyoneModule, $Module::EVERYONE_MODULE);
	$set(this, everyoneSet, $Module::EVERYONE_SET);
}

void Module$ArchivedData::archive() {
	$init(Module$ArchivedData);
	$assignStatic(Module$ArchivedData::archivedData, $new(Module$ArchivedData));
}

Module$ArchivedData* Module$ArchivedData::get() {
	$init(Module$ArchivedData);
	return Module$ArchivedData::archivedData;
}

void Module$ArchivedData::clinit$($Class* clazz) {
	{
		$CDS::initializeFromArchive(Module$ArchivedData::class$);
	}
}

Module$ArchivedData::Module$ArchivedData() {
}

$Class* Module$ArchivedData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"archivedData", "Ljava/lang/Module$ArchivedData;", nullptr, $PRIVATE | $STATIC, $staticField(Module$ArchivedData, archivedData)},
		{"allUnnamedModule", "Ljava/lang/Module;", nullptr, $PRIVATE | $FINAL, $field(Module$ArchivedData, allUnnamedModule)},
		{"allUnnamedModules", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Module;>;", $PRIVATE | $FINAL, $field(Module$ArchivedData, allUnnamedModules)},
		{"everyoneModule", "Ljava/lang/Module;", nullptr, $PRIVATE | $FINAL, $field(Module$ArchivedData, everyoneModule)},
		{"everyoneSet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Module;>;", $PRIVATE | $FINAL, $field(Module$ArchivedData, everyoneSet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Module$ArchivedData, init$, void)},
		{"archive", "()V", nullptr, $STATIC, $staticMethod(Module$ArchivedData, archive, void)},
		{"get", "()Ljava/lang/Module$ArchivedData;", nullptr, $STATIC, $staticMethod(Module$ArchivedData, get, Module$ArchivedData*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Module$ArchivedData", "java.lang.Module", "ArchivedData", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Module$ArchivedData",
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
	$loadClass(Module$ArchivedData, name, initialize, &classInfo$$, Module$ArchivedData::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Module$ArchivedData);
	});
	return class$;
}

$Class* Module$ArchivedData::class$ = nullptr;

	} // lang
} // java