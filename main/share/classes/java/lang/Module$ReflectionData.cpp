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

$FieldInfo _Module$ReflectionData_FieldInfo_[] = {
	{"reads", "Ljava/lang/WeakPairMap;", "Ljava/lang/WeakPairMap<Ljava/lang/Module;Ljava/lang/Module;Ljava/lang/Boolean;>;", $STATIC | $FINAL, $staticField(Module$ReflectionData, reads)},
	{"exports", "Ljava/lang/WeakPairMap;", "Ljava/lang/WeakPairMap<Ljava/lang/Module;Ljava/lang/Module;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;>;", $STATIC | $FINAL, $staticField(Module$ReflectionData, exports)},
	{"uses", "Ljava/lang/WeakPairMap;", "Ljava/lang/WeakPairMap<Ljava/lang/Module;Ljava/lang/Class<*>;Ljava/lang/Boolean;>;", $STATIC | $FINAL, $staticField(Module$ReflectionData, uses)},
	{}
};

$MethodInfo _Module$ReflectionData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Module$ReflectionData, init$, void)},
	{}
};

$InnerClassInfo _Module$ReflectionData_InnerClassesInfo_[] = {
	{"java.lang.Module$ReflectionData", "java.lang.Module", "ReflectionData", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Module$ReflectionData_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Module$ReflectionData",
	"java.lang.Object",
	nullptr,
	_Module$ReflectionData_FieldInfo_,
	_Module$ReflectionData_MethodInfo_,
	nullptr,
	nullptr,
	_Module$ReflectionData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Module"
};

$Object* allocate$Module$ReflectionData($Class* clazz) {
	return $of($alloc(Module$ReflectionData));
}

$WeakPairMap* Module$ReflectionData::reads = nullptr;
$WeakPairMap* Module$ReflectionData::exports = nullptr;
$WeakPairMap* Module$ReflectionData::uses = nullptr;

void Module$ReflectionData::init$() {
}

void clinit$Module$ReflectionData($Class* class$) {
	$assignStatic(Module$ReflectionData::reads, $new($WeakPairMap));
	$assignStatic(Module$ReflectionData::exports, $new($WeakPairMap));
	$assignStatic(Module$ReflectionData::uses, $new($WeakPairMap));
}

Module$ReflectionData::Module$ReflectionData() {
}

$Class* Module$ReflectionData::load$($String* name, bool initialize) {
	$loadClass(Module$ReflectionData, name, initialize, &_Module$ReflectionData_ClassInfo_, clinit$Module$ReflectionData, allocate$Module$ReflectionData);
	return class$;
}

$Class* Module$ReflectionData::class$ = nullptr;

	} // lang
} // java