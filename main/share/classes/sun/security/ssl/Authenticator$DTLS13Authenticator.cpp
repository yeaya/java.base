#include <sun/security/ssl/Authenticator$DTLS13Authenticator.h>
#include <java/util/Arrays.h>
#include <sun/security/ssl/Authenticator$DTLSAuthenticator.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <jcpp.h>

#undef BLOCK_SIZE
#undef TLS12

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Authenticator$DTLSAuthenticator = ::sun::security::ssl::Authenticator$DTLSAuthenticator;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

void Authenticator$DTLS13Authenticator::init$($ProtocolVersion* protocolVersion) {
	$Authenticator$DTLSAuthenticator::init$($$new($bytes, Authenticator$DTLS13Authenticator::BLOCK_SIZE));
	$init($ProtocolVersion);
	$nc(this->block)->set(9, $ProtocolVersion::TLS12->major);
	this->block->set(10, $ProtocolVersion::TLS12->minor);
}

$bytes* Authenticator$DTLS13Authenticator::acquireAuthenticationBytes(int8_t type, int32_t length, $bytes* sequence) {
	$var($bytes, ad, $Arrays::copyOfRange(this->block, 8, 13));
	increaseSequenceNumber();
	ad->set(0, type);
	ad->set(3, (int8_t)(length >> 8));
	ad->set(4, (int8_t)(length & 0xff));
	return ad;
}

Authenticator$DTLS13Authenticator::Authenticator$DTLS13Authenticator() {
}

$Class* Authenticator$DTLS13Authenticator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BLOCK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Authenticator$DTLS13Authenticator, BLOCK_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/ProtocolVersion;)V", nullptr, $PRIVATE, $method(Authenticator$DTLS13Authenticator, init$, void, $ProtocolVersion*)},
		{"acquireAuthenticationBytes", "(BI[B)[B", nullptr, 0, $virtualMethod(Authenticator$DTLS13Authenticator, acquireAuthenticationBytes, $bytes*, int8_t, int32_t, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Authenticator$DTLS13Authenticator", "sun.security.ssl.Authenticator", "DTLS13Authenticator", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.Authenticator$DTLSAuthenticator", "sun.security.ssl.Authenticator", "DTLSAuthenticator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.Authenticator$DTLS13Authenticator",
		"sun.security.ssl.Authenticator$DTLSAuthenticator",
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
	$loadClass(Authenticator$DTLS13Authenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator$DTLS13Authenticator);
	});
	return class$;
}

$Class* Authenticator$DTLS13Authenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun