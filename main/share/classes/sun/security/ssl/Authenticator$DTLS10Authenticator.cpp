#include <sun/security/ssl/Authenticator$DTLS10Authenticator.h>
#include <sun/security/ssl/Authenticator$DTLSAuthenticator.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <jcpp.h>

#undef BLOCK_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Authenticator$DTLSAuthenticator = ::sun::security::ssl::Authenticator$DTLSAuthenticator;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

void Authenticator$DTLS10Authenticator::init$($ProtocolVersion* protocolVersion) {
	$Authenticator$DTLSAuthenticator::init$($$new($bytes, Authenticator$DTLS10Authenticator::BLOCK_SIZE));
	$nc(this->block)->set(9, $nc(protocolVersion)->major);
	this->block->set(10, protocolVersion->minor);
}

$bytes* Authenticator$DTLS10Authenticator::acquireAuthenticationBytes(int8_t type, int32_t length, $bytes* sequence) {
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

Authenticator$DTLS10Authenticator::Authenticator$DTLS10Authenticator() {
}

$Class* Authenticator$DTLS10Authenticator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BLOCK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Authenticator$DTLS10Authenticator, BLOCK_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/ProtocolVersion;)V", nullptr, $PRIVATE, $method(Authenticator$DTLS10Authenticator, init$, void, $ProtocolVersion*)},
		{"acquireAuthenticationBytes", "(BI[B)[B", nullptr, 0, $virtualMethod(Authenticator$DTLS10Authenticator, acquireAuthenticationBytes, $bytes*, int8_t, int32_t, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Authenticator$DTLS10Authenticator", "sun.security.ssl.Authenticator", "DTLS10Authenticator", $PRIVATE | $STATIC},
		{"sun.security.ssl.Authenticator$DTLSAuthenticator", "sun.security.ssl.Authenticator", "DTLSAuthenticator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.Authenticator$DTLS10Authenticator",
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
	$loadClass(Authenticator$DTLS10Authenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator$DTLS10Authenticator);
	});
	return class$;
}

$Class* Authenticator$DTLS10Authenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun