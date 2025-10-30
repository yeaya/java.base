#include <sun/security/ssl/StatusResponseManager$StatusInfo.h>

#include <java/math/BigInteger.h>
#include <java/net/URI.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/provider/certpath/CertId.h>
#include <sun/security/ssl/StatusResponseManager$ResponseCacheEntry.h>
#include <sun/security/ssl/StatusResponseManager.h>
#include <sun/security/x509/SerialNumber.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $URI = ::java::net::URI;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $CertId = ::sun::security::provider::certpath::CertId;
using $StatusResponseManager = ::sun::security::ssl::StatusResponseManager;
using $StatusResponseManager$ResponseCacheEntry = ::sun::security::ssl::StatusResponseManager$ResponseCacheEntry;
using $SerialNumber = ::sun::security::x509::SerialNumber;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _StatusResponseManager$StatusInfo_FieldInfo_[] = {
	{"this$0", "Lsun/security/ssl/StatusResponseManager;", nullptr, $FINAL | $SYNTHETIC, $field(StatusResponseManager$StatusInfo, this$0)},
	{"cert", "Ljava/security/cert/X509Certificate;", nullptr, $FINAL, $field(StatusResponseManager$StatusInfo, cert)},
	{"cid", "Lsun/security/provider/certpath/CertId;", nullptr, $FINAL, $field(StatusResponseManager$StatusInfo, cid)},
	{"responder", "Ljava/net/URI;", nullptr, $FINAL, $field(StatusResponseManager$StatusInfo, responder)},
	{"responseData", "Lsun/security/ssl/StatusResponseManager$ResponseCacheEntry;", nullptr, 0, $field(StatusResponseManager$StatusInfo, responseData)},
	{}
};

$MethodInfo _StatusResponseManager$StatusInfo_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/StatusResponseManager;Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;)V", nullptr, 0, $method(static_cast<void(StatusResponseManager$StatusInfo::*)($StatusResponseManager*,$X509Certificate*,$X509Certificate*)>(&StatusResponseManager$StatusInfo::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/ssl/StatusResponseManager;Ljava/security/cert/X509Certificate;Lsun/security/provider/certpath/CertId;)V", nullptr, 0, $method(static_cast<void(StatusResponseManager$StatusInfo::*)($StatusResponseManager*,$X509Certificate*,$CertId*)>(&StatusResponseManager$StatusInfo::init$))},
	{"<init>", "(Lsun/security/ssl/StatusResponseManager;Lsun/security/ssl/StatusResponseManager$StatusInfo;)V", nullptr, 0, $method(static_cast<void(StatusResponseManager$StatusInfo::*)($StatusResponseManager*,StatusResponseManager$StatusInfo*)>(&StatusResponseManager$StatusInfo::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StatusResponseManager$StatusInfo_InnerClassesInfo_[] = {
	{"sun.security.ssl.StatusResponseManager$StatusInfo", "sun.security.ssl.StatusResponseManager", "StatusInfo", 0},
	{}
};

$ClassInfo _StatusResponseManager$StatusInfo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.StatusResponseManager$StatusInfo",
	"java.lang.Object",
	nullptr,
	_StatusResponseManager$StatusInfo_FieldInfo_,
	_StatusResponseManager$StatusInfo_MethodInfo_,
	nullptr,
	nullptr,
	_StatusResponseManager$StatusInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.StatusResponseManager"
};

$Object* allocate$StatusResponseManager$StatusInfo($Class* clazz) {
	return $of($alloc(StatusResponseManager$StatusInfo));
}

void StatusResponseManager$StatusInfo::init$($StatusResponseManager* this$0, $X509Certificate* subjectCert, $X509Certificate* issuerCert) {
	$useLocalCurrentObjectStackCache();
	StatusResponseManager$StatusInfo::init$(this$0, subjectCert, $$new($CertId, issuerCert, $$new($SerialNumber, $($nc(subjectCert)->getSerialNumber()))));
}

void StatusResponseManager$StatusInfo::init$($StatusResponseManager* this$0, $X509Certificate* subjectCert, $CertId* certId) {
	$set(this, this$0, this$0);
	$set(this, cert, subjectCert);
	$set(this, cid, certId);
	$set(this, responder, this$0->getURI(this->cert));
	$set(this, responseData, nullptr);
}

void StatusResponseManager$StatusInfo::init$($StatusResponseManager* this$0, StatusResponseManager$StatusInfo* orig) {
	$set(this, this$0, this$0);
	$set(this, cert, $nc(orig)->cert);
	$set(this, cid, orig->cid);
	$set(this, responder, orig->responder);
	$set(this, responseData, nullptr);
}

$String* StatusResponseManager$StatusInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, "StatusInfo:"_s));
	sb->append("\n\tCert: "_s)->append($($of($nc(this->cert)->getSubjectX500Principal())));
	sb->append("\n\tSerial: "_s)->append($($of($nc(this->cert)->getSerialNumber())));
	sb->append("\n\tResponder: "_s)->append($of(this->responder));
	sb->append("\n\tResponse data: "_s)->append(this->responseData != nullptr ? ($$str({$$str($nc($nc(this->responseData)->ocspBytes)->length), " bytes"_s})) : "<NULL>"_s);
	return sb->toString();
}

StatusResponseManager$StatusInfo::StatusResponseManager$StatusInfo() {
}

$Class* StatusResponseManager$StatusInfo::load$($String* name, bool initialize) {
	$loadClass(StatusResponseManager$StatusInfo, name, initialize, &_StatusResponseManager$StatusInfo_ClassInfo_, allocate$StatusResponseManager$StatusInfo);
	return class$;
}

$Class* StatusResponseManager$StatusInfo::class$ = nullptr;

		} // ssl
	} // security
} // sun