#include <java/security/Policy$PolicyInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Policy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Policy = ::java::security::Policy;

namespace java {
	namespace security {

$FieldInfo _Policy$PolicyInfo_FieldInfo_[] = {
	{"policy", "Ljava/security/Policy;", nullptr, $FINAL, $field(Policy$PolicyInfo, policy)},
	{"initialized", "Z", nullptr, $FINAL, $field(Policy$PolicyInfo, initialized)},
	{}
};

$MethodInfo _Policy$PolicyInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/security/Policy;Z)V", nullptr, 0, $method(static_cast<void(Policy$PolicyInfo::*)($Policy*,bool)>(&Policy$PolicyInfo::init$))},
	{}
};

$InnerClassInfo _Policy$PolicyInfo_InnerClassesInfo_[] = {
	{"java.security.Policy$PolicyInfo", "java.security.Policy", "PolicyInfo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Policy$PolicyInfo_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.Policy$PolicyInfo",
	"java.lang.Object",
	nullptr,
	_Policy$PolicyInfo_FieldInfo_,
	_Policy$PolicyInfo_MethodInfo_,
	nullptr,
	nullptr,
	_Policy$PolicyInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.Policy"
};

$Object* allocate$Policy$PolicyInfo($Class* clazz) {
	return $of($alloc(Policy$PolicyInfo));
}

void Policy$PolicyInfo::init$($Policy* policy, bool initialized) {
	$set(this, policy, policy);
	this->initialized = initialized;
}

Policy$PolicyInfo::Policy$PolicyInfo() {
}

$Class* Policy$PolicyInfo::load$($String* name, bool initialize) {
	$loadClass(Policy$PolicyInfo, name, initialize, &_Policy$PolicyInfo_ClassInfo_, allocate$Policy$PolicyInfo);
	return class$;
}

$Class* Policy$PolicyInfo::class$ = nullptr;

	} // security
} // java