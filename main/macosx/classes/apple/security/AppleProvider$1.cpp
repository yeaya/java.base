#include <apple/security/AppleProvider$1.h>

#include <apple/security/AppleProvider$ProviderService.h>
#include <apple/security/AppleProvider.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <jcpp.h>

using $AppleProvider = ::apple::security::AppleProvider;
using $AppleProvider$ProviderService = ::apple::security::AppleProvider$ProviderService;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;

namespace apple {
	namespace security {

$FieldInfo _AppleProvider$1_FieldInfo_[] = {
	{"this$0", "Lapple/security/AppleProvider;", nullptr, $FINAL | $SYNTHETIC, $field(AppleProvider$1, this$0)},
	{"val$p", "Ljava/security/Provider;", nullptr, $FINAL | $SYNTHETIC, $field(AppleProvider$1, val$p)},
	{}
};

$MethodInfo _AppleProvider$1_MethodInfo_[] = {
	{"<init>", "(Lapple/security/AppleProvider;Ljava/security/Provider;)V", "()V", 0, $method(static_cast<void(AppleProvider$1::*)($AppleProvider*,$Provider*)>(&AppleProvider$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AppleProvider$1_EnclosingMethodInfo_ = {
	"apple.security.AppleProvider",
	"<init>",
	"()V"
};

$InnerClassInfo _AppleProvider$1_InnerClassesInfo_[] = {
	{"apple.security.AppleProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AppleProvider$1_ClassInfo_ = {
	$ACC_SUPER,
	"apple.security.AppleProvider$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AppleProvider$1_FieldInfo_,
	_AppleProvider$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_AppleProvider$1_EnclosingMethodInfo_,
	_AppleProvider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.security.AppleProvider"
};

$Object* allocate$AppleProvider$1($Class* clazz) {
	return $of($alloc(AppleProvider$1));
}

void AppleProvider$1::init$($AppleProvider* this$0, $Provider* val$p) {
	$set(this, this$0, this$0);
	$set(this, val$p, val$p);
}

$Object* AppleProvider$1::run() {
	$AppleProvider::access$000(this->this$0, $$new($AppleProvider$ProviderService, this->val$p, "KeyStore"_s, "KeychainStore"_s, "apple.security.KeychainStore"_s));
	return $of(nullptr);
}

AppleProvider$1::AppleProvider$1() {
}

$Class* AppleProvider$1::load$($String* name, bool initialize) {
	$loadClass(AppleProvider$1, name, initialize, &_AppleProvider$1_ClassInfo_, allocate$AppleProvider$1);
	return class$;
}

$Class* AppleProvider$1::class$ = nullptr;

	} // security
} // apple