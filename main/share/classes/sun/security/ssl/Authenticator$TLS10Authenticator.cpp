#include <sun/security/ssl/Authenticator$TLS10Authenticator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Authenticator = ::sun::security::ssl::Authenticator;
using $Authenticator$SSLAuthenticator = ::sun::security::ssl::Authenticator$SSLAuthenticator;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Authenticator$TLS10Authenticator_FieldInfo_[] = {
	{"BLOCK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Authenticator$TLS10Authenticator, BLOCK_SIZE)},
	{}
};

$MethodInfo _Authenticator$TLS10Authenticator_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/ProtocolVersion;)V", nullptr, $PRIVATE, $method(static_cast<void(Authenticator$TLS10Authenticator::*)($ProtocolVersion*)>(&Authenticator$TLS10Authenticator::init$))},
	{"acquireAuthenticationBytes", "(BI[B)[B", nullptr, 0},
	{}
};

$InnerClassInfo _Authenticator$TLS10Authenticator_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$TLS10Authenticator", "sun.security.ssl.Authenticator", "TLS10Authenticator", $PRIVATE | $STATIC},
	{"sun.security.ssl.Authenticator$SSLAuthenticator", "sun.security.ssl.Authenticator", "SSLAuthenticator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Authenticator$TLS10Authenticator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.Authenticator$TLS10Authenticator",
	"sun.security.ssl.Authenticator$SSLAuthenticator",
	nullptr,
	_Authenticator$TLS10Authenticator_FieldInfo_,
	_Authenticator$TLS10Authenticator_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$TLS10Authenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$TLS10Authenticator($Class* clazz) {
	return $of($alloc(Authenticator$TLS10Authenticator));
}

void Authenticator$TLS10Authenticator::init$($ProtocolVersion* protocolVersion) {
	$Authenticator$SSLAuthenticator::init$($$new($bytes, Authenticator$TLS10Authenticator::BLOCK_SIZE));
	$nc(this->block)->set(9, $nc(protocolVersion)->major);
	$nc(this->block)->set(10, protocolVersion->minor);
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
	$loadClass(Authenticator$TLS10Authenticator, name, initialize, &_Authenticator$TLS10Authenticator_ClassInfo_, allocate$Authenticator$TLS10Authenticator);
	return class$;
}

$Class* Authenticator$TLS10Authenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun