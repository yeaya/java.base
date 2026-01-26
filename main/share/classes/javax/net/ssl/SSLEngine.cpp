#include <javax/net/ssl/SSLEngine.h>

#include <java/lang/Runnable.h>
#include <java/lang/UnsupportedOperationException.h>
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
	{"<init>", "()V", nullptr, $PROTECTED, $method(SSLEngine, init$, void)},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PROTECTED, $method(SSLEngine, init$, void, $String*, int32_t)},
	{"beginHandshake", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, beginHandshake, void), "javax.net.ssl.SSLException"},
	{"closeInbound", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, closeInbound, void), "javax.net.ssl.SSLException"},
	{"closeOutbound", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, closeOutbound, void)},
	{"getApplicationProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLEngine, getApplicationProtocol, $String*)},
	{"getDelegatedTask", "()Ljava/lang/Runnable;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, getDelegatedTask, $Runnable*)},
	{"getEnableSessionCreation", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, getEnableSessionCreation, bool)},
	{"getEnabledCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, getEnabledCipherSuites, $StringArray*)},
	{"getEnabledProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, getEnabledProtocols, $StringArray*)},
	{"getHandshakeApplicationProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLEngine, getHandshakeApplicationProtocol, $String*)},
	{"getHandshakeApplicationProtocolSelector", "()Ljava/util/function/BiFunction;", "()Ljava/util/function/BiFunction<Ljavax/net/ssl/SSLEngine;Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;>;", $PUBLIC, $virtualMethod(SSLEngine, getHandshakeApplicationProtocolSelector, $BiFunction*)},
	{"getHandshakeSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC, $virtualMethod(SSLEngine, getHandshakeSession, $SSLSession*)},
	{"getHandshakeStatus", "()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, getHandshakeStatus, $SSLEngineResult$HandshakeStatus*)},
	{"getNeedClientAuth", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, getNeedClientAuth, bool)},
	{"getPeerHost", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLEngine, getPeerHost, $String*)},
	{"getPeerPort", "()I", nullptr, $PUBLIC, $virtualMethod(SSLEngine, getPeerPort, int32_t)},
	{"getSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PUBLIC, $virtualMethod(SSLEngine, getSSLParameters, $SSLParameters*)},
	{"getSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, getSession, $SSLSession*)},
	{"getSupportedCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, getSupportedCipherSuites, $StringArray*)},
	{"getSupportedProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, getSupportedProtocols, $StringArray*)},
	{"getUseClientMode", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, getUseClientMode, bool)},
	{"getWantClientAuth", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, getWantClientAuth, bool)},
	{"isInboundDone", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, isInboundDone, bool)},
	{"isOutboundDone", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, isOutboundDone, bool)},
	{"setEnableSessionCreation", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, setEnableSessionCreation, void, bool)},
	{"setEnabledCipherSuites", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, setEnabledCipherSuites, void, $StringArray*)},
	{"setEnabledProtocols", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, setEnabledProtocols, void, $StringArray*)},
	{"setHandshakeApplicationProtocolSelector", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<Ljavax/net/ssl/SSLEngine;Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(SSLEngine, setHandshakeApplicationProtocolSelector, void, $BiFunction*)},
	{"setNeedClientAuth", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, setNeedClientAuth, void, bool)},
	{"setSSLParameters", "(Ljavax/net/ssl/SSLParameters;)V", nullptr, $PUBLIC, $virtualMethod(SSLEngine, setSSLParameters, void, $SSLParameters*)},
	{"setUseClientMode", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, setUseClientMode, void, bool)},
	{"setWantClientAuth", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, setWantClientAuth, void, bool)},
	{"unwrap", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;", nullptr, $PUBLIC, $virtualMethod(SSLEngine, unwrap, $SSLEngineResult*, $ByteBuffer*, $ByteBuffer*), "javax.net.ssl.SSLException"},
	{"unwrap", "(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;", nullptr, $PUBLIC, $virtualMethod(SSLEngine, unwrap, $SSLEngineResult*, $ByteBuffer*, $ByteBufferArray*), "javax.net.ssl.SSLException"},
	{"unwrap", "(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;II)Ljavax/net/ssl/SSLEngineResult;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, unwrap, $SSLEngineResult*, $ByteBuffer*, $ByteBufferArray*, int32_t, int32_t), "javax.net.ssl.SSLException"},
	{"wrap", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;", nullptr, $PUBLIC, $virtualMethod(SSLEngine, wrap, $SSLEngineResult*, $ByteBuffer*, $ByteBuffer*), "javax.net.ssl.SSLException"},
	{"wrap", "([Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;", nullptr, $PUBLIC, $virtualMethod(SSLEngine, wrap, $SSLEngineResult*, $ByteBufferArray*, $ByteBuffer*), "javax.net.ssl.SSLException"},
	{"wrap", "([Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLEngine, wrap, $SSLEngineResult*, $ByteBufferArray*, int32_t, int32_t, $ByteBuffer*), "javax.net.ssl.SSLException"},
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
	$useLocalCurrentObjectStackCache();
	$var($SSLParameters, params, $new($SSLParameters));
	params->setCipherSuites($(getEnabledCipherSuites()));
	params->setProtocols($(getEnabledProtocols()));
	if (getNeedClientAuth()) {
		params->setNeedClientAuth(true);
	} else if (getWantClientAuth()) {
		params->setWantClientAuth(true);
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
	} else if (params->getWantClientAuth()) {
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