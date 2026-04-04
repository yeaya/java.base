#include <sun/security/provider/Sun.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/util/Iterator.h>
#include <sun/security/provider/Sun$1.h>
#include <sun/security/provider/SunEntries.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef INFO
#undef PROVIDER_VER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $Iterator = ::java::util::Iterator;
using $Sun$1 = ::sun::security::provider::Sun$1;
using $SunEntries = ::sun::security::provider::SunEntries;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace sun {
	namespace security {
		namespace provider {

$String* Sun::INFO = nullptr;

void Sun::init$() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$init($SecurityConstants);
	$Provider::init$("SUN"_s, $SecurityConstants::PROVIDER_VER, Sun::INFO);
	$var($Provider, p, this);
	$var($Iterator, serviceIter, $$new($SunEntries, p)->iterator());
	if ($System::getSecurityManager() == nullptr) {
		putEntries(serviceIter);
	} else {
		$AccessController::doPrivileged($$new($Sun$1, this, serviceIter));
	}
}

void Sun::putEntries($Iterator* i) {
	$useLocalObjectStack();
	while ($nc(i)->hasNext()) {
		putService($$cast($Provider$Service, i->next()));
	}
}

Sun::Sun() {
}

void Sun::clinit$($Class* clazz) {
	$assignStatic(Sun::INFO, "SUN (DSA key/parameter generation; DSA signing; SHA-1, MD5 digests; SecureRandom; X.509 certificates; PKCS12, JKS & DKS keystores; PKIX CertPathValidator; PKIX CertPathBuilder; LDAP, Collection CertStores, JavaPolicy Policy; JavaLoginConfig Configuration)"_s);
}

$Class* Sun::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Sun, serialVersionUID)},
		{"INFO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Sun, INFO)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Sun, init$, void)},
		{"putEntries", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljava/security/Provider$Service;>;)V", 0, $method(Sun, putEntries, void, $Iterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.Sun$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.Sun",
		"java.security.Provider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.provider.Sun$1"
	};
	$loadClass(Sun, name, initialize, &classInfo$$, Sun::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Sun));
	});
	return class$;
}

$Class* Sun::class$ = nullptr;

		} // provider
	} // security
} // sun