#include <java/security/cert/CollectionCertStoreParameters.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/CertStoreParameters.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef EMPTY_SET

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CertStoreParameters = ::java::security::cert::CertStoreParameters;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CollectionCertStoreParameters_FieldInfo_[] = {
	{"coll", "Ljava/util/Collection;", "Ljava/util/Collection<*>;", $PRIVATE, $field(CollectionCertStoreParameters, coll)},
	{}
};

$MethodInfo _CollectionCertStoreParameters_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<*>;)V", $PUBLIC, $method(static_cast<void(CollectionCertStoreParameters::*)($Collection*)>(&CollectionCertStoreParameters::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollectionCertStoreParameters::*)()>(&CollectionCertStoreParameters::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getCollection", "()Ljava/util/Collection;", "()Ljava/util/Collection<*>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CollectionCertStoreParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CollectionCertStoreParameters",
	"java.lang.Object",
	"java.security.cert.CertStoreParameters",
	_CollectionCertStoreParameters_FieldInfo_,
	_CollectionCertStoreParameters_MethodInfo_
};

$Object* allocate$CollectionCertStoreParameters($Class* clazz) {
	return $of($alloc(CollectionCertStoreParameters));
}

void CollectionCertStoreParameters::init$($Collection* collection) {
	if (collection == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, coll, collection);
}

void CollectionCertStoreParameters::init$() {
	$init($Collections);
	$set(this, coll, $Collections::EMPTY_SET);
}

$Collection* CollectionCertStoreParameters::getCollection() {
	return this->coll;
}

$Object* CollectionCertStoreParameters::clone() {
	$useLocalCurrentObjectStackCache();
	try {
		return $of($CertStoreParameters::clone());
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$throwNew($InternalError, $(e->toString()), e);
	}
	$shouldNotReachHere();
}

$String* CollectionCertStoreParameters::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("CollectionCertStoreParameters: [\n"_s);
	sb->append($$str({"  collection: "_s, this->coll, "\n"_s}));
	sb->append("]"_s);
	return sb->toString();
}

CollectionCertStoreParameters::CollectionCertStoreParameters() {
}

$Class* CollectionCertStoreParameters::load$($String* name, bool initialize) {
	$loadClass(CollectionCertStoreParameters, name, initialize, &_CollectionCertStoreParameters_ClassInfo_, allocate$CollectionCertStoreParameters);
	return class$;
}

$Class* CollectionCertStoreParameters::class$ = nullptr;

		} // cert
	} // security
} // java