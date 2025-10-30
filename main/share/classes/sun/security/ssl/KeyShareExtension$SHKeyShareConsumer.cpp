#include <sun/security/ssl/KeyShareExtension$SHKeyShareConsumer.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/security/GeneralSecurityException.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/KeyShareExtension$KeyShareEntry.h>
#include <sun/security/ssl/KeyShareExtension$SHKeyShareSpec.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <sun/security/ssl/NamedGroup$ExceptionSupplier.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLCredentials.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroups.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef SH_KEY_SHARE
#undef UNEXPECTED_MESSAGE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $KeyShareExtension = ::sun::security::ssl::KeyShareExtension;
using $KeyShareExtension$KeyShareEntry = ::sun::security::ssl::KeyShareExtension$KeyShareEntry;
using $KeyShareExtension$SHKeyShareSpec = ::sun::security::ssl::KeyShareExtension$SHKeyShareSpec;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroup$ExceptionSupplier = ::sun::security::ssl::NamedGroup$ExceptionSupplier;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $SupportedGroupsExtension$SupportedGroups = ::sun::security::ssl::SupportedGroupsExtension$SupportedGroups;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

class KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0 : public $NamedGroup$ExceptionSupplier {
	$class(KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0, $NO_CLASS_INIT, $NamedGroup$ExceptionSupplier)
public:
	void init$($ClientHandshakeContext* chc) {
		$set(this, chc, chc);
	}
	virtual void apply($String* s) override {
		KeyShareExtension$SHKeyShareConsumer::lambda$consume$0(chc, s);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0>());
	}
	$ClientHandshakeContext* chc = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0::fieldInfos[2] = {
	{"chc", "Lsun/security/ssl/ClientHandshakeContext;", nullptr, $PUBLIC, $field(KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0, chc)},
	{}
};
$MethodInfo KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0::methodInfos[3] = {
	{"<init>", "(Lsun/security/ssl/ClientHandshakeContext;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0::*)($ClientHandshakeContext*)>(&KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0::init$))},
	{"apply", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.ssl.KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0",
	"java.lang.Object",
	"sun.security.ssl.NamedGroup$ExceptionSupplier",
	fieldInfos,
	methodInfos
};
$Class* KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0::load$($String* name, bool initialize) {
	$loadClass(KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0::class$ = nullptr;

$MethodInfo _KeyShareExtension$SHKeyShareConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyShareExtension$SHKeyShareConsumer::*)()>(&KeyShareExtension$SHKeyShareConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"lambda$consume$0", "(Lsun/security/ssl/ClientHandshakeContext;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ClientHandshakeContext*,$String*)>(&KeyShareExtension$SHKeyShareConsumer::lambda$consume$0)), "javax.net.ssl.SSLException"},
	{}
};

$InnerClassInfo _KeyShareExtension$SHKeyShareConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyShareExtension$SHKeyShareConsumer", "sun.security.ssl.KeyShareExtension", "SHKeyShareConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyShareExtension$SHKeyShareConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyShareExtension$SHKeyShareConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_KeyShareExtension$SHKeyShareConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_KeyShareExtension$SHKeyShareConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyShareExtension"
};

$Object* allocate$KeyShareExtension$SHKeyShareConsumer($Class* clazz) {
	return $of($alloc(KeyShareExtension$SHKeyShareConsumer));
}

void KeyShareExtension$SHKeyShareConsumer::init$() {
}

void KeyShareExtension$SHKeyShareConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	if ($nc(chc)->clientRequestedNamedGroups == nullptr || $nc($nc(chc)->clientRequestedNamedGroups)->isEmpty()) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected key_share extension in ServerHello"_s)));
	}
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::SH_KEY_SHARE)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unsupported key_share extension in ServerHello"_s)));
	}
	$var($KeyShareExtension$SHKeyShareSpec, spec, $new($KeyShareExtension$SHKeyShareSpec, chc, buffer));
	$var($KeyShareExtension$KeyShareEntry, keyShare, spec->serverShare);
	$NamedGroup* ng = $NamedGroup::valueOf($nc(keyShare)->namedGroupId);
	if (ng == nullptr || !$SupportedGroupsExtension$SupportedGroups::isActivatable($nc(chc)->algorithmConstraints, ng)) {
		$init($Alert);
		$throw($($nc($nc(chc)->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, $$str({"Unsupported named group: "_s, $($NamedGroup::nameOf($nc(keyShare)->namedGroupId))}))));
	}
	$var($SSLKeyExchange, ke, $SSLKeyExchange::valueOf(ng));
	if (ke == nullptr) {
		$init($Alert);
		$throw($($nc($nc(chc)->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, $$str({"No key exchange for named group "_s, $nc(ng)->name$}))));
	}
	$var($SSLCredentials, credentials, nullptr);
	try {
		$var($SSLCredentials, kaCred, $nc(ng)->decodeCredentials($nc(keyShare)->keyExchange, $nc(chc)->algorithmConstraints, static_cast<$NamedGroup$ExceptionSupplier*>($$new(KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0, chc))));
		if (kaCred != nullptr) {
			$assign(credentials, kaCred);
		}
	} catch ($GeneralSecurityException& ex) {
		$init($Alert);
		$throw($($nc($nc(chc)->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, $$str({"Cannot decode named group: "_s, $($NamedGroup::nameOf($nc(keyShare)->namedGroupId))}))));
	}
	if (credentials == nullptr) {
		$init($Alert);
		$throw($($nc($nc(chc)->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, $$str({"Unsupported named group: "_s, $nc(ng)->name$}))));
	}
	$set($nc(chc), handshakeKeyExchange, ke);
	$nc(chc->handshakeCredentials)->add(credentials);
	$nc(chc->handshakeExtensions)->put($SSLExtension::SH_KEY_SHARE, spec);
}

void KeyShareExtension$SHKeyShareConsumer::lambda$consume$0($ClientHandshakeContext* chc, $String* s) {
	$init(KeyShareExtension$SHKeyShareConsumer);
	$init($Alert);
	$nc($nc(chc)->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, s);
}

KeyShareExtension$SHKeyShareConsumer::KeyShareExtension$SHKeyShareConsumer() {
}

$Class* KeyShareExtension$SHKeyShareConsumer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0::classInfo$.name)) {
			return KeyShareExtension$SHKeyShareConsumer$$Lambda$lambda$consume$0::load$(name, initialize);
		}
	}
	$loadClass(KeyShareExtension$SHKeyShareConsumer, name, initialize, &_KeyShareExtension$SHKeyShareConsumer_ClassInfo_, allocate$KeyShareExtension$SHKeyShareConsumer);
	return class$;
}

$Class* KeyShareExtension$SHKeyShareConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun