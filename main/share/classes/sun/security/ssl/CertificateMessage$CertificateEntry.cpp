#include <sun/security/ssl/CertificateMessage$CertificateEntry.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/CertificateFactory.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <sun/security/ssl/CertificateMessage.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef ENGLISH

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateException = ::java::security::cert::CertificateException;
using $CertificateFactory = ::java::security::cert::CertificateFactory;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $CertificateMessage = ::sun::security::ssl::CertificateMessage;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertificateMessage$CertificateEntry_FieldInfo_[] = {
	{"encoded", "[B", nullptr, $FINAL, $field(CertificateMessage$CertificateEntry, encoded)},
	{"extensions", "Lsun/security/ssl/SSLExtensions;", nullptr, $PRIVATE | $FINAL, $field(CertificateMessage$CertificateEntry, extensions)},
	{}
};

$MethodInfo _CertificateMessage$CertificateEntry_MethodInfo_[] = {
	{"<init>", "([BLsun/security/ssl/SSLExtensions;)V", nullptr, 0, $method(static_cast<void(CertificateMessage$CertificateEntry::*)($bytes*,$SSLExtensions*)>(&CertificateMessage$CertificateEntry::init$))},
	{"getEncodedSize", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(CertificateMessage$CertificateEntry::*)()>(&CertificateMessage$CertificateEntry::getEncodedSize))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CertificateMessage$CertificateEntry_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateMessage$CertificateEntry", "sun.security.ssl.CertificateMessage", "CertificateEntry", $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateMessage$CertificateEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateMessage$CertificateEntry",
	"java.lang.Object",
	nullptr,
	_CertificateMessage$CertificateEntry_FieldInfo_,
	_CertificateMessage$CertificateEntry_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateMessage$CertificateEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateMessage"
};

$Object* allocate$CertificateMessage$CertificateEntry($Class* clazz) {
	return $of($alloc(CertificateMessage$CertificateEntry));
}

void CertificateMessage$CertificateEntry::init$($bytes* encoded, $SSLExtensions* extensions) {
	$set(this, encoded, encoded);
	$set(this, extensions, extensions);
}

int32_t CertificateMessage$CertificateEntry::getEncodedSize() {
	int32_t extLen = $nc(this->extensions)->length();
	if (extLen == 0) {
		extLen = 2;
	}
	return 3 + $nc(this->encoded)->length + extLen;
}

$String* CertificateMessage$CertificateEntry::toString() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\n\'{\'\n{0}\n  \"extensions\": \'{\'\n{1}\n  \'}\'\n\'}\',"_s, $Locale::ENGLISH));
	$var($Object, x509Certs, nullptr);
	try {
		$var($CertificateFactory, cf, $CertificateFactory::getInstance("X.509"_s));
		$assign(x509Certs, $nc(cf)->generateCertificate($$new($ByteArrayInputStream, this->encoded)));
	} catch ($CertificateException&) {
		$var($CertificateException, ce, $catch());
		$assign(x509Certs, this->encoded);
	}
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($of($SSLLogger::toString($$new($ObjectArray, {x509Certs})))),
		$($of($Utilities::indent($($nc(this->extensions)->toString()), "    "_s)))
	}));
	return messageFormat->format(messageFields);
}

CertificateMessage$CertificateEntry::CertificateMessage$CertificateEntry() {
}

$Class* CertificateMessage$CertificateEntry::load$($String* name, bool initialize) {
	$loadClass(CertificateMessage$CertificateEntry, name, initialize, &_CertificateMessage$CertificateEntry_ClassInfo_, allocate$CertificateMessage$CertificateEntry);
	return class$;
}

$Class* CertificateMessage$CertificateEntry::class$ = nullptr;

		} // ssl
	} // security
} // sun