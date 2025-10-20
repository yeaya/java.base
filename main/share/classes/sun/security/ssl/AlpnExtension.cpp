#include <sun/security/ssl/AlpnExtension.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Security.h>
#include <sun/security/ssl/AlpnExtension$AlpnStringizer.h>
#include <sun/security/ssl/AlpnExtension$CHAlpnAbsence.h>
#include <sun/security/ssl/AlpnExtension$CHAlpnConsumer.h>
#include <sun/security/ssl/AlpnExtension$CHAlpnProducer.h>
#include <sun/security/ssl/AlpnExtension$SHAlpnAbsence.h>
#include <sun/security/ssl/AlpnExtension$SHAlpnConsumer.h>
#include <sun/security/ssl/AlpnExtension$SHAlpnProducer.h>
#include <sun/security/ssl/HandshakeAbsence.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLExtension$ExtensionConsumer.h>
#include <sun/security/ssl/SSLStringizer.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Charset = ::java::nio::charset::Charset;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;
using $AlpnExtension$AlpnStringizer = ::sun::security::ssl::AlpnExtension$AlpnStringizer;
using $AlpnExtension$CHAlpnAbsence = ::sun::security::ssl::AlpnExtension$CHAlpnAbsence;
using $AlpnExtension$CHAlpnConsumer = ::sun::security::ssl::AlpnExtension$CHAlpnConsumer;
using $AlpnExtension$CHAlpnProducer = ::sun::security::ssl::AlpnExtension$CHAlpnProducer;
using $AlpnExtension$SHAlpnAbsence = ::sun::security::ssl::AlpnExtension$SHAlpnAbsence;
using $AlpnExtension$SHAlpnConsumer = ::sun::security::ssl::AlpnExtension$SHAlpnConsumer;
using $AlpnExtension$SHAlpnProducer = ::sun::security::ssl::AlpnExtension$SHAlpnProducer;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

