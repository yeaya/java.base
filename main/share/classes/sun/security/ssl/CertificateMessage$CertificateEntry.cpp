#include <sun/security/ssl/CertificateMessage$CertificateEntry.h>
#include <java/io/ByteArrayInputStream.h>
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
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateException = ::java::security::cert::CertificateException;
using $CertificateFactory = ::java::security::cert::CertificateFactory;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

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
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\n\'{\'\n{0}\n  \"extensions\": \'{\'\n{1}\n  \'}\'\n\'}\',"_s, $Locale::ENGLISH));
	$var($Object, x509Certs, nullptr);
	try {
		$var($CertificateFactory, cf, $CertificateFactory::getInstance("X.509"_s));
		$assign(x509Certs, $nc(cf)->generateCertificate($$new($ByteArrayInputStream, this->encoded)));
	} catch ($CertificateException& ce) {
		$assign(x509Certs, this->encoded);
	}
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($SSLLogger::toString($$new($ObjectArray, {x509Certs}))),
		$($Utilities::indent($($nc(this->extensions)->toString()), "    "_s))
	}));
	return messageFormat->format(messageFields);
}

CertificateMessage$CertificateEntry::CertificateMessage$CertificateEntry() {
}

$Class* CertificateMessage$CertificateEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"encoded", "[B", nullptr, $FINAL, $field(CertificateMessage$CertificateEntry, encoded)},
		{"extensions", "Lsun/security/ssl/SSLExtensions;", nullptr, $PRIVATE | $FINAL, $field(CertificateMessage$CertificateEntry, extensions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([BLsun/security/ssl/SSLExtensions;)V", nullptr, 0, $method(CertificateMessage$CertificateEntry, init$, void, $bytes*, $SSLExtensions*)},
		{"getEncodedSize", "()I", nullptr, $PRIVATE, $method(CertificateMessage$CertificateEntry, getEncodedSize, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificateMessage$CertificateEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertificateMessage$CertificateEntry", "sun.security.ssl.CertificateMessage", "CertificateEntry", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertificateMessage$CertificateEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.CertificateMessage"
	};
	$loadClass(CertificateMessage$CertificateEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateMessage$CertificateEntry);
	});
	return class$;
}

$Class* CertificateMessage$CertificateEntry::class$ = nullptr;

		} // ssl
	} // security
} // sun