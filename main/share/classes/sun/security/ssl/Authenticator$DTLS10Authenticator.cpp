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

$FieldInfo _Authenticator$DTLS10Authenticator_FieldInfo_[] = {
	{"BLOCK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Authenticator$DTLS10Authenticator, BLOCK_SIZE)},
	{}
};

$MethodInfo _Authenticator$DTLS10Authenticator_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/ProtocolVersion;)V", nullptr, $PRIVATE, $method(static_cast<void(Authenticator$DTLS10Authenticator::*)($ProtocolVersion*)>(&Authenticator$DTLS10Authenticator::init$))},
	{"acquireAuthenticationBytes", "(BI[B)[B", nullptr, 0},
	{}
};

$InnerClassInfo _Authenticator$DTLS10Authenticator_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$DTLS10Authenticator", "sun.security.ssl.Authenticator", "DTLS10Authenticator", $PRIVATE | $STATIC},
	{"sun.security.ssl.Authenticator$DTLSAuthenticator", "sun.security.ssl.Authenticator", "DTLSAuthenticator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Authenticator$DTLS10Authenticator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.Authenticator$DTLS10Authenticator",
	"sun.security.ssl.Authenticator$DTLSAuthenticator",
	nullptr,
	_Authenticator$DTLS10Authenticator_FieldInfo_,
	_Authenticator$DTLS10Authenticator_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$DTLS10Authenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$DTLS10Authenticator($Class* clazz) {
	return $of($alloc(Authenticator$DTLS10Authenticator));
}

void Authenticator$DTLS10Authenticator::init$($ProtocolVersion* protocolVersion) {
	$Authenticator$DTLSAuthenticator::init$($$new($bytes, Authenticator$DTLS10Authenticator::BLOCK_SIZE));
	$nc(this->block)->set(9, $nc(protocolVersion)->major);
	$nc(this->block)->set(10, protocolVersion->minor);
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
	$loadClass(Authenticator$DTLS10Authenticator, name, initialize, &_Authenticator$DTLS10Authenticator_ClassInfo_, allocate$Authenticator$DTLS10Authenticator);
	return class$;
}

$Class* Authenticator$DTLS10Authenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun