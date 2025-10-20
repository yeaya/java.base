#include <sun/security/ssl/ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretSpec.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef NOMINAL
#undef SH_EXTENDED_MASTER_SECRET

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ExtendedMasterSecretExtension = ::sun::security::ssl::ExtendedMasterSecretExtension;
using $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec = ::sun::security::ssl::ExtendedMasterSecretExtension$ExtendedMasterSecretSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer::*)()>(&ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer", "sun.security.ssl.ExtendedMasterSecretExtension", "SHExtendedMasterSecretProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ExtendedMasterSecretExtension"
};

$Object* allocate$ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer($Class* clazz) {
	return $of($alloc(ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer));
}

void ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer::init$() {
}

$bytes* ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if ($nc($nc(shc)->handshakeSession)->useExtendedMasterSecret) {
		$var($bytes, extData, $new($bytes, 0));
		$init($SSLExtension);
		$init($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec);
		$nc(shc->handshakeExtensions)->put($SSLExtension::SH_EXTENDED_MASTER_SECRET, $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::NOMINAL);
		return extData;
	}
	return nullptr;
}

ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer::ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer() {
}

$Class* ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer::load$($String* name, bool initialize) {
	$loadClass(ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer, name, initialize, &_ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer_ClassInfo_, allocate$ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer);
	return class$;
}

$Class* ExtendedMasterSecretExtension$SHExtendedMasterSecretProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun