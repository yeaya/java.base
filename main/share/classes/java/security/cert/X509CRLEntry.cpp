#include <java/security/cert/X509CRLEntry.h>

#include <java/math/BigInteger.h>
#include <java/security/cert/CRLException.h>
#include <java/security/cert/CRLReason.h>
#include <java/security/cert/X509Extension.h>
#include <java/util/Date.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/x509/X509CRLEntryImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $CRLException = ::java::security::cert::CRLException;
using $CRLReason = ::java::security::cert::CRLReason;
using $X509Extension = ::java::security::cert::X509Extension;
using $Date = ::java::util::Date;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $X509CRLEntryImpl = ::sun::security::x509::X509CRLEntryImpl;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _X509CRLEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X509CRLEntry::*)()>(&X509CRLEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCertificateIssuer", "()Ljavax/security/auth/x500/X500Principal;", nullptr, $PUBLIC},
	{"getEncoded", "()[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CRLException"},
	{"getRevocationDate", "()Ljava/util/Date;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRevocationReason", "()Ljava/security/cert/CRLReason;", nullptr, $PUBLIC},
	{"getSerialNumber", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"hasExtensions", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _X509CRLEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.cert.X509CRLEntry",
	"java.lang.Object",
	"java.security.cert.X509Extension",
	nullptr,
	_X509CRLEntry_MethodInfo_
};

$Object* allocate$X509CRLEntry($Class* clazz) {
	return $of($alloc(X509CRLEntry));
}

$String* X509CRLEntry::toString() {
	 return this->$X509Extension::toString();
}

void X509CRLEntry::init$() {
}

bool X509CRLEntry::equals(Object$* other) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, other)) {
		return true;
	}
	if (!($instanceOf(X509CRLEntry, other))) {
		return false;
	}
	try {
		$var($bytes, thisCRLEntry, this->getEncoded());
		$var($bytes, otherCRLEntry, $nc(($cast(X509CRLEntry, other)))->getEncoded());
		if ($nc(thisCRLEntry)->length != $nc(otherCRLEntry)->length) {
			return false;
		}
		for (int32_t i = 0; i < $nc(thisCRLEntry)->length; ++i) {
			if (thisCRLEntry->get(i) != $nc(otherCRLEntry)->get(i)) {
				return false;
			}
		}
	} catch ($CRLException& ce) {
		return false;
	}
	return true;
}

int32_t X509CRLEntry::hashCode() {
	int32_t retval = 0;
	try {
		$var($bytes, entryData, this->getEncoded());
		for (int32_t i = 1; i < $nc(entryData)->length; ++i) {
			retval += entryData->get(i) * i;
		}
	} catch ($CRLException& ce) {
		return (retval);
	}
	return (retval);
}

$X500Principal* X509CRLEntry::getCertificateIssuer() {
	return nullptr;
}

$CRLReason* X509CRLEntry::getRevocationReason() {
	if (!hasExtensions()) {
		return nullptr;
	}
	return $X509CRLEntryImpl::getRevocationReason(this);
}

X509CRLEntry::X509CRLEntry() {
}

$Class* X509CRLEntry::load$($String* name, bool initialize) {
	$loadClass(X509CRLEntry, name, initialize, &_X509CRLEntry_ClassInfo_, allocate$X509CRLEntry);
	return class$;
}

$Class* X509CRLEntry::class$ = nullptr;

		} // cert
	} // security
} // java