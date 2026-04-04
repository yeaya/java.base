#include <sun/security/ssl/CertificateRequest$T12CertificateRequestMessage.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/cert/X509Certificate.h>
#include <java/text/MessageFormat.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CertificateRequest$ClientCertificateType.h>
#include <sun/security/ssl/CertificateRequest.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CERTIFICATE_REQUEST
#undef CERT_TYPES
#undef ENGLISH
#undef ILLEGAL_PARAMETER

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $X500PrincipalArray = $Array<::javax::security::auth::x500::X500Principal>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $MessageFormat = ::java::text::MessageFormat;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $Alert = ::sun::security::ssl::Alert;
using $CertificateRequest$ClientCertificateType = ::sun::security::ssl::CertificateRequest$ClientCertificateType;
using $CipherSuite$KeyExchange = ::sun::security::ssl::CipherSuite$KeyExchange;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $Record = ::sun::security::ssl::Record;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;

namespace sun {
	namespace security {
		namespace ssl {

void CertificateRequest$T12CertificateRequestMessage::init$($HandshakeContext* handshakeContext, $X509CertificateArray* trustedCerts, $CipherSuite$KeyExchange* keyExchange, $List* signatureSchemes) {
	$useLocalObjectStack();
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	$init($CertificateRequest$ClientCertificateType);
	$set(this, types, $CertificateRequest$ClientCertificateType::CERT_TYPES);
	if (signatureSchemes == nullptr || signatureSchemes->isEmpty()) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "No signature algorithms specified for CertificateRequest hanshake message"_s)));
	}
	$set(this, algorithmIds, $new($ints, $nc(signatureSchemes)->size()));
	int32_t i = 0;
	{
		$var($Iterator, i$, signatureSchemes->iterator());
		for (; $nc(i$)->hasNext();) {
			$SignatureScheme* scheme = $cast($SignatureScheme, i$->next());
			{
				$nc(this->algorithmIds)->set(i++, $nc(scheme)->id);
			}
		}
	}
	$set(this, authorities, $new($ArrayList, $nc(trustedCerts)->length));
	{
		$var($X509CertificateArray, arr$, trustedCerts);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($X509Certificate, cert, arr$->get(i$));
			{
				$var($X500Principal, x500Principal, $nc(cert)->getSubjectX500Principal());
				$nc(this->authorities)->add($($nc(x500Principal)->getEncoded()));
			}
		}
	}
}

void CertificateRequest$T12CertificateRequestMessage::init$($HandshakeContext* handshakeContext, $ByteBuffer* m) {
	$useLocalObjectStack();
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	if ($nc(m)->remaining() < 8) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid CertificateRequest handshake message: no sufficient data"_s)));
	}
	$set(this, types, $Record::getBytes8(m));
	if (m->remaining() < 6) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid CertificateRequest handshake message: no sufficient data"_s)));
	}
	$var($bytes, algs, $Record::getBytes16(m));
	if (algs == nullptr || algs->length == 0 || (algs->length & 1) != 0) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid CertificateRequest handshake message: incomplete signature algorithms"_s)));
	}
	$set(this, algorithmIds, $new($ints, ($nc(algs)->length >> 1)));
	for (int32_t i = 0, j = 0; i < algs->length;) {
		int8_t hash = algs->get(i++);
		int8_t sign = algs->get(i++);
		$nc(this->algorithmIds)->set(j++, ((hash & 0xff) << 8) | (sign & 0xff));
	}
	if (m->remaining() < 2) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid CertificateRequest handshake message: no sufficient data"_s)));
	}
	int32_t listLen = $Record::getInt16(m);
	if (listLen > m->remaining()) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid CertificateRequest message: no sufficient data"_s)));
	}
	if (listLen > 0) {
		$set(this, authorities, $new($LinkedList));
		while (listLen > 0) {
			$var($bytes, encoded, $Record::getBytes16(m));
			listLen -= (2 + $nc(encoded)->length);
			$nc(this->authorities)->add(encoded);
		}
	} else {
		$set(this, authorities, $Collections::emptyList());
	}
}

$StringArray* CertificateRequest$T12CertificateRequestMessage::getKeyTypes() {
	return $CertificateRequest$ClientCertificateType::getKeyTypes(this->types);
}

$X500PrincipalArray* CertificateRequest$T12CertificateRequestMessage::getAuthorities() {
	$useLocalObjectStack();
	$var($X500PrincipalArray, principals, $new($X500PrincipalArray, $nc(this->authorities)->size()));
	int32_t i = 0;
	{
		$var($Iterator, i$, this->authorities->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($bytes, encoded, $cast($bytes, i$->next()));
			{
				principals->set(i++, $$new($X500Principal, encoded));
			}
		}
	}
	return principals;
}

$SSLHandshake* CertificateRequest$T12CertificateRequestMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::CERTIFICATE_REQUEST;
}

int32_t CertificateRequest$T12CertificateRequestMessage::messageLength() {
	$useLocalObjectStack();
	int32_t len = 1 + $nc(this->types)->length + 2 + ($nc(this->algorithmIds)->length << 1) + 2;
	{
		$var($Iterator, i$, $nc(this->authorities)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($bytes, encoded, $cast($bytes, i$->next()));
			{
				len += $nc(encoded)->length + 2;
			}
		}
	}
	return len;
}

