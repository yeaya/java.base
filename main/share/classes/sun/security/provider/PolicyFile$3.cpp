#include <sun/security/provider/PolicyFile$3.h>

#include <java/net/URL.h>
#include <sun/security/provider/PolicyFile$PolicyInfo.h>
#include <sun/security/provider/PolicyFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $PolicyFile = ::sun::security::provider::PolicyFile;
using $PolicyFile$PolicyInfo = ::sun::security::provider::PolicyFile$PolicyInfo;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _PolicyFile$3_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/PolicyFile;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$3, this$0)},
	{"val$newInfo", "Lsun/security/provider/PolicyFile$PolicyInfo;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$3, val$newInfo)},
	{"val$url", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$3, val$url)},
	{}
};

$MethodInfo _PolicyFile$3_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/PolicyFile;Ljava/net/URL;Lsun/security/provider/PolicyFile$PolicyInfo;)V", nullptr, 0, $method(PolicyFile$3, init$, void, $PolicyFile*, $URL*, $PolicyFile$PolicyInfo*)},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(PolicyFile$3, run, $Object*)},
	{}
};

$EnclosingMethodInfo _PolicyFile$3_EnclosingMethodInfo_ = {
	"sun.security.provider.PolicyFile",
	"initPolicyFile",
	"(Lsun/security/provider/PolicyFile$PolicyInfo;Ljava/net/URL;)V"
};

$InnerClassInfo _PolicyFile$3_InnerClassesInfo_[] = {
	{"sun.security.provider.PolicyFile$3", nullptr, nullptr, 0},
	{"sun.security.provider.PolicyFile$PolicyInfo", "sun.security.provider.PolicyFile", "PolicyInfo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PolicyFile$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.PolicyFile$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PolicyFile$3_FieldInfo_,
	_PolicyFile$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_PolicyFile$3_EnclosingMethodInfo_,
	_PolicyFile$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.PolicyFile"
};

$Object* allocate$PolicyFile$3($Class* clazz) {
	return $of($alloc(PolicyFile$3));
}

void PolicyFile$3::init$($PolicyFile* this$0, $URL* val$url, $PolicyFile$PolicyInfo* val$newInfo) {
	$set(this, this$0, this$0);
	$set(this, val$url, val$url);
	$set(this, val$newInfo, val$newInfo);
}

$Object* PolicyFile$3::run() {
	if (this->this$0->init(this->val$url, this->val$newInfo) == false) {
		this->this$0->initStaticPolicy(this->val$newInfo);
	}
	return $of(nullptr);
}

PolicyFile$3::PolicyFile$3() {
}

$Class* PolicyFile$3::load$($String* name, bool initialize) {
	$loadClass(PolicyFile$3, name, initialize, &_PolicyFile$3_ClassInfo_, allocate$PolicyFile$3);
	return class$;
}

$Class* PolicyFile$3::class$ = nullptr;

		} // provider
	} // security
} // sun