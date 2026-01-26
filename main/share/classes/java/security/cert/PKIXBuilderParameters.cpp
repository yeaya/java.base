#include <java/security/cert/PKIXBuilderParameters.h>

#include <java/security/InvalidParameterException.h>
#include <java/security/KeyStore.h>
#include <java/security/cert/CertSelector.h>
#include <java/security/cert/PKIXParameters.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $KeyStore = ::java::security::KeyStore;
using $CertSelector = ::java::security::cert::CertSelector;
using $PKIXParameters = ::java::security::cert::PKIXParameters;
using $Set = ::java::util::Set;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _PKIXBuilderParameters_FieldInfo_[] = {
	{"maxPathLength", "I", nullptr, $PRIVATE, $field(PKIXBuilderParameters, maxPathLength)},
	{}
};

$MethodInfo _PKIXBuilderParameters_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;Ljava/security/cert/CertSelector;)V", "(Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;Ljava/security/cert/CertSelector;)V", $PUBLIC, $method(PKIXBuilderParameters, init$, void, $Set*, $CertSelector*), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Ljava/security/KeyStore;Ljava/security/cert/CertSelector;)V", nullptr, $PUBLIC, $method(PKIXBuilderParameters, init$, void, $KeyStore*, $CertSelector*), "java.security.KeyStoreException,java.security.InvalidAlgorithmParameterException"},
	{"getMaxPathLength", "()I", nullptr, $PUBLIC, $virtualMethod(PKIXBuilderParameters, getMaxPathLength, int32_t)},
	{"setMaxPathLength", "(I)V", nullptr, $PUBLIC, $virtualMethod(PKIXBuilderParameters, setMaxPathLength, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PKIXBuilderParameters, toString, $String*)},
	{}
};

$ClassInfo _PKIXBuilderParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.PKIXBuilderParameters",
	"java.security.cert.PKIXParameters",
	nullptr,
	_PKIXBuilderParameters_FieldInfo_,
	_PKIXBuilderParameters_MethodInfo_
};

$Object* allocate$PKIXBuilderParameters($Class* clazz) {
	return $of($alloc(PKIXBuilderParameters));
}

void PKIXBuilderParameters::init$($Set* trustAnchors, $CertSelector* targetConstraints) {
	$PKIXParameters::init$(trustAnchors);
	this->maxPathLength = 5;
	setTargetCertConstraints(targetConstraints);
}

void PKIXBuilderParameters::init$($KeyStore* keystore, $CertSelector* targetConstraints) {
	$PKIXParameters::init$(keystore);
	this->maxPathLength = 5;
	setTargetCertConstraints(targetConstraints);
}

void PKIXBuilderParameters::setMaxPathLength(int32_t maxPathLength) {
	if (maxPathLength < -1) {
		$throwNew($InvalidParameterException, "the maximum path length parameter can not be less than -1"_s);
	}
	this->maxPathLength = maxPathLength;
}

int32_t PKIXBuilderParameters::getMaxPathLength() {
	return this->maxPathLength;
}

$String* PKIXBuilderParameters::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("[\n"_s);
	sb->append($($PKIXParameters::toString()));
	sb->append($$str({"  Maximum Path Length: "_s, $$str(this->maxPathLength), "\n"_s}));
	sb->append("]\n"_s);
	return sb->toString();
}

PKIXBuilderParameters::PKIXBuilderParameters() {
}

$Class* PKIXBuilderParameters::load$($String* name, bool initialize) {
	$loadClass(PKIXBuilderParameters, name, initialize, &_PKIXBuilderParameters_ClassInfo_, allocate$PKIXBuilderParameters);
	return class$;
}

$Class* PKIXBuilderParameters::class$ = nullptr;

		} // cert
	} // security
} // java