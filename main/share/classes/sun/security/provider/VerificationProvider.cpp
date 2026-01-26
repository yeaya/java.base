#include <sun/security/provider/VerificationProvider.h>

#include <java/lang/ClassNotFoundException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/util/Iterator.h>
#include <sun/security/provider/SunEntries.h>
#include <sun/security/provider/VerificationProvider$1.h>
#include <sun/security/rsa/SunRsaSignEntries.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef ACTIVE
#undef PROVIDER_VER

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $Iterator = ::java::util::Iterator;
using $SunEntries = ::sun::security::provider::SunEntries;
using $VerificationProvider$1 = ::sun::security::provider::VerificationProvider$1;
using $SunRsaSignEntries = ::sun::security::rsa::SunRsaSignEntries;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _VerificationProvider_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VerificationProvider, serialVersionUID)},
	{"ACTIVE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VerificationProvider, ACTIVE)},
	{}
};

$MethodInfo _VerificationProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(VerificationProvider, init$, void)},
	{"putEntries", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljava/security/Provider$Service;>;)V", 0, $method(VerificationProvider, putEntries, void, $Iterator*)},
	{}
};

$InnerClassInfo _VerificationProvider_InnerClassesInfo_[] = {
	{"sun.security.provider.VerificationProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _VerificationProvider_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.VerificationProvider",
	"java.security.Provider",
	nullptr,
	_VerificationProvider_FieldInfo_,
	_VerificationProvider_MethodInfo_,
	nullptr,
	nullptr,
	_VerificationProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.VerificationProvider$1"
};

$Object* allocate$VerificationProvider($Class* clazz) {
	return $of($alloc(VerificationProvider));
}

bool VerificationProvider::ACTIVE = false;

void VerificationProvider::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($SecurityConstants);
	$Provider::init$("SunJarVerification"_s, $SecurityConstants::PROVIDER_VER, "Jar Verification Provider"_s);
	if (VerificationProvider::ACTIVE == false) {
		return;
	}
	$var($Provider, p, this);
	$var($Iterator, sunIter, $$new($SunEntries, p)->iterator());
	$var($Iterator, rsaIter, $$new($SunRsaSignEntries, p)->iterator());
	if ($System::getSecurityManager() == nullptr) {
		putEntries(sunIter);
		putEntries(rsaIter);
	} else {
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($VerificationProvider$1, this, sunIter, rsaIter)));
	}
}

void VerificationProvider::putEntries($Iterator* i) {
	$useLocalCurrentObjectStackCache();
	while ($nc(i)->hasNext()) {
		putService($cast($Provider$Service, $(i->next())));
	}
}

void clinit$VerificationProvider($Class* class$) {
	$beforeCallerSensitive();
	{
		bool b = false;
		try {
			$Class::forName("sun.security.provider.Sun"_s);
			$Class::forName("sun.security.rsa.SunRsaSign"_s);
			b = false;
		} catch ($ClassNotFoundException& e) {
			b = true;
		}
		VerificationProvider::ACTIVE = b;
	}
}

VerificationProvider::VerificationProvider() {
}

$Class* VerificationProvider::load$($String* name, bool initialize) {
	$loadClass(VerificationProvider, name, initialize, &_VerificationProvider_ClassInfo_, clinit$VerificationProvider, allocate$VerificationProvider);
	return class$;
}

$Class* VerificationProvider::class$ = nullptr;

		} // provider
	} // security
} // sun