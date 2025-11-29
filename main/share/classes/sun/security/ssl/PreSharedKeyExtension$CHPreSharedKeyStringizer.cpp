#include <sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeyStringizer.h>

#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeySpec.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $PreSharedKeyExtension$CHPreSharedKeySpec = ::sun::security::ssl::PreSharedKeyExtension$CHPreSharedKeySpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PreSharedKeyExtension$CHPreSharedKeyStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PreSharedKeyExtension$CHPreSharedKeyStringizer::*)()>(&PreSharedKeyExtension$CHPreSharedKeyStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PreSharedKeyExtension$CHPreSharedKeyStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyStringizer", "sun.security.ssl.PreSharedKeyExtension", "CHPreSharedKeyStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PreSharedKeyExtension$CHPreSharedKeyStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_PreSharedKeyExtension$CHPreSharedKeyStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_PreSharedKeyExtension$CHPreSharedKeyStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PreSharedKeyExtension"
};

$Object* allocate$PreSharedKeyExtension$CHPreSharedKeyStringizer($Class* clazz) {
	return $of($alloc(PreSharedKeyExtension$CHPreSharedKeyStringizer));
}

void PreSharedKeyExtension$CHPreSharedKeyStringizer::init$() {
}

$String* PreSharedKeyExtension$CHPreSharedKeyStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($PreSharedKeyExtension$CHPreSharedKeySpec, hc, buffer))->toString();
	} catch ($Exception& ex) {
		return ex->getMessage();
	}
	$shouldNotReachHere();
}

PreSharedKeyExtension$CHPreSharedKeyStringizer::PreSharedKeyExtension$CHPreSharedKeyStringizer() {
}

$Class* PreSharedKeyExtension$CHPreSharedKeyStringizer::load$($String* name, bool initialize) {
	$loadClass(PreSharedKeyExtension$CHPreSharedKeyStringizer, name, initialize, &_PreSharedKeyExtension$CHPreSharedKeyStringizer_ClassInfo_, allocate$PreSharedKeyExtension$CHPreSharedKeyStringizer);
	return class$;
}

$Class* PreSharedKeyExtension$CHPreSharedKeyStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun