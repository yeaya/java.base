#include <sun/security/rsa/SunRsaSign.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/util/Iterator.h>
#include <sun/security/rsa/SunRsaSign$1.h>
#include <sun/security/rsa/SunRsaSignEntries.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef PROVIDER_VER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $Iterator = ::java::util::Iterator;
using $SunRsaSign$1 = ::sun::security::rsa::SunRsaSign$1;
using $SunRsaSignEntries = ::sun::security::rsa::SunRsaSignEntries;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace sun {
	namespace security {
		namespace rsa {

void SunRsaSign::init$() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$init($SecurityConstants);
	$Provider::init$("SunRsaSign"_s, $SecurityConstants::PROVIDER_VER, "Sun RSA signature provider"_s);
	$var($Provider, p, this);
	$var($Iterator, serviceIter, $$new($SunRsaSignEntries, p)->iterator());
	if ($System::getSecurityManager() == nullptr) {
		putEntries(serviceIter);
	} else {
		$AccessController::doPrivileged($$new($SunRsaSign$1, this, serviceIter));
	}
}

void SunRsaSign::putEntries($Iterator* i) {
	$useLocalObjectStack();
	while ($nc(i)->hasNext()) {
		putService($$cast($Provider$Service, i->next()));
	}
}

SunRsaSign::SunRsaSign() {
}

$Class* SunRsaSign::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunRsaSign, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SunRsaSign, init$, void)},
		{"putEntries", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljava/security/Provider$Service;>;)V", 0, $method(SunRsaSign, putEntries, void, $Iterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.rsa.SunRsaSign$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.rsa.SunRsaSign",
		"java.security.Provider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.rsa.SunRsaSign$1"
	};
	$loadClass(SunRsaSign, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SunRsaSign));
	});
	return class$;
}

$Class* SunRsaSign::class$ = nullptr;

		} // rsa
	} // security
} // sun