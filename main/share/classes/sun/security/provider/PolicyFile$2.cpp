#include <sun/security/provider/PolicyFile$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/provider/PolicyFile$PolicyInfo.h>
#include <sun/security/provider/PolicyFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PolicyFile = ::sun::security::provider::PolicyFile;
using $PolicyFile$PolicyInfo = ::sun::security::provider::PolicyFile$PolicyInfo;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _PolicyFile$2_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/PolicyFile;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$2, this$0)},
	{"val$newInfo", "Lsun/security/provider/PolicyFile$PolicyInfo;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$2, val$newInfo)},
	{}
};

$MethodInfo _PolicyFile$2_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/PolicyFile;Lsun/security/provider/PolicyFile$PolicyInfo;)V", nullptr, 0, $method(static_cast<void(PolicyFile$2::*)($PolicyFile*,$PolicyFile$PolicyInfo*)>(&PolicyFile$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PolicyFile$2_EnclosingMethodInfo_ = {
	"sun.security.provider.PolicyFile",
	"initPolicyFile",
	"(Lsun/security/provider/PolicyFile$PolicyInfo;Ljava/net/URL;)V"
};

$InnerClassInfo _PolicyFile$2_InnerClassesInfo_[] = {
	{"sun.security.provider.PolicyFile$2", nullptr, nullptr, 0},
	{"sun.security.provider.PolicyFile$PolicyInfo", "sun.security.provider.PolicyFile", "PolicyInfo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PolicyFile$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.PolicyFile$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PolicyFile$2_FieldInfo_,
	_PolicyFile$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_PolicyFile$2_EnclosingMethodInfo_,
	_PolicyFile$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.PolicyFile"
};

$Object* allocate$PolicyFile$2($Class* clazz) {
	return $of($alloc(PolicyFile$2));
}

void PolicyFile$2::init$($PolicyFile* this$0, $PolicyFile$PolicyInfo* val$newInfo) {
	$set(this, this$0, this$0);
	$set(this, val$newInfo, val$newInfo);
}

$Object* PolicyFile$2::run() {
	this->this$0->initDefaultPolicy(this->val$newInfo);
	return $of(nullptr);
}

PolicyFile$2::PolicyFile$2() {
}

$Class* PolicyFile$2::load$($String* name, bool initialize) {
	$loadClass(PolicyFile$2, name, initialize, &_PolicyFile$2_ClassInfo_, allocate$PolicyFile$2);
	return class$;
}

$Class* PolicyFile$2::class$ = nullptr;

		} // provider
	} // security
} // sun