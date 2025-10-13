#include <sun/security/ssl/KeyShareExtension$HRRKeyShareConsumer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/KeyShareExtension$CHKeyShareSpec.h>
#include <sun/security/ssl/KeyShareExtension$HRRKeyShareSpec.h>
#include <sun/security/ssl/KeyShareExtension$KeyShareEntry.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_KEY_SHARE
#undef HRR_KEY_SHARE
#undef ILLEGAL_PARAMETER
#undef INTERNAL_ERROR
#undef UNEXPECTED_MESSAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $KeyShareExtension = ::sun::security::ssl::KeyShareExtension;
using $KeyShareExtension$CHKeyShareSpec = ::sun::security::ssl::KeyShareExtension$CHKeyShareSpec;
using $KeyShareExtension$HRRKeyShareSpec = ::sun::security::ssl::KeyShareExtension$HRRKeyShareSpec;
using $KeyShareExtension$KeyShareEntry = ::sun::security::ssl::KeyShareExtension$KeyShareEntry;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _KeyShareExtension$HRRKeyShareConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyShareExtension$HRRKeyShareConsumer::*)()>(&KeyShareExtension$HRRKeyShareConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _KeyShareExtension$HRRKeyShareConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyShareExtension$HRRKeyShareConsumer", "sun.security.ssl.KeyShareExtension", "HRRKeyShareConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyShareExtension$HRRKeyShareConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyShareExtension$HRRKeyShareConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_KeyShareExtension$HRRKeyShareConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_KeyShareExtension$HRRKeyShareConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyShareExtension"
};

$Object* allocate$KeyShareExtension$HRRKeyShareConsumer($Class* clazz) {
	return $of($alloc(KeyShareExtension$HRRKeyShareConsumer));
}

void KeyShareExtension$HRRKeyShareConsumer::init$() {
}

void KeyShareExtension$HRRKeyShareConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::HRR_KEY_SHARE)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unsupported key_share extension in HelloRetryRequest"_s)));
	}
	if ($nc(chc)->clientRequestedNamedGroups == nullptr || $nc($nc(chc)->clientRequestedNamedGroups)->isEmpty()) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected key_share extension in HelloRetryRequest"_s)));
	}
	$var($KeyShareExtension$HRRKeyShareSpec, spec, $new($KeyShareExtension$HRRKeyShareSpec, chc, buffer));
	$NamedGroup* serverGroup = $NamedGroup::valueOf(spec->selectedGroup);
	if (serverGroup == nullptr) {
		$init($Alert);
		$throw($($nc($nc(chc)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, $$str({"Unsupported HelloRetryRequest selected group: "_s, $($NamedGroup::nameOf(spec->selectedGroup))}))));
	}
	if (!$nc($nc(chc)->clientRequestedNamedGroups)->contains(serverGroup)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::ILLEGAL_PARAMETER, $$str({"Unexpected HelloRetryRequest selected group: "_s, $nc(serverGroup)->name$}))));
	}
	$var($KeyShareExtension$CHKeyShareSpec, chKsSpec, $cast($KeyShareExtension$CHKeyShareSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CH_KEY_SHARE)));
	if (chKsSpec != nullptr) {
		{
			$var($Iterator, i$, $nc(chKsSpec->clientShares)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($KeyShareExtension$KeyShareEntry, kse, $cast($KeyShareExtension$KeyShareEntry, i$->next()));
				{
					if ($nc(serverGroup)->id == $nc(kse)->namedGroupId) {
						$init($Alert);
						$throw($($nc(chc->conContext)->fatal($Alert::ILLEGAL_PARAMETER, $$str({"Illegal HelloRetryRequest selected group: "_s, serverGroup->name$}))));
					}
				}
			}
		}
	} else {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::INTERNAL_ERROR, "Unable to retrieve ClientHello key_share extension during HRR processing"_s)));
	}
	$set(chc, serverSelectedNamedGroup, serverGroup);
	$nc(chc->handshakeExtensions)->put($SSLExtension::HRR_KEY_SHARE, spec);
}

KeyShareExtension$HRRKeyShareConsumer::KeyShareExtension$HRRKeyShareConsumer() {
}

$Class* KeyShareExtension$HRRKeyShareConsumer::load$($String* name, bool initialize) {
	$loadClass(KeyShareExtension$HRRKeyShareConsumer, name, initialize, &_KeyShareExtension$HRRKeyShareConsumer_ClassInfo_, allocate$KeyShareExtension$HRRKeyShareConsumer);
	return class$;
}

$Class* KeyShareExtension$HRRKeyShareConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun