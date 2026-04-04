#include <apple/security/AppleProvider$1.h>
#include <apple/security/AppleProvider$ProviderService.h>
#include <apple/security/AppleProvider.h>
#include <java/security/Provider.h>
#include <jcpp.h>

using $AppleProvider = ::apple::security::AppleProvider;
using $AppleProvider$ProviderService = ::apple::security::AppleProvider$ProviderService;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;

namespace apple {
	namespace security {

void AppleProvider$1::init$($AppleProvider* this$0, $Provider* val$p) {
	$set(this, this$0, this$0);
	$set(this, val$p, val$p);
}

$Object* AppleProvider$1::run() {
	$AppleProvider::access$000(this->this$0, $$new($AppleProvider$ProviderService, this->val$p, "KeyStore"_s, "KeychainStore"_s, "apple.security.KeychainStore"_s));
	return nullptr;
}

AppleProvider$1::AppleProvider$1() {
}

$Class* AppleProvider$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lapple/security/AppleProvider;", nullptr, $FINAL | $SYNTHETIC, $field(AppleProvider$1, this$0)},
		{"val$p", "Ljava/security/Provider;", nullptr, $FINAL | $SYNTHETIC, $field(AppleProvider$1, val$p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lapple/security/AppleProvider;Ljava/security/Provider;)V", "()V", 0, $method(AppleProvider$1, init$, void, $AppleProvider*, $Provider*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(AppleProvider$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"apple.security.AppleProvider",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.security.AppleProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"apple.security.AppleProvider$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"apple.security.AppleProvider"
	};
	$loadClass(AppleProvider$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppleProvider$1);
	});
	return class$;
}

$Class* AppleProvider$1::class$ = nullptr;

	} // security
} // apple