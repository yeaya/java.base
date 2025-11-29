#include <java/security/cert/CertificateFactorySpi.h>

#include <java/io/InputStream.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/cert/CRL.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CertPath = ::java::security::cert::CertPath;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CertificateFactorySpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertificateFactorySpi::*)()>(&CertificateFactorySpi::init$))},
	{"engineGenerateCRL", "(Ljava/io/InputStream;)Ljava/security/cert/CRL;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CRLException"},
	{"engineGenerateCRLs", "(Ljava/io/InputStream;)Ljava/util/Collection;", "(Ljava/io/InputStream;)Ljava/util/Collection<+Ljava/security/cert/CRL;>;", $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CRLException"},
	{"engineGenerateCertPath", "(Ljava/io/InputStream;)Ljava/security/cert/CertPath;", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException"},
	{"engineGenerateCertPath", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException"},
	{"engineGenerateCertPath", "(Ljava/util/List;)Ljava/security/cert/CertPath;", "(Ljava/util/List<+Ljava/security/cert/Certificate;>;)Ljava/security/cert/CertPath;", $PUBLIC, nullptr, "java.security.cert.CertificateException"},
	{"engineGenerateCertificate", "(Ljava/io/InputStream;)Ljava/security/cert/Certificate;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertificateException"},
	{"engineGenerateCertificates", "(Ljava/io/InputStream;)Ljava/util/Collection;", "(Ljava/io/InputStream;)Ljava/util/Collection<+Ljava/security/cert/Certificate;>;", $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertificateException"},
	{"engineGetCertPathEncodings", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC},
	{}
};

$ClassInfo _CertificateFactorySpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.cert.CertificateFactorySpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CertificateFactorySpi_MethodInfo_
};

$Object* allocate$CertificateFactorySpi($Class* clazz) {
	return $of($alloc(CertificateFactorySpi));
}

void CertificateFactorySpi::init$() {
}

$CertPath* CertificateFactorySpi::engineGenerateCertPath($InputStream* inStream) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$CertPath* CertificateFactorySpi::engineGenerateCertPath($InputStream* inStream, $String* encoding) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$CertPath* CertificateFactorySpi::engineGenerateCertPath($List* certificates) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Iterator* CertificateFactorySpi::engineGetCertPathEncodings() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

CertificateFactorySpi::CertificateFactorySpi() {
}

$Class* CertificateFactorySpi::load$($String* name, bool initialize) {
	$loadClass(CertificateFactorySpi, name, initialize, &_CertificateFactorySpi_ClassInfo_, allocate$CertificateFactorySpi);
	return class$;
}

$Class* CertificateFactorySpi::class$ = nullptr;

		} // cert
	} // security
} // java