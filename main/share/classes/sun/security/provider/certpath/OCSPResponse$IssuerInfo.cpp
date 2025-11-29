#include <sun/security/provider/certpath/OCSPResponse$IssuerInfo.h>

#include <java/security/PublicKey.h>
#include <java/security/cert/TrustAnchor.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/provider/certpath/OCSPResponse.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $PublicKey = ::java::security::PublicKey;
using $TrustAnchor = ::java::security::cert::TrustAnchor;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $X500Principal = ::javax::security::auth::x500::X500Principal;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _OCSPResponse$IssuerInfo_FieldInfo_[] = {
	{"anchor", "Ljava/security/cert/TrustAnchor;", nullptr, $PRIVATE | $FINAL, $field(OCSPResponse$IssuerInfo, anchor)},
	{"certificate", "Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE | $FINAL, $field(OCSPResponse$IssuerInfo, certificate)},
	{"name", "Ljavax/security/auth/x500/X500Principal;", nullptr, $PRIVATE | $FINAL, $field(OCSPResponse$IssuerInfo, name)},
	{"pubKey", "Ljava/security/PublicKey;", nullptr, $PRIVATE | $FINAL, $field(OCSPResponse$IssuerInfo, pubKey)},
	{}
};

$MethodInfo _OCSPResponse$IssuerInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/TrustAnchor;)V", nullptr, 0, $method(static_cast<void(OCSPResponse$IssuerInfo::*)($TrustAnchor*)>(&OCSPResponse$IssuerInfo::init$))},
	{"<init>", "(Ljava/security/cert/X509Certificate;)V", nullptr, 0, $method(static_cast<void(OCSPResponse$IssuerInfo::*)($X509Certificate*)>(&OCSPResponse$IssuerInfo::init$))},
	{"<init>", "(Ljava/security/cert/TrustAnchor;Ljava/security/cert/X509Certificate;)V", nullptr, 0, $method(static_cast<void(OCSPResponse$IssuerInfo::*)($TrustAnchor*,$X509Certificate*)>(&OCSPResponse$IssuerInfo::init$))},
	{"getAnchor", "()Ljava/security/cert/TrustAnchor;", nullptr, 0, $method(static_cast<$TrustAnchor*(OCSPResponse$IssuerInfo::*)()>(&OCSPResponse$IssuerInfo::getAnchor))},
	{"getCertificate", "()Ljava/security/cert/X509Certificate;", nullptr, 0, $method(static_cast<$X509Certificate*(OCSPResponse$IssuerInfo::*)()>(&OCSPResponse$IssuerInfo::getCertificate))},
	{"getName", "()Ljavax/security/auth/x500/X500Principal;", nullptr, 0, $method(static_cast<$X500Principal*(OCSPResponse$IssuerInfo::*)()>(&OCSPResponse$IssuerInfo::getName))},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, 0, $method(static_cast<$PublicKey*(OCSPResponse$IssuerInfo::*)()>(&OCSPResponse$IssuerInfo::getPublicKey))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _OCSPResponse$IssuerInfo_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.OCSPResponse$IssuerInfo", "sun.security.provider.certpath.OCSPResponse", "IssuerInfo", $STATIC | $FINAL},
	{}
};

$ClassInfo _OCSPResponse$IssuerInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.provider.certpath.OCSPResponse$IssuerInfo",
	"java.lang.Object",
	nullptr,
	_OCSPResponse$IssuerInfo_FieldInfo_,
	_OCSPResponse$IssuerInfo_MethodInfo_,
	nullptr,
	nullptr,
	_OCSPResponse$IssuerInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.OCSPResponse"
};

$Object* allocate$OCSPResponse$IssuerInfo($Class* clazz) {
	return $of($alloc(OCSPResponse$IssuerInfo));
}

void OCSPResponse$IssuerInfo::init$($TrustAnchor* anchor) {
	OCSPResponse$IssuerInfo::init$(anchor, (anchor != nullptr) ? $($nc(anchor)->getTrustedCert()) : ($X509Certificate*)nullptr);
}

void OCSPResponse$IssuerInfo::init$($X509Certificate* issuerCert) {
	OCSPResponse$IssuerInfo::init$(nullptr, issuerCert);
}

void OCSPResponse$IssuerInfo::init$($TrustAnchor* anchor, $X509Certificate* issuerCert) {
	if (anchor == nullptr && issuerCert == nullptr) {
		$throwNew($NullPointerException, "TrustAnchor and issuerCert cannot be null"_s);
	}
	$set(this, anchor, anchor);
	if (issuerCert != nullptr) {
		$set(this, name, issuerCert->getSubjectX500Principal());
		$set(this, pubKey, issuerCert->getPublicKey());
		$set(this, certificate, issuerCert);
	} else {
		$set(this, name, $nc(anchor)->getCA());
		$set(this, pubKey, anchor->getCAPublicKey());
		$set(this, certificate, anchor->getTrustedCert());
	}
}

$X509Certificate* OCSPResponse$IssuerInfo::getCertificate() {
	return this->certificate;
}

$X500Principal* OCSPResponse$IssuerInfo::getName() {
	return this->name;
}

$PublicKey* OCSPResponse$IssuerInfo::getPublicKey() {
	return this->pubKey;
}

$TrustAnchor* OCSPResponse$IssuerInfo::getAnchor() {
	return this->anchor;
}

$String* OCSPResponse$IssuerInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("Issuer Info:\n"_s);
	sb->append("Name: "_s)->append($($nc(this->name)->toString()))->append("\n"_s);
	sb->append("Public Key:\n"_s)->append($($nc($of(this->pubKey))->toString()))->append("\n"_s);
	return sb->toString();
}

OCSPResponse$IssuerInfo::OCSPResponse$IssuerInfo() {
}

$Class* OCSPResponse$IssuerInfo::load$($String* name, bool initialize) {
	$loadClass(OCSPResponse$IssuerInfo, name, initialize, &_OCSPResponse$IssuerInfo_ClassInfo_, allocate$OCSPResponse$IssuerInfo);
	return class$;
}

$Class* OCSPResponse$IssuerInfo::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun