#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeyProducer.h>

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
#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeySpec.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef SH_PRE_SHARED_KEY

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $PreSharedKeyExtension = ::sun::security::ssl::PreSharedKeyExtension;
using $PreSharedKeyExtension$SHPreSharedKeySpec = ::sun::security::ssl::PreSharedKeyExtension$SHPreSharedKeySpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PreSharedKeyExtension$SHPreSharedKeyProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PreSharedKeyExtension$SHPreSharedKeyProducer::*)()>(&PreSharedKeyExtension$SHPreSharedKeyProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _PreSharedKeyExtension$SHPreSharedKeyProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyProducer", "sun.security.ssl.PreSharedKeyExtension", "SHPreSharedKeyProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PreSharedKeyExtension$SHPreSharedKeyProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_PreSharedKeyExtension$SHPreSharedKeyProducer_MethodInfo_,
	nullptr,
	nullptr,
	_PreSharedKeyExtension$SHPreSharedKeyProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PreSharedKeyExtension"
};

$Object* allocate$PreSharedKeyExtension$SHPreSharedKeyProducer($Class* clazz) {
	return $of($alloc(PreSharedKeyExtension$SHPreSharedKeyProducer));
}

void PreSharedKeyExtension$SHPreSharedKeyProducer::init$() {
}

$bytes* PreSharedKeyExtension$SHPreSharedKeyProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	$var($PreSharedKeyExtension$SHPreSharedKeySpec, psk, $cast($PreSharedKeyExtension$SHPreSharedKeySpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::SH_PRE_SHARED_KEY)));
	if (psk == nullptr) {
		return nullptr;
	}
	return $nc(psk)->getEncoded();
}

PreSharedKeyExtension$SHPreSharedKeyProducer::PreSharedKeyExtension$SHPreSharedKeyProducer() {
}

$Class* PreSharedKeyExtension$SHPreSharedKeyProducer::load$($String* name, bool initialize) {
	$loadClass(PreSharedKeyExtension$SHPreSharedKeyProducer, name, initialize, &_PreSharedKeyExtension$SHPreSharedKeyProducer_ClassInfo_, allocate$PreSharedKeyExtension$SHPreSharedKeyProducer);
	return class$;
}

$Class* PreSharedKeyExtension$SHPreSharedKeyProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun