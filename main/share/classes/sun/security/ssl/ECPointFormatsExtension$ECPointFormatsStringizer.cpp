#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormatsStringizer.h>

#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormatsSpec.h>
#include <sun/security/ssl/ECPointFormatsExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ECPointFormatsExtension$ECPointFormatsSpec = ::sun::security::ssl::ECPointFormatsExtension$ECPointFormatsSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ECPointFormatsExtension$ECPointFormatsStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ECPointFormatsExtension$ECPointFormatsStringizer::*)()>(&ECPointFormatsExtension$ECPointFormatsStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ECPointFormatsExtension$ECPointFormatsStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECPointFormatsExtension$ECPointFormatsStringizer", "sun.security.ssl.ECPointFormatsExtension", "ECPointFormatsStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ECPointFormatsExtension$ECPointFormatsStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECPointFormatsExtension$ECPointFormatsStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_ECPointFormatsExtension$ECPointFormatsStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_ECPointFormatsExtension$ECPointFormatsStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECPointFormatsExtension"
};

$Object* allocate$ECPointFormatsExtension$ECPointFormatsStringizer($Class* clazz) {
	return $of($alloc(ECPointFormatsExtension$ECPointFormatsStringizer));
}

void ECPointFormatsExtension$ECPointFormatsStringizer::init$() {
}

$String* ECPointFormatsExtension$ECPointFormatsStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($ECPointFormatsExtension$ECPointFormatsSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

ECPointFormatsExtension$ECPointFormatsStringizer::ECPointFormatsExtension$ECPointFormatsStringizer() {
}

$Class* ECPointFormatsExtension$ECPointFormatsStringizer::load$($String* name, bool initialize) {
	$loadClass(ECPointFormatsExtension$ECPointFormatsStringizer, name, initialize, &_ECPointFormatsExtension$ECPointFormatsStringizer_ClassInfo_, allocate$ECPointFormatsExtension$ECPointFormatsStringizer);
	return class$;
}

$Class* ECPointFormatsExtension$ECPointFormatsStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun