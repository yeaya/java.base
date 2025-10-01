#include <sun/security/ssl/Authenticator$SSLAuthenticator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/Authenticator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::sun::security::ssl::Authenticator;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _Authenticator$SSLAuthenticator_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(Authenticator$SSLAuthenticator::*)($bytes*)>(&Authenticator$SSLAuthenticator::init$))},
	{"seqNumIsHuge", "()Z", nullptr, 0},
	{"seqNumOverflow", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _Authenticator$SSLAuthenticator_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$SSLAuthenticator", "sun.security.ssl.Authenticator", "SSLAuthenticator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Authenticator$SSLAuthenticator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.Authenticator$SSLAuthenticator",
	"sun.security.ssl.Authenticator",
	nullptr,
	nullptr,
	_Authenticator$SSLAuthenticator_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$SSLAuthenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$SSLAuthenticator($Class* clazz) {
	return $of($alloc(Authenticator$SSLAuthenticator));
}

void Authenticator$SSLAuthenticator::init$($bytes* block) {
	$Authenticator::init$(block);
}

bool Authenticator$SSLAuthenticator::seqNumOverflow() {
	return ($nc(this->block)->length != 0 && $nc(this->block)->get(0) == (int8_t)255 && $nc(this->block)->get(1) == (int8_t)255 && $nc(this->block)->get(2) == (int8_t)255 && $nc(this->block)->get(3) == (int8_t)255 && $nc(this->block)->get(4) == (int8_t)255 && $nc(this->block)->get(5) == (int8_t)255 && $nc(this->block)->get(6) == (int8_t)255);
}

bool Authenticator$SSLAuthenticator::seqNumIsHuge() {
	return ($nc(this->block)->length != 0 && $nc(this->block)->get(0) == (int8_t)255 && $nc(this->block)->get(1) == (int8_t)255 && $nc(this->block)->get(2) == (int8_t)255 && $nc(this->block)->get(3) == (int8_t)255);
}

Authenticator$SSLAuthenticator::Authenticator$SSLAuthenticator() {
}

$Class* Authenticator$SSLAuthenticator::load$($String* name, bool initialize) {
	$loadClass(Authenticator$SSLAuthenticator, name, initialize, &_Authenticator$SSLAuthenticator_ClassInfo_, allocate$Authenticator$SSLAuthenticator);
	return class$;
}

$Class* Authenticator$SSLAuthenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun