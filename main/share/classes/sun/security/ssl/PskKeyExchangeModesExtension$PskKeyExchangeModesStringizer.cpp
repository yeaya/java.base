#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer.h>

#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesSpec.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $PskKeyExchangeModesExtension$PskKeyExchangeModesSpec = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeModesSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer::*)()>(&PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeModesStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PskKeyExchangeModesExtension"
};

$Object* allocate$PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer($Class* clazz) {
	return $of($alloc(PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer));
}

void PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer::init$() {
}

$String* PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($PskKeyExchangeModesExtension$PskKeyExchangeModesSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer::PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer() {
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer::load$($String* name, bool initialize) {
	$loadClass(PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer, name, initialize, &_PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer_ClassInfo_, allocate$PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer);
	return class$;
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun