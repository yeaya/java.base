#include <sun/security/ssl/Authenticator$SSLAuthenticator.h>
#include <sun/security/ssl/Authenticator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::sun::security::ssl::Authenticator;

namespace sun {
	namespace security {
		namespace ssl {

void Authenticator$SSLAuthenticator::init$($bytes* block) {
	$Authenticator::init$(block);
}

bool Authenticator$SSLAuthenticator::seqNumOverflow() {
	return ($nc(this->block)->length != 0 && this->block->get(0) == (int8_t)255 && this->block->get(1) == (int8_t)255 && this->block->get(2) == (int8_t)255 && this->block->get(3) == (int8_t)255 && this->block->get(4) == (int8_t)255 && this->block->get(5) == (int8_t)255 && this->block->get(6) == (int8_t)255);
}

bool Authenticator$SSLAuthenticator::seqNumIsHuge() {
	return ($nc(this->block)->length != 0 && this->block->get(0) == (int8_t)255 && this->block->get(1) == (int8_t)255 && this->block->get(2) == (int8_t)255 && this->block->get(3) == (int8_t)255);
}

Authenticator$SSLAuthenticator::Authenticator$SSLAuthenticator() {
}

$Class* Authenticator$SSLAuthenticator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PRIVATE, $method(Authenticator$SSLAuthenticator, init$, void, $bytes*)},
		{"seqNumIsHuge", "()Z", nullptr, 0, $virtualMethod(Authenticator$SSLAuthenticator, seqNumIsHuge, bool)},
		{"seqNumOverflow", "()Z", nullptr, 0, $virtualMethod(Authenticator$SSLAuthenticator, seqNumOverflow, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Authenticator$SSLAuthenticator", "sun.security.ssl.Authenticator", "SSLAuthenticator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.Authenticator$SSLAuthenticator",
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
	$loadClass(Authenticator$SSLAuthenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator$SSLAuthenticator);
	});
	return class$;
}

$Class* Authenticator$SSLAuthenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun