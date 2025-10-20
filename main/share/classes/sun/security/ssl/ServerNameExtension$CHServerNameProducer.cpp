#include <sun/security/ssl/ServerNameExtension$CHServerNameProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SNIServerName.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerNameExtension$CHServerNamesSpec.h>
#include <sun/security/ssl/ServerNameExtension.h>
#include <jcpp.h>

#undef CH_SERVER_NAME
#undef NAME_HEADER_LENGTH

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SNIServerName = ::javax::net::ssl::SNIServerName;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $Record = ::sun::security::ssl::Record;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerNameExtension = ::sun::security::ssl::ServerNameExtension;
using $ServerNameExtension$CHServerNamesSpec = ::sun::security::ssl::ServerNameExtension$CHServerNamesSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerNameExtension$CHServerNameProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerNameExtension$CHServerNameProducer::*)()>(&ServerNameExtension$CHServerNameProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ServerNameExtension$CHServerNameProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerNameExtension$CHServerNameProducer", "sun.security.ssl.ServerNameExtension", "CHServerNameProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerNameExtension$CHServerNameProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerNameExtension$CHServerNameProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_ServerNameExtension$CHServerNameProducer_MethodInfo_,
	nullptr,
	nullptr,
	_ServerNameExtension$CHServerNameProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerNameExtension"
};

$Object* allocate$ServerNameExtension$CHServerNameProducer($Class* clazz) {
	return $of($alloc(ServerNameExtension$CHServerNameProducer));
}

void ServerNameExtension$CHServerNameProducer::init$() {
}

$bytes* ServerNameExtension$CHServerNameProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_SERVER_NAME)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("Ignore unavailable server_name extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($List, serverNames, nullptr);
	if ($nc(chc)->isResumption && (chc->resumingSession != nullptr)) {
		$assign(serverNames, $nc(chc->resumingSession)->getRequestedServerNames());
	} else {
		$assign(serverNames, $nc(chc->sslConfig)->serverNames);
	}
	if ((serverNames != nullptr) && !serverNames->isEmpty()) {
		int32_t sniLen = 0;
		{
			$var($Iterator, i$, serverNames->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SNIServerName, sniName, $cast($SNIServerName, i$->next()));
				{
					sniLen += $ServerNameExtension$CHServerNamesSpec::NAME_HEADER_LENGTH;
					sniLen += $nc($($nc(sniName)->getEncoded()))->length;
				}
			}
		}
		$var($bytes, extData, $new($bytes, sniLen + 2));
		$var($ByteBuffer, m, $ByteBuffer::wrap(extData));
		$Record::putInt16(m, sniLen);
		{
			$var($Iterator, i$, serverNames->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SNIServerName, sniName, $cast($SNIServerName, i$->next()));
				{
					$Record::putInt8(m, $nc(sniName)->getType());
					$Record::putBytes16(m, $($nc(sniName)->getEncoded()));
				}
			}
		}
		$set($nc(chc), requestedServerNames, serverNames);
		$nc(chc->handshakeExtensions)->put($SSLExtension::CH_SERVER_NAME, $$new($ServerNameExtension$CHServerNamesSpec, serverNames));
		return extData;
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::warning("Unable to indicate server name"_s, $$new($ObjectArray, 0));
	}
	return nullptr;
}

ServerNameExtension$CHServerNameProducer::ServerNameExtension$CHServerNameProducer() {
}

$Class* ServerNameExtension$CHServerNameProducer::load$($String* name, bool initialize) {
	$loadClass(ServerNameExtension$CHServerNameProducer, name, initialize, &_ServerNameExtension$CHServerNameProducer_ClassInfo_, allocate$ServerNameExtension$CHServerNameProducer);
	return class$;
}

$Class* ServerNameExtension$CHServerNameProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun