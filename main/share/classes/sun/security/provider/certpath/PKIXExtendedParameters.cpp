#include <sun/security/provider/certpath/PKIXExtendedParameters.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Timestamp.h>
#include <java/security/cert/CertSelector.h>
#include <java/security/cert/CertStore.h>
#include <java/security/cert/PKIXBuilderParameters.h>
#include <java/security/cert/PKIXCertPathChecker.h>
#include <java/security/cert/PKIXParameters.h>
#include <java/util/Date.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Timestamp = ::java::security::Timestamp;
using $CertSelector = ::java::security::cert::CertSelector;
using $CertStore = ::java::security::cert::CertStore;
using $PKIXBuilderParameters = ::java::security::cert::PKIXBuilderParameters;
using $PKIXCertPathChecker = ::java::security::cert::PKIXCertPathChecker;
using $PKIXParameters = ::java::security::cert::PKIXParameters;
using $Date = ::java::util::Date;
using $List = ::java::util::List;
using $Set = ::java::util::Set;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _PKIXExtendedParameters_FieldInfo_[] = {
	{"p", "Ljava/security/cert/PKIXBuilderParameters;", nullptr, $PRIVATE | $FINAL, $field(PKIXExtendedParameters, p)},
	{"jarTimestamp", "Ljava/security/Timestamp;", nullptr, $PRIVATE, $field(PKIXExtendedParameters, jarTimestamp)},
	{"variant", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PKIXExtendedParameters, variant)},
	{}
};

