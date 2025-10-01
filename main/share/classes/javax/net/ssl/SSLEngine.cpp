#include <javax/net/ssl/SSLEngine.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/function/BiFunction.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLEngineResult.h>
#include <javax/net/ssl/SSLParameters.h>
#include <javax/net/ssl/SSLSession.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $BiFunction = ::java::util::function::BiFunction;
using $SSLEngineResult = ::javax::net::ssl::SSLEngineResult;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;
using $SSLParameters = ::javax::net::ssl::SSLParameters;
using $SSLSession = ::javax::net::ssl::SSLSession;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLEngine_FieldInfo_[] = {
	{"peerHost", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SSLEngine, peerHost)},
	{"peerPort", "I", nullptr, $PRIVATE, $field(SSLEngine, peerPort)},
	{}
};

$MethodInfo _SSLEngine_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SSLEngine::*)()>(&SSLEngine::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PROTECTED, $method(static_cast<void(SSLEngine::*)($String*,int32_t)>(&SSLEngine::init$))},
	{"beginHandshake", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.net.ssl.SSLException"},
	{"closeInbound", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.net.ssl.SSLException"},
	{"closeOutbound", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getApplicationProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDelegatedTask", "()Ljava/lang/Runnable;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnableSessionCreation", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnabledCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnabledProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getHandshakeApplicationProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHandshakeApplicationProtocolSelector", "()Ljava/util/function/BiFunction;", "()Ljava/util/function/BiFunction<Ljavax/net/ssl/SSLEngine;Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;>;", $PUBLIC},
	{"getHandshakeSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC},
	{"getHandshakeStatus", "()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNeedClientAuth", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getPeerHost", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPeerPort", "()I", nullptr, $PUBLIC},
	{"getSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PUBLIC},
	{"getSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSupportedCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSupportedProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUseClientMode", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getWantClientAuth", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isInboundDone", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isOutboundDone", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setEnableSessionCreation", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEnabledCipherSuites", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEnabledProtocols", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setHandshakeApplicationProtocolSelector", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<Ljavax/net/ssl/SSLEngine;Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;>;)V", $PUBLIC},
	{"setNeedClientAuth", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSSLParameters", "(Ljavax/net/ssl/SSLParameters;)V", nullptr, $PUBLIC},
	{"setUseClientMode", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setWantClientAuth", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"unwrap", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;", nullptr, $PUBLIC, nullptr, "javax.net.ssl.SSLException"},
	{"unwrap", "(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;", nullptr, $PUBLIC, nullptr, "javax.net.ssl.SSLException"},
	{"unwrap", "(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;II)Ljavax/net/ssl/SSLEngineResult;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.net.ssl.SSLException"},
	{"wrap", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;", nullptr, $PUBLIC, nullptr, "javax.net.ssl.SSLException"},
	{"wrap", "([Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;", nullptr, $PUBLIC, nullptr, "javax.net.ssl.SSLException"},
	{"wrap", "([Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.net.ssl.SSLException"},
	{}
};

$ClassInfo _SSLEngine_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.ssl.SSLEngine",
	"java.lang.Object",
	nullptr,
	_SSLEngine_FieldInfo_,
	_SSLEngine_MethodInfo_
};

$Object* allocate$SSLEngine($Class* clazz) {
	return $of($alloc(SSLEngine));
}

void SSLEngine::init$() {
	$set(this, peerHost, nullptr);
	this->peerPort = -1;
}

void SSLEngine::init$($String* peerHost, int32_t peerPort) {
	$set(this, peerHost, nullptr);
	this->peerPort = -1;
	$set(this, peerHost, peerHost);
	this->peerPort = peerPort;
}

$String* SSLEngine::getPeerHost() {
	return this->peerHost;
}

int32_t SSLEngine::getPeerPort() {
	return this->peerPort;
}

$SSLEngineResult* SSLEngine::wrap($ByteBuffer* src, $ByteBuffer* dst) {
	return wrap($$new($ByteBufferArray, {src}), 0, 1, dst);
}

$SSLEngineResult* SSLEngine::wrap($ByteBufferArray* srcs, $ByteBuffer* dst) {
	if (srcs == nullptr) {
		$throwNew($IllegalArgumentException, "src == null"_s);
	}
	return wrap(srcs, 0, $nc(srcs)->length, dst);
}

$SSLEngineResult* SSLEngine::unwrap($ByteBuffer* src, $ByteBuffer* dst) {
	return unwrap(src, $$new($ByteBufferArray, {dst}), 0, 1);
}

$SSLEngineResult* SSLEngine::unwrap($ByteBuffer* src, $ByteBufferArray* dsts) {
	if (dsts == nullptr) {
		$throwNew($IllegalArgumentException, "dsts == null"_s);
	}
	return unwrap(src, dsts, 0, $nc(dsts)->length);
}

$SSLSession* SSLEngine::getHandshakeSession() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$SSLParameters* SSLEngine::getSSLParameters() {
	$var($SSLParameters, params, $new($SSLParameters));
	params->setCipherSuites($(getEnabledCipherSuites()));
	params->setProtocols($(getEnabledProtocols()));
	if (getNeedClientAuth()) {
		params->setNeedClientAuth(true);
	} else if (getWantClientAuth()) {
		$nc(params)->setWantClientAuth(true);
	}
	return params;
}

void SSLEngine::setSSLParameters($SSLParameters* params) {
	$var($StringArray, s, nullptr);
	$assign(s, $nc(params)->getCipherSuites());
	if (s != nullptr) {
		setEnabledCipherSuites(s);
	}
	$assign(s, params->getProtocols());
	if (s != nullptr) {
		setEnabledProtocols(s);
	}
	if (params->getNeedClientAuth()) {
		setNeedClientAuth(true);
	} else if ($nc(params)->getWantClientAuth()) {
		setWantClientAuth(true);
	} else {
		setWantClientAuth(false);
	}
}

$String* SSLEngine::getApplicationProtocol() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$String* SSLEngine::getHandshakeApplicationProtocol() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void SSLEngine::setHandshakeApplicationProtocolSelector($BiFunction* selector) {
	$throwNew($UnsupportedOperationException);
}

$BiFunction* SSLEngine::getHandshakeApplicationProtocolSelector() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

SSLEngine::SSLEngine() {
}

$Class* SSLEngine::load$($String* name, bool initialize) {
	$loadClass(SSLEngine, name, initialize, &_SSLEngine_ClassInfo_, allocate$SSLEngine);
	return class$;
}

$Class* SSLEngine::class$ = nullptr;

		} // ssl
	} // net
} // javax