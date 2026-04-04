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
using $CollectionCertStoreParameters = ::java::security::cert::CollectionCertStoreParameters;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

void PKIX$CertStoreComparator::init$() {
}

int32_t PKIX$CertStoreComparator::compare($CertStore* store1, $CertStore* store2) {
	$useLocalObjectStack();
	bool var$0 = $$nc($nc(store1)->getType())->equals("Collection"_s);
	if (var$0 || $instanceOf($CollectionCertStoreParameters, $(store1->getCertStoreParameters()))) {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PKIX$CertStoreComparator, init$, void)},
		{"compare", "(Ljava/security/cert/CertStore;Ljava/security/cert/CertStore;)I", nullptr, $PUBLIC, $virtualMethod(PKIX$CertStoreComparator, compare, int32_t, $CertStore*, $CertStore*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PKIX$CertStoreComparator, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.PKIX$CertStoreComparator", "sun.security.provider.certpath.PKIX", "CertStoreComparator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.PKIX$CertStoreComparator",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/security/cert/CertStore;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.PKIX"
	};
	$loadClass(PKIX$CertStoreComparator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PKIX$CertStoreComparator);
	});
	return class$;
}

$Class* PKIX$CertStoreComparator::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun