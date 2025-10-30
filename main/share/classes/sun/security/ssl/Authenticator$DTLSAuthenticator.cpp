#include <sun/security/ssl/Authenticator$DTLSAuthenticator.h>

#include <sun/security/ssl/Authenticator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::sun::security::ssl::Authenticator;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _Authenticator$DTLSAuthenticator_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(Authenticator$DTLSAuthenticator::*)($bytes*)>(&Authenticator$DTLSAuthenticator::init$))},
	{"seqNumIsHuge", "()Z", nullptr, 0},
	{"seqNumOverflow", "()Z", nullptr, 0},
	{"setEpochNumber", "(I)V", nullptr, 0},
	{}
};

$InnerClassInfo _Authenticator$DTLSAuthenticator_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$DTLSAuthenticator", "sun.security.ssl.Authenticator", "DTLSAuthenticator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Authenticator$DTLSAuthenticator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.Authenticator$DTLSAuthenticator",
	"sun.security.ssl.Authenticator",
	nullptr,
	nullptr,
	_Authenticator$DTLSAuthenticator_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$DTLSAuthenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$DTLSAuthenticator($Class* clazz) {
	return $of($alloc(Authenticator$DTLSAuthenticator));
}

void Authenticator$DTLSAuthenticator::init$($bytes* block) {
	$Authenticator::init$(block);
}

bool Authenticator$DTLSAuthenticator::seqNumOverflow() {
	return ($nc(this->block)->length != 0 && $nc(this->block)->get(2) == (int8_t)255 && $nc(this->block)->get(3) == (int8_t)255 && $nc(this->block)->get(4) == (int8_t)255 && $nc(this->block)->get(5) == (int8_t)255 && $nc(this->block)->get(6) == (int8_t)255);
}

bool Authenticator$DTLSAuthenticator::seqNumIsHuge() {
	return ($nc(this->block)->length != 0 && $nc(this->block)->get(2) == (int8_t)255 && $nc(this->block)->get(3) == (int8_t)255);
}

void Authenticator$DTLSAuthenticator::setEpochNumber(int32_t epoch) {
	$nc(this->block)->set(0, (int8_t)((int32_t)((epoch >> 8) & (uint32_t)255)));
	$nc(this->block)->set(1, (int8_t)((int32_t)(epoch & (uint32_t)255)));
}

Authenticator$DTLSAuthenticator::Authenticator$DTLSAuthenticator() {
}

$Class* Authenticator$DTLSAuthenticator::load$($String* name, bool initialize) {
	$loadClass(Authenticator$DTLSAuthenticator, name, initialize, &_Authenticator$DTLSAuthenticator_ClassInfo_, allocate$Authenticator$DTLSAuthenticator);
	return class$;
}

$Class* Authenticator$DTLSAuthenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun