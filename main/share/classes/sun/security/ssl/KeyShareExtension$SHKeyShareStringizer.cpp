#include <sun/security/ssl/KeyShareExtension$SHKeyShareStringizer.h>

#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/KeyShareExtension$SHKeyShareSpec.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $KeyShareExtension$SHKeyShareSpec = ::sun::security::ssl::KeyShareExtension$SHKeyShareSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _KeyShareExtension$SHKeyShareStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(KeyShareExtension$SHKeyShareStringizer, init$, void)},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyShareExtension$SHKeyShareStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
	{}
};

$InnerClassInfo _KeyShareExtension$SHKeyShareStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyShareExtension$SHKeyShareStringizer", "sun.security.ssl.KeyShareExtension", "SHKeyShareStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyShareExtension$SHKeyShareStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyShareExtension$SHKeyShareStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_KeyShareExtension$SHKeyShareStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_KeyShareExtension$SHKeyShareStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyShareExtension"
};

$Object* allocate$KeyShareExtension$SHKeyShareStringizer($Class* clazz) {
	return $of($alloc(KeyShareExtension$SHKeyShareStringizer));
}

void KeyShareExtension$SHKeyShareStringizer::init$() {
}

$String* KeyShareExtension$SHKeyShareStringizer::toString($HandshakeContext* handshakeContext, $ByteBuffer* buffer) {
	try {
		return ($$new($KeyShareExtension$SHKeyShareSpec, handshakeContext, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

KeyShareExtension$SHKeyShareStringizer::KeyShareExtension$SHKeyShareStringizer() {
}

$Class* KeyShareExtension$SHKeyShareStringizer::load$($String* name, bool initialize) {
	$loadClass(KeyShareExtension$SHKeyShareStringizer, name, initialize, &_KeyShareExtension$SHKeyShareStringizer_ClassInfo_, allocate$KeyShareExtension$SHKeyShareStringizer);
	return class$;
}

$Class* KeyShareExtension$SHKeyShareStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun