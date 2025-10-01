#include <sun/security/ssl/ServerNameExtension$CHServerNameConsumer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <javax/net/ssl/SNIMatcher.h>
#include <javax/net/ssl/SNIServerName.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/ServerNameExtension$CHServerNamesSpec.h>
#include <sun/security/ssl/ServerNameExtension.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_SERVER_NAME
#undef UNRECOGNIZED_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $SNIMatcher = ::javax::net::ssl::SNIMatcher;
using $SNIServerName = ::javax::net::ssl::SNIServerName;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $ServerNameExtension = ::sun::security::ssl::ServerNameExtension;
using $ServerNameExtension$CHServerNamesSpec = ::sun::security::ssl::ServerNameExtension$CHServerNamesSpec;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerNameExtension$CHServerNameConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerNameExtension$CHServerNameConsumer::*)()>(&ServerNameExtension$CHServerNameConsumer::init$))},
	{"chooseSni", "(Ljava/util/Collection;Ljava/util/List;)Ljavax/net/ssl/SNIServerName;", "(Ljava/util/Collection<Ljavax/net/ssl/SNIMatcher;>;Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;)Ljavax/net/ssl/SNIServerName;", $PRIVATE | $STATIC, $method(static_cast<$SNIServerName*(*)($Collection*,$List*)>(&ServerNameExtension$CHServerNameConsumer::chooseSni))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ServerNameExtension$CHServerNameConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerNameExtension$CHServerNameConsumer", "sun.security.ssl.ServerNameExtension", "CHServerNameConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ServerNameExtension$CHServerNameConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerNameExtension$CHServerNameConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_ServerNameExtension$CHServerNameConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ServerNameExtension$CHServerNameConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerNameExtension"
};

$Object* allocate$ServerNameExtension$CHServerNameConsumer($Class* clazz) {
	return $of($alloc(ServerNameExtension$CHServerNameConsumer));
}

void ServerNameExtension$CHServerNameConsumer::init$() {
}

void ServerNameExtension$CHServerNameConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_SERVER_NAME)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::CH_SERVER_NAME->name$}), $$new($ObjectArray, 0));
		}
		return;
	}
	$var($ServerNameExtension$CHServerNamesSpec, spec, $new($ServerNameExtension$CHServerNamesSpec, shc, buffer));
	$nc($nc(shc)->handshakeExtensions)->put($SSLExtension::CH_SERVER_NAME, spec);
	$var($SNIServerName, sni, nullptr);
	if (!$nc($nc(shc->sslConfig)->sniMatchers)->isEmpty()) {
		$assign(sni, chooseSni($nc(shc->sslConfig)->sniMatchers, spec->serverNames));
		if (sni != nullptr) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine($$str({"server name indication ("_s, sni, ") is accepted"_s}), $$new($ObjectArray, 0));
			}
		} else {
			$init($Alert);
			$throw($($nc(shc->conContext)->fatal($Alert::UNRECOGNIZED_NAME, "Unrecognized server name indication"_s)));
		}
	} else {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("no server name matchers, ignore server name indication"_s, $$new($ObjectArray, 0));
		}
	}
	if (shc->isResumption && shc->resumingSession != nullptr) {
		if (!$Objects::equals(sni, $nc(shc->resumingSession)->serverNameIndication)) {
			shc->isResumption = false;
			$set(shc, resumingSession, nullptr);
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine("abort session resumption, different server name indication used"_s, $$new($ObjectArray, 0));
			}
		}
	}
	$set(shc, requestedServerNames, spec->serverNames);
	$set(shc, negotiatedServerName, sni);
}

$SNIServerName* ServerNameExtension$CHServerNameConsumer::chooseSni($Collection* matchers, $List* sniNames) {
	$init(ServerNameExtension$CHServerNameConsumer);
	if (sniNames != nullptr && !sniNames->isEmpty()) {
		{
			$var($Iterator, i$, $nc(matchers)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SNIMatcher, matcher, $cast($SNIMatcher, i$->next()));
				{
					int32_t matcherType = $nc(matcher)->getType();
					{
						$var($Iterator, i$, sniNames->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($SNIServerName, sniName, $cast($SNIServerName, i$->next()));
							{
								if ($nc(sniName)->getType() == matcherType) {
									if (matcher->matches(sniName)) {
										return sniName;
									}
									break;
								}
							}
						}
					}
				}
			}
		}
	}
	return nullptr;
}

ServerNameExtension$CHServerNameConsumer::ServerNameExtension$CHServerNameConsumer() {
}

$Class* ServerNameExtension$CHServerNameConsumer::load$($String* name, bool initialize) {
	$loadClass(ServerNameExtension$CHServerNameConsumer, name, initialize, &_ServerNameExtension$CHServerNameConsumer_ClassInfo_, allocate$ServerNameExtension$CHServerNameConsumer);
	return class$;
}

$Class* ServerNameExtension$CHServerNameConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun