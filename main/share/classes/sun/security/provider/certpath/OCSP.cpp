#include <sun/security/provider/certpath/OCSP.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLEncoder.h>
#include <java/security/AccessController.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException$BasicReason.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/Extension.h>
#include <java/security/cert/TrustAnchor.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <java/util/Collections.h>
#include <java/util/Date.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/action/GetIntegerAction.h>
#include <sun/security/provider/certpath/CertId.h>
#include <sun/security/provider/certpath/OCSP$RevocationStatus.h>
#include <sun/security/provider/certpath/OCSPRequest.h>
#include <sun/security/provider/certpath/OCSPResponse$IssuerInfo.h>
#include <sun/security/provider/certpath/OCSPResponse$SingleResponse.h>
#include <sun/security/provider/certpath/OCSPResponse.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/Event$ReporterCategory.h>
#include <sun/security/util/Event.h>
#include <sun/security/util/IOUtils.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/validator/Validator.h>
#include <sun/security/x509/AccessDescription.h>
#include <sun/security/x509/AuthorityInfoAccessExtension.h>
#include <sun/security/x509/GeneralName.h>
#include <sun/security/x509/GeneralNameInterface.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <sun/security/x509/SerialNumber.h>
#include <sun/security/x509/URIName.h>
#include <sun/security/x509/X509CertImpl.h>
#include <jcpp.h>

#undef CONNECT_TIMEOUT
#undef CRLCHECK
#undef DEFAULT_CONNECT_TIMEOUT
#undef HTTP_OK
#undef MAX_VALUE
#undef NAME_URI
#undef OCSP
#undef UNDETERMINED_REVOCATION_STATUS
#undef VAR_PLUGIN_CODE_SIGNING

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $URLEncoder = ::java::net::URLEncoder;
using $AccessController = ::java::security::AccessController;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $CertPathValidatorException$BasicReason = ::java::security::cert::CertPathValidatorException$BasicReason;
using $CertificateException = ::java::security::cert::CertificateException;
using $Extension = ::java::security::cert::Extension;
using $TrustAnchor = ::java::security::cert::TrustAnchor;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Base64 = ::java::util::Base64;
using $Collections = ::java::util::Collections;
using $Date = ::java::util::Date;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $GetIntegerAction = ::sun::security::action::GetIntegerAction;
using $CertId = ::sun::security::provider::certpath::CertId;
using $OCSP$RevocationStatus = ::sun::security::provider::certpath::OCSP$RevocationStatus;
using $OCSPRequest = ::sun::security::provider::certpath::OCSPRequest;
using $OCSPResponse = ::sun::security::provider::certpath::OCSPResponse;
using $OCSPResponse$IssuerInfo = ::sun::security::provider::certpath::OCSPResponse$IssuerInfo;
using $Debug = ::sun::security::util::Debug;
using $Event = ::sun::security::util::Event;
using $Event$ReporterCategory = ::sun::security::util::Event$ReporterCategory;
using $IOUtils = ::sun::security::util::IOUtils;
using $Validator = ::sun::security::validator::Validator;
using $AccessDescription = ::sun::security::x509::AccessDescription;
using $AuthorityInfoAccessExtension = ::sun::security::x509::AuthorityInfoAccessExtension;
using $GeneralName = ::sun::security::x509::GeneralName;
using $GeneralNameInterface = ::sun::security::x509::GeneralNameInterface;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;
using $URIName = ::sun::security::x509::URIName;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$Debug* OCSP::debug = nullptr;
int32_t OCSP::CONNECT_TIMEOUT = 0;

int32_t OCSP::initializeTimeout() {
	$init(OCSP);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Integer, tmp, $cast($Integer, $AccessController::doPrivileged($$new($GetIntegerAction, "com.sun.security.ocsp.timeout"_s))));
	if (tmp == nullptr || tmp->intValue() < 0) {
		return OCSP::DEFAULT_CONNECT_TIMEOUT;
	}
	return $nc(tmp)->intValue() * 1000;
}

void OCSP::init$() {
}

$OCSP$RevocationStatus* OCSP::check($X509Certificate* cert, $X509Certificate* issuerCert, $URI* responderURI, $X509Certificate* responderCert, $Date* date) {
	$init(OCSP);
	$init($Validator);
	return check(cert, issuerCert, responderURI, responderCert, date, $($Collections::emptyList()), $Validator::VAR_PLUGIN_CODE_SIGNING);
}

$OCSP$RevocationStatus* OCSP::check($X509Certificate* cert, $X509Certificate* issuerCert, $URI* responderURI, $X509Certificate* responderCert, $Date* date, $List* extensions, $String* variant) {
	$init(OCSP);
	return check(cert, responderURI, nullptr, issuerCert, responderCert, date, extensions, variant);
}

$OCSP$RevocationStatus* OCSP::check($X509Certificate* cert, $URI* responderURI, $TrustAnchor* anchor, $X509Certificate* issuerCert, $X509Certificate* responderCert, $Date* date, $List* extensions, $String* variant) {
	$init(OCSP);
	$useLocalObjectStack();
	$var($CertId, certId, nullptr);
	try {
		$var($X509CertImpl, certImpl, $X509CertImpl::toImpl(cert));
		$assign(certId, $new($CertId, issuerCert, $($nc(certImpl)->getSerialNumberObject())));
	} catch ($CertificateException& e) {
		$throwNew($CertPathValidatorException, "Exception while encoding OCSPRequest"_s, e);
	} catch ($IOException& e) {
		$throwNew($CertPathValidatorException, "Exception while encoding OCSPRequest"_s, e);
	}
	$var($List, var$0, $Collections::singletonList(certId));
	$var($OCSPResponse, ocspResponse, check(var$0, responderURI, $$new($OCSPResponse$IssuerInfo, anchor, issuerCert), responderCert, date, extensions, variant));
	return $cast($OCSP$RevocationStatus, $nc(ocspResponse)->getSingleResponse(certId));
}

$OCSPResponse* OCSP::check($List* certIds, $URI* responderURI, $OCSPResponse$IssuerInfo* issuerInfo, $X509Certificate* responderCert, $Date* date, $List* extensions, $String* variant) {
	$init(OCSP);
	$useLocalObjectStack();
	$var($bytes, nonce, nullptr);
	{
		$var($Iterator, i$, $nc(extensions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Extension, ext, $cast($Extension, i$->next()));
			$init($PKIXExtensions);
			if ($$nc($nc(ext)->getId())->equals($($nc($PKIXExtensions::OCSPNonce_Id)->toString()))) {
				$assign(nonce, ext->getValue());
			}
		}
	}
	$var($OCSPResponse, ocspResponse, nullptr);
	try {
		$var($bytes, response, getOCSPBytes(certIds, responderURI, extensions));
		$assign(ocspResponse, $new($OCSPResponse, response));
		ocspResponse->verify(certIds, issuerInfo, responderCert, date, nonce, variant);
	} catch ($IOException& ioe) {
		$init($CertPathValidatorException$BasicReason);
		$throwNew($CertPathValidatorException, "Unable to determine revocation status due to network error"_s, ioe, nullptr, -1, $CertPathValidatorException$BasicReason::UNDETERMINED_REVOCATION_STATUS);
	}
	return ocspResponse;
}

