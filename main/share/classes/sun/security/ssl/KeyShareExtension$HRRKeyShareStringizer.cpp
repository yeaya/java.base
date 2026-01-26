#include <sun/security/ssl/KeyShareExtension$HRRKeyShareStringizer.h>

#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/KeyShareExtension$HRRKeyShareSpec.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $KeyShareExtension$HRRKeyShareSpec = ::sun::security::ssl::KeyShareExtension$HRRKeyShareSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _KeyShareExtension$HRRKeyShareStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(KeyShareExtension$HRRKeyShareStringizer, init$, void)},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyShareExtension$HRRKeyShareStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
	{}
};

$InnerClassInfo _KeyShareExtension$HRRKeyShareStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyShareExtension$HRRKeyShareStringizer", "sun.security.ssl.KeyShareExtension", "HRRKeyShareStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyShareExtension$HRRKeyShareStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyShareExtension$HRRKeyShareStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_KeyShareExtension$HRRKeyShareStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_KeyShareExtension$HRRKeyShareStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyShareExtension"
};

$Object* allocate$KeyShareExtension$HRRKeyShareStringizer($Class* clazz) {
	return $of($alloc(KeyShareExtension$HRRKeyShareStringizer));
}

void KeyShareExtension$HRRKeyShareStringizer::init$() {
}

$String* KeyShareExtension$HRRKeyShareStringizer::toString($HandshakeContext* handshakeContext, $ByteBuffer* buffer) {
	try {
		return ($$new($KeyShareExtension$HRRKeyShareSpec, handshakeContext, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

KeyShareExtension$HRRKeyShareStringizer::KeyShareExtension$HRRKeyShareStringizer() {
}

$Class* KeyShareExtension$HRRKeyShareStringizer::load$($String* name, bool initialize) {
	$loadClass(KeyShareExtension$HRRKeyShareStringizer, name, initialize, &_KeyShareExtension$HRRKeyShareStringizer_ClassInfo_, allocate$KeyShareExtension$HRRKeyShareStringizer);
	return class$;
}

$Class* KeyShareExtension$HRRKeyShareStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun