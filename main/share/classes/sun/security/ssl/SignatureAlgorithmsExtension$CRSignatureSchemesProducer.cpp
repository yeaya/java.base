#include <sun/security/ssl/SignatureAlgorithmsExtension$CRSignatureSchemesProducer.h>

#include <java/nio/ByteBuffer.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesSpec.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CR_SIGNATURE_ALGORITHMS
#undef MISSING_EXTENSION

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $Record = ::sun::security::ssl::Record;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SignatureAlgorithmsExtension$CRSignatureSchemesProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SignatureAlgorithmsExtension$CRSignatureSchemesProducer::*)()>(&SignatureAlgorithmsExtension$CRSignatureSchemesProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SignatureAlgorithmsExtension$CRSignatureSchemesProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesProducer", "sun.security.ssl.SignatureAlgorithmsExtension", "CRSignatureSchemesProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SignatureAlgorithmsExtension$CRSignatureSchemesProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_SignatureAlgorithmsExtension$CRSignatureSchemesProducer_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureAlgorithmsExtension$CRSignatureSchemesProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SignatureAlgorithmsExtension"
};

$Object* allocate$SignatureAlgorithmsExtension$CRSignatureSchemesProducer($Class* clazz) {
	return $of($alloc(SignatureAlgorithmsExtension$CRSignatureSchemesProducer));
}

void SignatureAlgorithmsExtension$CRSignatureSchemesProducer::init$() {
}

$bytes* SignatureAlgorithmsExtension$CRSignatureSchemesProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CR_SIGNATURE_ALGORITHMS)) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::MISSING_EXTENSION, "No available signature_algorithms extension for client certificate authentication"_s)));
	}
	$var($List, sigAlgs, $SignatureScheme::getSupportedAlgorithms($nc(shc)->sslConfig, shc->algorithmConstraints, $($List::of($of(shc->negotiatedProtocol)))));
	int32_t var$0 = $SignatureScheme::sizeInRecord();
	int32_t vectorLen = var$0 * $nc(sigAlgs)->size();
	$var($bytes, extData, $new($bytes, vectorLen + 2));
	$var($ByteBuffer, m, $ByteBuffer::wrap(extData));
	$Record::putInt16(m, vectorLen);
	{
		$var($Iterator, i$, sigAlgs->iterator());
		for (; $nc(i$)->hasNext();) {
			$SignatureScheme* ss = $cast($SignatureScheme, i$->next());
			{
				$Record::putInt16(m, $nc(ss)->id);
			}
		}
	}
	$nc($nc(shc)->handshakeExtensions)->put($SSLExtension::CR_SIGNATURE_ALGORITHMS, $$new($SignatureAlgorithmsExtension$SignatureSchemesSpec, shc->localSupportedSignAlgs));
	return extData;
}

SignatureAlgorithmsExtension$CRSignatureSchemesProducer::SignatureAlgorithmsExtension$CRSignatureSchemesProducer() {
}

$Class* SignatureAlgorithmsExtension$CRSignatureSchemesProducer::load$($String* name, bool initialize) {
	$loadClass(SignatureAlgorithmsExtension$CRSignatureSchemesProducer, name, initialize, &_SignatureAlgorithmsExtension$CRSignatureSchemesProducer_ClassInfo_, allocate$SignatureAlgorithmsExtension$CRSignatureSchemesProducer);
	return class$;
}

$Class* SignatureAlgorithmsExtension$CRSignatureSchemesProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun