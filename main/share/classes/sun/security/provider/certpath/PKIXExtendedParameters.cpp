#include <sun/security/provider/certpath/PKIXExtendedParameters.h>
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
using $Date = ::java::util::Date;
using $List = ::java::util::List;
using $Set = ::java::util::Set;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

void PKIXExtendedParameters::init$($PKIXBuilderParameters* params, $Timestamp* timestamp, $String* variant) {
	$PKIXBuilderParameters::init$($($nc(params)->getTrustAnchors()), nullptr);
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
	this->p->setDate(d);
}

void PKIXExtendedParameters::addCertPathChecker($PKIXCertPathChecker* c) {
	this->p->addCertPathChecker(c);
}

void PKIXExtendedParameters::setMaxPathLength(int32_t maxPathLength) {
	this->p->setMaxPathLength(maxPathLength);
}

int32_t PKIXExtendedParameters::getMaxPathLength() {
	return this->p->getMaxPathLength();
}

$String* PKIXExtendedParameters::toString() {
	return this->p->toString();
}

$Set* PKIXExtendedParameters::getTrustAnchors() {
	return this->p->getTrustAnchors();
}

void PKIXExtendedParameters::setTrustAnchors($Set* trustAnchors) {
	if (this->p == nullptr) {
		return;
	}
	this->p->setTrustAnchors(trustAnchors);
}

$Set* PKIXExtendedParameters::getInitialPolicies() {
	return this->p->getInitialPolicies();
}

void PKIXExtendedParameters::setInitialPolicies($Set* initialPolicies) {
	this->p->setInitialPolicies(initialPolicies);
}

void PKIXExtendedParameters::setCertStores($List* stores) {
	this->p->setCertStores(stores);
}

void PKIXExtendedParameters::addCertStore($CertStore* store) {
	this->p->addCertStore(store);
}

$List* PKIXExtendedParameters::getCertStores() {
	return this->p->getCertStores();
}

void PKIXExtendedParameters::setRevocationEnabled(bool val) {
	this->p->setRevocationEnabled(val);
}

bool PKIXExtendedParameters::isRevocationEnabled() {
	return this->p->isRevocationEnabled();
}

void PKIXExtendedParameters::setExplicitPolicyRequired(bool val) {
	this->p->setExplicitPolicyRequired(val);
}

bool PKIXExtendedParameters::isExplicitPolicyRequired() {
	return this->p->isExplicitPolicyRequired();
}

void PKIXExtendedParameters::setPolicyMappingInhibited(bool val) {
	this->p->setPolicyMappingInhibited(val);
}

bool PKIXExtendedParameters::isPolicyMappingInhibited() {
	return this->p->isPolicyMappingInhibited();
}

void PKIXExtendedParameters::setAnyPolicyInhibited(bool val) {
	this->p->setAnyPolicyInhibited(val);
}

bool PKIXExtendedParameters::isAnyPolicyInhibited() {
	return this->p->isAnyPolicyInhibited();
}

void PKIXExtendedParameters::setPolicyQualifiersRejected(bool qualifiersRejected) {
	this->p->setPolicyQualifiersRejected(qualifiersRejected);
}

bool PKIXExtendedParameters::getPolicyQualifiersRejected() {
	return this->p->getPolicyQualifiersRejected();
}

$Date* PKIXExtendedParameters::getDate() {
	return this->p->getDate();
}

void PKIXExtendedParameters::setCertPathCheckers($List* checkers) {
	this->p->setCertPathCheckers(checkers);
}

$List* PKIXExtendedParameters::getCertPathCheckers() {
	return this->p->getCertPathCheckers();
}

$String* PKIXExtendedParameters::getSigProvider() {
	return this->p->getSigProvider();
}

void PKIXExtendedParameters::setSigProvider($String* sigProvider) {
	this->p->setSigProvider(sigProvider);
}

$CertSelector* PKIXExtendedParameters::getTargetCertConstraints() {
	return this->p->getTargetCertConstraints();
}

void PKIXExtendedParameters::setTargetCertConstraints($CertSelector* selector) {
	if (this->p == nullptr) {
		return;
	}
	this->p->setTargetCertConstraints(selector);
}

PKIXExtendedParameters::PKIXExtendedParameters() {
}

