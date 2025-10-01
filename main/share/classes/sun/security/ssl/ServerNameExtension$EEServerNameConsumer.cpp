#include <sun/security/ssl/ServerNameExtension$EEServerNameConsumer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SNIServerName.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerNameExtension$CHServerNamesSpec.h>
#include <sun/security/ssl/ServerNameExtension$SHServerNamesSpec.h>
#include <sun/security/ssl/ServerNameExtension.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_SERVER_NAME
#undef EE_SERVER_NAME
#undef DEFAULT
#undef UNEXPECTED_MESSAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SNIServerName = ::javax::net::ssl::SNIServerName;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerNameExtension = ::sun::security::ssl::ServerNameExtension;
using $ServerNameExtension$CHServerNamesSpec = ::sun::security::ssl::ServerNameExtension$CHServerNamesSpec;
using $ServerNameExtension$SHServerNamesSpec = ::sun::security::ssl::ServerNameExtension$SHServerNamesSpec;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerNameExtension$EEServerNameConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerNameExtension$EEServerNameConsumer::*)()>(&ServerNameExtension$EEServerNameConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ServerNameExtension$EEServerNameConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerNameExtension$EEServerNameConsumer", "sun.security.ssl.ServerNameExtension", "EEServerNameConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ServerNameExtension$EEServerNameConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerNameExtension$EEServerNameConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_ServerNameExtension$EEServerNameConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ServerNameExtension$EEServerNameConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerNameExtension"
};

$Object* allocate$ServerNameExtension$EEServerNameConsumer($Class* clazz) {
	return $of($alloc(ServerNameExtension$EEServerNameConsumer));
}

void ServerNameExtension$EEServerNameConsumer::init$() {
}

void ServerNameExtension$EEServerNameConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($ServerNameExtension$CHServerNamesSpec, spec, $cast($ServerNameExtension$CHServerNamesSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CH_SERVER_NAME)));
	if (spec == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected EncryptedExtensions server_name extension"_s)));
	}
	if ($nc(buffer)->remaining() != 0) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Invalid EncryptedExtensions server_name extension"_s)));
	}
	$init($ServerNameExtension$SHServerNamesSpec);
	$nc(chc->handshakeExtensions)->put($SSLExtension::EE_SERVER_NAME, $ServerNameExtension$SHServerNamesSpec::DEFAULT);
	$set(chc, negotiatedServerName, $cast($SNIServerName, $nc($nc(spec)->serverNames)->get(0)));
}

ServerNameExtension$EEServerNameConsumer::ServerNameExtension$EEServerNameConsumer() {
}

$Class* ServerNameExtension$EEServerNameConsumer::load$($String* name, bool initialize) {
	$loadClass(ServerNameExtension$EEServerNameConsumer, name, initialize, &_ServerNameExtension$EEServerNameConsumer_ClassInfo_, allocate$ServerNameExtension$EEServerNameConsumer);
	return class$;
}

$Class* ServerNameExtension$EEServerNameConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun