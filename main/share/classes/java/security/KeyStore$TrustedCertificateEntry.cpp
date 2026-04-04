#include <java/security/KeyStore$TrustedCertificateEntry.h>
#include <java/security/KeyStore$Entry$Attribute.h>
#include <java/security/KeyStore.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Certificate = ::java::security::cert::Certificate;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

namespace java {
	namespace security {

void KeyStore$TrustedCertificateEntry::init$($Certificate* trustedCert) {
	if (trustedCert == nullptr) {
		$throwNew($NullPointerException, "invalid null input"_s);
	}
	$set(this, cert, trustedCert);
	$set(this, attributes, $Collections::emptySet());
}

void KeyStore$TrustedCertificateEntry::init$($Certificate* trustedCert, $Set* attributes) {
	if (trustedCert == nullptr || attributes == nullptr) {
		$throwNew($NullPointerException, "invalid null input"_s);
	}
	$set(this, cert, trustedCert);
	$set(this, attributes, $Collections::unmodifiableSet($$new($HashSet, attributes)));
}

$Certificate* KeyStore$TrustedCertificateEntry::getTrustedCertificate() {
	return this->cert;
}

$Set* KeyStore$TrustedCertificateEntry::getAttributes() {
	return this->attributes;
}

$String* KeyStore$TrustedCertificateEntry::toString() {
	return $str({"Trusted certificate entry:\r\n"_s, $($nc(this->cert)->toString())});
}

KeyStore$TrustedCertificateEntry::KeyStore$TrustedCertificateEntry() {
}

$Class* KeyStore$TrustedCertificateEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cert", "Ljava/security/cert/Certificate;", nullptr, $PRIVATE | $FINAL, $field(KeyStore$TrustedCertificateEntry, cert)},
		{"attributes", "Ljava/util/Set;", "Ljava/util/Set<Ljava/security/KeyStore$Entry$Attribute;>;", $PRIVATE | $FINAL, $field(KeyStore$TrustedCertificateEntry, attributes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/cert/Certificate;)V", nullptr, $PUBLIC, $method(KeyStore$TrustedCertificateEntry, init$, void, $Certificate*)},
		{"<init>", "(Ljava/security/cert/Certificate;Ljava/util/Set;)V", "(Ljava/security/cert/Certificate;Ljava/util/Set<Ljava/security/KeyStore$Entry$Attribute;>;)V", $PUBLIC, $method(KeyStore$TrustedCertificateEntry, init$, void, $Certificate*, $Set*)},
		{"getAttributes", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/security/KeyStore$Entry$Attribute;>;", $PUBLIC, $virtualMethod(KeyStore$TrustedCertificateEntry, getAttributes, $Set*)},
		{"getTrustedCertificate", "()Ljava/security/cert/Certificate;", nullptr, $PUBLIC, $method(KeyStore$TrustedCertificateEntry, getTrustedCertificate, $Certificate*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyStore$TrustedCertificateEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.KeyStore$TrustedCertificateEntry", "java.security.KeyStore", "TrustedCertificateEntry", $PUBLIC | $STATIC | $FINAL},
		{"java.security.KeyStore$Entry", "java.security.KeyStore", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.security.KeyStore$TrustedCertificateEntry",
		"java.lang.Object",
		"java.security.KeyStore$Entry",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.KeyStore"
	};
	$loadClass(KeyStore$TrustedCertificateEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStore$TrustedCertificateEntry);
	});
	return class$;
}

$Class* KeyStore$TrustedCertificateEntry::class$ = nullptr;

	} // security
} // java