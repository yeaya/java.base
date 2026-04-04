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

void Authenticator$DTLSAuthenticator::init$($bytes* block) {
	$Authenticator::init$(block);
}

bool Authenticator$DTLSAuthenticator::seqNumOverflow() {
	return ($nc(this->block)->length != 0 && this->block->get(2) == (int8_t)255 && this->block->get(3) == (int8_t)255 && this->block->get(4) == (int8_t)255 && this->block->get(5) == (int8_t)255 && this->block->get(6) == (int8_t)255);
}

bool Authenticator$DTLSAuthenticator::seqNumIsHuge() {
	return ($nc(this->block)->length != 0 && this->block->get(2) == (int8_t)255 && this->block->get(3) == (int8_t)255);
}

void Authenticator$DTLSAuthenticator::setEpochNumber(int32_t epoch) {
	$nc(this->block)->set(0, (int8_t)((epoch >> 8) & 0xff));
	this->block->set(1, (int8_t)(epoch & 0xff));
}

Authenticator$DTLSAuthenticator::Authenticator$DTLSAuthenticator() {
}

$Class* Authenticator$DTLSAuthenticator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PRIVATE, $method(Authenticator$DTLSAuthenticator, init$, void, $bytes*)},
		{"seqNumIsHuge", "()Z", nullptr, 0, $virtualMethod(Authenticator$DTLSAuthenticator, seqNumIsHuge, bool)},
		{"seqNumOverflow", "()Z", nullptr, 0, $virtualMethod(Authenticator$DTLSAuthenticator, seqNumOverflow, bool)},
		{"setEpochNumber", "(I)V", nullptr, 0, $virtualMethod(Authenticator$DTLSAuthenticator, setEpochNumber, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Authenticator$DTLSAuthenticator", "sun.security.ssl.Authenticator", "DTLSAuthenticator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.Authenticator$DTLSAuthenticator",
		"sun.security.ssl.Authenticator",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.Authenticator"
	};
	$loadClass(Authenticator$DTLSAuthenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator$DTLSAuthenticator);
	});
	return class$;
}

$Class* Authenticator$DTLSAuthenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun