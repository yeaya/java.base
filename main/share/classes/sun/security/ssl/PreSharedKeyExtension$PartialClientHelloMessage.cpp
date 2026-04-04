#include <sun/security/ssl/PreSharedKeyExtension$PartialClientHelloMessage.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeySpec.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <jcpp.h>

#undef CH_PRE_SHARED_KEY

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $PreSharedKeyExtension$CHPreSharedKeySpec = ::sun::security::ssl::PreSharedKeyExtension$CHPreSharedKeySpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;

namespace sun {
	namespace security {
		namespace ssl {

void PreSharedKeyExtension$PartialClientHelloMessage::init$($HandshakeContext* ctx, $ClientHello$ClientHelloMessage* msg, $PreSharedKeyExtension$CHPreSharedKeySpec* psk) {
	$SSLHandshake$HandshakeMessage::init$(ctx);
	$set(this, msg, msg);
	$set(this, psk, psk);
}

$SSLHandshake* PreSharedKeyExtension$PartialClientHelloMessage::handshakeType() {
	return $nc(this->msg)->handshakeType();
}

int32_t PreSharedKeyExtension$PartialClientHelloMessage::pskTotalLength() {
	int32_t var$0 = $nc(this->psk)->getIdsEncodedLength();
	return var$0 + this->psk->getBindersEncodedLength() + 8;
}

int32_t PreSharedKeyExtension$PartialClientHelloMessage::messageLength() {
	$init($SSLExtension);
	if ($nc($nc(this->msg)->extensions)->get($SSLExtension::CH_PRE_SHARED_KEY) != nullptr) {
		return this->msg->messageLength();
	} else {
		int32_t var$0 = this->msg->messageLength();
		return var$0 + pskTotalLength();
	}
}

void PreSharedKeyExtension$PartialClientHelloMessage::send($HandshakeOutStream* hos) {
	$useLocalObjectStack();
	$nc(this->msg)->sendCore(hos);
	int32_t extsLen = $nc(this->msg->extensions)->length();
	$init($SSLExtension);
	if (this->msg->extensions->get($SSLExtension::CH_PRE_SHARED_KEY) == nullptr) {
		extsLen += pskTotalLength();
	}
	$nc(hos)->putInt16(extsLen - 2);
	{
		$var($SSLExtensionArray, arr$, $SSLExtension::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$SSLExtension* ext = arr$->get(i$);
			{
				$var($bytes, extData, this->msg->extensions->get(ext));
				if (extData == nullptr) {
					continue;
				}
				if (ext == $SSLExtension::CH_PRE_SHARED_KEY) {
					continue;
				}
				int32_t extID = $nc(ext)->id;
				hos->putInt16(extID);
				hos->putBytes16(extData);
			}
		}
	}
	int32_t extID = $SSLExtension::CH_PRE_SHARED_KEY->id;
	hos->putInt16(extID);
	$var($bytes, encodedPsk, $nc(this->psk)->getEncoded());
	hos->putInt16($nc(encodedPsk)->length);
	hos->write(encodedPsk, 0, this->psk->getIdsEncodedLength() + 2);
}

PreSharedKeyExtension$PartialClientHelloMessage::PreSharedKeyExtension$PartialClientHelloMessage() {
}

$Class* PreSharedKeyExtension$PartialClientHelloMessage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"msg", "Lsun/security/ssl/ClientHello$ClientHelloMessage;", nullptr, $PRIVATE | $FINAL, $field(PreSharedKeyExtension$PartialClientHelloMessage, msg)},
		{"psk", "Lsun/security/ssl/PreSharedKeyExtension$CHPreSharedKeySpec;", nullptr, $PRIVATE | $FINAL, $field(PreSharedKeyExtension$PartialClientHelloMessage, psk)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Lsun/security/ssl/ClientHello$ClientHelloMessage;Lsun/security/ssl/PreSharedKeyExtension$CHPreSharedKeySpec;)V", nullptr, 0, $method(PreSharedKeyExtension$PartialClientHelloMessage, init$, void, $HandshakeContext*, $ClientHello$ClientHelloMessage*, $PreSharedKeyExtension$CHPreSharedKeySpec*)},
		{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, 0, $virtualMethod(PreSharedKeyExtension$PartialClientHelloMessage, handshakeType, $SSLHandshake*)},
		{"messageLength", "()I", nullptr, 0, $virtualMethod(PreSharedKeyExtension$PartialClientHelloMessage, messageLength, int32_t)},
		{"pskTotalLength", "()I", nullptr, $PRIVATE, $method(PreSharedKeyExtension$PartialClientHelloMessage, pskTotalLength, int32_t)},
		{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, 0, $virtualMethod(PreSharedKeyExtension$PartialClientHelloMessage, send, void, $HandshakeOutStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PreSharedKeyExtension$PartialClientHelloMessage", "sun.security.ssl.PreSharedKeyExtension", "PartialClientHelloMessage", $STATIC | $FINAL},
		{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.PreSharedKeyExtension$PartialClientHelloMessage",
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
		"sun.security.ssl.PreSharedKeyExtension"
	};
	$loadClass(PreSharedKeyExtension$PartialClientHelloMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreSharedKeyExtension$PartialClientHelloMessage);
	});
	return class$;
}

$Class* PreSharedKeyExtension$PartialClientHelloMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun