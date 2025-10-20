#include <sun/security/ssl/ServerNameExtension$CHServerNamesStringizer.h>

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
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ServerNameExtension$CHServerNamesSpec.h>
#include <sun/security/ssl/ServerNameExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;
using $ServerNameExtension = ::sun::security::ssl::ServerNameExtension;
using $ServerNameExtension$CHServerNamesSpec = ::sun::security::ssl::ServerNameExtension$CHServerNamesSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerNameExtension$CHServerNamesStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerNameExtension$CHServerNamesStringizer::*)()>(&ServerNameExtension$CHServerNamesStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServerNameExtension$CHServerNamesStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerNameExtension$CHServerNamesStringizer", "sun.security.ssl.ServerNameExtension", "CHServerNamesStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerNameExtension$CHServerNamesStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerNameExtension$CHServerNamesStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_ServerNameExtension$CHServerNamesStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_ServerNameExtension$CHServerNamesStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerNameExtension"
};

$Object* allocate$ServerNameExtension$CHServerNamesStringizer($Class* clazz) {
	return $of($alloc(ServerNameExtension$CHServerNamesStringizer));
}

void ServerNameExtension$CHServerNamesStringizer::init$() {
}

$String* ServerNameExtension$CHServerNamesStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	try {
		return ($$new($ServerNameExtension$CHServerNamesSpec, hc, buffer))->toString();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

ServerNameExtension$CHServerNamesStringizer::ServerNameExtension$CHServerNamesStringizer() {
}

$Class* ServerNameExtension$CHServerNamesStringizer::load$($String* name, bool initialize) {
	$loadClass(ServerNameExtension$CHServerNamesStringizer, name, initialize, &_ServerNameExtension$CHServerNamesStringizer_ClassInfo_, allocate$ServerNameExtension$CHServerNamesStringizer);
	return class$;
}

$Class* ServerNameExtension$CHServerNamesStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun