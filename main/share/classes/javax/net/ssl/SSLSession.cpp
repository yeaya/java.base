#include <javax/net/ssl/SSLSession.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/security/Principal.h>
#include <java/security/cert/Certificate.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <javax/security/cert/X509Certificate.h>
#include <jcpp.h>

using $X509CertificateArray = $Array<::javax::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

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
	{"getApplicationBufferSize", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getCipherSuite", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCreationTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getId", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getLastAccessedTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocalCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocalPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPacketBufferSize", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPeerCertificateChain", "()[Ljavax/security/cert/X509Certificate;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.net.ssl.SSLPeerUnverifiedException", nullptr, _SSLSession_MethodAnnotations_getPeerCertificateChain8},
	{"getPeerCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getPeerHost", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPeerPort", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPeerPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSessionContext", "()Ljavax/net/ssl/SSLSessionContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValueNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"invalidate", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"putValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
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