void CertificateRequest$T12CertificateRequestMessage::send($HandshakeOutStream* hos) {
	$useLocalObjectStack();
	$nc(hos)->putBytes8(this->types);
	int32_t listLen = 0;
	{
		$var($Iterator, i$, $nc(this->authorities)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($bytes, encoded, $cast($bytes, i$->next()));
			{
				listLen += $nc(encoded)->length + 2;
			}
		}
	}
	hos->putInt16($nc(this->algorithmIds)->length << 1);
	{
		$var($ints, arr$, this->algorithmIds);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int32_t algorithmId = arr$->get(i$);
			{
				hos->putInt16(algorithmId);
			}
		}
	}
	hos->putInt16(listLen);
	{
		$var($Iterator, i$, this->authorities->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($bytes, encoded, $cast($bytes, i$->next()));
			{
				hos->putBytes16(encoded);
			}
		}
	}
}

$String* CertificateRequest$T12CertificateRequestMessage::toString() {
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"CertificateRequest\": \'{\'\n  \"certificate types\": {0}\n  \"supported signature algorithms\": {1}\n  \"certificate authorities\": {2}\n\'}\'"_s, $Locale::ENGLISH));
	$var($List, typeNames, $new($ArrayList, $nc(this->types)->length));
	{
		$var($bytes, arr$, this->types);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int8_t type = arr$->get(i$);
			{
				typeNames->add($($CertificateRequest$ClientCertificateType::nameOf(type)));
			}
		}
	}
	$var($List, algorithmNames, $new($ArrayList, $nc(this->algorithmIds)->length));
	{
		$var($ints, arr$, this->algorithmIds);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int32_t algorithmId = arr$->get(i$);
			{
				algorithmNames->add($($SignatureScheme::nameOf(algorithmId)));
			}
		}
	}
	$var($List, authorityNames, $new($ArrayList, $nc(this->authorities)->size()));
	{
		$var($Iterator, i$, this->authorities->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($bytes, encoded, $cast($bytes, i$->next()));
			{
				$var($X500Principal, principal, $new($X500Principal, encoded));
				authorityNames->add($(principal->toString()));
			}
		}
	}
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		typeNames,
		algorithmNames,
		authorityNames
	}));
	return messageFormat->format(messageFields);
}

CertificateRequest$T12CertificateRequestMessage::CertificateRequest$T12CertificateRequestMessage() {
}

$Class* CertificateRequest$T12CertificateRequestMessage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"types", "[B", nullptr, $FINAL, $field(CertificateRequest$T12CertificateRequestMessage, types)},
		{"algorithmIds", "[I", nullptr, $FINAL, $field(CertificateRequest$T12CertificateRequestMessage, algorithmIds)},
		{"authorities", "Ljava/util/List;", "Ljava/util/List<[B>;", $FINAL, $field(CertificateRequest$T12CertificateRequestMessage, authorities)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/HandshakeContext;[Ljava/security/cert/X509Certificate;Lsun/security/ssl/CipherSuite$KeyExchange;Ljava/util/List;)V", "(Lsun/security/ssl/HandshakeContext;[Ljava/security/cert/X509Certificate;Lsun/security/ssl/CipherSuite$KeyExchange;Ljava/util/List<Lsun/security/ssl/SignatureScheme;>;)V", 0, $method(CertificateRequest$T12CertificateRequestMessage, init$, void, $HandshakeContext*, $X509CertificateArray*, $CipherSuite$KeyExchange*, $List*), "java.io.IOException"},
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(CertificateRequest$T12CertificateRequestMessage, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"getAuthorities", "()[Ljavax/security/auth/x500/X500Principal;", nullptr, 0, $method(CertificateRequest$T12CertificateRequestMessage, getAuthorities, $X500PrincipalArray*)},
		{"getKeyTypes", "()[Ljava/lang/String;", nullptr, 0, $method(CertificateRequest$T12CertificateRequestMessage, getKeyTypes, $StringArray*)},
		{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC, $virtualMethod(CertificateRequest$T12CertificateRequestMessage, handshakeType, $SSLHandshake*)},
		{"messageLength", "()I", nullptr, $PUBLIC, $virtualMethod(CertificateRequest$T12CertificateRequestMessage, messageLength, int32_t)},
		{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, $virtualMethod(CertificateRequest$T12CertificateRequestMessage, send, void, $HandshakeOutStream*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificateRequest$T12CertificateRequestMessage, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertificateRequest$T12CertificateRequestMessage", "sun.security.ssl.CertificateRequest", "T12CertificateRequestMessage", $STATIC | $FINAL},
		{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertificateRequest$T12CertificateRequestMessage",
		"sun.security.ssl.SSLHandshake$HandshakeMessage",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.CertificateRequest"
	};
	$loadClass(CertificateRequest$T12CertificateRequestMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateRequest$T12CertificateRequestMessage);
	});
	return class$;
}

$Class* CertificateRequest$T12CertificateRequestMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun