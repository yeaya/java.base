#include <apple/security/AppleProvider.h>
#include <apple/security/AppleProvider$1.h>
#include <java/security/AccessController.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef PROVIDER_VER

using $AppleProvider$1 = ::apple::security::AppleProvider$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace apple {
	namespace security {

$String* AppleProvider::info = nullptr;

void AppleProvider::access$000(AppleProvider* x0, $Provider$Service* x1) {
	$init(AppleProvider);
	$nc(x0)->putService(x1);
}

void AppleProvider::init$() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$init($SecurityConstants);
	$Provider::init$("Apple"_s, $SecurityConstants::PROVIDER_VER, AppleProvider::info);
	$var($Provider, p, this);
	$AccessController::doPrivileged($$new($AppleProvider$1, this, p));
}

AppleProvider::AppleProvider() {
}

void AppleProvider::clinit$($Class* clazz) {
	$assignStatic(AppleProvider::info, "Apple Provider"_s);
}

$Class* AppleProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"info", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AppleProvider, info)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AppleProvider, init$, void)},
		{"access$000", "(Lapple/security/AppleProvider;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $staticMethod(AppleProvider, access$000, void, AppleProvider*, $Provider$Service*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.security.AppleProvider$ProviderService", "apple.security.AppleProvider", "ProviderService", $PRIVATE | $STATIC | $FINAL},
		{"apple.security.AppleProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"apple.security.AppleProvider",
		"java.security.Provider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"apple.security.AppleProvider$ProviderService,apple.security.AppleProvider$1"
	};
	$loadClass(AppleProvider, name, initialize, &classInfo$$, AppleProvider::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AppleProvider));
	});
	return class$;
}

$Class* AppleProvider::class$ = nullptr;

	} // security
} // apple