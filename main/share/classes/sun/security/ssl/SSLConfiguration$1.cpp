#include <sun/security/ssl/SSLConfiguration$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/ClientAuthType.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <jcpp.h>

#undef CLIENT_AUTH_REQUESTED
#undef CLIENT_AUTH_REQUIRED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ClientAuthType = ::sun::security::ssl::ClientAuthType;

namespace sun {
	namespace security {
		namespace ssl {

$ints* SSLConfiguration$1::$SwitchMap$sun$security$ssl$ClientAuthType = nullptr;

void SSLConfiguration$1::clinit$($Class* clazz) {
	$assignStatic(SSLConfiguration$1::$SwitchMap$sun$security$ssl$ClientAuthType, $new($ints, $($ClientAuthType::values())->length));
	{
		try {
			SSLConfiguration$1::$SwitchMap$sun$security$ssl$ClientAuthType->set($ClientAuthType::CLIENT_AUTH_REQUIRED->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLConfiguration$1::$SwitchMap$sun$security$ssl$ClientAuthType->set($ClientAuthType::CLIENT_AUTH_REQUESTED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SSLConfiguration$1::SSLConfiguration$1() {
}

$Class* SSLConfiguration$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$ssl$ClientAuthType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLConfiguration$1, $SwitchMap$sun$security$ssl$ClientAuthType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.SSLConfiguration",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLConfiguration$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.ssl.SSLConfiguration$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLConfiguration"
	};
	$loadClass(SSLConfiguration$1, name, initialize, &classInfo$$, SSLConfiguration$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLConfiguration$1);
	});
	return class$;
}

$Class* SSLConfiguration$1::class$ = nullptr;

		} // ssl
	} // security
} // sun