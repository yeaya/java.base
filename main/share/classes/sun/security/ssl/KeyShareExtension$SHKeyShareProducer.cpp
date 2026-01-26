#include <sun/security/ssl/KeyShareExtension$SHKeyShareProducer.h>

#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/KeyShareExtension$CHKeyShareSpec.h>
#include <sun/security/ssl/KeyShareExtension$KeyShareEntry.h>
#include <sun/security/ssl/KeyShareExtension$SHKeyShareSpec.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/NamedGroupCredentials.h>
#include <sun/security/ssl/NamedGroupPossession.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef CH_KEY_SHARE
#undef SH_KEY_SHARE

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $SSLPossessionArray = $Array<::sun::security::ssl::SSLPossession>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $KeyShareExtension$CHKeyShareSpec = ::sun::security::ssl::KeyShareExtension$CHKeyShareSpec;
using $KeyShareExtension$KeyShareEntry = ::sun::security::ssl::KeyShareExtension$KeyShareEntry;
using $KeyShareExtension$SHKeyShareSpec = ::sun::security::ssl::KeyShareExtension$SHKeyShareSpec;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroupCredentials = ::sun::security::ssl::NamedGroupCredentials;
using $NamedGroupPossession = ::sun::security::ssl::NamedGroupPossession;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _KeyShareExtension$SHKeyShareProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(KeyShareExtension$SHKeyShareProducer, init$, void)},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(KeyShareExtension$SHKeyShareProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _KeyShareExtension$SHKeyShareProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyShareExtension$SHKeyShareProducer", "sun.security.ssl.KeyShareExtension", "SHKeyShareProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyShareExtension$SHKeyShareProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyShareExtension$SHKeyShareProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_KeyShareExtension$SHKeyShareProducer_MethodInfo_,
	nullptr,
	nullptr,
	_KeyShareExtension$SHKeyShareProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyShareExtension"
};

$Object* allocate$KeyShareExtension$SHKeyShareProducer($Class* clazz) {
	return $of($alloc(KeyShareExtension$SHKeyShareProducer));
}

void KeyShareExtension$SHKeyShareProducer::init$() {
}

$bytes* KeyShareExtension$SHKeyShareProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	$var($KeyShareExtension$CHKeyShareSpec, kss, $cast($KeyShareExtension$CHKeyShareSpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_KEY_SHARE)));
	if (kss == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("Ignore, no client key_share extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if (!$nc(shc->sslConfig)->isAvailable($SSLExtension::SH_KEY_SHARE)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("Ignore, no available server key_share extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if ((shc->handshakeCredentials == nullptr) || $nc(shc->handshakeCredentials)->isEmpty()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("No available client key share entries"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($KeyShareExtension$KeyShareEntry, keyShare, nullptr);
	{
		$var($Iterator, i$, $nc(shc->handshakeCredentials)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLCredentials, cd, $cast($SSLCredentials, i$->next()));
			{
				$NamedGroup* ng = nullptr;
				if ($instanceOf($NamedGroupCredentials, cd)) {
					$var($NamedGroupCredentials, creds, $cast($NamedGroupCredentials, cd));
					ng = $nc(creds)->getNamedGroup();
				}
				if (ng == nullptr) {
					continue;
				}
				$var($SSLKeyExchange, ke, $SSLKeyExchange::valueOf(ng));
				if (ke == nullptr) {
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
						$SSLLogger::warning($$str({"No key exchange for named group "_s, $nc(ng)->name$}), $$new($ObjectArray, 0));
					}
					continue;
				}
				$var($SSLPossessionArray, poses, $nc(ke)->createPossessions(shc));
				{
					$var($SSLPossessionArray, arr$, poses);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($SSLPossession, pos, arr$->get(i$));
						{
							if (!($instanceOf($NamedGroupPossession, pos))) {
								continue;
							}
							$set(shc, handshakeKeyExchange, ke);
							$nc(shc->handshakePossessions)->add(pos);
							$assign(keyShare, $new($KeyShareExtension$KeyShareEntry, $nc(ng)->id, $($nc(pos)->encode())));
							break;
						}
					}
				}
				if (keyShare != nullptr) {
					{
						$var($Map$EntryArray, arr$, ke->getHandshakeProducers(shc));
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($Map$Entry, me, arr$->get(i$));
							{
								$var($Object, var$0, $cast($Byte, $nc(me)->getKey()));
								$nc(shc->handshakeProducers)->put(var$0, $cast($HandshakeProducer, $(me->getValue())));
							}
						}
					}
					break;
				}
			}
		}
	}
	if (keyShare == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("No available server key_share extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($bytes, extData, $nc(keyShare)->getEncoded());
	$var($KeyShareExtension$SHKeyShareSpec, spec, $new($KeyShareExtension$SHKeyShareSpec, keyShare));
	$nc(shc->handshakeExtensions)->put($SSLExtension::SH_KEY_SHARE, spec);
	return extData;
}

KeyShareExtension$SHKeyShareProducer::KeyShareExtension$SHKeyShareProducer() {
}

$Class* KeyShareExtension$SHKeyShareProducer::load$($String* name, bool initialize) {
	$loadClass(KeyShareExtension$SHKeyShareProducer, name, initialize, &_KeyShareExtension$SHKeyShareProducer_ClassInfo_, allocate$KeyShareExtension$SHKeyShareProducer);
	return class$;
}

$Class* KeyShareExtension$SHKeyShareProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun