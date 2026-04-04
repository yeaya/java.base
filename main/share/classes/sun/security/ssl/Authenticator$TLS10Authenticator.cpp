#include <sun/security/ssl/Authenticator$TLS10Authenticator.h>
#include <sun/security/ssl/Authenticator$SSLAuthenticator.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <jcpp.h>

#undef BLOCK_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Authenticator$SSLAuthenticator = ::sun::security::ssl::Authenticator$SSLAuthenticator;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

void Authenticator$TLS10Authenticator::init$($ProtocolVersion* protocolVersion) {
	$Authenticator$SSLAuthenticator::init$($$new($bytes, Authenticator$TLS10Authenticator::BLOCK_SIZE));
	$nc(this->block)->set(9, $nc(protocolVersion)->major);
	this->block->set(10, protocolVersion->minor);
}

$bytes* Authenticator$TLS10Authenticator::acquireAuthenticationBytes(int8_t type, int32_t length, $bytes* sequence) {
	$var($bytes, ad, $cast($bytes, $nc(this->block)->clone()));
	if (sequence != nullptr) {
		if (sequence->length != 8) {
			$throwNew($RuntimeException, "Insufficient explicit sequence number bytes"_s);
		}
		$System::arraycopy(sequence, 0, ad, 0, sequence->length);
	} else {
		increaseSequenceNumber();
	}
	ad->set(8, type);
	ad->set(11, (int8_t)(length >> 8));
	ad->set(12, (int8_t)(length));
	return ad;
}

Authenticator$TLS10Authenticator::Authenticator$TLS10Authenticator() {
}

$Class* Authenticator$TLS10Authenticator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BLOCK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Authenticator$TLS10Authenticator, BLOCK_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/ProtocolVersion;)V", nullptr, $PRIVATE, $method(Authenticator$TLS10Authenticator, init$, void, $ProtocolVersion*)},
		{"acquireAuthenticationBytes", "(BI[B)[B", nullptr, 0, $virtualMethod(Authenticator$TLS10Authenticator, acquireAuthenticationBytes, $bytes*, int8_t, int32_t, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Authenticator$TLS10Authenticator", "sun.security.ssl.Authenticator", "TLS10Authenticator", $PRIVATE | $STATIC},
		{"sun.security.ssl.Authenticator$SSLAuthenticator", "sun.security.ssl.Authenticator", "SSLAuthenticator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.Authenticator$TLS10Authenticator",
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
	$loadClass(Authenticator$TLS10Authenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator$TLS10Authenticator);
	});
	return class$;
}

$Class* Authenticator$TLS10Authenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun