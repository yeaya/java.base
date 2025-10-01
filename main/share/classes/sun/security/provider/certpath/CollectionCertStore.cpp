#include <sun/security/provider/certpath/CollectionCertStore.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/cert/CRL.h>
#include <java/security/cert/CRLSelector.h>
#include <java/security/cert/CertSelector.h>
#include <java/security/cert/CertStoreException.h>
#include <java/security/cert/CertStoreParameters.h>
#include <java/security/cert/CertStoreSpi.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CollectionCertStoreParameters.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $CRL = ::java::security::cert::CRL;
using $CRLSelector = ::java::security::cert::CRLSelector;
using $CertSelector = ::java::security::cert::CertSelector;
using $CertStoreException = ::java::security::cert::CertStoreException;
using $CertStoreParameters = ::java::security::cert::CertStoreParameters;
using $CertStoreSpi = ::java::security::cert::CertStoreSpi;
using $Certificate = ::java::security::cert::Certificate;
using $CollectionCertStoreParameters = ::java::security::cert::CollectionCertStoreParameters;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _CollectionCertStore_FieldInfo_[] = {
	{"coll", "Ljava/util/Collection;", "Ljava/util/Collection<*>;", $PRIVATE, $field(CollectionCertStore, coll)},
	{}
};

$MethodInfo _CollectionCertStore_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/CertStoreParameters;)V", nullptr, $PUBLIC, $method(static_cast<void(CollectionCertStore::*)($CertStoreParameters*)>(&CollectionCertStore::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"engineGetCRLs", "(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;", "(Ljava/security/cert/CRLSelector;)Ljava/util/Collection<Ljava/security/cert/CRL;>;", $PUBLIC, nullptr, "java.security.cert.CertStoreException"},
	{"engineGetCertificates", "(Ljava/security/cert/CertSelector;)Ljava/util/Collection;", "(Ljava/security/cert/CertSelector;)Ljava/util/Collection<Ljava/security/cert/Certificate;>;", $PUBLIC, nullptr, "java.security.cert.CertStoreException"},
	{}
};

$ClassInfo _CollectionCertStore_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.certpath.CollectionCertStore",
	"java.security.cert.CertStoreSpi",
	nullptr,
	_CollectionCertStore_FieldInfo_,
	_CollectionCertStore_MethodInfo_
};

$Object* allocate$CollectionCertStore($Class* clazz) {
	return $of($alloc(CollectionCertStore));
}

void CollectionCertStore::init$($CertStoreParameters* params) {
	$CertStoreSpi::init$(params);
	if (!($instanceOf($CollectionCertStoreParameters, params))) {
		$throwNew($InvalidAlgorithmParameterException, "parameters must be CollectionCertStoreParameters"_s);
	}
	$set(this, coll, $nc(($cast($CollectionCertStoreParameters, params)))->getCollection());
}

$Collection* CollectionCertStore::engineGetCertificates($CertSelector* selector) {
	if (this->coll == nullptr) {
		$throwNew($CertStoreException, "Collection is null"_s);
	}
	for (int32_t c = 0; c < 10; ++c) {
		try {
			$var($HashSet, result, $new($HashSet));
			if (selector != nullptr) {
				{
					$var($Iterator, i$, $nc(this->coll)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Object, o, i$->next());
						{
							if (($instanceOf($Certificate, o)) && selector->match($cast($Certificate, o))) {
								result->add($cast($Certificate, o));
							}
						}
					}
				}
			} else {
				{
					$var($Iterator, i$, $nc(this->coll)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Object, o, i$->next());
						{
							if ($instanceOf($Certificate, o)) {
								result->add($cast($Certificate, o));
							}
						}
					}
				}
			}
			return (static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(result))));
		} catch ($ConcurrentModificationException&) {
			$catch();
		}
	}
	$throwNew($ConcurrentModificationException, "Too many ConcurrentModificationExceptions"_s);
	$shouldNotReachHere();
}

$Collection* CollectionCertStore::engineGetCRLs($CRLSelector* selector) {
	if (this->coll == nullptr) {
		$throwNew($CertStoreException, "Collection is null"_s);
	}
	for (int32_t c = 0; c < 10; ++c) {
		try {
			$var($HashSet, result, $new($HashSet));
			if (selector != nullptr) {
				{
					$var($Iterator, i$, $nc(this->coll)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Object, o, i$->next());
						{
							if (($instanceOf($CRL, o)) && selector->match($cast($CRL, o))) {
								result->add($cast($CRL, o));
							}
						}
					}
				}
			} else {
				{
					$var($Iterator, i$, $nc(this->coll)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Object, o, i$->next());
						{
							if ($instanceOf($CRL, o)) {
								result->add($cast($CRL, o));
							}
						}
					}
				}
			}
			return static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(result)));
		} catch ($ConcurrentModificationException&) {
			$catch();
		}
	}
	$throwNew($ConcurrentModificationException, "Too many ConcurrentModificationExceptions"_s);
	$shouldNotReachHere();
}

CollectionCertStore::CollectionCertStore() {
}

$Class* CollectionCertStore::load$($String* name, bool initialize) {
	$loadClass(CollectionCertStore, name, initialize, &_CollectionCertStore_ClassInfo_, allocate$CollectionCertStore);
	return class$;
}

$Class* CollectionCertStore::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun