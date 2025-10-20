#include <sun/security/ssl/AlpnExtension$AlpnStringizer.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/AlpnExtension$AlpnSpec.h>
#include <sun/security/ssl/AlpnExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AlpnExtension = ::sun::security::ssl::AlpnExtension;
using $AlpnExtension$AlpnSpec = ::sun::security::ssl::AlpnExtension$AlpnSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _AlpnExtension$AlpnStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AlpnExtension$AlpnStringizer::*)()>(&AlpnExtension$AlpnStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AlpnExtension$AlpnStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.AlpnExtension$AlpnStringizer", "sun.security.ssl.AlpnExtension", "AlpnStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _AlpnExtension$AlpnStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.AlpnExtension$AlpnStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_AlpnExtension$AlpnStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_AlpnExtension$AlpnStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.AlpnExtension"
};

$Object* allocate$AlpnExtension$AlpnStringizer($Class* clazz) {
	return $of($alloc(AlpnExtension$AlpnStringizer));
}

void AlpnExtension$AlpnStringizer::init$() {
}

$String* AlpnExtension$AlpnStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	try {
		return ($$new($AlpnExtension$AlpnSpec, hc, buffer))->toString();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

AlpnExtension$AlpnStringizer::AlpnExtension$AlpnStringizer() {
}

$Class* AlpnExtension$AlpnStringizer::load$($String* name, bool initialize) {
	$loadClass(AlpnExtension$AlpnStringizer, name, initialize, &_AlpnExtension$AlpnStringizer_ClassInfo_, allocate$AlpnExtension$AlpnStringizer);
	return class$;
}

$Class* AlpnExtension$AlpnStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun