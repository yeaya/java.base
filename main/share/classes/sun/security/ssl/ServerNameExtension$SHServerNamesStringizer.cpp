#include <sun/security/ssl/ServerNameExtension$SHServerNamesStringizer.h>

#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ServerNameExtension$SHServerNamesSpec.h>
#include <sun/security/ssl/ServerNameExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ServerNameExtension$SHServerNamesSpec = ::sun::security::ssl::ServerNameExtension$SHServerNamesSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerNameExtension$SHServerNamesStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerNameExtension$SHServerNamesStringizer::*)()>(&ServerNameExtension$SHServerNamesStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServerNameExtension$SHServerNamesStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerNameExtension$SHServerNamesStringizer", "sun.security.ssl.ServerNameExtension", "SHServerNamesStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServerNameExtension$SHServerNamesStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerNameExtension$SHServerNamesStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_ServerNameExtension$SHServerNamesStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_ServerNameExtension$SHServerNamesStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerNameExtension"
};

$Object* allocate$ServerNameExtension$SHServerNamesStringizer($Class* clazz) {
	return $of($alloc(ServerNameExtension$SHServerNamesStringizer));
}

void ServerNameExtension$SHServerNamesStringizer::init$() {
}

$String* ServerNameExtension$SHServerNamesStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($ServerNameExtension$SHServerNamesSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

ServerNameExtension$SHServerNamesStringizer::ServerNameExtension$SHServerNamesStringizer() {
}

$Class* ServerNameExtension$SHServerNamesStringizer::load$($String* name, bool initialize) {
	$loadClass(ServerNameExtension$SHServerNamesStringizer, name, initialize, &_ServerNameExtension$SHServerNamesStringizer_ClassInfo_, allocate$ServerNameExtension$SHServerNamesStringizer);
	return class$;
}

$Class* ServerNameExtension$SHServerNamesStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun