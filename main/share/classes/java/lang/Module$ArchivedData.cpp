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

$FieldInfo _Module$ArchivedData_FieldInfo_[] = {
	{"archivedData", "Ljava/lang/Module$ArchivedData;", nullptr, $PRIVATE | $STATIC, $staticField(Module$ArchivedData, archivedData)},
	{"allUnnamedModule", "Ljava/lang/Module;", nullptr, $PRIVATE | $FINAL, $field(Module$ArchivedData, allUnnamedModule)},
	{"allUnnamedModules", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Module;>;", $PRIVATE | $FINAL, $field(Module$ArchivedData, allUnnamedModules)},
	{"everyoneModule", "Ljava/lang/Module;", nullptr, $PRIVATE | $FINAL, $field(Module$ArchivedData, everyoneModule)},
	{"everyoneSet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Module;>;", $PRIVATE | $FINAL, $field(Module$ArchivedData, everyoneSet)},
	{}
};

$MethodInfo _Module$ArchivedData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Module$ArchivedData::*)()>(&Module$ArchivedData::init$))},
	{"archive", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Module$ArchivedData::archive))},
	{"get", "()Ljava/lang/Module$ArchivedData;", nullptr, $STATIC, $method(static_cast<Module$ArchivedData*(*)()>(&Module$ArchivedData::get))},
	{}
};

$InnerClassInfo _Module$ArchivedData_InnerClassesInfo_[] = {
	{"java.lang.Module$ArchivedData", "java.lang.Module", "ArchivedData", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Module$ArchivedData_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Module$ArchivedData",
	"java.lang.Object",
	nullptr,
	_Module$ArchivedData_FieldInfo_,
	_Module$ArchivedData_MethodInfo_,
	nullptr,
	nullptr,
	_Module$ArchivedData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Module"
};

$Object* allocate$Module$ArchivedData($Class* clazz) {
	return $of($alloc(Module$ArchivedData));
}

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

void clinit$Module$ArchivedData($Class* class$) {
	{
		$CDS::initializeFromArchive(Module$ArchivedData::class$);
	}
}

Module$ArchivedData::Module$ArchivedData() {
}

$Class* Module$ArchivedData::load$($String* name, bool initialize) {
	$loadClass(Module$ArchivedData, name, initialize, &_Module$ArchivedData_ClassInfo_, clinit$Module$ArchivedData, allocate$Module$ArchivedData);
	return class$;
}

$Class* Module$ArchivedData::class$ = nullptr;

	} // lang
} // java