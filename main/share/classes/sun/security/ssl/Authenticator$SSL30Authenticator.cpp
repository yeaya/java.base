#include <sun/security/ssl/Authenticator$SSL30Authenticator.h>
#include <sun/security/ssl/Authenticator$SSLAuthenticator.h>
#include <sun/security/ssl/Authenticator.h>
#include <jcpp.h>

#undef BLOCK_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator$SSLAuthenticator = ::sun::security::ssl::Authenticator$SSLAuthenticator;

namespace sun {
	namespace security {
		namespace ssl {

void Authenticator$SSL30Authenticator::init$() {
	$Authenticator$SSLAuthenticator::init$($$new($bytes, Authenticator$SSL30Authenticator::BLOCK_SIZE));
}

$bytes* Authenticator$SSL30Authenticator::acquireAuthenticationBytes(int8_t type, int32_t length, $bytes* sequence) {
	$var($bytes, ad, $cast($bytes, $nc(this->block)->clone()));
	increaseSequenceNumber();
	ad->set(8, type);
	ad->set(9, (int8_t)(length >> 8));
	ad->set(10, (int8_t)(length));
	return ad;
}

Authenticator$SSL30Authenticator::Authenticator$SSL30Authenticator() {
}

$Class* Authenticator$SSL30Authenticator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BLOCK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Authenticator$SSL30Authenticator, BLOCK_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Authenticator$SSL30Authenticator, init$, void)},
		{"acquireAuthenticationBytes", "(BI[B)[B", nullptr, 0, $virtualMethod(Authenticator$SSL30Authenticator, acquireAuthenticationBytes, $bytes*, int8_t, int32_t, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Authenticator$SSL30Authenticator", "sun.security.ssl.Authenticator", "SSL30Authenticator", $PRIVATE | $STATIC},
		{"sun.security.ssl.Authenticator$SSLAuthenticator", "sun.security.ssl.Authenticator", "SSLAuthenticator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.Authenticator$SSL30Authenticator",
		"sun.security.ssl.Authenticator$SSLAuthenticator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.Authenticator"
	};
	$loadClass(Authenticator$SSL30Authenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator$SSL30Authenticator);
	});
	return class$;
}

$Class* Authenticator$SSL30Authenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun