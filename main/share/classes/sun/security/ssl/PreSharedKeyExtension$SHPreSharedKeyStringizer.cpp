#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeyStringizer.h>

#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeySpec.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $PreSharedKeyExtension$SHPreSharedKeySpec = ::sun::security::ssl::PreSharedKeyExtension$SHPreSharedKeySpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PreSharedKeyExtension$SHPreSharedKeyStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PreSharedKeyExtension$SHPreSharedKeyStringizer::*)()>(&PreSharedKeyExtension$SHPreSharedKeyStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PreSharedKeyExtension$SHPreSharedKeyStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyStringizer", "sun.security.ssl.PreSharedKeyExtension", "SHPreSharedKeyStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PreSharedKeyExtension$SHPreSharedKeyStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_PreSharedKeyExtension$SHPreSharedKeyStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_PreSharedKeyExtension$SHPreSharedKeyStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PreSharedKeyExtension"
};

$Object* allocate$PreSharedKeyExtension$SHPreSharedKeyStringizer($Class* clazz) {
	return $of($alloc(PreSharedKeyExtension$SHPreSharedKeyStringizer));
}

void PreSharedKeyExtension$SHPreSharedKeyStringizer::init$() {
}

$String* PreSharedKeyExtension$SHPreSharedKeyStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($PreSharedKeyExtension$SHPreSharedKeySpec, hc, buffer))->toString();
	} catch ($Exception& ex) {
		return ex->getMessage();
	}
	$shouldNotReachHere();
}

PreSharedKeyExtension$SHPreSharedKeyStringizer::PreSharedKeyExtension$SHPreSharedKeyStringizer() {
}

$Class* PreSharedKeyExtension$SHPreSharedKeyStringizer::load$($String* name, bool initialize) {
	$loadClass(PreSharedKeyExtension$SHPreSharedKeyStringizer, name, initialize, &_PreSharedKeyExtension$SHPreSharedKeyStringizer_ClassInfo_, allocate$PreSharedKeyExtension$SHPreSharedKeyStringizer);
	return class$;
}

$Class* PreSharedKeyExtension$SHPreSharedKeyStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun