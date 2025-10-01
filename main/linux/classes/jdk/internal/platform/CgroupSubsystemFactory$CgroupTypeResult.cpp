#include <jdk/internal/platform/CgroupSubsystemFactory$CgroupTypeResult.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <jdk/internal/platform/CgroupSubsystemFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $CgroupSubsystemFactory = ::jdk::internal::platform::CgroupSubsystemFactory;

namespace jdk {
	namespace internal {
		namespace platform {

$FieldInfo _CgroupSubsystemFactory$CgroupTypeResult_FieldInfo_[] = {
	{"isCgroupV2", "Z", nullptr, $PRIVATE | $FINAL, $field(CgroupSubsystemFactory$CgroupTypeResult, isCgroupV2$)},
	{"anyControllersEnabled", "Z", nullptr, $PRIVATE | $FINAL, $field(CgroupSubsystemFactory$CgroupTypeResult, anyControllersEnabled)},
	{"anyCgroupV2Controllers", "Z", nullptr, $PRIVATE | $FINAL, $field(CgroupSubsystemFactory$CgroupTypeResult, anyCgroupV2Controllers)},
	{"anyCgroupV1Controllers", "Z", nullptr, $PRIVATE | $FINAL, $field(CgroupSubsystemFactory$CgroupTypeResult, anyCgroupV1Controllers)},
	{"infos", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljdk/internal/platform/CgroupInfo;>;", $PRIVATE | $FINAL, $field(CgroupSubsystemFactory$CgroupTypeResult, infos)},
	{}
};

$MethodInfo _CgroupSubsystemFactory$CgroupTypeResult_MethodInfo_[] = {
	{"<init>", "(ZZZZLjava/util/Map;)V", "(ZZZZLjava/util/Map<Ljava/lang/String;Ljdk/internal/platform/CgroupInfo;>;)V", $PRIVATE, $method(static_cast<void(CgroupSubsystemFactory$CgroupTypeResult::*)(bool,bool,bool,bool,$Map*)>(&CgroupSubsystemFactory$CgroupTypeResult::init$))},
	{"getInfos", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljdk/internal/platform/CgroupInfo;>;", $PUBLIC, $method(static_cast<$Map*(CgroupSubsystemFactory$CgroupTypeResult::*)()>(&CgroupSubsystemFactory$CgroupTypeResult::getInfos))},
	{"isAnyCgroupV1Controllers", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(CgroupSubsystemFactory$CgroupTypeResult::*)()>(&CgroupSubsystemFactory$CgroupTypeResult::isAnyCgroupV1Controllers))},
	{"isAnyCgroupV2Controllers", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(CgroupSubsystemFactory$CgroupTypeResult::*)()>(&CgroupSubsystemFactory$CgroupTypeResult::isAnyCgroupV2Controllers))},
	{"isAnyControllersEnabled", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(CgroupSubsystemFactory$CgroupTypeResult::*)()>(&CgroupSubsystemFactory$CgroupTypeResult::isAnyControllersEnabled))},
	{"isCgroupV2", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(CgroupSubsystemFactory$CgroupTypeResult::*)()>(&CgroupSubsystemFactory$CgroupTypeResult::isCgroupV2))},
	{}
};

$InnerClassInfo _CgroupSubsystemFactory$CgroupTypeResult_InnerClassesInfo_[] = {
	{"jdk.internal.platform.CgroupSubsystemFactory$CgroupTypeResult", "jdk.internal.platform.CgroupSubsystemFactory", "CgroupTypeResult", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _CgroupSubsystemFactory$CgroupTypeResult_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.platform.CgroupSubsystemFactory$CgroupTypeResult",
	"java.lang.Object",
	nullptr,
	_CgroupSubsystemFactory$CgroupTypeResult_FieldInfo_,
	_CgroupSubsystemFactory$CgroupTypeResult_MethodInfo_,
	nullptr,
	nullptr,
	_CgroupSubsystemFactory$CgroupTypeResult_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.platform.CgroupSubsystemFactory"
};

$Object* allocate$CgroupSubsystemFactory$CgroupTypeResult($Class* clazz) {
	return $of($alloc(CgroupSubsystemFactory$CgroupTypeResult));
}

void CgroupSubsystemFactory$CgroupTypeResult::init$(bool isCgroupV2, bool anyControllersEnabled, bool anyCgroupV2Controllers, bool anyCgroupV1Controllers, $Map* infos) {
	this->isCgroupV2$ = isCgroupV2;
	this->anyControllersEnabled = anyControllersEnabled;
	this->anyCgroupV1Controllers = anyCgroupV1Controllers;
	this->anyCgroupV2Controllers = anyCgroupV2Controllers;
	$set(this, infos, infos);
}

bool CgroupSubsystemFactory$CgroupTypeResult::isCgroupV2() {
	return this->isCgroupV2$;
}

bool CgroupSubsystemFactory$CgroupTypeResult::isAnyControllersEnabled() {
	return this->anyControllersEnabled;
}

bool CgroupSubsystemFactory$CgroupTypeResult::isAnyCgroupV2Controllers() {
	return this->anyCgroupV2Controllers;
}

bool CgroupSubsystemFactory$CgroupTypeResult::isAnyCgroupV1Controllers() {
	return this->anyCgroupV1Controllers;
}

$Map* CgroupSubsystemFactory$CgroupTypeResult::getInfos() {
	return this->infos;
}

CgroupSubsystemFactory$CgroupTypeResult::CgroupSubsystemFactory$CgroupTypeResult() {
}

$Class* CgroupSubsystemFactory$CgroupTypeResult::load$($String* name, bool initialize) {
	$loadClass(CgroupSubsystemFactory$CgroupTypeResult, name, initialize, &_CgroupSubsystemFactory$CgroupTypeResult_ClassInfo_, allocate$CgroupSubsystemFactory$CgroupTypeResult);
	return class$;
}

$Class* CgroupSubsystemFactory$CgroupTypeResult::class$ = nullptr;

		} // platform
	} // internal
} // jdk