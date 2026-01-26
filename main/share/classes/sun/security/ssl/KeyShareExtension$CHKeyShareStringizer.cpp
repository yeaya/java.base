#include <sun/security/ssl/KeyShareExtension$CHKeyShareStringizer.h>

#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/KeyShareExtension$CHKeyShareSpec.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $KeyShareExtension$CHKeyShareSpec = ::sun::security::ssl::KeyShareExtension$CHKeyShareSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _KeyShareExtension$CHKeyShareStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(KeyShareExtension$CHKeyShareStringizer, init$, void)},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyShareExtension$CHKeyShareStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
	{}
};

$InnerClassInfo _KeyShareExtension$CHKeyShareStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyShareExtension$CHKeyShareStringizer", "sun.security.ssl.KeyShareExtension", "CHKeyShareStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyShareExtension$CHKeyShareStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyShareExtension$CHKeyShareStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_KeyShareExtension$CHKeyShareStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_KeyShareExtension$CHKeyShareStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyShareExtension"
};

$Object* allocate$KeyShareExtension$CHKeyShareStringizer($Class* clazz) {
	return $of($alloc(KeyShareExtension$CHKeyShareStringizer));
}

void KeyShareExtension$CHKeyShareStringizer::init$() {
}

$String* KeyShareExtension$CHKeyShareStringizer::toString($HandshakeContext* handshakeContext, $ByteBuffer* buffer) {
	try {
		return ($$new($KeyShareExtension$CHKeyShareSpec, handshakeContext, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

KeyShareExtension$CHKeyShareStringizer::KeyShareExtension$CHKeyShareStringizer() {
}

$Class* KeyShareExtension$CHKeyShareStringizer::load$($String* name, bool initialize) {
	$loadClass(KeyShareExtension$CHKeyShareStringizer, name, initialize, &_KeyShareExtension$CHKeyShareStringizer_ClassInfo_, allocate$KeyShareExtension$CHKeyShareStringizer);
	return class$;
}

$Class* KeyShareExtension$CHKeyShareStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun