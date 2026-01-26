#include <sun/security/provider/certpath/OCSPNonceExtension.h>

#include <java/security/SecureRandom.h>
#include <java/util/Objects.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef EXTENSION_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;
using $Objects = ::java::util::Objects;
using $Debug = ::sun::security::util::Debug;
using $DerValue = ::sun::security::util::DerValue;
using $Extension = ::sun::security::x509::Extension;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _OCSPNonceExtension_FieldInfo_[] = {
	{"EXTENSION_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OCSPNonceExtension, EXTENSION_NAME)},
	{"nonceData", "[B", nullptr, $PRIVATE, $field(OCSPNonceExtension, nonceData)},
	{}
};

$MethodInfo _OCSPNonceExtension_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(OCSPNonceExtension, init$, void, int32_t), "java.io.IOException"},
	{"<init>", "(ZI)V", nullptr, $PUBLIC, $method(OCSPNonceExtension, init$, void, bool, int32_t), "java.io.IOException"},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(OCSPNonceExtension, init$, void, $bytes*), "java.io.IOException"},
	{"<init>", "(Z[B)V", nullptr, $PUBLIC, $method(OCSPNonceExtension, init$, void, bool, $bytes*), "java.io.IOException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(OCSPNonceExtension, getName, $String*)},
	{"getNonceValue", "()[B", nullptr, $PUBLIC, $method(OCSPNonceExtension, getNonceValue, $bytes*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OCSPNonceExtension, toString, $String*)},
	{}
};

$ClassInfo _OCSPNonceExtension_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.certpath.OCSPNonceExtension",
	"sun.security.x509.Extension",
	nullptr,
	_OCSPNonceExtension_FieldInfo_,
	_OCSPNonceExtension_MethodInfo_
};

$Object* allocate$OCSPNonceExtension($Class* clazz) {
	return $of($alloc(OCSPNonceExtension));
}

$String* OCSPNonceExtension::EXTENSION_NAME = nullptr;

void OCSPNonceExtension::init$(int32_t length) {
	OCSPNonceExtension::init$(false, length);
}

void OCSPNonceExtension::init$(bool isCritical, int32_t length) {
	$useLocalCurrentObjectStackCache();
	$Extension::init$();
	$set(this, nonceData, nullptr);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::OCSPNonce_Id);
	this->critical = isCritical;
	if (length > 0 && length <= 32) {
		$var($SecureRandom, rng, $new($SecureRandom));
		$set(this, nonceData, $new($bytes, length));
		rng->nextBytes(this->nonceData);
		$set(this, extensionValue, $$new($DerValue, $DerValue::tag_OctetString, this->nonceData)->toByteArray());
	} else {
		$throwNew($IllegalArgumentException, "Length of nonce must be at least 1 byte and can be up to 32 bytes"_s);
	}
}

void OCSPNonceExtension::init$($bytes* incomingNonce) {
	OCSPNonceExtension::init$(false, incomingNonce);
}

void OCSPNonceExtension::init$(bool isCritical, $bytes* incomingNonce) {
	$Extension::init$();
	$set(this, nonceData, nullptr);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::OCSPNonce_Id);
	this->critical = isCritical;
	$Objects::requireNonNull($of(incomingNonce), "Nonce data must be non-null"_s);
	if ($nc(incomingNonce)->length > 0 && incomingNonce->length <= 32) {
		$set(this, nonceData, $cast($bytes, incomingNonce->clone()));
		$set(this, extensionValue, $$new($DerValue, $DerValue::tag_OctetString, this->nonceData)->toByteArray());
	} else {
		$throwNew($IllegalArgumentException, "Nonce data must be at least 1 byte and can be up to 32 bytes in length"_s);
	}
}

$bytes* OCSPNonceExtension::getNonceValue() {
	return $cast($bytes, $nc(this->nonceData)->clone());
}

$String* OCSPNonceExtension::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Extension::toString()))->append(OCSPNonceExtension::EXTENSION_NAME)->append(": "_s);
	sb->append((this->nonceData == nullptr) ? ""_s : $($Debug::toString(this->nonceData)));
	sb->append("\n"_s);
	return sb->toString();
}

$String* OCSPNonceExtension::getName() {
	return OCSPNonceExtension::EXTENSION_NAME;
}

OCSPNonceExtension::OCSPNonceExtension() {
}

void clinit$OCSPNonceExtension($Class* class$) {
	$assignStatic(OCSPNonceExtension::EXTENSION_NAME, "OCSPNonce"_s);
}

$Class* OCSPNonceExtension::load$($String* name, bool initialize) {
	$loadClass(OCSPNonceExtension, name, initialize, &_OCSPNonceExtension_ClassInfo_, clinit$OCSPNonceExtension, allocate$OCSPNonceExtension);
	return class$;
}

$Class* OCSPNonceExtension::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun