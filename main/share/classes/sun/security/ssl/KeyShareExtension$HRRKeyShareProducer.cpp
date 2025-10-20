#include <sun/security/ssl/KeyShareExtension$HRRKeyShareProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/KeyShareExtension$HRRKeyShareSpec.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroups.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef HRR_KEY_SHARE
#undef UNEXPECTED_MESSAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $KeyShareExtension = ::sun::security::ssl::KeyShareExtension;
using $KeyShareExtension$HRRKeyShareSpec = ::sun::security::ssl::KeyShareExtension$HRRKeyShareSpec;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SupportedGroupsExtension$SupportedGroups = ::sun::security::ssl::SupportedGroupsExtension$SupportedGroups;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _KeyShareExtension$HRRKeyShareProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyShareExtension$HRRKeyShareProducer::*)()>(&KeyShareExtension$HRRKeyShareProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _KeyShareExtension$HRRKeyShareProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyShareExtension$HRRKeyShareProducer", "sun.security.ssl.KeyShareExtension", "HRRKeyShareProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyShareExtension$HRRKeyShareProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyShareExtension$HRRKeyShareProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_KeyShareExtension$HRRKeyShareProducer_MethodInfo_,
	nullptr,
	nullptr,
	_KeyShareExtension$HRRKeyShareProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyShareExtension"
};

$Object* allocate$KeyShareExtension$HRRKeyShareProducer($Class* clazz) {
	return $of($alloc(KeyShareExtension$HRRKeyShareProducer));
}

void KeyShareExtension$HRRKeyShareProducer::init$() {
}

$bytes* KeyShareExtension$HRRKeyShareProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::HRR_KEY_SHARE)) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unsupported key_share extension in HelloRetryRequest"_s)));
	}
	if ($nc(shc)->clientRequestedNamedGroups == nullptr || $nc($nc(shc)->clientRequestedNamedGroups)->isEmpty()) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected key_share extension in HelloRetryRequest"_s)));
	}
	$NamedGroup* selectedGroup = nullptr;
	{
		$var($Iterator, i$, $nc($nc(shc)->clientRequestedNamedGroups)->iterator());
		for (; $nc(i$)->hasNext();) {
			$NamedGroup* ng = $cast($NamedGroup, i$->next());
			{
				if ($SupportedGroupsExtension$SupportedGroups::isActivatable(shc->algorithmConstraints, ng)) {
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
						$SSLLogger::fine($$str({"HelloRetryRequest selected named group: "_s, $nc(ng)->name$}), $$new($ObjectArray, 0));
					}
					selectedGroup = ng;
					break;
				}
			}
		}
	}
	if (selectedGroup == nullptr) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "No common named group"_s)));
	}
	$var($bytes, extdata, $new($bytes, {
		(int8_t)((int32_t)(($nc(selectedGroup)->id >> 8) & (uint32_t)255)),
		(int8_t)((int32_t)(selectedGroup->id & (uint32_t)255))
	}));
	$set(shc, serverSelectedNamedGroup, selectedGroup);
	$nc(shc->handshakeExtensions)->put($SSLExtension::HRR_KEY_SHARE, $$new($KeyShareExtension$HRRKeyShareSpec, selectedGroup));
	return extdata;
}

KeyShareExtension$HRRKeyShareProducer::KeyShareExtension$HRRKeyShareProducer() {
}

$Class* KeyShareExtension$HRRKeyShareProducer::load$($String* name, bool initialize) {
	$loadClass(KeyShareExtension$HRRKeyShareProducer, name, initialize, &_KeyShareExtension$HRRKeyShareProducer_ClassInfo_, allocate$KeyShareExtension$HRRKeyShareProducer);
	return class$;
}

$Class* KeyShareExtension$HRRKeyShareProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun