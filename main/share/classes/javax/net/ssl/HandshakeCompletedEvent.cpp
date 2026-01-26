#include <javax/net/ssl/HandshakeCompletedEvent.h>

#include <java/lang/AbstractMethodError.h>
#include <java/security/Principal.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/EventObject.h>
#include <javax/net/ssl/SSLSession.h>
#include <javax/net/ssl/SSLSocket.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <javax/security/cert/X509Certificate.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $X509CertificateArray = $Array<::javax::security::cert::X509Certificate>;
using $AbstractMethodError = ::java::lang::AbstractMethodError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Principal = ::java::security::Principal;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $EventObject = ::java::util::EventObject;
using $SSLSession = ::javax::net::ssl::SSLSession;
using $SSLSocket = ::javax::net::ssl::SSLSocket;

namespace javax {
	namespace net {
		namespace ssl {

$NamedAttribute HandshakeCompletedEvent_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _HandshakeCompletedEvent_MethodAnnotations_getPeerCertificateChain4[] = {
	{"Ljava/lang/Deprecated;", HandshakeCompletedEvent_Attribute_var$0},
	{}
};

$FieldInfo _HandshakeCompletedEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HandshakeCompletedEvent, serialVersionUID)},
	{"session", "Ljavax/net/ssl/SSLSession;", nullptr, $PRIVATE | $TRANSIENT, $field(HandshakeCompletedEvent, session)},
	{}
};

$MethodInfo _HandshakeCompletedEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/net/ssl/SSLSocket;Ljavax/net/ssl/SSLSession;)V", nullptr, $PUBLIC, $method(HandshakeCompletedEvent, init$, void, $SSLSocket*, $SSLSession*)},
	{"getCipherSuite", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HandshakeCompletedEvent, getCipherSuite, $String*)},
	{"getLocalCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC, $virtualMethod(HandshakeCompletedEvent, getLocalCertificates, $CertificateArray*)},
	{"getLocalPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC, $virtualMethod(HandshakeCompletedEvent, getLocalPrincipal, $Principal*)},
	{"getPeerCertificateChain", "()[Ljavax/security/cert/X509Certificate;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(HandshakeCompletedEvent, getPeerCertificateChain, $X509CertificateArray*), "javax.net.ssl.SSLPeerUnverifiedException", nullptr, _HandshakeCompletedEvent_MethodAnnotations_getPeerCertificateChain4},
	{"getPeerCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC, $virtualMethod(HandshakeCompletedEvent, getPeerCertificates, $CertificateArray*), "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getPeerPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC, $virtualMethod(HandshakeCompletedEvent, getPeerPrincipal, $Principal*), "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC, $virtualMethod(HandshakeCompletedEvent, getSession, $SSLSession*)},
	{"getSocket", "()Ljavax/net/ssl/SSLSocket;", nullptr, $PUBLIC, $virtualMethod(HandshakeCompletedEvent, getSocket, $SSLSocket*)},
	{}
};

$ClassInfo _HandshakeCompletedEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.net.ssl.HandshakeCompletedEvent",
	"java.util.EventObject",
	nullptr,
	_HandshakeCompletedEvent_FieldInfo_,
	_HandshakeCompletedEvent_MethodInfo_
};

$Object* allocate$HandshakeCompletedEvent($Class* clazz) {
	return $of($alloc(HandshakeCompletedEvent));
}

void HandshakeCompletedEvent::init$($SSLSocket* sock, $SSLSession* s) {
	$EventObject::init$(sock);
	$set(this, session, s);
}

$SSLSession* HandshakeCompletedEvent::getSession() {
	return this->session;
}

$String* HandshakeCompletedEvent::getCipherSuite() {
	return $nc(this->session)->getCipherSuite();
}

$CertificateArray* HandshakeCompletedEvent::getLocalCertificates() {
	return $nc(this->session)->getLocalCertificates();
}

$CertificateArray* HandshakeCompletedEvent::getPeerCertificates() {
	return $nc(this->session)->getPeerCertificates();
}

$X509CertificateArray* HandshakeCompletedEvent::getPeerCertificateChain() {
	return $nc(this->session)->getPeerCertificateChain();
}

$Principal* HandshakeCompletedEvent::getPeerPrincipal() {
	$useLocalCurrentObjectStackCache();
	$var($Principal, principal, nullptr);
	try {
		$assign(principal, $nc(this->session)->getPeerPrincipal());
	} catch ($AbstractMethodError& e) {
		$var($CertificateArray, certs, getPeerCertificates());
		$assign(principal, $nc(($cast($X509Certificate, $nc(certs)->get(0))))->getSubjectX500Principal());
	}
	return principal;
}

$Principal* HandshakeCompletedEvent::getLocalPrincipal() {
	$useLocalCurrentObjectStackCache();
	$var($Principal, principal, nullptr);
	try {
		$assign(principal, $nc(this->session)->getLocalPrincipal());
	} catch ($AbstractMethodError& e) {
		$assign(principal, nullptr);
		$var($CertificateArray, certs, getLocalCertificates());
		if (certs != nullptr) {
			$assign(principal, $nc(($cast($X509Certificate, certs->get(0))))->getSubjectX500Principal());
		}
	}
	return principal;
}

$SSLSocket* HandshakeCompletedEvent::getSocket() {
	return $cast($SSLSocket, getSource());
}

HandshakeCompletedEvent::HandshakeCompletedEvent() {
}

$Class* HandshakeCompletedEvent::load$($String* name, bool initialize) {
	$loadClass(HandshakeCompletedEvent, name, initialize, &_HandshakeCompletedEvent_ClassInfo_, allocate$HandshakeCompletedEvent);
	return class$;
}

$Class* HandshakeCompletedEvent::class$ = nullptr;

		} // ssl
	} // net
} // javax