$MethodInfo _PKIXExtendedParameters_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/PKIXBuilderParameters;Ljava/security/Timestamp;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PKIXExtendedParameters::*)($PKIXBuilderParameters*,$Timestamp*,$String*)>(&PKIXExtendedParameters::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"addCertPathChecker", "(Ljava/security/cert/PKIXCertPathChecker;)V", nullptr, $PUBLIC},
	{"addCertStore", "(Ljava/security/cert/CertStore;)V", nullptr, $PUBLIC},
	{"getCertPathCheckers", "()Ljava/util/List;", "()Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;", $PUBLIC},
	{"getCertStores", "()Ljava/util/List;", "()Ljava/util/List<Ljava/security/cert/CertStore;>;", $PUBLIC},
	{"getDate", "()Ljava/util/Date;", nullptr, $PUBLIC},
	{"getInitialPolicies", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"getMaxPathLength", "()I", nullptr, $PUBLIC},
	{"getPolicyQualifiersRejected", "()Z", nullptr, $PUBLIC},
	{"getSigProvider", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTargetCertConstraints", "()Ljava/security/cert/CertSelector;", nullptr, $PUBLIC},
	{"getTimestamp", "()Ljava/security/Timestamp;", nullptr, $PUBLIC},
	{"getTrustAnchors", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;", $PUBLIC},
	{"getVariant", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isAnyPolicyInhibited", "()Z", nullptr, $PUBLIC},
	{"isExplicitPolicyRequired", "()Z", nullptr, $PUBLIC},
	{"isPolicyMappingInhibited", "()Z", nullptr, $PUBLIC},
	{"isRevocationEnabled", "()Z", nullptr, $PUBLIC},
	{"setAnyPolicyInhibited", "(Z)V", nullptr, $PUBLIC},
	{"setCertPathCheckers", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;)V", $PUBLIC},
	{"setCertStores", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/security/cert/CertStore;>;)V", $PUBLIC},
	{"setDate", "(Ljava/util/Date;)V", nullptr, $PUBLIC},
	{"setExplicitPolicyRequired", "(Z)V", nullptr, $PUBLIC},
	{"setInitialPolicies", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC},
	{"setMaxPathLength", "(I)V", nullptr, $PUBLIC},
	{"setPolicyMappingInhibited", "(Z)V", nullptr, $PUBLIC},
	{"setPolicyQualifiersRejected", "(Z)V", nullptr, $PUBLIC},
	{"setRevocationEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setSigProvider", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setTargetCertConstraints", "(Ljava/security/cert/CertSelector;)V", nullptr, $PUBLIC},
	{"setTimestamp", "(Ljava/security/Timestamp;)V", nullptr, $PUBLIC},
	{"setTrustAnchors", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;)V", $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PKIXExtendedParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.certpath.PKIXExtendedParameters",
	"java.security.cert.PKIXBuilderParameters",
	nullptr,
	_PKIXExtendedParameters_FieldInfo_,
	_PKIXExtendedParameters_MethodInfo_
};

$Object* allocate$PKIXExtendedParameters($Class* clazz) {
	return $of($alloc(PKIXExtendedParameters));
}

void PKIXExtendedParameters::init$($PKIXBuilderParameters* params, $Timestamp* timestamp, $String* variant) {
	$PKIXBuilderParameters::init$($($nc(params)->getTrustAnchors()), ($CertSelector*)nullptr);
	$set(this, p, params);
	$set(this, jarTimestamp, timestamp);
	$set(this, variant, variant);
}

$Timestamp* PKIXExtendedParameters::getTimestamp() {
	return this->jarTimestamp;
}

void PKIXExtendedParameters::setTimestamp($Timestamp* t) {
	$set(this, jarTimestamp, t);
}

$String* PKIXExtendedParameters::getVariant() {
	return this->variant;
}

void PKIXExtendedParameters::setDate($Date* d) {
	$nc(this->p)->setDate(d);
}

void PKIXExtendedParameters::addCertPathChecker($PKIXCertPathChecker* c) {
	$nc(this->p)->addCertPathChecker(c);
}

void PKIXExtendedParameters::setMaxPathLength(int32_t maxPathLength) {
	$nc(this->p)->setMaxPathLength(maxPathLength);
}

int32_t PKIXExtendedParameters::getMaxPathLength() {
	return $nc(this->p)->getMaxPathLength();
}

$String* PKIXExtendedParameters::toString() {
	return $nc(this->p)->toString();
}

$Set* PKIXExtendedParameters::getTrustAnchors() {
	return $nc(this->p)->getTrustAnchors();
}

void PKIXExtendedParameters::setTrustAnchors($Set* trustAnchors) {
	if (this->p == nullptr) {
		return;
	}
	$nc(this->p)->setTrustAnchors(trustAnchors);
}

$Set* PKIXExtendedParameters::getInitialPolicies() {
	return $nc(this->p)->getInitialPolicies();
}

void PKIXExtendedParameters::setInitialPolicies($Set* initialPolicies) {
	$nc(this->p)->setInitialPolicies(initialPolicies);
}

void PKIXExtendedParameters::setCertStores($List* stores) {
	$nc(this->p)->setCertStores(stores);
}

void PKIXExtendedParameters::addCertStore($CertStore* store) {
	$nc(this->p)->addCertStore(store);
}

$List* PKIXExtendedParameters::getCertStores() {
	return $nc(this->p)->getCertStores();
}

void PKIXExtendedParameters::setRevocationEnabled(bool val) {
	$nc(this->p)->setRevocationEnabled(val);
}

bool PKIXExtendedParameters::isRevocationEnabled() {
	return $nc(this->p)->isRevocationEnabled();
}

void PKIXExtendedParameters::setExplicitPolicyRequired(bool val) {
	$nc(this->p)->setExplicitPolicyRequired(val);
}

bool PKIXExtendedParameters::isExplicitPolicyRequired() {
	return $nc(this->p)->isExplicitPolicyRequired();
}

void PKIXExtendedParameters::setPolicyMappingInhibited(bool val) {
	$nc(this->p)->setPolicyMappingInhibited(val);
}

bool PKIXExtendedParameters::isPolicyMappingInhibited() {
	return $nc(this->p)->isPolicyMappingInhibited();
}

void PKIXExtendedParameters::setAnyPolicyInhibited(bool val) {
	$nc(this->p)->setAnyPolicyInhibited(val);
}

bool PKIXExtendedParameters::isAnyPolicyInhibited() {
	return $nc(this->p)->isAnyPolicyInhibited();
}

void PKIXExtendedParameters::setPolicyQualifiersRejected(bool qualifiersRejected) {
	$nc(this->p)->setPolicyQualifiersRejected(qualifiersRejected);
}

bool PKIXExtendedParameters::getPolicyQualifiersRejected() {
	return $nc(this->p)->getPolicyQualifiersRejected();
}

$Date* PKIXExtendedParameters::getDate() {
	return $nc(this->p)->getDate();
}

void PKIXExtendedParameters::setCertPathCheckers($List* checkers) {
	$nc(this->p)->setCertPathCheckers(checkers);
}

$List* PKIXExtendedParameters::getCertPathCheckers() {
	return $nc(this->p)->getCertPathCheckers();
}

$String* PKIXExtendedParameters::getSigProvider() {
	return $nc(this->p)->getSigProvider();
}

void PKIXExtendedParameters::setSigProvider($String* sigProvider) {
	$nc(this->p)->setSigProvider(sigProvider);
}

$CertSelector* PKIXExtendedParameters::getTargetCertConstraints() {
	return $nc(this->p)->getTargetCertConstraints();
}

void PKIXExtendedParameters::setTargetCertConstraints($CertSelector* selector) {
	if (this->p == nullptr) {
		return;
	}
	$nc(this->p)->setTargetCertConstraints(selector);
}

PKIXExtendedParameters::PKIXExtendedParameters() {
}

$Class* PKIXExtendedParameters::load$($String* name, bool initialize) {
	$loadClass(PKIXExtendedParameters, name, initialize, &_PKIXExtendedParameters_ClassInfo_, allocate$PKIXExtendedParameters);
	return class$;
}

$Class* PKIXExtendedParameters::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun