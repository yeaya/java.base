#include <java/security/cert/PKIXBuilderParameters.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "(Ljava/util/Set;Ljava/security/cert/CertSelector;)V", "(Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;Ljava/security/cert/CertSelector;)V", $PUBLIC, $method(static_cast<void(PKIXBuilderParameters::*)($Set*,$CertSelector*)>(&PKIXBuilderParameters::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Ljava/security/KeyStore;Ljava/security/cert/CertSelector;)V", nullptr, $PUBLIC, $method(static_cast<void(PKIXBuilderParameters::*)($KeyStore*,$CertSelector*)>(&PKIXBuilderParameters::init$)), "java.security.KeyStoreException,java.security.InvalidAlgorithmParameterException"},
	{"getMaxPathLength", "()I", nullptr, $PUBLIC},
	{"setMaxPathLength", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
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