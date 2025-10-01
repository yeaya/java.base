#include <sun/security/ssl/Authenticator$TLS13Authenticator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/security/ssl/Authenticator$SSLAuthenticator.h>
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
using $Authenticator = ::sun::security::ssl::Authenticator;
using $Authenticator$SSLAuthenticator = ::sun::security::ssl::Authenticator$SSLAuthenticator;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Authenticator$TLS13Authenticator_FieldInfo_[] = {
	{"BLOCK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Authenticator$TLS13Authenticator, BLOCK_SIZE)},
	{}
};

$MethodInfo _Authenticator$TLS13Authenticator_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/ProtocolVersion;)V", nullptr, $PRIVATE, $method(static_cast<void(Authenticator$TLS13Authenticator::*)($ProtocolVersion*)>(&Authenticator$TLS13Authenticator::init$))},
	{"acquireAuthenticationBytes", "(BI[B)[B", nullptr, 0},
	{}
};

$InnerClassInfo _Authenticator$TLS13Authenticator_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$TLS13Authenticator", "sun.security.ssl.Authenticator", "TLS13Authenticator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Authenticator$SSLAuthenticator", "sun.security.ssl.Authenticator", "SSLAuthenticator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Authenticator$TLS13Authenticator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Authenticator$TLS13Authenticator",
	"sun.security.ssl.Authenticator$SSLAuthenticator",
	nullptr,
	_Authenticator$TLS13Authenticator_FieldInfo_,
	_Authenticator$TLS13Authenticator_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$TLS13Authenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$TLS13Authenticator($Class* clazz) {
	return $of($alloc(Authenticator$TLS13Authenticator));
}

void Authenticator$TLS13Authenticator::init$($ProtocolVersion* protocolVersion) {
	$Authenticator$SSLAuthenticator::init$($$new($bytes, Authenticator$TLS13Authenticator::BLOCK_SIZE));
	$init($ProtocolVersion);
	$nc(this->block)->set(9, $ProtocolVersion::TLS12->major);
	$nc(this->block)->set(10, $ProtocolVersion::TLS12->minor);
}

$bytes* Authenticator$TLS13Authenticator::acquireAuthenticationBytes(int8_t type, int32_t length, $bytes* sequence) {
	$var($bytes, ad, $Arrays::copyOfRange(this->block, 8, 13));
	increaseSequenceNumber();
	ad->set(0, type);
	ad->set(3, (int8_t)(length >> 8));
	ad->set(4, (int8_t)((int32_t)(length & (uint32_t)255)));
	return ad;
}

Authenticator$TLS13Authenticator::Authenticator$TLS13Authenticator() {
}

$Class* Authenticator$TLS13Authenticator::load$($String* name, bool initialize) {
	$loadClass(Authenticator$TLS13Authenticator, name, initialize, &_Authenticator$TLS13Authenticator_ClassInfo_, allocate$Authenticator$TLS13Authenticator);
	return class$;
}

$Class* Authenticator$TLS13Authenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun