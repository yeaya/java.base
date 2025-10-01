#include <jdk/internal/platform/CgroupInfo.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace platform {

$FieldInfo _CgroupInfo_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CgroupInfo, name)},
	{"hierarchyId", "I", nullptr, $PRIVATE | $FINAL, $field(CgroupInfo, hierarchyId)},
	{"enabled", "Z", nullptr, $PRIVATE | $FINAL, $field(CgroupInfo, enabled)},
	{"mountPoint", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CgroupInfo, mountPoint)},
	{"mountRoot", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CgroupInfo, mountRoot)},
	{"cgroupPath", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CgroupInfo, cgroupPath)},
	{}
};

$MethodInfo _CgroupInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;IZ)V", nullptr, $PRIVATE, $method(static_cast<void(CgroupInfo::*)($String*,int32_t,bool)>(&CgroupInfo::init$))},
	{"fromCgroupsLine", "(Ljava/lang/String;)Ljdk/internal/platform/CgroupInfo;", nullptr, $STATIC, $method(static_cast<CgroupInfo*(*)($String*)>(&CgroupInfo::fromCgroupsLine))},
	{"getCgroupPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHierarchyId", "()I", nullptr, $PUBLIC},
	{"getMountPoint", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMountRoot", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{"setCgroupPath", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setMountPoint", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setMountRoot", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CgroupInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.platform.CgroupInfo",
	"java.lang.Object",
	nullptr,
	_CgroupInfo_FieldInfo_,
	_CgroupInfo_MethodInfo_
};

$Object* allocate$CgroupInfo($Class* clazz) {
	return $of($alloc(CgroupInfo));
}

void CgroupInfo::init$($String* name, int32_t hierarchyId, bool enabled) {
	$set(this, name, name);
	this->hierarchyId = hierarchyId;
	this->enabled = enabled;
}

$String* CgroupInfo::getName() {
	return this->name;
}

int32_t CgroupInfo::getHierarchyId() {
	return this->hierarchyId;
}

bool CgroupInfo::isEnabled() {
	return this->enabled;
}

$String* CgroupInfo::getMountPoint() {
	return this->mountPoint;
}

void CgroupInfo::setMountPoint($String* mountPoint) {
	$set(this, mountPoint, mountPoint);
}

$String* CgroupInfo::getMountRoot() {
	return this->mountRoot;
}

void CgroupInfo::setMountRoot($String* mountRoot) {
	$set(this, mountRoot, mountRoot);
}

$String* CgroupInfo::getCgroupPath() {
	return this->cgroupPath;
}

void CgroupInfo::setCgroupPath($String* cgroupPath) {
	$set(this, cgroupPath, cgroupPath);
}

CgroupInfo* CgroupInfo::fromCgroupsLine($String* line) {
	$var($StringArray, tokens, $nc(line)->split("\\s+"_s));
	if (tokens->length != 4) {
		return nullptr;
	}
	$var($String, var$0, tokens->get(0));
	int32_t var$1 = $Integer::parseInt(tokens->get(1));
	return $new(CgroupInfo, var$0, var$1, ($Integer::parseInt(tokens->get(3)) == 1));
}

CgroupInfo::CgroupInfo() {
}

$Class* CgroupInfo::load$($String* name, bool initialize) {
	$loadClass(CgroupInfo, name, initialize, &_CgroupInfo_ClassInfo_, allocate$CgroupInfo);
	return class$;
}

$Class* CgroupInfo::class$ = nullptr;

		} // platform
	} // internal
} // jdk