#include <sun/security/provider/certpath/PKIX$CertStoreComparator.h>

#include <java/security/cert/CertStore.h>
#include <java/security/cert/CertStoreParameters.h>
#include <java/security/cert/CollectionCertStoreParameters.h>
#include <sun/security/provider/certpath/PKIX.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertStore = ::java::security::cert::CertStore;
using $CertStoreParameters = ::java::security::cert::CertStoreParameters;
using $CollectionCertStoreParameters = ::java::security::cert::CollectionCertStoreParameters;
using $Comparator = ::java::util::Comparator;
using $PKIX = ::sun::security::provider::certpath::PKIX;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$MethodInfo _PKIX$CertStoreComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PKIX$CertStoreComparator::*)()>(&PKIX$CertStoreComparator::init$))},
	{"compare", "(Ljava/security/cert/CertStore;Ljava/security/cert/CertStore;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _PKIX$CertStoreComparator_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.PKIX$CertStoreComparator", "sun.security.provider.certpath.PKIX", "CertStoreComparator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PKIX$CertStoreComparator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.PKIX$CertStoreComparator",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_PKIX$CertStoreComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/security/cert/CertStore;>;",
	nullptr,
	_PKIX$CertStoreComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.PKIX"
};

$Object* allocate$PKIX$CertStoreComparator($Class* clazz) {
	return $of($alloc(PKIX$CertStoreComparator));
}

void PKIX$CertStoreComparator::init$() {
}

int32_t PKIX$CertStoreComparator::compare($CertStore* store1, $CertStore* store2) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc($($nc(store1)->getType()))->equals("Collection"_s);
	if (var$0 || $instanceOf($CollectionCertStoreParameters, $($nc(store1)->getCertStoreParameters()))) {
		return -1;
	} else {
		return 1;
	}
}

int32_t PKIX$CertStoreComparator::compare(Object$* store1, Object$* store2) {
	return this->compare($cast($CertStore, store1), $cast($CertStore, store2));
}

PKIX$CertStoreComparator::PKIX$CertStoreComparator() {
}

$Class* PKIX$CertStoreComparator::load$($String* name, bool initialize) {
	$loadClass(PKIX$CertStoreComparator, name, initialize, &_PKIX$CertStoreComparator_ClassInfo_, allocate$PKIX$CertStoreComparator);
	return class$;
}

$Class* PKIX$CertStoreComparator::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun