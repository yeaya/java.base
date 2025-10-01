#include <sun/security/ssl/CertificateMessage$T12CertificateMessage.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateEncodingException.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/CertificateFactory.h>
#include <java/security/cert/X509Certificate.h>
#include <java/text/MessageFormat.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CertificateMessage.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef ENGLISH
#undef CERTIFICATE
#undef ILLEGAL_PARAMETER
#undef INTERNAL_ERROR

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateEncodingException = ::java::security::cert::CertificateEncodingException;
using $CertificateException = ::java::security::cert::CertificateException;
using $CertificateFactory = ::java::security::cert::CertificateFactory;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $SSLException = ::javax::net::ssl::SSLException;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $Alert = ::sun::security::ssl::Alert;
using $CertificateMessage = ::sun::security::ssl::CertificateMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $Record = ::sun::security::ssl::Record;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertificateMessage$T12CertificateMessage_FieldInfo_[] = {
	{"encodedCertChain", "Ljava/util/List;", "Ljava/util/List<[B>;", $FINAL, $field(CertificateMessage$T12CertificateMessage, encodedCertChain)},
	{}
};

$MethodInfo _CertificateMessage$T12CertificateMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;[Ljava/security/cert/X509Certificate;)V", nullptr, 0, $method(static_cast<void(CertificateMessage$T12CertificateMessage::*)($HandshakeContext*,$X509CertificateArray*)>(&CertificateMessage$T12CertificateMessage::init$)), "javax.net.ssl.SSLException"},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(CertificateMessage$T12CertificateMessage::*)($HandshakeContext*,$ByteBuffer*)>(&CertificateMessage$T12CertificateMessage::init$)), "java.io.IOException"},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC},
	{"messageLength", "()I", nullptr, $PUBLIC},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CertificateMessage$T12CertificateMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateMessage$T12CertificateMessage", "sun.security.ssl.CertificateMessage", "T12CertificateMessage", $STATIC | $FINAL},
	{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CertificateMessage$T12CertificateMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateMessage$T12CertificateMessage",
	"sun.security.ssl.SSLHandshake$HandshakeMessage",
	nullptr,
	_CertificateMessage$T12CertificateMessage_FieldInfo_,
	_CertificateMessage$T12CertificateMessage_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateMessage$T12CertificateMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateMessage"
};

$Object* allocate$CertificateMessage$T12CertificateMessage($Class* clazz) {
	return $of($alloc(CertificateMessage$T12CertificateMessage));
}

void CertificateMessage$T12CertificateMessage::init$($HandshakeContext* handshakeContext, $X509CertificateArray* certChain) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	$var($List, encodedCerts, $new($ArrayList, $nc(certChain)->length));
	{
		$var($X509CertificateArray, arr$, certChain);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($X509Certificate, cert, arr$->get(i$));
			{
				try {
					encodedCerts->add($($nc(cert)->getEncoded()));
				} catch ($CertificateEncodingException&) {
					$var($CertificateEncodingException, cee, $catch());
					$init($Alert);
					$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::INTERNAL_ERROR, $$str({"Could not encode certificate ("_s, $($nc(cert)->getSubjectX500Principal()), ")"_s}), cee)));
				}
			}
		}
	}
	$set(this, encodedCertChain, encodedCerts);
}

void CertificateMessage$T12CertificateMessage::init$($HandshakeContext* handshakeContext, $ByteBuffer* m) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	int32_t listLen = $Record::getInt24(m);
	if (listLen > $nc(m)->remaining()) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Error parsing certificate message:no sufficient data"_s)));
	}
	if (listLen > 0) {
		$var($List, encodedCerts, $new($LinkedList));
		while (listLen > 0) {
			$var($bytes, encodedCert, $Record::getBytes24(m));
			listLen -= (3 + $nc(encodedCert)->length);
			encodedCerts->add(encodedCert);
			$init($SSLConfiguration);
			if (encodedCerts->size() > $SSLConfiguration::maxCertificateChainLength) {
				$throwNew($SSLProtocolException, $$str({"The certificate chain length ("_s, $$str(encodedCerts->size()), ") exceeds the maximum allowed length ("_s, $$str($SSLConfiguration::maxCertificateChainLength), ")"_s}));
			}
		}
		$set(this, encodedCertChain, encodedCerts);
	} else {
		$set(this, encodedCertChain, $Collections::emptyList());
	}
}

$SSLHandshake* CertificateMessage$T12CertificateMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::CERTIFICATE;
}

int32_t CertificateMessage$T12CertificateMessage::messageLength() {
	int32_t msgLen = 3;
	{
		$var($Iterator, i$, $nc(this->encodedCertChain)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($bytes, encodedCert, $cast($bytes, i$->next()));
			{
				msgLen += ($nc(encodedCert)->length + 3);
			}
		}
	}
	return msgLen;
}

void CertificateMessage$T12CertificateMessage::send($HandshakeOutStream* hos) {
	int32_t listLen = 0;
	{
		$var($Iterator, i$, $nc(this->encodedCertChain)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($bytes, encodedCert, $cast($bytes, i$->next()));
			{
				listLen += ($nc(encodedCert)->length + 3);
			}
		}
	}
	$nc(hos)->putInt24(listLen);
	{
		$var($Iterator, i$, $nc(this->encodedCertChain)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($bytes, encodedCert, $cast($bytes, i$->next()));
			{
				hos->putBytes24(encodedCert);
			}
		}
	}
}

$String* CertificateMessage$T12CertificateMessage::toString() {
	if ($nc(this->encodedCertChain)->isEmpty()) {
		return "\"Certificates\": <empty list>"_s;
	}
	$var($ObjectArray, x509Certs, $new($ObjectArray, $nc(this->encodedCertChain)->size()));
	try {
		$var($CertificateFactory, cf, $CertificateFactory::getInstance("X.509"_s));
		int32_t i = 0;
		{
			$var($Iterator, i$, $nc(this->encodedCertChain)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($bytes, encodedCert, $cast($bytes, i$->next()));
				{
					$var($Object, obj, nullptr);
					try {
						$assign(obj, $cast($X509Certificate, $nc(cf)->generateCertificate($$new($ByteArrayInputStream, encodedCert))));
					} catch ($CertificateException&) {
						$var($CertificateException, ce, $catch());
						$assign(obj, encodedCert);
					}
					x509Certs->set(i++, obj);
				}
			}
		}
	} catch ($CertificateException&) {
		$var($CertificateException, ce, $catch());
		int32_t i = 0;
		{
			$var($Iterator, i$, $nc(this->encodedCertChain)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($bytes, encodedCert, $cast($bytes, i$->next()));
				{
					x509Certs->set(i++, encodedCert);
				}
			}
		}
	}
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"Certificates\": [\n{0}\n]"_s, $Locale::ENGLISH));
	$var($ObjectArray, messageFields, $new($ObjectArray, {$($of($SSLLogger::toString(x509Certs)))}));
	return messageFormat->format(messageFields);
}

CertificateMessage$T12CertificateMessage::CertificateMessage$T12CertificateMessage() {
}

$Class* CertificateMessage$T12CertificateMessage::load$($String* name, bool initialize) {
	$loadClass(CertificateMessage$T12CertificateMessage, name, initialize, &_CertificateMessage$T12CertificateMessage_ClassInfo_, allocate$CertificateMessage$T12CertificateMessage);
	return class$;
}

$Class* CertificateMessage$T12CertificateMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun