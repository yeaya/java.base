#include <sun/security/x509/X509CRLImpl$X509IssuerSerial.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/x509/X509CRLImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $X509CRLImpl = ::sun::security::x509::X509CRLImpl;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _X509CRLImpl$X509IssuerSerial_FieldInfo_[] = {
	{"issuer", "Ljavax/security/auth/x500/X500Principal;", nullptr, $FINAL, $field(X509CRLImpl$X509IssuerSerial, issuer)},
	{"serial", "Ljava/math/BigInteger;", nullptr, $FINAL, $field(X509CRLImpl$X509IssuerSerial, serial)},
	{"hashcode", "I", nullptr, $VOLATILE, $field(X509CRLImpl$X509IssuerSerial, hashcode)},
	{}
};

$MethodInfo _X509CRLImpl$X509IssuerSerial_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/x500/X500Principal;Ljava/math/BigInteger;)V", nullptr, 0, $method(static_cast<void(X509CRLImpl$X509IssuerSerial::*)($X500Principal*,$BigInteger*)>(&X509CRLImpl$X509IssuerSerial::init$))},
	{"<init>", "(Ljava/security/cert/X509Certificate;)V", nullptr, 0, $method(static_cast<void(X509CRLImpl$X509IssuerSerial::*)($X509Certificate*)>(&X509CRLImpl$X509IssuerSerial::init$))},
	{"compareTo", "(Lsun/security/x509/X509CRLImpl$X509IssuerSerial;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(X509CRLImpl$X509IssuerSerial::*)(X509CRLImpl$X509IssuerSerial*)>(&X509CRLImpl$X509IssuerSerial::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getIssuer", "()Ljavax/security/auth/x500/X500Principal;", nullptr, 0, $method(static_cast<$X500Principal*(X509CRLImpl$X509IssuerSerial::*)()>(&X509CRLImpl$X509IssuerSerial::getIssuer))},
	{"getSerial", "()Ljava/math/BigInteger;", nullptr, 0, $method(static_cast<$BigInteger*(X509CRLImpl$X509IssuerSerial::*)()>(&X509CRLImpl$X509IssuerSerial::getSerial))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X509CRLImpl$X509IssuerSerial_InnerClassesInfo_[] = {
	{"sun.security.x509.X509CRLImpl$X509IssuerSerial", "sun.security.x509.X509CRLImpl", "X509IssuerSerial", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _X509CRLImpl$X509IssuerSerial_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.x509.X509CRLImpl$X509IssuerSerial",
	"java.lang.Object",
	"java.lang.Comparable",
	_X509CRLImpl$X509IssuerSerial_FieldInfo_,
	_X509CRLImpl$X509IssuerSerial_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lsun/security/x509/X509CRLImpl$X509IssuerSerial;>;",
	nullptr,
	_X509CRLImpl$X509IssuerSerial_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.x509.X509CRLImpl"
};

$Object* allocate$X509CRLImpl$X509IssuerSerial($Class* clazz) {
	return $of($alloc(X509CRLImpl$X509IssuerSerial));
}

void X509CRLImpl$X509IssuerSerial::init$($X500Principal* issuer, $BigInteger* serial) {
	$set(this, issuer, issuer);
	$set(this, serial, serial);
}

void X509CRLImpl$X509IssuerSerial::init$($X509Certificate* cert) {
	$useLocalCurrentObjectStackCache();
	$var($X500Principal, var$0, $nc(cert)->getIssuerX500Principal());
	X509CRLImpl$X509IssuerSerial::init$(var$0, $(cert->getSerialNumber()));
}

$X500Principal* X509CRLImpl$X509IssuerSerial::getIssuer() {
	return this->issuer;
}

$BigInteger* X509CRLImpl$X509IssuerSerial::getSerial() {
	return this->serial;
}

bool X509CRLImpl$X509IssuerSerial::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf(X509CRLImpl$X509IssuerSerial, o))) {
		return false;
	}
	$var(X509CRLImpl$X509IssuerSerial, other, $cast(X509CRLImpl$X509IssuerSerial, o));
	bool var$0 = $nc(this->serial)->equals($($nc(other)->getSerial()));
	if (var$0 && $nc(this->issuer)->equals($($nc(other)->getIssuer()))) {
		return true;
	}
	return false;
}

int32_t X509CRLImpl$X509IssuerSerial::hashCode() {
	int32_t h = this->hashcode;
	if (h == 0) {
		h = 17;
		h = 37 * h + $nc(this->issuer)->hashCode();
		h = 37 * h + $nc(this->serial)->hashCode();
		if (h != 0) {
			this->hashcode = h;
		}
	}
	return h;
}

int32_t X509CRLImpl$X509IssuerSerial::compareTo(X509CRLImpl$X509IssuerSerial* another) {
	$useLocalCurrentObjectStackCache();
	int32_t cissuer = $nc($($nc(this->issuer)->toString()))->compareTo($($nc($nc(another)->issuer)->toString()));
	if (cissuer != 0) {
		return cissuer;
	}
	return $nc(this->serial)->compareTo($nc(another)->serial);
}

int32_t X509CRLImpl$X509IssuerSerial::compareTo(Object$* another) {
	return this->compareTo($cast(X509CRLImpl$X509IssuerSerial, another));
}

X509CRLImpl$X509IssuerSerial::X509CRLImpl$X509IssuerSerial() {
}

$Class* X509CRLImpl$X509IssuerSerial::load$($String* name, bool initialize) {
	$loadClass(X509CRLImpl$X509IssuerSerial, name, initialize, &_X509CRLImpl$X509IssuerSerial_ClassInfo_, allocate$X509CRLImpl$X509IssuerSerial);
	return class$;
}

$Class* X509CRLImpl$X509IssuerSerial::class$ = nullptr;

		} // x509
	} // security
} // sun