$Class* PKIXExtendedParameters::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"p", "Ljava/security/cert/PKIXBuilderParameters;", nullptr, $PRIVATE | $FINAL, $field(PKIXExtendedParameters, p)},
		{"jarTimestamp", "Ljava/security/Timestamp;", nullptr, $PRIVATE, $field(PKIXExtendedParameters, jarTimestamp)},
		{"variant", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PKIXExtendedParameters, variant)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/cert/PKIXBuilderParameters;Ljava/security/Timestamp;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PKIXExtendedParameters, init$, void, $PKIXBuilderParameters*, $Timestamp*, $String*), "java.security.InvalidAlgorithmParameterException"},
		{"addCertPathChecker", "(Ljava/security/cert/PKIXCertPathChecker;)V", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, addCertPathChecker, void, $PKIXCertPathChecker*)},
		{"addCertStore", "(Ljava/security/cert/CertStore;)V", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, addCertStore, void, $CertStore*)},
		{"getCertPathCheckers", "()Ljava/util/List;", "()Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;", $PUBLIC, $virtualMethod(PKIXExtendedParameters, getCertPathCheckers, $List*)},
		{"getCertStores", "()Ljava/util/List;", "()Ljava/util/List<Ljava/security/cert/CertStore;>;", $PUBLIC, $virtualMethod(PKIXExtendedParameters, getCertStores, $List*)},
		{"getDate", "()Ljava/util/Date;", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, getDate, $Date*)},
		{"getInitialPolicies", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(PKIXExtendedParameters, getInitialPolicies, $Set*)},
		{"getMaxPathLength", "()I", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, getMaxPathLength, int32_t)},
		{"getPolicyQualifiersRejected", "()Z", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, getPolicyQualifiersRejected, bool)},
		{"getSigProvider", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, getSigProvider, $String*)},
		{"getTargetCertConstraints", "()Ljava/security/cert/CertSelector;", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, getTargetCertConstraints, $CertSelector*)},
		{"getTimestamp", "()Ljava/security/Timestamp;", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, getTimestamp, $Timestamp*)},
		{"getTrustAnchors", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;", $PUBLIC, $virtualMethod(PKIXExtendedParameters, getTrustAnchors, $Set*)},
		{"getVariant", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, getVariant, $String*)},
		{"isAnyPolicyInhibited", "()Z", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, isAnyPolicyInhibited, bool)},
		{"isExplicitPolicyRequired", "()Z", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, isExplicitPolicyRequired, bool)},
		{"isPolicyMappingInhibited", "()Z", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, isPolicyMappingInhibited, bool)},
		{"isRevocationEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, isRevocationEnabled, bool)},
		{"setAnyPolicyInhibited", "(Z)V", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, setAnyPolicyInhibited, void, bool)},
		{"setCertPathCheckers", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;)V", $PUBLIC, $virtualMethod(PKIXExtendedParameters, setCertPathCheckers, void, $List*)},
		{"setCertStores", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/security/cert/CertStore;>;)V", $PUBLIC, $virtualMethod(PKIXExtendedParameters, setCertStores, void, $List*)},
		{"setDate", "(Ljava/util/Date;)V", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, setDate, void, $Date*)},
		{"setExplicitPolicyRequired", "(Z)V", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, setExplicitPolicyRequired, void, bool)},
		{"setInitialPolicies", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(PKIXExtendedParameters, setInitialPolicies, void, $Set*)},
		{"setMaxPathLength", "(I)V", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, setMaxPathLength, void, int32_t)},
		{"setPolicyMappingInhibited", "(Z)V", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, setPolicyMappingInhibited, void, bool)},
		{"setPolicyQualifiersRejected", "(Z)V", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, setPolicyQualifiersRejected, void, bool)},
		{"setRevocationEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, setRevocationEnabled, void, bool)},
		{"setSigProvider", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, setSigProvider, void, $String*)},
		{"setTargetCertConstraints", "(Ljava/security/cert/CertSelector;)V", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, setTargetCertConstraints, void, $CertSelector*)},
		{"setTimestamp", "(Ljava/security/Timestamp;)V", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, setTimestamp, void, $Timestamp*)},
		{"setTrustAnchors", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;)V", $PUBLIC, $virtualMethod(PKIXExtendedParameters, setTrustAnchors, void, $Set*), "java.security.InvalidAlgorithmParameterException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PKIXExtendedParameters, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.provider.certpath.PKIXExtendedParameters",
		"java.security.cert.PKIXBuilderParameters",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PKIXExtendedParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PKIXExtendedParameters);
	});
	return class$;
}

$Class* PKIXExtendedParameters::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun