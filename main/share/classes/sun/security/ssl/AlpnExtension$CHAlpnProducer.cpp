#include <sun/security/ssl/AlpnExtension$CHAlpnProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/util/Arrays.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/AlpnExtension$AlpnSpec.h>
#include <sun/security/ssl/AlpnExtension.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_ALPN
#undef ILLEGAL_PARAMETER
#undef MAX_AP_LENGTH
#undef MAX_AP_LIST_LENGTH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Charset = ::java::nio::charset::Charset;
using $Arrays = ::java::util::Arrays;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $AlpnExtension = ::sun::security::ssl::AlpnExtension;
using $AlpnExtension$AlpnSpec = ::sun::security::ssl::AlpnExtension$AlpnSpec;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $Record = ::sun::security::ssl::Record;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _AlpnExtension$CHAlpnProducer_FieldInfo_[] = {
	{"MAX_AP_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(AlpnExtension$CHAlpnProducer, MAX_AP_LENGTH)},
	{"MAX_AP_LIST_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(AlpnExtension$CHAlpnProducer, MAX_AP_LIST_LENGTH)},
	{}
};

$MethodInfo _AlpnExtension$CHAlpnProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AlpnExtension$CHAlpnProducer::*)()>(&AlpnExtension$CHAlpnProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _AlpnExtension$CHAlpnProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.AlpnExtension$CHAlpnProducer", "sun.security.ssl.AlpnExtension", "CHAlpnProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _AlpnExtension$CHAlpnProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.AlpnExtension$CHAlpnProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	_AlpnExtension$CHAlpnProducer_FieldInfo_,
	_AlpnExtension$CHAlpnProducer_MethodInfo_,
	nullptr,
	nullptr,
	_AlpnExtension$CHAlpnProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.AlpnExtension"
};

$Object* allocate$AlpnExtension$CHAlpnProducer($Class* clazz) {
	return $of($alloc(AlpnExtension$CHAlpnProducer));
}

void AlpnExtension$CHAlpnProducer::init$() {
}

$bytes* AlpnExtension$CHAlpnProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_ALPN)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::info($$str({"Ignore client unavailable extension: "_s, $SSLExtension::CH_ALPN->name$}), $$new($ObjectArray, 0));
		}
		$set(chc, applicationProtocol, ""_s);
		$set($nc(chc->conContext), applicationProtocol, ""_s);
		return nullptr;
	}
	$var($StringArray, laps, $nc($nc(chc)->sslConfig)->applicationProtocols);
	if ((laps == nullptr) || ($nc(laps)->length == 0)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::info("No available application protocols"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	int32_t listLength = 0;
	{
		$var($StringArray, arr$, laps);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, ap, arr$->get(i$));
			{
				$init($AlpnExtension);
				int32_t length = $($nc(ap)->getBytes($AlpnExtension::alpnCharset))->length;
				if (length == 0) {
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
						$SSLLogger::severe("Application protocol name cannot be empty"_s, $$new($ObjectArray, 0));
					}
					$init($Alert);
					$throw($($nc(chc->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Application protocol name cannot be empty"_s)));
				}
				if (length <= AlpnExtension$CHAlpnProducer::MAX_AP_LENGTH) {
					listLength += (length + 1);
				} else {
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
						$SSLLogger::severe($$str({"Application protocol name ("_s, ap, ") exceeds the size limit ("_s, $$str(AlpnExtension$CHAlpnProducer::MAX_AP_LENGTH), " bytes)"_s}), $$new($ObjectArray, 0));
					}
					$init($Alert);
					$throw($($nc(chc->conContext)->fatal($Alert::ILLEGAL_PARAMETER, $$str({"Application protocol name ("_s, ap, ") exceeds the size limit ("_s, $$str(AlpnExtension$CHAlpnProducer::MAX_AP_LENGTH), " bytes)"_s}))));
				}
				if (listLength > AlpnExtension$CHAlpnProducer::MAX_AP_LIST_LENGTH) {
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
						$SSLLogger::severe($$str({"The configured application protocols ("_s, $($Arrays::toString(laps)), ") exceed the size limit ("_s, $$str(AlpnExtension$CHAlpnProducer::MAX_AP_LIST_LENGTH), " bytes)"_s}), $$new($ObjectArray, 0));
					}
					$init($Alert);
					$throw($($nc(chc->conContext)->fatal($Alert::ILLEGAL_PARAMETER, $$str({"The configured application protocols ("_s, $($Arrays::toString(laps)), ") exceed the size limit ("_s, $$str(AlpnExtension$CHAlpnProducer::MAX_AP_LIST_LENGTH), " bytes)"_s}))));
				}
			}
		}
	}
	$var($bytes, extData, $new($bytes, listLength + 2));
	$var($ByteBuffer, m, $ByteBuffer::wrap(extData));
	$Record::putInt16(m, listLength);
	{
		$var($StringArray, arr$, laps);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, ap, arr$->get(i$));
			{
				$init($AlpnExtension);
				$Record::putBytes8(m, $($nc(ap)->getBytes($AlpnExtension::alpnCharset)));
			}
		}
	}
	$nc(chc->handshakeExtensions)->put($SSLExtension::CH_ALPN, $$new($AlpnExtension$AlpnSpec, $nc(chc->sslConfig)->applicationProtocols));
	return extData;
}

AlpnExtension$CHAlpnProducer::AlpnExtension$CHAlpnProducer() {
}

$Class* AlpnExtension$CHAlpnProducer::load$($String* name, bool initialize) {
	$loadClass(AlpnExtension$CHAlpnProducer, name, initialize, &_AlpnExtension$CHAlpnProducer_ClassInfo_, allocate$AlpnExtension$CHAlpnProducer);
	return class$;
}

$Class* AlpnExtension$CHAlpnProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun