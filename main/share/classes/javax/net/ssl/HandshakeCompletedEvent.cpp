#include <javax/net/ssl/HandshakeCompletedEvent.h>

#include <java/lang/AbstractMethodError.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Certificate = ::java::security::cert::Certificate;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $EventObject = ::java::util::EventObject;
using $SSLSession = ::javax::net::ssl::SSLSession;
using $SSLSocket = ::javax::net::ssl::SSLSocket;
using $X500Principal = ::javax::security::auth::x500::X500Principal;

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
	{"<init>", "(Ljavax/net/ssl/SSLSocket;Ljavax/net/ssl/SSLSession;)V", nullptr, $PUBLIC, $method(static_cast<void(HandshakeCompletedEvent::*)($SSLSocket*,$SSLSession*)>(&HandshakeCompletedEvent::init$))},
	{"getCipherSuite", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLocalCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC},
	{"getLocalPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC},
	{"getPeerCertificateChain", "()[Ljavax/security/cert/X509Certificate;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.net.ssl.SSLPeerUnverifiedException", nullptr, _HandshakeCompletedEvent_MethodAnnotations_getPeerCertificateChain4},
	{"getPeerCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC, nullptr, "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getPeerPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC, nullptr, "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC},
	{"getSocket", "()Ljavax/net/ssl/SSLSocket;", nullptr, $PUBLIC},
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
	$var($Principal, principal, nullptr);
	try {
		$assign(principal, $nc(this->session)->getPeerPrincipal());
	} catch ($AbstractMethodError&) {
		$var($AbstractMethodError, e, $catch());
		$var($CertificateArray, certs, getPeerCertificates());
		$assign(principal, $nc(($cast($X509Certificate, $nc(certs)->get(0))))->getSubjectX500Principal());
	}
	return principal;
}

$Principal* HandshakeCompletedEvent::getLocalPrincipal() {
	$var($Principal, principal, nullptr);
	try {
		$assign(principal, $nc(this->session)->getLocalPrincipal());
	} catch ($AbstractMethodError&) {
		$var($AbstractMethodError, e, $catch());
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