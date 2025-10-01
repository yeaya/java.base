#include <sun/security/ssl/CertificateVerify$T13CertificateVerifyMessage.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/Signature.h>
#include <java/security/SignatureException.h>
#include <java/text/MessageFormat.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CertificateVerify.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/ssl/X509Authentication$X509Credentials.h>
#include <sun/security/ssl/X509Authentication$X509Possession.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef CERTIFICATE_VERIFY
#undef ENGLISH
#undef HANDSHAKE_FAILURE
#undef ILLEGAL_PARAMETER
#undef INTERNAL_ERROR

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $Signature = ::java::security::Signature;
using $SignatureException = ::java::security::SignatureException;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map$Entry = ::java::util::Map$Entry;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $CertificateVerify = ::sun::security::ssl::CertificateVerify;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $Record = ::sun::security::ssl::Record;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $Utilities = ::sun::security::ssl::Utilities;
using $X509Authentication$X509Credentials = ::sun::security::ssl::X509Authentication$X509Credentials;
using $X509Authentication$X509Possession = ::sun::security::ssl::X509Authentication$X509Possession;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertificateVerify$T13CertificateVerifyMessage_FieldInfo_[] = {
	{"serverSignHead", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CertificateVerify$T13CertificateVerifyMessage, serverSignHead)},
	{"clientSignHead", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CertificateVerify$T13CertificateVerifyMessage, clientSignHead)},
	{"signatureScheme", "Lsun/security/ssl/SignatureScheme;", nullptr, $PRIVATE | $FINAL, $field(CertificateVerify$T13CertificateVerifyMessage, signatureScheme)},
	{"signature", "[B", nullptr, $PRIVATE | $FINAL, $field(CertificateVerify$T13CertificateVerifyMessage, signature)},
	{}
};

$MethodInfo _CertificateVerify$T13CertificateVerifyMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Lsun/security/ssl/X509Authentication$X509Possession;)V", nullptr, 0, $method(static_cast<void(CertificateVerify$T13CertificateVerifyMessage::*)($HandshakeContext*,$X509Authentication$X509Possession*)>(&CertificateVerify$T13CertificateVerifyMessage::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(CertificateVerify$T13CertificateVerifyMessage::*)($HandshakeContext*,$ByteBuffer*)>(&CertificateVerify$T13CertificateVerifyMessage::init$)), "java.io.IOException"},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC},
	{"messageLength", "()I", nullptr, $PUBLIC},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CertificateVerify$T13CertificateVerifyMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateVerify$T13CertificateVerifyMessage", "sun.security.ssl.CertificateVerify", "T13CertificateVerifyMessage", $STATIC | $FINAL},
	{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CertificateVerify$T13CertificateVerifyMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateVerify$T13CertificateVerifyMessage",
	"sun.security.ssl.SSLHandshake$HandshakeMessage",
	nullptr,
	_CertificateVerify$T13CertificateVerifyMessage_FieldInfo_,
	_CertificateVerify$T13CertificateVerifyMessage_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateVerify$T13CertificateVerifyMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateVerify"
};

$Object* allocate$CertificateVerify$T13CertificateVerifyMessage($Class* clazz) {
	return $of($alloc(CertificateVerify$T13CertificateVerifyMessage));
}

$bytes* CertificateVerify$T13CertificateVerifyMessage::serverSignHead = nullptr;
$bytes* CertificateVerify$T13CertificateVerifyMessage::clientSignHead = nullptr;

