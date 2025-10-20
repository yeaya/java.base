#include <java/security/cert/URICertStoreParameters.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $CertStoreParameters = ::java::security::cert::CertStoreParameters;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _URICertStoreParameters_FieldInfo_[] = {
	{"uri", "Ljava/net/URI;", nullptr, $PRIVATE | $FINAL, $field(URICertStoreParameters, uri)},
	{"myhash", "I", nullptr, $PRIVATE, $field(URICertStoreParameters, myhash)},
	{}
};

$MethodInfo _URICertStoreParameters_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $method(static_cast<void(URICertStoreParameters::*)($URI*)>(&URICertStoreParameters::init$))},
	{"clone", "()Ljava/security/cert/URICertStoreParameters;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getURI", "()Ljava/net/URI;", nullptr, $PUBLIC, $method(static_cast<$URI*(URICertStoreParameters::*)()>(&URICertStoreParameters::getURI))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _URICertStoreParameters_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.cert.URICertStoreParameters",
	"java.lang.Object",
	"java.security.cert.CertStoreParameters",
	_URICertStoreParameters_FieldInfo_,
	_URICertStoreParameters_MethodInfo_
};

$Object* allocate$URICertStoreParameters($Class* clazz) {
	return $of($alloc(URICertStoreParameters));
}

void URICertStoreParameters::init$($URI* uri) {
	this->myhash = -1;
	if (uri == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, uri, uri);
}

$URI* URICertStoreParameters::getURI() {
	return this->uri;
}

URICertStoreParameters* URICertStoreParameters::clone() {
	$useLocalCurrentObjectStackCache();
	try {
		return $new(URICertStoreParameters, this->uri);
	} catch ($NullPointerException&) {
		$var($NullPointerException, e, $catch());
		$throwNew($InternalError, $(e->toString()), e);
	}
	$shouldNotReachHere();
}

int32_t URICertStoreParameters::hashCode() {
	if (this->myhash == -1) {
		this->myhash = $nc(this->uri)->hashCode() * 7;
	}
	return this->myhash;
}

bool URICertStoreParameters::equals(Object$* p) {
	$useLocalCurrentObjectStackCache();
	if ($equals(p, this)) {
		return true;
	}
	$var(URICertStoreParameters, other, nullptr);
	bool var$1 = $instanceOf(URICertStoreParameters, p);
	if (var$1) {
		$assign(other, $cast(URICertStoreParameters, p));
		var$1 = true;
	}
	bool var$0 = var$1;
	return var$0 && $nc(this->uri)->equals($($nc(other)->getURI()));
}

$String* URICertStoreParameters::toString() {
	return $str({"URICertStoreParameters: "_s, $($nc(this->uri)->toString())});
}

URICertStoreParameters::URICertStoreParameters() {
}

$Class* URICertStoreParameters::load$($String* name, bool initialize) {
	$loadClass(URICertStoreParameters, name, initialize, &_URICertStoreParameters_ClassInfo_, allocate$URICertStoreParameters);
	return class$;
}

$Class* URICertStoreParameters::class$ = nullptr;

		} // cert
	} // security
} // java