class AlpnExtension$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(AlpnExtension$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(AlpnExtension::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AlpnExtension$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AlpnExtension$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AlpnExtension$$Lambda$lambda$static$0::*)()>(&AlpnExtension$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AlpnExtension$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.ssl.AlpnExtension$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* AlpnExtension$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(AlpnExtension$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AlpnExtension$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _AlpnExtension_FieldInfo_[] = {
	{"chNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(AlpnExtension, chNetworkProducer)},
	{"chOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(AlpnExtension, chOnLoadConsumer)},
	{"chOnLoadAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(AlpnExtension, chOnLoadAbsence)},
	{"shNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(AlpnExtension, shNetworkProducer)},
	{"shOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(AlpnExtension, shOnLoadConsumer)},
	{"shOnLoadAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(AlpnExtension, shOnLoadAbsence)},
	{"eeNetworkProducer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(AlpnExtension, eeNetworkProducer)},
	{"eeOnLoadConsumer", "Lsun/security/ssl/SSLExtension$ExtensionConsumer;", nullptr, $STATIC | $FINAL, $staticField(AlpnExtension, eeOnLoadConsumer)},
	{"eeOnLoadAbsence", "Lsun/security/ssl/HandshakeAbsence;", nullptr, $STATIC | $FINAL, $staticField(AlpnExtension, eeOnLoadAbsence)},
	{"alpnStringizer", "Lsun/security/ssl/SSLStringizer;", nullptr, $STATIC | $FINAL, $staticField(AlpnExtension, alpnStringizer)},
	{"alpnCharset", "Ljava/nio/charset/Charset;", nullptr, $STATIC | $FINAL, $staticField(AlpnExtension, alpnCharset)},
	{}
};

$MethodInfo _AlpnExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AlpnExtension::*)()>(&AlpnExtension::init$))},
	{"lambda$static$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&AlpnExtension::lambda$static$0))},
	{}
};

$InnerClassInfo _AlpnExtension_InnerClassesInfo_[] = {
	{"sun.security.ssl.AlpnExtension$SHAlpnAbsence", "sun.security.ssl.AlpnExtension", "SHAlpnAbsence", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.AlpnExtension$SHAlpnConsumer", "sun.security.ssl.AlpnExtension", "SHAlpnConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.AlpnExtension$SHAlpnProducer", "sun.security.ssl.AlpnExtension", "SHAlpnProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.AlpnExtension$CHAlpnAbsence", "sun.security.ssl.AlpnExtension", "CHAlpnAbsence", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.AlpnExtension$CHAlpnConsumer", "sun.security.ssl.AlpnExtension", "CHAlpnConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.AlpnExtension$CHAlpnProducer", "sun.security.ssl.AlpnExtension", "CHAlpnProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.AlpnExtension$AlpnStringizer", "sun.security.ssl.AlpnExtension", "AlpnStringizer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.AlpnExtension$AlpnSpec", "sun.security.ssl.AlpnExtension", "AlpnSpec", $STATIC | $FINAL},
	{}
};

$ClassInfo _AlpnExtension_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.AlpnExtension",
	"java.lang.Object",
	nullptr,
	_AlpnExtension_FieldInfo_,
	_AlpnExtension_MethodInfo_,
	nullptr,
	nullptr,
	_AlpnExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.AlpnExtension$SHAlpnAbsence,sun.security.ssl.AlpnExtension$SHAlpnConsumer,sun.security.ssl.AlpnExtension$SHAlpnProducer,sun.security.ssl.AlpnExtension$CHAlpnAbsence,sun.security.ssl.AlpnExtension$CHAlpnConsumer,sun.security.ssl.AlpnExtension$CHAlpnProducer,sun.security.ssl.AlpnExtension$AlpnStringizer,sun.security.ssl.AlpnExtension$AlpnSpec"
};

$Object* allocate$AlpnExtension($Class* clazz) {
	return $of($alloc(AlpnExtension));
}

$HandshakeProducer* AlpnExtension::chNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* AlpnExtension::chOnLoadConsumer = nullptr;
$HandshakeAbsence* AlpnExtension::chOnLoadAbsence = nullptr;
$HandshakeProducer* AlpnExtension::shNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* AlpnExtension::shOnLoadConsumer = nullptr;
$HandshakeAbsence* AlpnExtension::shOnLoadAbsence = nullptr;
$HandshakeProducer* AlpnExtension::eeNetworkProducer = nullptr;
$SSLExtension$ExtensionConsumer* AlpnExtension::eeOnLoadConsumer = nullptr;
$HandshakeAbsence* AlpnExtension::eeOnLoadAbsence = nullptr;
$SSLStringizer* AlpnExtension::alpnStringizer = nullptr;
$Charset* AlpnExtension::alpnCharset = nullptr;

void AlpnExtension::init$() {
}

$String* AlpnExtension::lambda$static$0() {
	$init(AlpnExtension);
	return $Security::getProperty("jdk.tls.alpnCharset"_s);
}

void clinit$AlpnExtension($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(AlpnExtension::chNetworkProducer, $new($AlpnExtension$CHAlpnProducer));
	$assignStatic(AlpnExtension::chOnLoadConsumer, $new($AlpnExtension$CHAlpnConsumer));
	$assignStatic(AlpnExtension::chOnLoadAbsence, $new($AlpnExtension$CHAlpnAbsence));
	$assignStatic(AlpnExtension::shNetworkProducer, $new($AlpnExtension$SHAlpnProducer));
	$assignStatic(AlpnExtension::shOnLoadConsumer, $new($AlpnExtension$SHAlpnConsumer));
	$assignStatic(AlpnExtension::shOnLoadAbsence, $new($AlpnExtension$SHAlpnAbsence));
	$assignStatic(AlpnExtension::eeNetworkProducer, $new($AlpnExtension$SHAlpnProducer));
	$assignStatic(AlpnExtension::eeOnLoadConsumer, $new($AlpnExtension$SHAlpnConsumer));
	$assignStatic(AlpnExtension::eeOnLoadAbsence, $new($AlpnExtension$SHAlpnAbsence));
	$assignStatic(AlpnExtension::alpnStringizer, $new($AlpnExtension$AlpnStringizer));
	{
		$var($String, alpnCharsetString, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(AlpnExtension$$Lambda$lambda$static$0)))));
		if ((alpnCharsetString == nullptr) || ($nc(alpnCharsetString)->length() == 0)) {
			$assign(alpnCharsetString, "ISO_8859_1"_s);
		}
		$assignStatic(AlpnExtension::alpnCharset, $Charset::forName(alpnCharsetString));
	}
}

AlpnExtension::AlpnExtension() {
}

$Class* AlpnExtension::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AlpnExtension$$Lambda$lambda$static$0::classInfo$.name)) {
			return AlpnExtension$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(AlpnExtension, name, initialize, &_AlpnExtension_ClassInfo_, clinit$AlpnExtension, allocate$AlpnExtension);
	return class$;
}

$Class* AlpnExtension::class$ = nullptr;

		} // ssl
	} // security
} // sun