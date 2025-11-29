#include <sun/security/rsa/SunRsaSign.h>

#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $Iterator = ::java::util::Iterator;
using $SunRsaSign$1 = ::sun::security::rsa::SunRsaSign$1;
using $SunRsaSignEntries = ::sun::security::rsa::SunRsaSignEntries;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace sun {
	namespace security {
		namespace rsa {

$FieldInfo _SunRsaSign_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunRsaSign, serialVersionUID)},
	{}
};

$MethodInfo _SunRsaSign_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunRsaSign::*)()>(&SunRsaSign::init$))},
	{"putEntries", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljava/security/Provider$Service;>;)V", 0, $method(static_cast<void(SunRsaSign::*)($Iterator*)>(&SunRsaSign::putEntries))},
	{}
};

$InnerClassInfo _SunRsaSign_InnerClassesInfo_[] = {
	{"sun.security.rsa.SunRsaSign$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunRsaSign_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.SunRsaSign",
	"java.security.Provider",
	nullptr,
	_SunRsaSign_FieldInfo_,
	_SunRsaSign_MethodInfo_,
	nullptr,
	nullptr,
	_SunRsaSign_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.rsa.SunRsaSign$1"
};

$Object* allocate$SunRsaSign($Class* clazz) {
	return $of($alloc(SunRsaSign));
}

void SunRsaSign::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($SecurityConstants);
	$Provider::init$("SunRsaSign"_s, $SecurityConstants::PROVIDER_VER, "Sun RSA signature provider"_s);
	$var($Provider, p, this);
	$var($Iterator, serviceIter, $$new($SunRsaSignEntries, p)->iterator());
	if ($System::getSecurityManager() == nullptr) {
		putEntries(serviceIter);
	} else {
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SunRsaSign$1, this, serviceIter)));
	}
}

void SunRsaSign::putEntries($Iterator* i) {
	$useLocalCurrentObjectStackCache();
	while ($nc(i)->hasNext()) {
		putService($cast($Provider$Service, $(i->next())));
	}
}

SunRsaSign::SunRsaSign() {
}

$Class* SunRsaSign::load$($String* name, bool initialize) {
	$loadClass(SunRsaSign, name, initialize, &_SunRsaSign_ClassInfo_, allocate$SunRsaSign);
	return class$;
}

$Class* SunRsaSign::class$ = nullptr;

		} // rsa
	} // security
} // sun