$bytes* OCSP::getOCSPBytes($List* certIds, $URI* responderURI, $List* extensions) {
	$init(OCSP);
	$useLocalObjectStack();
	$var($OCSPRequest, request, $new($OCSPRequest, certIds, extensions));
	$var($bytes, bytes, request->encodeBytes());
	if (OCSP::debug != nullptr) {
		OCSP::debug->println($$str({"connecting to OCSP service at: "_s, responderURI}));
	}
	$init($Event$ReporterCategory);
	$Event::report($Event$ReporterCategory::CRLCHECK, "event.ocsp.check"_s, $$new($ObjectArray, {$($nc(responderURI)->toString())}));
	$var($URL, url, nullptr);
	$var($HttpURLConnection, con, nullptr);
	$var($Throwable, var$0, nullptr);
	$var($bytes, var$2, nullptr);
	bool return$1 = false;
	try {
		$var($StringBuilder, var$3, $new($StringBuilder));
		var$3->append($(responderURI->toString()));
		var$3->append("/"_s);
		var$3->append($($URLEncoder::encode($($$nc($Base64::getEncoder())->encodeToString(bytes)), "UTF-8"_s)));
		$var($String, encodedGetReq, $str(var$3));
		if (encodedGetReq->length() <= 255) {
			$assign(url, $new($URL, encodedGetReq));
			$assign(con, $cast($HttpURLConnection, url->openConnection()));
			$nc(con)->setDoOutput(true);
			con->setDoInput(true);
			con->setRequestMethod("GET"_s);
		} else {
			$assign(url, responderURI->toURL());
			$assign(con, $cast($HttpURLConnection, $nc(url)->openConnection()));
			$nc(con)->setConnectTimeout(OCSP::CONNECT_TIMEOUT);
			con->setReadTimeout(OCSP::CONNECT_TIMEOUT);
			con->setDoOutput(true);
			con->setDoInput(true);
			con->setRequestMethod("POST"_s);
			con->setRequestProperty("Content-type"_s, "application/ocsp-request"_s);
			con->setRequestProperty("Content-length"_s, $($String::valueOf($nc(bytes)->length)));
			$var($OutputStream, out, con->getOutputStream());
			$nc(out)->write(bytes);
			out->flush();
		}
		if (OCSP::debug != nullptr && $nc(con)->getResponseCode() != $HttpURLConnection::HTTP_OK) {
			$var($StringBuilder, var$4, $new($StringBuilder));
			var$4->append("Received HTTP error: "_s);
			var$4->append(con->getResponseCode());
			var$4->append(" - "_s);
			var$4->append($(con->getResponseMessage()));
			OCSP::debug->println($$str(var$4));
		}
		int32_t contentLength = $nc(con)->getContentLength();
		if (contentLength == -1) {
			contentLength = $Integer::MAX_VALUE;
		}
		$assign(var$2, $IOUtils::readExactlyNBytes($(con->getInputStream()), contentLength));
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$5) {
		$assign(var$0, var$5);
	} $finally: {
		if (con != nullptr) {
			con->disconnect();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

$URI* OCSP::getResponderURI($X509Certificate* cert) {
	$init(OCSP);
	try {
		return getResponderURI($($X509CertImpl::toImpl(cert)));
	} catch ($CertificateException& ce) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$URI* OCSP::getResponderURI($X509CertImpl* certImpl) {
	$init(OCSP);
	$useLocalObjectStack();
	$var($AuthorityInfoAccessExtension, aia, $nc(certImpl)->getAuthorityInfoAccessExtension());
	if (aia == nullptr) {
		return nullptr;
	}
	$var($List, descriptions, $nc(aia)->getAccessDescriptions());
	{
		$var($Iterator, i$, $nc(descriptions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AccessDescription, description, $cast($AccessDescription, i$->next()));
			$init($AccessDescription);
			if ($$nc($nc(description)->getAccessMethod())->equals($AccessDescription::Ad_OCSP_Id)) {
				$var($GeneralName, generalName, description->getAccessLocation());
				if ($nc(generalName)->getType() == $GeneralNameInterface::NAME_URI) {
					$var($URIName, uri, $cast($URIName, generalName->getName()));
					return $nc(uri)->getURI();
				}
			}
		}
	}
	return nullptr;
}

void OCSP::clinit$($Class* clazz) {
	$assignStatic(OCSP::debug, $Debug::getInstance("certpath"_s));
	OCSP::CONNECT_TIMEOUT = OCSP::initializeTimeout();
}

OCSP::OCSP() {
}

$Class* OCSP::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OCSP, debug)},
		{"DEFAULT_CONNECT_TIMEOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OCSP, DEFAULT_CONNECT_TIMEOUT)},
		{"CONNECT_TIMEOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OCSP, CONNECT_TIMEOUT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(OCSP, init$, void)},
		{"check", "(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;Ljava/net/URI;Ljava/security/cert/X509Certificate;Ljava/util/Date;)Lsun/security/provider/certpath/OCSP$RevocationStatus;", nullptr, $PUBLIC | $STATIC, $staticMethod(OCSP, check, $OCSP$RevocationStatus*, $X509Certificate*, $X509Certificate*, $URI*, $X509Certificate*, $Date*), "java.io.IOException,java.security.cert.CertPathValidatorException"},
		{"check", "(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;Ljava/net/URI;Ljava/security/cert/X509Certificate;Ljava/util/Date;Ljava/util/List;Ljava/lang/String;)Lsun/security/provider/certpath/OCSP$RevocationStatus;", "(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;Ljava/net/URI;Ljava/security/cert/X509Certificate;Ljava/util/Date;Ljava/util/List<Ljava/security/cert/Extension;>;Ljava/lang/String;)Lsun/security/provider/certpath/OCSP$RevocationStatus;", $PUBLIC | $STATIC, $staticMethod(OCSP, check, $OCSP$RevocationStatus*, $X509Certificate*, $X509Certificate*, $URI*, $X509Certificate*, $Date*, $List*, $String*), "java.io.IOException,java.security.cert.CertPathValidatorException"},
		{"check", "(Ljava/security/cert/X509Certificate;Ljava/net/URI;Ljava/security/cert/TrustAnchor;Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;Ljava/util/Date;Ljava/util/List;Ljava/lang/String;)Lsun/security/provider/certpath/OCSP$RevocationStatus;", "(Ljava/security/cert/X509Certificate;Ljava/net/URI;Ljava/security/cert/TrustAnchor;Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;Ljava/util/Date;Ljava/util/List<Ljava/security/cert/Extension;>;Ljava/lang/String;)Lsun/security/provider/certpath/OCSP$RevocationStatus;", $PUBLIC | $STATIC, $staticMethod(OCSP, check, $OCSP$RevocationStatus*, $X509Certificate*, $URI*, $TrustAnchor*, $X509Certificate*, $X509Certificate*, $Date*, $List*, $String*), "java.io.IOException,java.security.cert.CertPathValidatorException"},
		{"check", "(Ljava/util/List;Ljava/net/URI;Lsun/security/provider/certpath/OCSPResponse$IssuerInfo;Ljava/security/cert/X509Certificate;Ljava/util/Date;Ljava/util/List;Ljava/lang/String;)Lsun/security/provider/certpath/OCSPResponse;", "(Ljava/util/List<Lsun/security/provider/certpath/CertId;>;Ljava/net/URI;Lsun/security/provider/certpath/OCSPResponse$IssuerInfo;Ljava/security/cert/X509Certificate;Ljava/util/Date;Ljava/util/List<Ljava/security/cert/Extension;>;Ljava/lang/String;)Lsun/security/provider/certpath/OCSPResponse;", $STATIC, $staticMethod(OCSP, check, $OCSPResponse*, $List*, $URI*, $OCSPResponse$IssuerInfo*, $X509Certificate*, $Date*, $List*, $String*), "java.io.IOException,java.security.cert.CertPathValidatorException"},
		{"getOCSPBytes", "(Ljava/util/List;Ljava/net/URI;Ljava/util/List;)[B", "(Ljava/util/List<Lsun/security/provider/certpath/CertId;>;Ljava/net/URI;Ljava/util/List<Ljava/security/cert/Extension;>;)[B", $PUBLIC | $STATIC, $staticMethod(OCSP, getOCSPBytes, $bytes*, $List*, $URI*, $List*), "java.io.IOException"},
		{"getResponderURI", "(Ljava/security/cert/X509Certificate;)Ljava/net/URI;", nullptr, $PUBLIC | $STATIC, $staticMethod(OCSP, getResponderURI, $URI*, $X509Certificate*)},
		{"getResponderURI", "(Lsun/security/x509/X509CertImpl;)Ljava/net/URI;", nullptr, $STATIC, $staticMethod(OCSP, getResponderURI, $URI*, $X509CertImpl*)},
		{"initializeTimeout", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(OCSP, initializeTimeout, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.OCSP$RevocationStatus", "sun.security.provider.certpath.OCSP", "RevocationStatus", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.certpath.OCSP",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.OCSP$RevocationStatus,sun.security.provider.certpath.OCSP$RevocationStatus$CertStatus"
	};
	$loadClass(OCSP, name, initialize, &classInfo$$, OCSP::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(OCSP);
	});
	return class$;
}

$Class* OCSP::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun