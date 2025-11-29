#include <sun/security/ssl/CertStatusExtension$OCSPStatusResponse.h>

#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <sun/security/provider/certpath/OCSPResponse.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestType.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusResponse.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $OCSPResponse = ::sun::security::provider::certpath::OCSPResponse;
using $CertStatusExtension$CertStatusRequestType = ::sun::security::ssl::CertStatusExtension$CertStatusRequestType;
using $CertStatusExtension$CertStatusResponse = ::sun::security::ssl::CertStatusExtension$CertStatusResponse;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertStatusExtension$OCSPStatusResponse_FieldInfo_[] = {
	{"ocspResponse", "Lsun/security/provider/certpath/OCSPResponse;", nullptr, $FINAL, $field(CertStatusExtension$OCSPStatusResponse, ocspResponse)},
	{}
};

$MethodInfo _CertStatusExtension$OCSPStatusResponse_MethodInfo_[] = {
	{"<init>", "(B[B)V", nullptr, $PRIVATE, $method(static_cast<void(CertStatusExtension$OCSPStatusResponse::*)(int8_t,$bytes*)>(&CertStatusExtension$OCSPStatusResponse::init$)), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CertStatusExtension$OCSPStatusResponse_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$OCSPStatusResponse", "sun.security.ssl.CertStatusExtension", "OCSPStatusResponse", $STATIC | $FINAL},
	{"sun.security.ssl.CertStatusExtension$CertStatusResponse", "sun.security.ssl.CertStatusExtension", "CertStatusResponse", $STATIC},
	{}
};

$ClassInfo _CertStatusExtension$OCSPStatusResponse_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertStatusExtension$OCSPStatusResponse",
	"sun.security.ssl.CertStatusExtension$CertStatusResponse",
	nullptr,
	_CertStatusExtension$OCSPStatusResponse_FieldInfo_,
	_CertStatusExtension$OCSPStatusResponse_MethodInfo_,
	nullptr,
	nullptr,
	_CertStatusExtension$OCSPStatusResponse_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension"
};

$Object* allocate$CertStatusExtension$OCSPStatusResponse($Class* clazz) {
	return $of($alloc(CertStatusExtension$OCSPStatusResponse));
}

void CertStatusExtension$OCSPStatusResponse::init$(int8_t statusType, $bytes* encoded) {
	$CertStatusExtension$CertStatusResponse::init$(statusType, encoded);
	if (encoded == nullptr || $nc(encoded)->length < 1) {
		$throwNew($SSLProtocolException, "Invalid OCSP status response: insufficient data"_s);
	}
	$set(this, ocspResponse, $new($OCSPResponse, encoded));
}

$String* CertStatusExtension$OCSPStatusResponse::toString() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"certificate status response type\": {0}\n\"OCSP status response\": \'{\'\n{1}\n\'}\'"_s, $Locale::ENGLISH));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($of($CertStatusExtension$CertStatusRequestType::nameOf(this->statusType))),
		$($of($Utilities::indent($($nc(this->ocspResponse)->toString()))))
	}));
	return messageFormat->format(messageFields);
}

CertStatusExtension$OCSPStatusResponse::CertStatusExtension$OCSPStatusResponse() {
}

$Class* CertStatusExtension$OCSPStatusResponse::load$($String* name, bool initialize) {
	$loadClass(CertStatusExtension$OCSPStatusResponse, name, initialize, &_CertStatusExtension$OCSPStatusResponse_ClassInfo_, allocate$CertStatusExtension$OCSPStatusResponse);
	return class$;
}

$Class* CertStatusExtension$OCSPStatusResponse::class$ = nullptr;

		} // ssl
	} // security
} // sun