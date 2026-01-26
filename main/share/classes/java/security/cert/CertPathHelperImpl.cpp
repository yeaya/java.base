#include <java/security/cert/CertPathHelperImpl.h>

#include <java/security/cert/TrustAnchor.h>
#include <java/security/cert/X509CRLSelector.h>
#include <java/security/cert/X509CertSelector.h>
#include <java/util/Date.h>
#include <java/util/Set.h>
#include <sun/security/provider/certpath/CertPathHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TrustAnchor = ::java::security::cert::TrustAnchor;
using $X509CRLSelector = ::java::security::cert::X509CRLSelector;
using $X509CertSelector = ::java::security::cert::X509CertSelector;
using $Date = ::java::util::Date;
using $Set = ::java::util::Set;
using $CertPathHelper = ::sun::security::provider::certpath::CertPathHelper;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CertPathHelperImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CertPathHelperImpl, init$, void)},
	{"implIsJdkCA", "(Ljava/security/cert/TrustAnchor;)Z", nullptr, $PROTECTED, $virtualMethod(CertPathHelperImpl, implIsJdkCA, bool, $TrustAnchor*)},
	{"implSetDateAndTime", "(Ljava/security/cert/X509CRLSelector;Ljava/util/Date;J)V", nullptr, $PROTECTED, $virtualMethod(CertPathHelperImpl, implSetDateAndTime, void, $X509CRLSelector*, $Date*, int64_t)},
	{"implSetPathToNames", "(Ljava/security/cert/X509CertSelector;Ljava/util/Set;)V", "(Ljava/security/cert/X509CertSelector;Ljava/util/Set<Lsun/security/x509/GeneralNameInterface;>;)V", $PROTECTED, $virtualMethod(CertPathHelperImpl, implSetPathToNames, void, $X509CertSelector*, $Set*)},
	{"initialize", "()V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(CertPathHelperImpl, initialize, void)},
	{}
};

$ClassInfo _CertPathHelperImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.cert.CertPathHelperImpl",
	"sun.security.provider.certpath.CertPathHelper",
	nullptr,
	nullptr,
	_CertPathHelperImpl_MethodInfo_
};

$Object* allocate$CertPathHelperImpl($Class* clazz) {
	return $of($alloc(CertPathHelperImpl));
}

void CertPathHelperImpl::init$() {
	$CertPathHelper::init$();
}

void CertPathHelperImpl::initialize() {
	$load(CertPathHelperImpl);
	$synchronized(class$) {
		$init(CertPathHelperImpl);
		$init($CertPathHelper);
		if ($CertPathHelper::instance == nullptr) {
			$assignStatic($CertPathHelper::instance, $new(CertPathHelperImpl));
		}
	}
}

void CertPathHelperImpl::implSetPathToNames($X509CertSelector* sel, $Set* names) {
	$nc(sel)->setPathToNamesInternal(names);
}

void CertPathHelperImpl::implSetDateAndTime($X509CRLSelector* sel, $Date* date, int64_t skew) {
	$nc(sel)->setDateAndTime(date, skew);
}

bool CertPathHelperImpl::implIsJdkCA($TrustAnchor* anchor) {
	return $nc(anchor)->isJdkCA();
}

CertPathHelperImpl::CertPathHelperImpl() {
}

$Class* CertPathHelperImpl::load$($String* name, bool initialize) {
	$loadClass(CertPathHelperImpl, name, initialize, &_CertPathHelperImpl_ClassInfo_, allocate$CertPathHelperImpl);
	return class$;
}

$Class* CertPathHelperImpl::class$ = nullptr;

		} // cert
	} // security
} // java