void CertificateVerify$T13CertificateVerifyMessage::init$($HandshakeContext* context, $X509Authentication$X509Possession* x509Possession) {
	$SSLHandshake$HandshakeMessage::init$(context);
	$var($Map$Entry, schemeAndSigner, $SignatureScheme::getSignerOfPreferableAlgorithm($nc(context)->algorithmConstraints, context->peerRequestedSignatureSchemes, x509Possession, context->negotiatedProtocol));
	if (schemeAndSigner == nullptr) {
		$init($Alert);
		$throw($($nc($nc(context)->conContext)->fatal($Alert::INTERNAL_ERROR, $$str({"No supported CertificateVerify signature algorithm for "_s, $($nc($nc(x509Possession)->popPrivateKey)->getAlgorithm()), "  key"_s}))));
	}
	$set(this, signatureScheme, $cast($SignatureScheme, $nc(schemeAndSigner)->getKey()));
	$var($bytes, hashValue, $nc($nc(context)->handshakeHash)->digest());
	$var($bytes, contentCovered, nullptr);
	if ($nc(context->sslConfig)->isClientMode) {
		$assign(contentCovered, $Arrays::copyOf(CertificateVerify$T13CertificateVerifyMessage::clientSignHead, $nc(CertificateVerify$T13CertificateVerifyMessage::clientSignHead)->length + $nc(hashValue)->length));
		$System::arraycopy(hashValue, 0, contentCovered, $nc(CertificateVerify$T13CertificateVerifyMessage::clientSignHead)->length, $nc(hashValue)->length);
	} else {
		$assign(contentCovered, $Arrays::copyOf(CertificateVerify$T13CertificateVerifyMessage::serverSignHead, $nc(CertificateVerify$T13CertificateVerifyMessage::serverSignHead)->length + $nc(hashValue)->length));
		$System::arraycopy(hashValue, 0, contentCovered, $nc(CertificateVerify$T13CertificateVerifyMessage::serverSignHead)->length, $nc(hashValue)->length);
	}
	$var($bytes, temporary, nullptr);
	try {
		$var($Signature, signer, $cast($Signature, schemeAndSigner->getValue()));
		$nc(signer)->update(contentCovered);
		$assign(temporary, signer->sign());
	} catch ($SignatureException&) {
		$var($SignatureException, ikse, $catch());
		$init($Alert);
		$throw($($nc(context->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Cannot produce CertificateVerify signature"_s, ikse)));
	}
	$set(this, signature, temporary);
}

void CertificateVerify$T13CertificateVerifyMessage::init$($HandshakeContext* context, $ByteBuffer* m) {
	$SSLHandshake$HandshakeMessage::init$(context);
	if ($nc(m)->remaining() < 4) {
		$init($Alert);
		$throw($($nc($nc(context)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid CertificateVerify message: no sufficient data"_s)));
	}
	int32_t ssid = $Record::getInt16(m);
	$set(this, signatureScheme, $SignatureScheme::valueOf(ssid));
	if (this->signatureScheme == nullptr) {
		$init($Alert);
		$throw($($nc($nc(context)->conContext)->fatal($Alert::HANDSHAKE_FAILURE, $$str({"Invalid signature algorithm ("_s, $$str(ssid), ") used in CertificateVerify handshake message"_s}))));
	}
	if (!$nc($nc(context)->localSupportedSignAlgs)->contains(this->signatureScheme)) {
		$init($Alert);
		$throw($($nc(context->conContext)->fatal($Alert::HANDSHAKE_FAILURE, $$str({"Unsupported signature algorithm ("_s, this->signatureScheme->name$, ") used in CertificateVerify handshake message"_s}))));
	}
	$var($X509Authentication$X509Credentials, x509Credentials, nullptr);
	{
		$var($Iterator, i$, $nc($nc(context)->handshakeCredentials)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLCredentials, cd, $cast($SSLCredentials, i$->next()));
			{
				if ($instanceOf($X509Authentication$X509Credentials, cd)) {
					$assign(x509Credentials, $cast($X509Authentication$X509Credentials, cd));
					break;
				}
			}
		}
	}
	if (x509Credentials == nullptr || $nc(x509Credentials)->popPublicKey == nullptr) {
		$init($Alert);
		$throw($($nc(context->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No X509 credentials negotiated for CertificateVerify"_s)));
	}
	$set(this, signature, $Record::getBytes16(m));
	$var($bytes, hashValue, $nc(context->handshakeHash)->digest());
	$var($bytes, contentCovered, nullptr);
	if ($nc(context->sslConfig)->isClientMode) {
		$assign(contentCovered, $Arrays::copyOf(CertificateVerify$T13CertificateVerifyMessage::serverSignHead, $nc(CertificateVerify$T13CertificateVerifyMessage::serverSignHead)->length + $nc(hashValue)->length));
		$System::arraycopy(hashValue, 0, contentCovered, $nc(CertificateVerify$T13CertificateVerifyMessage::serverSignHead)->length, $nc(hashValue)->length);
	} else {
		$assign(contentCovered, $Arrays::copyOf(CertificateVerify$T13CertificateVerifyMessage::clientSignHead, $nc(CertificateVerify$T13CertificateVerifyMessage::clientSignHead)->length + $nc(hashValue)->length));
		$System::arraycopy(hashValue, 0, contentCovered, $nc(CertificateVerify$T13CertificateVerifyMessage::clientSignHead)->length, $nc(hashValue)->length);
	}
	try {
		$var($Signature, signer, this->signatureScheme->getVerifier($nc(x509Credentials)->popPublicKey));
		$nc(signer)->update(contentCovered);
		if (!signer->verify(this->signature)) {
			$init($Alert);
			$throw($($nc(context->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Invalid CertificateVerify signature"_s)));
		}
	} catch ($NoSuchAlgorithmException&) {
		$var($GeneralSecurityException, nsae, $catch());
		$init($Alert);
		$throw($($nc(context->conContext)->fatal($Alert::INTERNAL_ERROR, $$str({"Unsupported signature algorithm ("_s, this->signatureScheme->name$, ") used in CertificateVerify handshake message"_s}), nsae)));
	} catch ($InvalidAlgorithmParameterException&) {
		$var($GeneralSecurityException, nsae, $catch());
		$init($Alert);
		$throw($($nc(context->conContext)->fatal($Alert::INTERNAL_ERROR, $$str({"Unsupported signature algorithm ("_s, this->signatureScheme->name$, ") used in CertificateVerify handshake message"_s}), nsae)));
	} catch ($InvalidKeyException&) {
		$var($GeneralSecurityException, ikse, $catch());
		$init($Alert);
		$throw($($nc(context->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Cannot verify CertificateVerify signature"_s, ikse)));
	} catch ($SignatureException&) {
		$var($GeneralSecurityException, ikse, $catch());
		$init($Alert);
		$throw($($nc(context->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Cannot verify CertificateVerify signature"_s, ikse)));
	}
}

$SSLHandshake* CertificateVerify$T13CertificateVerifyMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::CERTIFICATE_VERIFY;
}

int32_t CertificateVerify$T13CertificateVerifyMessage::messageLength() {
	return 4 + $nc(this->signature)->length;
}

void CertificateVerify$T13CertificateVerifyMessage::send($HandshakeOutStream* hos) {
	$nc(hos)->putInt16(this->signatureScheme->id);
	hos->putBytes16(this->signature);
}

$String* CertificateVerify$T13CertificateVerifyMessage::toString() {
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"CertificateVerify\": \'{\'\n  \"signature algorithm\": {0}\n  \"signature\": \'{\'\n{1}\n  \'}\'\n\'}\'"_s, $Locale::ENGLISH));
	$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$of(this->signatureScheme->name$),
		$($of($Utilities::indent($(hexEncoder->encodeBuffer(this->signature)), "    "_s)))
	}));
	return messageFormat->format(messageFields);
}

void clinit$CertificateVerify$T13CertificateVerifyMessage($Class* class$) {
	$assignStatic(CertificateVerify$T13CertificateVerifyMessage::serverSignHead, $new($bytes, {
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)84,
		(int8_t)76,
		(int8_t)83,
		(int8_t)32,
		(int8_t)49,
		(int8_t)46,
		(int8_t)51,
		(int8_t)44,
		(int8_t)32,
		(int8_t)115,
		(int8_t)101,
		(int8_t)114,
		(int8_t)118,
		(int8_t)101,
		(int8_t)114,
		(int8_t)32,
		(int8_t)67,
		(int8_t)101,
		(int8_t)114,
		(int8_t)116,
		(int8_t)105,
		(int8_t)102,
		(int8_t)105,
		(int8_t)99,
		(int8_t)97,
		(int8_t)116,
		(int8_t)101,
		(int8_t)86,
		(int8_t)101,
		(int8_t)114,
		(int8_t)105,
		(int8_t)102,
		(int8_t)121,
		(int8_t)0
	}));
	$assignStatic(CertificateVerify$T13CertificateVerifyMessage::clientSignHead, $new($bytes, {
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)84,
		(int8_t)76,
		(int8_t)83,
		(int8_t)32,
		(int8_t)49,
		(int8_t)46,
		(int8_t)51,
		(int8_t)44,
		(int8_t)32,
		(int8_t)99,
		(int8_t)108,
		(int8_t)105,
		(int8_t)101,
		(int8_t)110,
		(int8_t)116,
		(int8_t)32,
		(int8_t)67,
		(int8_t)101,
		(int8_t)114,
		(int8_t)116,
		(int8_t)105,
		(int8_t)102,
		(int8_t)105,
		(int8_t)99,
		(int8_t)97,
		(int8_t)116,
		(int8_t)101,
		(int8_t)86,
		(int8_t)101,
		(int8_t)114,
		(int8_t)105,
		(int8_t)102,
		(int8_t)121,
		(int8_t)0
	}));
}

CertificateVerify$T13CertificateVerifyMessage::CertificateVerify$T13CertificateVerifyMessage() {
}

$Class* CertificateVerify$T13CertificateVerifyMessage::load$($String* name, bool initialize) {
	$loadClass(CertificateVerify$T13CertificateVerifyMessage, name, initialize, &_CertificateVerify$T13CertificateVerifyMessage_ClassInfo_, clinit$CertificateVerify$T13CertificateVerifyMessage, allocate$CertificateVerify$T13CertificateVerifyMessage);
	return class$;
}

$Class* CertificateVerify$T13CertificateVerifyMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun