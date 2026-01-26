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

$FieldInfo _Authenticator$DTLS13Authenticator_FieldInfo_[] = {
	{"BLOCK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Authenticator$DTLS13Authenticator, BLOCK_SIZE)},
	{}
};

$MethodInfo _Authenticator$DTLS13Authenticator_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/ProtocolVersion;)V", nullptr, $PRIVATE, $method(Authenticator$DTLS13Authenticator, init$, void, $ProtocolVersion*)},
	{"acquireAuthenticationBytes", "(BI[B)[B", nullptr, 0, $virtualMethod(Authenticator$DTLS13Authenticator, acquireAuthenticationBytes, $bytes*, int8_t, int32_t, $bytes*)},
	{}
};

$InnerClassInfo _Authenticator$DTLS13Authenticator_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$DTLS13Authenticator", "sun.security.ssl.Authenticator", "DTLS13Authenticator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Authenticator$DTLSAuthenticator", "sun.security.ssl.Authenticator", "DTLSAuthenticator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Authenticator$DTLS13Authenticator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Authenticator$DTLS13Authenticator",
	"sun.security.ssl.Authenticator$DTLSAuthenticator",
	nullptr,
	_Authenticator$DTLS13Authenticator_FieldInfo_,
	_Authenticator$DTLS13Authenticator_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$DTLS13Authenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$DTLS13Authenticator($Class* clazz) {
	return $of($alloc(Authenticator$DTLS13Authenticator));
}

void Authenticator$DTLS13Authenticator::init$($ProtocolVersion* protocolVersion) {
	$Authenticator$DTLSAuthenticator::init$($$new($bytes, Authenticator$DTLS13Authenticator::BLOCK_SIZE));
	$init($ProtocolVersion);
	$nc(this->block)->set(9, $ProtocolVersion::TLS12->major);
	$nc(this->block)->set(10, $ProtocolVersion::TLS12->minor);
}

$bytes* Authenticator$DTLS13Authenticator::acquireAuthenticationBytes(int8_t type, int32_t length, $bytes* sequence) {
	$var($bytes, ad, $Arrays::copyOfRange(this->block, 8, 13));
	increaseSequenceNumber();
	ad->set(0, type);
	ad->set(3, (int8_t)(length >> 8));
	ad->set(4, (int8_t)((int32_t)(length & (uint32_t)255)));
	return ad;
}

Authenticator$DTLS13Authenticator::Authenticator$DTLS13Authenticator() {
}

$Class* Authenticator$DTLS13Authenticator::load$($String* name, bool initialize) {
	$loadClass(Authenticator$DTLS13Authenticator, name, initialize, &_Authenticator$DTLS13Authenticator_ClassInfo_, allocate$Authenticator$DTLS13Authenticator);
	return class$;
}

$Class* Authenticator$DTLS13Authenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun