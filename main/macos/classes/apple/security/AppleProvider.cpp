#include <apple/security/AppleProvider.h>

#include <apple/security/AppleProvider$1.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace apple {
	namespace security {

$FieldInfo _AppleProvider_FieldInfo_[] = {
	{"info", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AppleProvider, info)},
	{}
};

$MethodInfo _AppleProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AppleProvider::*)()>(&AppleProvider::init$))},
	{"access$000", "(Lapple/security/AppleProvider;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(AppleProvider*,$Provider$Service*)>(&AppleProvider::access$000))},
	{}
};

$InnerClassInfo _AppleProvider_InnerClassesInfo_[] = {
	{"apple.security.AppleProvider$ProviderService", "apple.security.AppleProvider", "ProviderService", $PRIVATE | $STATIC | $FINAL},
	{"apple.security.AppleProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AppleProvider_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"apple.security.AppleProvider",
	"java.security.Provider",
	nullptr,
	_AppleProvider_FieldInfo_,
	_AppleProvider_MethodInfo_,
	nullptr,
	nullptr,
	_AppleProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"apple.security.AppleProvider$ProviderService,apple.security.AppleProvider$1"
};

$Object* allocate$AppleProvider($Class* clazz) {
	return $of($alloc(AppleProvider));
}

$String* AppleProvider::info = nullptr;

void AppleProvider::access$000(AppleProvider* x0, $Provider$Service* x1) {
	$init(AppleProvider);
	$nc(x0)->putService(x1);
}

void AppleProvider::init$() {
	$beforeCallerSensitive();
	$init($SecurityConstants);
	$Provider::init$("Apple"_s, $SecurityConstants::PROVIDER_VER, AppleProvider::info);
	$var($Provider, p, this);
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AppleProvider$1, this, p)));
}

AppleProvider::AppleProvider() {
}

void clinit$AppleProvider($Class* class$) {
	$assignStatic(AppleProvider::info, "Apple Provider"_s);
}

$Class* AppleProvider::load$($String* name, bool initialize) {
	$loadClass(AppleProvider, name, initialize, &_AppleProvider_ClassInfo_, clinit$AppleProvider, allocate$AppleProvider);
	return class$;
}

$Class* AppleProvider::class$ = nullptr;

	} // security
} // apple