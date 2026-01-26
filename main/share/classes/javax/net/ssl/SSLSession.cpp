#include <javax/net/ssl/SSLSession.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/security/Principal.h>
#include <java/security/cert/Certificate.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <javax/security/cert/X509Certificate.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $X509CertificateArray = $Array<::javax::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Principal = ::java::security::Principal;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;

namespace javax {
	namespace net {
		namespace ssl {

$NamedAttribute SSLSession_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _SSLSession_MethodAnnotations_getPeerCertificateChain8[] = {
	{"Ljava/lang/Deprecated;", SSLSession_Attribute_var$0},
	{}
};

$MethodInfo _SSLSession_MethodInfo_[] = {
	{"getApplicationBufferSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getApplicationBufferSize, int32_t)},
	{"getCipherSuite", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getCipherSuite, $String*)},
	{"getCreationTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getCreationTime, int64_t)},
	{"getId", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getId, $bytes*)},
	{"getLastAccessedTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getLastAccessedTime, int64_t)},
	{"getLocalCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getLocalCertificates, $CertificateArray*)},
	{"getLocalPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getLocalPrincipal, $Principal*)},
	{"getPacketBufferSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getPacketBufferSize, int32_t)},
	{"getPeerCertificateChain", "()[Ljavax/security/cert/X509Certificate;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(SSLSession, getPeerCertificateChain, $X509CertificateArray*), "javax.net.ssl.SSLPeerUnverifiedException", nullptr, _SSLSession_MethodAnnotations_getPeerCertificateChain8},
	{"getPeerCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getPeerCertificates, $CertificateArray*), "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getPeerHost", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getPeerHost, $String*)},
	{"getPeerPort", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getPeerPort, int32_t)},
	{"getPeerPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getPeerPrincipal, $Principal*), "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getProtocol, $String*)},
	{"getSessionContext", "()Ljavax/net/ssl/SSLSessionContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getSessionContext, $SSLSessionContext*)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getValue, $Object*, $String*)},
	{"getValueNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, getValueNames, $StringArray*)},
	{"invalidate", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, invalidate, void)},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, isValid, bool)},
	{"putValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, putValue, void, $String*, Object$*)},
	{"removeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSession, removeValue, void, $String*)},
	{}
};

$ClassInfo _SSLSession_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.net.ssl.SSLSession",
	nullptr,
	nullptr,
	nullptr,
	_SSLSession_MethodInfo_
};

$Object* allocate$SSLSession($Class* clazz) {
	return $of($alloc(SSLSession));
}

$X509CertificateArray* SSLSession::getPeerCertificateChain() {
	$throwNew($UnsupportedOperationException, "This method is deprecated and marked for removal. Use the getPeerCertificates() method instead."_s);
	$shouldNotReachHere();
}

$Class* SSLSession::load$($String* name, bool initialize) {
	$loadClass(SSLSession, name, initialize, &_SSLSession_ClassInfo_, allocate$SSLSession);
	return class$;
}

$Class* SSLSession::class$ = nullptr;

		} // ssl
	} // net
} // javax