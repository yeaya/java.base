#include <sun/security/ssl/SessionTicketExtension$SessionTicketStringizer.h>

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
#include <sun/security/ssl/SessionTicketExtension$SessionTicketSpec.h>
#include <sun/security/ssl/SessionTicketExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;
using $SessionTicketExtension = ::sun::security::ssl::SessionTicketExtension;
using $SessionTicketExtension$SessionTicketSpec = ::sun::security::ssl::SessionTicketExtension$SessionTicketSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SessionTicketExtension$SessionTicketStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SessionTicketExtension$SessionTicketStringizer::*)()>(&SessionTicketExtension$SessionTicketStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SessionTicketExtension$SessionTicketStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SessionTicketExtension$SessionTicketStringizer", "sun.security.ssl.SessionTicketExtension", "SessionTicketStringizer", $STATIC | $FINAL},
	{}
};

$ClassInfo _SessionTicketExtension$SessionTicketStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SessionTicketExtension$SessionTicketStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_SessionTicketExtension$SessionTicketStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_SessionTicketExtension$SessionTicketStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SessionTicketExtension"
};

$Object* allocate$SessionTicketExtension$SessionTicketStringizer($Class* clazz) {
	return $of($alloc(SessionTicketExtension$SessionTicketStringizer));
}

void SessionTicketExtension$SessionTicketStringizer::init$() {
}

$String* SessionTicketExtension$SessionTicketStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return $$new($SessionTicketExtension$SessionTicketSpec, hc, buffer)->toString();
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		return e->getMessage();
	}
	$shouldNotReachHere();
}

SessionTicketExtension$SessionTicketStringizer::SessionTicketExtension$SessionTicketStringizer() {
}

$Class* SessionTicketExtension$SessionTicketStringizer::load$($String* name, bool initialize) {
	$loadClass(SessionTicketExtension$SessionTicketStringizer, name, initialize, &_SessionTicketExtension$SessionTicketStringizer_ClassInfo_, allocate$SessionTicketExtension$SessionTicketStringizer);
	return class$;
}

$Class* SessionTicketExtension$SessionTicketStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun