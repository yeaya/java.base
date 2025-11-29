#include <sun/security/ssl/RenegoInfoExtension$RenegotiationInfoStringizer.h>

#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/RenegoInfoExtension$RenegotiationInfoSpec.h>
#include <sun/security/ssl/RenegoInfoExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $RenegoInfoExtension$RenegotiationInfoSpec = ::sun::security::ssl::RenegoInfoExtension$RenegotiationInfoSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _RenegoInfoExtension$RenegotiationInfoStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(RenegoInfoExtension$RenegotiationInfoStringizer::*)()>(&RenegoInfoExtension$RenegotiationInfoStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RenegoInfoExtension$RenegotiationInfoStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.RenegoInfoExtension$RenegotiationInfoStringizer", "sun.security.ssl.RenegoInfoExtension", "RenegotiationInfoStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RenegoInfoExtension$RenegotiationInfoStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RenegoInfoExtension$RenegotiationInfoStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_RenegoInfoExtension$RenegotiationInfoStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_RenegoInfoExtension$RenegotiationInfoStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RenegoInfoExtension"
};

$Object* allocate$RenegoInfoExtension$RenegotiationInfoStringizer($Class* clazz) {
	return $of($alloc(RenegoInfoExtension$RenegotiationInfoStringizer));
}

void RenegoInfoExtension$RenegotiationInfoStringizer::init$() {
}

$String* RenegoInfoExtension$RenegotiationInfoStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($RenegoInfoExtension$RenegotiationInfoSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

RenegoInfoExtension$RenegotiationInfoStringizer::RenegoInfoExtension$RenegotiationInfoStringizer() {
}

$Class* RenegoInfoExtension$RenegotiationInfoStringizer::load$($String* name, bool initialize) {
	$loadClass(RenegoInfoExtension$RenegotiationInfoStringizer, name, initialize, &_RenegoInfoExtension$RenegotiationInfoStringizer_ClassInfo_, allocate$RenegoInfoExtension$RenegotiationInfoStringizer);
	return class$;
}

$Class* RenegoInfoExtension$RenegotiationInfoStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun