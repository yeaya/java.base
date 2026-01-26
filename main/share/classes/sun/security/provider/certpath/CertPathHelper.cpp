#include <sun/security/provider/certpath/CertPathHelper.h>

#include <java/security/cert/TrustAnchor.h>
#include <java/security/cert/X509CRLSelector.h>
#include <java/security/cert/X509CertSelector.h>
#include <java/util/Date.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TrustAnchor = ::java::security::cert::TrustAnchor;
using $X509CRLSelector = ::java::security::cert::X509CRLSelector;
using $X509CertSelector = ::java::security::cert::X509CertSelector;
using $Date = ::java::util::Date;
using $Set = ::java::util::Set;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _CertPathHelper_FieldInfo_[] = {
	{"instance", "Lsun/security/provider/certpath/CertPathHelper;", nullptr, $PROTECTED | $STATIC, $staticField(CertPathHelper, instance)},
	{}
};

$MethodInfo _CertPathHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(CertPathHelper, init$, void)},
	{"implIsJdkCA", "(Ljava/security/cert/TrustAnchor;)Z", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(CertPathHelper, implIsJdkCA, bool, $TrustAnchor*)},
	{"implSetDateAndTime", "(Ljava/security/cert/X509CRLSelector;Ljava/util/Date;J)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(CertPathHelper, implSetDateAndTime, void, $X509CRLSelector*, $Date*, int64_t)},
	{"implSetPathToNames", "(Ljava/security/cert/X509CertSelector;Ljava/util/Set;)V", "(Ljava/security/cert/X509CertSelector;Ljava/util/Set<Lsun/security/x509/GeneralNameInterface;>;)V", $PROTECTED | $ABSTRACT, $virtualMethod(CertPathHelper, implSetPathToNames, void, $X509CertSelector*, $Set*)},
	{"isJdkCA", "(Ljava/security/cert/TrustAnchor;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(CertPathHelper, isJdkCA, bool, $TrustAnchor*)},
	{"setDateAndTime", "(Ljava/security/cert/X509CRLSelector;Ljava/util/Date;J)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CertPathHelper, setDateAndTime, void, $X509CRLSelector*, $Date*, int64_t)},
	{"setPathToNames", "(Ljava/security/cert/X509CertSelector;Ljava/util/Set;)V", "(Ljava/security/cert/X509CertSelector;Ljava/util/Set<Lsun/security/x509/GeneralNameInterface;>;)V", $STATIC, $staticMethod(CertPathHelper, setPathToNames, void, $X509CertSelector*, $Set*)},
	{}
};

$ClassInfo _CertPathHelper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.security.provider.certpath.CertPathHelper",
	"java.lang.Object",
	nullptr,
	_CertPathHelper_FieldInfo_,
	_CertPathHelper_MethodInfo_
};

$Object* allocate$CertPathHelper($Class* clazz) {
	return $of($alloc(CertPathHelper));
}

CertPathHelper* CertPathHelper::instance = nullptr;

void CertPathHelper::init$() {
}

void CertPathHelper::setPathToNames($X509CertSelector* sel, $Set* names) {
	$init(CertPathHelper);
	$nc(CertPathHelper::instance)->implSetPathToNames(sel, names);
}

void CertPathHelper::setDateAndTime($X509CRLSelector* sel, $Date* date, int64_t skew) {
	$init(CertPathHelper);
	$nc(CertPathHelper::instance)->implSetDateAndTime(sel, date, skew);
}

bool CertPathHelper::isJdkCA($TrustAnchor* anchor) {
	$init(CertPathHelper);
	return (anchor == nullptr) ? false : $nc(CertPathHelper::instance)->implIsJdkCA(anchor);
}

CertPathHelper::CertPathHelper() {
}

$Class* CertPathHelper::load$($String* name, bool initialize) {
	$loadClass(CertPathHelper, name, initialize, &_CertPathHelper_ClassInfo_, allocate$CertPathHelper);
	return class$;
}

$Class* CertPathHelper::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun