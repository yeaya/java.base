#include <sun/security/provider/Sun.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
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
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $Iterator = ::java::util::Iterator;
using $Sun$1 = ::sun::security::provider::Sun$1;
using $SunEntries = ::sun::security::provider::SunEntries;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _Sun_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Sun, serialVersionUID)},
	{"INFO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Sun, INFO)},
	{}
};

$MethodInfo _Sun_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Sun::*)()>(&Sun::init$))},
	{"putEntries", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljava/security/Provider$Service;>;)V", 0, $method(static_cast<void(Sun::*)($Iterator*)>(&Sun::putEntries))},
	{}
};

$InnerClassInfo _Sun_InnerClassesInfo_[] = {
	{"sun.security.provider.Sun$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Sun_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.Sun",
	"java.security.Provider",
	nullptr,
	_Sun_FieldInfo_,
	_Sun_MethodInfo_,
	nullptr,
	nullptr,
	_Sun_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.Sun$1"
};

$Object* allocate$Sun($Class* clazz) {
	return $of($alloc(Sun));
}

$String* Sun::INFO = nullptr;

void Sun::init$() {
	$beforeCallerSensitive();
	$init($SecurityConstants);
	$Provider::init$("SUN"_s, $SecurityConstants::PROVIDER_VER, Sun::INFO);
	$var($Provider, p, this);
	$var($Iterator, serviceIter, $$new($SunEntries, p)->iterator());
	if ($System::getSecurityManager() == nullptr) {
		putEntries(serviceIter);
	} else {
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Sun$1, this, serviceIter)));
	}
}

void Sun::putEntries($Iterator* i) {
	while ($nc(i)->hasNext()) {
		putService($cast($Provider$Service, $(i->next())));
	}
}

Sun::Sun() {
}

void clinit$Sun($Class* class$) {
	$assignStatic(Sun::INFO, "SUN (DSA key/parameter generation; DSA signing; SHA-1, MD5 digests; SecureRandom; X.509 certificates; PKCS12, JKS & DKS keystores; PKIX CertPathValidator; PKIX CertPathBuilder; LDAP, Collection CertStores, JavaPolicy Policy; JavaLoginConfig Configuration)"_s);
}

$Class* Sun::load$($String* name, bool initialize) {
	$loadClass(Sun, name, initialize, &_Sun_ClassInfo_, clinit$Sun, allocate$Sun);
	return class$;
}

$Class* Sun::class$ = nullptr;

		} // provider
	} // security
} // sun