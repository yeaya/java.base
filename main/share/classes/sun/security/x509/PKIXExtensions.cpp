#include <sun/security/x509/PKIXExtensions.h>

#include <sun/security/util/KnownOIDs.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _PKIXExtensions_FieldInfo_[] = {
	{"AuthorityKey_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, AuthorityKey_Id)},
	{"SubjectKey_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, SubjectKey_Id)},
	{"KeyUsage_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, KeyUsage_Id)},
	{"PrivateKeyUsage_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, PrivateKeyUsage_Id)},
	{"CertificatePolicies_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, CertificatePolicies_Id)},
	{"PolicyMappings_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, PolicyMappings_Id)},
	{"SubjectAlternativeName_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, SubjectAlternativeName_Id)},
	{"IssuerAlternativeName_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, IssuerAlternativeName_Id)},
	{"SubjectDirectoryAttributes_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, SubjectDirectoryAttributes_Id)},
	{"BasicConstraints_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, BasicConstraints_Id)},
	{"NameConstraints_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, NameConstraints_Id)},
	{"PolicyConstraints_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, PolicyConstraints_Id)},
	{"CRLDistributionPoints_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, CRLDistributionPoints_Id)},
	{"CRLNumber_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, CRLNumber_Id)},
	{"IssuingDistributionPoint_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, IssuingDistributionPoint_Id)},
	{"DeltaCRLIndicator_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, DeltaCRLIndicator_Id)},
	{"ReasonCode_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, ReasonCode_Id)},
	{"HoldInstructionCode_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, HoldInstructionCode_Id)},
	{"InvalidityDate_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, InvalidityDate_Id)},
	{"ExtendedKeyUsage_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, ExtendedKeyUsage_Id)},
	{"InhibitAnyPolicy_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, InhibitAnyPolicy_Id)},
	{"CertificateIssuer_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, CertificateIssuer_Id)},
	{"AuthInfoAccess_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, AuthInfoAccess_Id)},
	{"SubjectInfoAccess_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, SubjectInfoAccess_Id)},
	{"FreshestCRL_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, FreshestCRL_Id)},
	{"OCSPNoCheck_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, OCSPNoCheck_Id)},
	{"OCSPNonce_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PKIXExtensions, OCSPNonce_Id)},
	{}
};

$MethodInfo _PKIXExtensions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PKIXExtensions::*)()>(&PKIXExtensions::init$))},
	{}
};

$ClassInfo _PKIXExtensions_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.PKIXExtensions",
	"java.lang.Object",
	nullptr,
	_PKIXExtensions_FieldInfo_,
	_PKIXExtensions_MethodInfo_
};

$Object* allocate$PKIXExtensions($Class* clazz) {
	return $of($alloc(PKIXExtensions));
}

$ObjectIdentifier* PKIXExtensions::AuthorityKey_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::SubjectKey_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::KeyUsage_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::PrivateKeyUsage_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::CertificatePolicies_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::PolicyMappings_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::SubjectAlternativeName_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::IssuerAlternativeName_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::SubjectDirectoryAttributes_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::BasicConstraints_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::NameConstraints_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::PolicyConstraints_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::CRLDistributionPoints_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::CRLNumber_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::IssuingDistributionPoint_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::DeltaCRLIndicator_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::ReasonCode_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::HoldInstructionCode_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::InvalidityDate_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::ExtendedKeyUsage_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::InhibitAnyPolicy_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::CertificateIssuer_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::AuthInfoAccess_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::SubjectInfoAccess_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::FreshestCRL_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::OCSPNoCheck_Id = nullptr;
$ObjectIdentifier* PKIXExtensions::OCSPNonce_Id = nullptr;

void PKIXExtensions::init$() {
}

void clinit$PKIXExtensions($Class* class$) {
	$init($KnownOIDs);
	$assignStatic(PKIXExtensions::AuthorityKey_Id, $ObjectIdentifier::of($KnownOIDs::AuthorityKeyID));
	$assignStatic(PKIXExtensions::SubjectKey_Id, $ObjectIdentifier::of($KnownOIDs::SubjectKeyID));
	$assignStatic(PKIXExtensions::KeyUsage_Id, $ObjectIdentifier::of($KnownOIDs::KeyUsage));
	$assignStatic(PKIXExtensions::PrivateKeyUsage_Id, $ObjectIdentifier::of($KnownOIDs::PrivateKeyUsage));
	$assignStatic(PKIXExtensions::CertificatePolicies_Id, $ObjectIdentifier::of($KnownOIDs::CertificatePolicies));
	$assignStatic(PKIXExtensions::PolicyMappings_Id, $ObjectIdentifier::of($KnownOIDs::PolicyMappings));
	$assignStatic(PKIXExtensions::SubjectAlternativeName_Id, $ObjectIdentifier::of($KnownOIDs::SubjectAlternativeName));
	$assignStatic(PKIXExtensions::IssuerAlternativeName_Id, $ObjectIdentifier::of($KnownOIDs::IssuerAlternativeName));
	$assignStatic(PKIXExtensions::SubjectDirectoryAttributes_Id, $ObjectIdentifier::of($KnownOIDs::SubjectDirectoryAttributes));
	$assignStatic(PKIXExtensions::BasicConstraints_Id, $ObjectIdentifier::of($KnownOIDs::BasicConstraints));
	$assignStatic(PKIXExtensions::NameConstraints_Id, $ObjectIdentifier::of($KnownOIDs::NameConstraints));
	$assignStatic(PKIXExtensions::PolicyConstraints_Id, $ObjectIdentifier::of($KnownOIDs::PolicyConstraints));
	$assignStatic(PKIXExtensions::CRLDistributionPoints_Id, $ObjectIdentifier::of($KnownOIDs::CRLDistributionPoints));
	$assignStatic(PKIXExtensions::CRLNumber_Id, $ObjectIdentifier::of($KnownOIDs::CRLNumber));
	$assignStatic(PKIXExtensions::IssuingDistributionPoint_Id, $ObjectIdentifier::of($KnownOIDs::IssuingDistributionPoint));
	$assignStatic(PKIXExtensions::DeltaCRLIndicator_Id, $ObjectIdentifier::of($KnownOIDs::DeltaCRLIndicator));
	$assignStatic(PKIXExtensions::ReasonCode_Id, $ObjectIdentifier::of($KnownOIDs::ReasonCode));
	$assignStatic(PKIXExtensions::HoldInstructionCode_Id, $ObjectIdentifier::of($KnownOIDs::HoldInstructionCode));
	$assignStatic(PKIXExtensions::InvalidityDate_Id, $ObjectIdentifier::of($KnownOIDs::InvalidityDate));
	$assignStatic(PKIXExtensions::ExtendedKeyUsage_Id, $ObjectIdentifier::of($KnownOIDs::extendedKeyUsage));
	$assignStatic(PKIXExtensions::InhibitAnyPolicy_Id, $ObjectIdentifier::of($KnownOIDs::InhibitAnyPolicy));
	$assignStatic(PKIXExtensions::CertificateIssuer_Id, $ObjectIdentifier::of($KnownOIDs::CertificateIssuer));
	$assignStatic(PKIXExtensions::AuthInfoAccess_Id, $ObjectIdentifier::of($KnownOIDs::AuthInfoAccess));
	$assignStatic(PKIXExtensions::SubjectInfoAccess_Id, $ObjectIdentifier::of($KnownOIDs::SubjectInfoAccess));
	$assignStatic(PKIXExtensions::FreshestCRL_Id, $ObjectIdentifier::of($KnownOIDs::FreshestCRL));
	$assignStatic(PKIXExtensions::OCSPNoCheck_Id, $ObjectIdentifier::of($KnownOIDs::OCSPNoCheck));
	$assignStatic(PKIXExtensions::OCSPNonce_Id, $ObjectIdentifier::of($KnownOIDs::OCSPNonceExt));
}

PKIXExtensions::PKIXExtensions() {
}

$Class* PKIXExtensions::load$($String* name, bool initialize) {
	$loadClass(PKIXExtensions, name, initialize, &_PKIXExtensions_ClassInfo_, clinit$PKIXExtensions, allocate$PKIXExtensions);
	return class$;
}

$Class* PKIXExtensions::class$ = nullptr;

		} // x509
	} // security
} // sun