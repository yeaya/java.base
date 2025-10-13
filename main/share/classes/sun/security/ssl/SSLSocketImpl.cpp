#include <sun/security/ssl/SSLSocketImpl.h>

#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InterruptedIOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketException.h>
#include <java/net/SocketOption.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <java/util/function/BiFunction.h>
#include <javax/net/ssl/ExtendedSSLSession.h>
#include <javax/net/ssl/HandshakeCompletedListener.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLHandshakeException.h>
#include <javax/net/ssl/SSLParameters.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <javax/net/ssl/SSLSession.h>
#include <jdk/internal/access/JavaNetInetAddressAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/BaseSSLSocketImpl.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientAuthType.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/InputRecord.h>
#include <sun/security/ssl/NewSessionTicket.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/Plaintext.h>
#include <sun/security/ssl/PostHandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLProducer.h>
#include <sun/security/ssl/SSLRecord.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/SSLSocketImpl$AppInputStream.h>
#include <sun/security/ssl/SSLSocketImpl$AppOutputStream.h>
#include <sun/security/ssl/SSLSocketInputRecord.h>
#include <sun/security/ssl/SSLSocketOutputRecord.h>
#include <sun/security/ssl/SSLTransport.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef APPLICATION_DATA
#undef CLIENT_AUTH_NONE
#undef CLIENT_AUTH_REQUESTED
#undef CLIENT_AUTH_REQUIRED
#undef CLOSE_NOTIFY
#undef HANDSHAKE
#undef HANDSHAKE_FAILURE
#undef INTERNAL_ERROR
#undef PLAINTEXT_NULL
#undef SECONDS
#undef UNEXPECTED_MESSAGE
#undef USER_CANCELED

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InterruptedIOException = ::java::io::InterruptedIOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketException = ::java::net::SocketException;
using $SocketOption = ::java::net::SocketOption;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $BiFunction = ::java::util::function::BiFunction;
using $ExtendedSSLSession = ::javax::net::ssl::ExtendedSSLSession;
using $HandshakeCompletedListener = ::javax::net::ssl::HandshakeCompletedListener;
using $SSLException = ::javax::net::ssl::SSLException;
using $SSLHandshakeException = ::javax::net::ssl::SSLHandshakeException;
using $SSLParameters = ::javax::net::ssl::SSLParameters;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $SSLSession = ::javax::net::ssl::SSLSession;
using $JavaNetInetAddressAccess = ::jdk::internal::access::JavaNetInetAddressAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $Alert = ::sun::security::ssl::Alert;
using $BaseSSLSocketImpl = ::sun::security::ssl::BaseSSLSocketImpl;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientAuthType = ::sun::security::ssl::ClientAuthType;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $ContentType = ::sun::security::ssl::ContentType;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $InputRecord = ::sun::security::ssl::InputRecord;
using $NewSessionTicket = ::sun::security::ssl::NewSessionTicket;
using $OutputRecord = ::sun::security::ssl::OutputRecord;
using $Plaintext = ::sun::security::ssl::Plaintext;
using $PostHandshakeContext = ::sun::security::ssl::PostHandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLCipher$SSLReadCipher = ::sun::security::ssl::SSLCipher$SSLReadCipher;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLProducer = ::sun::security::ssl::SSLProducer;
using $SSLRecord = ::sun::security::ssl::SSLRecord;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $SSLSocketImpl$AppInputStream = ::sun::security::ssl::SSLSocketImpl$AppInputStream;
using $SSLSocketImpl$AppOutputStream = ::sun::security::ssl::SSLSocketImpl$AppOutputStream;
using $SSLSocketInputRecord = ::sun::security::ssl::SSLSocketInputRecord;
using $SSLSocketOutputRecord = ::sun::security::ssl::SSLSocketOutputRecord;
using $SSLTransport = ::sun::security::ssl::SSLTransport;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLSocketImpl_FieldInfo_[] = {
	{"sslContext", "Lsun/security/ssl/SSLContextImpl;", nullptr, $FINAL, $field(SSLSocketImpl, sslContext)},
	{"conContext", "Lsun/security/ssl/TransportContext;", nullptr, $FINAL, $field(SSLSocketImpl, conContext)},
	{"appInput", "Lsun/security/ssl/SSLSocketImpl$AppInputStream;", nullptr, $PRIVATE | $FINAL, $field(SSLSocketImpl, appInput)},
	{"appOutput", "Lsun/security/ssl/SSLSocketImpl$AppOutputStream;", nullptr, $PRIVATE | $FINAL, $field(SSLSocketImpl, appOutput)},
	{"peerHost", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SSLSocketImpl, peerHost)},
	{"autoClose", "Z", nullptr, $PRIVATE, $field(SSLSocketImpl, autoClose)},
	{"isConnected", "Z", nullptr, $PRIVATE, $field(SSLSocketImpl, isConnected$)},
	{"tlsIsClosed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SSLSocketImpl, tlsIsClosed)},
	{"socketLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(SSLSocketImpl, socketLock)},
	{"handshakeLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(SSLSocketImpl, handshakeLock)},
	{"trustNameService", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLSocketImpl, trustNameService)},
	{}
};

$MethodInfo _SSLSocketImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/security/ssl/SSLContextImpl;)V", nullptr, 0, $method(static_cast<void(SSLSocketImpl::*)($SSLContextImpl*)>(&SSLSocketImpl::init$))},
	{"<init>", "(Lsun/security/ssl/SSLContextImpl;Lsun/security/ssl/SSLConfiguration;)V", nullptr, 0, $method(static_cast<void(SSLSocketImpl::*)($SSLContextImpl*,$SSLConfiguration*)>(&SSLSocketImpl::init$))},
	{"<init>", "(Lsun/security/ssl/SSLContextImpl;Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(SSLSocketImpl::*)($SSLContextImpl*,$String*,int32_t)>(&SSLSocketImpl::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/ssl/SSLContextImpl;Ljava/net/InetAddress;I)V", nullptr, 0, $method(static_cast<void(SSLSocketImpl::*)($SSLContextImpl*,$InetAddress*,int32_t)>(&SSLSocketImpl::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/ssl/SSLContextImpl;Ljava/lang/String;ILjava/net/InetAddress;I)V", nullptr, 0, $method(static_cast<void(SSLSocketImpl::*)($SSLContextImpl*,$String*,int32_t,$InetAddress*,int32_t)>(&SSLSocketImpl::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/ssl/SSLContextImpl;Ljava/net/InetAddress;ILjava/net/InetAddress;I)V", nullptr, 0, $method(static_cast<void(SSLSocketImpl::*)($SSLContextImpl*,$InetAddress*,int32_t,$InetAddress*,int32_t)>(&SSLSocketImpl::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/ssl/SSLContextImpl;Ljava/net/Socket;Ljava/io/InputStream;Z)V", nullptr, 0, $method(static_cast<void(SSLSocketImpl::*)($SSLContextImpl*,$Socket*,$InputStream*,bool)>(&SSLSocketImpl::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/ssl/SSLContextImpl;Ljava/net/Socket;Ljava/lang/String;IZ)V", nullptr, 0, $method(static_cast<void(SSLSocketImpl::*)($SSLContextImpl*,$Socket*,$String*,int32_t,bool)>(&SSLSocketImpl::init$)), "java.io.IOException"},
	{"addHandshakeCompletedListener", "(Ljavax/net/ssl/HandshakeCompletedListener;)V", nullptr, $PUBLIC},
	{"bind", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"bruteForceCloseInput", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl::*)(bool)>(&SSLSocketImpl::bruteForceCloseInput)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"closeNotify", "(Z)V", nullptr, 0, $method(static_cast<void(SSLSocketImpl::*)(bool)>(&SSLSocketImpl::closeNotify)), "java.io.IOException"},
	{"closeSocket", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl::*)(bool)>(&SSLSocketImpl::closeSocket)), "java.io.IOException"},
	{"connect", "(Ljava/net/SocketAddress;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"decode", "(Ljava/nio/ByteBuffer;)Lsun/security/ssl/Plaintext;", nullptr, $PRIVATE, $method(static_cast<$Plaintext*(SSLSocketImpl::*)($ByteBuffer*)>(&SSLSocketImpl::decode)), "java.io.IOException"},
	{"deliverClosedNotify", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl::*)(bool)>(&SSLSocketImpl::deliverClosedNotify)), "java.io.IOException"},
	{"doneConnect", "()V", nullptr, 0, $method(static_cast<void(SSLSocketImpl::*)()>(&SSLSocketImpl::doneConnect)), "java.io.IOException"},
	{"duplexCloseInput", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl::*)()>(&SSLSocketImpl::duplexCloseInput)), "java.io.IOException"},
	{"duplexCloseOutput", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl::*)()>(&SSLSocketImpl::duplexCloseOutput)), "java.io.IOException"},
	{"ensureNegotiated", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl::*)(bool)>(&SSLSocketImpl::ensureNegotiated)), "java.io.IOException"},
	{"getApplicationProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEnableSessionCreation", "()Z", nullptr, $PUBLIC},
	{"getEnabledCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEnabledProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHandshakeApplicationProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHandshakeApplicationProtocolSelector", "()Ljava/util/function/BiFunction;", "()Ljava/util/function/BiFunction<Ljavax/net/ssl/SSLSocket;Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;>;", $PUBLIC},
	{"getHandshakeSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getLocalSocketAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getNeedClientAuth", "()Z", nullptr, $PUBLIC},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getPeerHost", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPeerPort", "()I", nullptr, $PUBLIC},
	{"getRemoteSocketAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PUBLIC},
	{"getSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC},
	{"getSupportedCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSupportedProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUseClientMode", "()Z", nullptr, $PUBLIC},
	{"getWantClientAuth", "()Z", nullptr, $PUBLIC},
	{"handleEOF", "(Ljava/io/EOFException;)Lsun/security/ssl/Plaintext;", nullptr, $PRIVATE, $method(static_cast<$Plaintext*(SSLSocketImpl::*)($EOFException*)>(&SSLSocketImpl::handleEOF)), "java.io.IOException"},
	{"handleException", "(Ljava/lang/Exception;)V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl::*)($Exception*)>(&SSLSocketImpl::handleException)), "java.io.IOException"},
	{"isClosed", "()Z", nullptr, $PUBLIC},
	{"isInputShutdown", "()Z", nullptr, $PUBLIC},
	{"isOutputShutdown", "()Z", nullptr, $PUBLIC},
	{"readApplicationRecord", "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(SSLSocketImpl::*)($ByteBuffer*)>(&SSLSocketImpl::readApplicationRecord)), "java.io.IOException"},
	{"readHandshakeRecord", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(SSLSocketImpl::*)()>(&SSLSocketImpl::readHandshakeRecord)), "java.io.IOException"},
	{"removeHandshakeCompletedListener", "(Ljavax/net/ssl/HandshakeCompletedListener;)V", nullptr, $PUBLIC},
	{"setEnableSessionCreation", "(Z)V", nullptr, $PUBLIC},
	{"setEnabledCipherSuites", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setEnabledProtocols", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setHandshakeApplicationProtocolSelector", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<Ljavax/net/ssl/SSLSocket;Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;>;)V", $PUBLIC},
	{"setHost", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SSLSocketImpl::*)($String*)>(&SSLSocketImpl::setHost))},
	{"setNeedClientAuth", "(Z)V", nullptr, $PUBLIC},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/Socket;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"setPerformancePreferences", "(III)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setSSLParameters", "(Ljavax/net/ssl/SSLParameters;)V", nullptr, $PUBLIC},
	{"setSoTimeout", "(I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.net.SocketException"},
	{"setUseClientMode", "(Z)V", nullptr, $PUBLIC},
	{"setWantClientAuth", "(Z)V", nullptr, $PUBLIC},
	{"shutdown", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"shutdownInput", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"shutdownInput", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl::*)(bool)>(&SSLSocketImpl::shutdownInput)), "java.io.IOException"},
	{"shutdownOutput", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"startHandshake", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"startHandshake", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl::*)(bool)>(&SSLSocketImpl::startHandshake)), "java.io.IOException"},
	{"supportedOptions", "()Ljava/util/Set;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryKeyUpdate", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl::*)()>(&SSLSocketImpl::tryKeyUpdate)), "java.io.IOException"},
	{"tryNewSessionTicket", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl::*)()>(&SSLSocketImpl::tryNewSessionTicket)), "java.io.IOException"},
	{"useDelegatedTask", "()Z", nullptr, $PUBLIC},
	{"useImplicitHost", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl::*)(bool)>(&SSLSocketImpl::useImplicitHost))},
	{"waitForClose", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl::*)()>(&SSLSocketImpl::waitForClose)), "java.io.IOException"},
	{}
};

$InnerClassInfo _SSLSocketImpl_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLSocketImpl$AppOutputStream", "sun.security.ssl.SSLSocketImpl", "AppOutputStream", $PRIVATE},
	{"sun.security.ssl.SSLSocketImpl$AppInputStream", "sun.security.ssl.SSLSocketImpl", "AppInputStream", $PRIVATE},
	{}
};

$ClassInfo _SSLSocketImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLSocketImpl",
	"sun.security.ssl.BaseSSLSocketImpl",
	"sun.security.ssl.SSLTransport",
	_SSLSocketImpl_FieldInfo_,
	_SSLSocketImpl_MethodInfo_,
	nullptr,
	nullptr,
	_SSLSocketImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLSocketImpl$AppOutputStream,sun.security.ssl.SSLSocketImpl$AppInputStream"
};

$Object* allocate$SSLSocketImpl($Class* clazz) {
	return $of($alloc(SSLSocketImpl));
}

void SSLSocketImpl::finalize() {
	this->$BaseSSLSocketImpl::finalize();
}

int32_t SSLSocketImpl::hashCode() {
	 return this->$BaseSSLSocketImpl::hashCode();
}

bool SSLSocketImpl::equals(Object$* obj) {
	 return this->$BaseSSLSocketImpl::equals(obj);
}

$Object* SSLSocketImpl::clone() {
	 return this->$BaseSSLSocketImpl::clone();
}

bool SSLSocketImpl::trustNameService = false;

void SSLSocketImpl::init$($SSLContextImpl* sslContext) {
	$BaseSSLSocketImpl::init$();
	$set(this, appInput, $new($SSLSocketImpl$AppInputStream, this));
	$set(this, appOutput, $new($SSLSocketImpl$AppOutputStream, this));
	$set(this, socketLock, $new($ReentrantLock));
	$set(this, handshakeLock, $new($ReentrantLock));
	$set(this, sslContext, sslContext);
	$var($HandshakeHash, handshakeHash, $new($HandshakeHash));
	$var($SSLContextImpl, var$0, sslContext);
	$var($InputRecord, var$1, static_cast<$InputRecord*>($new($SSLSocketInputRecord, handshakeHash)));
	$set(this, conContext, $new($TransportContext, var$0, static_cast<$SSLTransport*>(this), var$1, static_cast<$OutputRecord*>($$new($SSLSocketOutputRecord, handshakeHash)), true));
}

void SSLSocketImpl::init$($SSLContextImpl* sslContext, $SSLConfiguration* sslConfig) {
	$BaseSSLSocketImpl::init$();
	$set(this, appInput, $new($SSLSocketImpl$AppInputStream, this));
	$set(this, appOutput, $new($SSLSocketImpl$AppOutputStream, this));
	$set(this, socketLock, $new($ReentrantLock));
	$set(this, handshakeLock, $new($ReentrantLock));
	$set(this, sslContext, sslContext);
	$var($HandshakeHash, handshakeHash, $new($HandshakeHash));
	$var($SSLContextImpl, var$0, sslContext);
	$var($SSLConfiguration, var$1, sslConfig);
	$var($InputRecord, var$2, static_cast<$InputRecord*>($new($SSLSocketInputRecord, handshakeHash)));
	$set(this, conContext, $new($TransportContext, var$0, static_cast<$SSLTransport*>(this), var$1, var$2, static_cast<$OutputRecord*>($$new($SSLSocketOutputRecord, handshakeHash))));
}

void SSLSocketImpl::init$($SSLContextImpl* sslContext, $String* peerHost, int32_t peerPort) {
	$BaseSSLSocketImpl::init$();
	$set(this, appInput, $new($SSLSocketImpl$AppInputStream, this));
	$set(this, appOutput, $new($SSLSocketImpl$AppOutputStream, this));
	$set(this, socketLock, $new($ReentrantLock));
	$set(this, handshakeLock, $new($ReentrantLock));
	$set(this, sslContext, sslContext);
	$var($HandshakeHash, handshakeHash, $new($HandshakeHash));
	$var($SSLContextImpl, var$0, sslContext);
	$var($InputRecord, var$1, static_cast<$InputRecord*>($new($SSLSocketInputRecord, handshakeHash)));
	$set(this, conContext, $new($TransportContext, var$0, static_cast<$SSLTransport*>(this), var$1, static_cast<$OutputRecord*>($$new($SSLSocketOutputRecord, handshakeHash)), true));
	$set(this, peerHost, peerHost);
	$var($SocketAddress, socketAddress, peerHost != nullptr ? static_cast<$SocketAddress*>($new($InetSocketAddress, peerHost, peerPort)) : static_cast<$SocketAddress*>($new($InetSocketAddress, $($InetAddress::getByName(nullptr)), peerPort)));
	connect(socketAddress, 0);
}

void SSLSocketImpl::init$($SSLContextImpl* sslContext, $InetAddress* address, int32_t peerPort) {
	$BaseSSLSocketImpl::init$();
	$set(this, appInput, $new($SSLSocketImpl$AppInputStream, this));
	$set(this, appOutput, $new($SSLSocketImpl$AppOutputStream, this));
	$set(this, socketLock, $new($ReentrantLock));
	$set(this, handshakeLock, $new($ReentrantLock));
	$set(this, sslContext, sslContext);
	$var($HandshakeHash, handshakeHash, $new($HandshakeHash));
	$var($SSLContextImpl, var$0, sslContext);
	$var($InputRecord, var$1, static_cast<$InputRecord*>($new($SSLSocketInputRecord, handshakeHash)));
	$set(this, conContext, $new($TransportContext, var$0, static_cast<$SSLTransport*>(this), var$1, static_cast<$OutputRecord*>($$new($SSLSocketOutputRecord, handshakeHash)), true));
	$var($SocketAddress, socketAddress, $new($InetSocketAddress, address, peerPort));
	connect(socketAddress, 0);
}

void SSLSocketImpl::init$($SSLContextImpl* sslContext, $String* peerHost, int32_t peerPort, $InetAddress* localAddr, int32_t localPort) {
	$BaseSSLSocketImpl::init$();
	$set(this, appInput, $new($SSLSocketImpl$AppInputStream, this));
	$set(this, appOutput, $new($SSLSocketImpl$AppOutputStream, this));
	$set(this, socketLock, $new($ReentrantLock));
	$set(this, handshakeLock, $new($ReentrantLock));
	$set(this, sslContext, sslContext);
	$var($HandshakeHash, handshakeHash, $new($HandshakeHash));
	$var($SSLContextImpl, var$0, sslContext);
	$var($InputRecord, var$1, static_cast<$InputRecord*>($new($SSLSocketInputRecord, handshakeHash)));
	$set(this, conContext, $new($TransportContext, var$0, static_cast<$SSLTransport*>(this), var$1, static_cast<$OutputRecord*>($$new($SSLSocketOutputRecord, handshakeHash)), true));
	$set(this, peerHost, peerHost);
	bind($$new($InetSocketAddress, localAddr, localPort));
	$var($SocketAddress, socketAddress, peerHost != nullptr ? static_cast<$SocketAddress*>($new($InetSocketAddress, peerHost, peerPort)) : static_cast<$SocketAddress*>($new($InetSocketAddress, $($InetAddress::getByName(nullptr)), peerPort)));
	connect(socketAddress, 0);
}

void SSLSocketImpl::init$($SSLContextImpl* sslContext, $InetAddress* peerAddr, int32_t peerPort, $InetAddress* localAddr, int32_t localPort) {
	$BaseSSLSocketImpl::init$();
	$set(this, appInput, $new($SSLSocketImpl$AppInputStream, this));
	$set(this, appOutput, $new($SSLSocketImpl$AppOutputStream, this));
	$set(this, socketLock, $new($ReentrantLock));
	$set(this, handshakeLock, $new($ReentrantLock));
	$set(this, sslContext, sslContext);
	$var($HandshakeHash, handshakeHash, $new($HandshakeHash));
	$var($SSLContextImpl, var$0, sslContext);
	$var($InputRecord, var$1, static_cast<$InputRecord*>($new($SSLSocketInputRecord, handshakeHash)));
	$set(this, conContext, $new($TransportContext, var$0, static_cast<$SSLTransport*>(this), var$1, static_cast<$OutputRecord*>($$new($SSLSocketOutputRecord, handshakeHash)), true));
	bind($$new($InetSocketAddress, localAddr, localPort));
	$var($SocketAddress, socketAddress, $new($InetSocketAddress, peerAddr, peerPort));
	connect(socketAddress, 0);
}

void SSLSocketImpl::init$($SSLContextImpl* sslContext, $Socket* sock, $InputStream* consumed, bool autoClose) {
	$BaseSSLSocketImpl::init$(sock, consumed);
	$set(this, appInput, $new($SSLSocketImpl$AppInputStream, this));
	$set(this, appOutput, $new($SSLSocketImpl$AppOutputStream, this));
	$set(this, socketLock, $new($ReentrantLock));
	$set(this, handshakeLock, $new($ReentrantLock));
	if (!$nc(sock)->isConnected()) {
		$throwNew($SocketException, "Underlying socket is not connected"_s);
	}
	$set(this, sslContext, sslContext);
	$var($HandshakeHash, handshakeHash, $new($HandshakeHash));
	$var($SSLContextImpl, var$0, sslContext);
	$var($InputRecord, var$1, static_cast<$InputRecord*>($new($SSLSocketInputRecord, handshakeHash)));
	$set(this, conContext, $new($TransportContext, var$0, static_cast<$SSLTransport*>(this), var$1, static_cast<$OutputRecord*>($$new($SSLSocketOutputRecord, handshakeHash)), false));
	this->autoClose = autoClose;
	doneConnect();
}

void SSLSocketImpl::init$($SSLContextImpl* sslContext, $Socket* sock, $String* peerHost, int32_t port, bool autoClose) {
	$BaseSSLSocketImpl::init$(sock);
	$set(this, appInput, $new($SSLSocketImpl$AppInputStream, this));
	$set(this, appOutput, $new($SSLSocketImpl$AppOutputStream, this));
	$set(this, socketLock, $new($ReentrantLock));
	$set(this, handshakeLock, $new($ReentrantLock));
	if (!$nc(sock)->isConnected()) {
		$throwNew($SocketException, "Underlying socket is not connected"_s);
	}
	$set(this, sslContext, sslContext);
	$var($HandshakeHash, handshakeHash, $new($HandshakeHash));
	$var($SSLContextImpl, var$0, sslContext);
	$var($InputRecord, var$1, static_cast<$InputRecord*>($new($SSLSocketInputRecord, handshakeHash)));
	$set(this, conContext, $new($TransportContext, var$0, static_cast<$SSLTransport*>(this), var$1, static_cast<$OutputRecord*>($$new($SSLSocketOutputRecord, handshakeHash)), true));
	$set(this, peerHost, peerHost);
	this->autoClose = autoClose;
	doneConnect();
}

void SSLSocketImpl::connect($SocketAddress* endpoint, int32_t timeout) {
	if (isLayered()) {
		$throwNew($SocketException, "Already connected"_s);
	}
	if (!($instanceOf($InetSocketAddress, endpoint))) {
		$throwNew($SocketException, "Cannot handle non-Inet socket addresses."_s);
	}
	$BaseSSLSocketImpl::connect(endpoint, timeout);
	doneConnect();
}

$StringArray* SSLSocketImpl::getSupportedCipherSuites() {
	return $CipherSuite::namesOf($($nc(this->sslContext)->getSupportedCipherSuites()));
}

$StringArray* SSLSocketImpl::getEnabledCipherSuites() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($StringArray, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $CipherSuite::namesOf($nc($nc(this->conContext)->sslConfig)->enabledCipherSuites));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void SSLSocketImpl::setEnabledCipherSuites($StringArray* suites) {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set($nc($nc(this->conContext)->sslConfig), enabledCipherSuites, $CipherSuite::validValuesOf(suites));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$StringArray* SSLSocketImpl::getSupportedProtocols() {
	return $ProtocolVersion::toStringArray($($nc(this->sslContext)->getSupportedProtocolVersions()));
}

$StringArray* SSLSocketImpl::getEnabledProtocols() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($StringArray, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $ProtocolVersion::toStringArray($nc($nc(this->conContext)->sslConfig)->enabledProtocols));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void SSLSocketImpl::setEnabledProtocols($StringArray* protocols) {
	if (protocols == nullptr) {
		$throwNew($IllegalArgumentException, "Protocols cannot be null"_s);
	}
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set($nc($nc(this->conContext)->sslConfig), enabledProtocols, $ProtocolVersion::namesOf(protocols));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$SSLSession* SSLSocketImpl::getSession() {
	try {
		ensureNegotiated(false);
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("handshake"_s)) {
			$SSLLogger::severe("handshake failed"_s, $$new($ObjectArray, {$of(ioe)}));
		}
		return $new($SSLSessionImpl);
	}
	return $nc(this->conContext)->conSession;
}

$SSLSession* SSLSocketImpl::getHandshakeSession() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($SSLSession, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->conContext)->handshakeContext == nullptr ? ($SSLSession*)nullptr : static_cast<$SSLSession*>($nc($nc(this->conContext)->handshakeContext)->handshakeSession));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void SSLSocketImpl::addHandshakeCompletedListener($HandshakeCompletedListener* listener) {
	if (listener == nullptr) {
		$throwNew($IllegalArgumentException, "listener is null"_s);
	}
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc($nc(this->conContext)->sslConfig)->addHandshakeCompletedListener(listener);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SSLSocketImpl::removeHandshakeCompletedListener($HandshakeCompletedListener* listener) {
	if (listener == nullptr) {
		$throwNew($IllegalArgumentException, "listener is null"_s);
	}
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc($nc(this->conContext)->sslConfig)->removeHandshakeCompletedListener(listener);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SSLSocketImpl::startHandshake() {
	startHandshake(true);
}

void SSLSocketImpl::startHandshake(bool resumable) {
	if (!this->isConnected$) {
		$throwNew($SocketException, "Socket is not connected"_s);
	}
	bool var$0 = $nc(this->conContext)->isBroken || $nc(this->conContext)->isInboundClosed();
	if (var$0 || $nc(this->conContext)->isOutboundClosed()) {
		$throwNew($SocketException, "Socket has been closed or broken"_s);
	}
	$nc(this->handshakeLock)->lock();
	{
		$var($Throwable, var$1, nullptr);
		try {
			bool var$2 = $nc(this->conContext)->isBroken || $nc(this->conContext)->isInboundClosed();
			if (var$2 || $nc(this->conContext)->isOutboundClosed()) {
				$throwNew($SocketException, "Socket has been closed or broken"_s);
			}
			try {
				$nc(this->conContext)->kickstart();
				if (!$nc(this->conContext)->isNegotiated) {
					readHandshakeRecord();
				}
			} catch ($InterruptedIOException&) {
				$var($InterruptedIOException, iioe, $catch());
				if (resumable) {
					handleException(iioe);
				} else {
					$init($Alert);
					$throw($($nc(this->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Couldn\'t kickstart handshaking"_s, iioe)));
				}
			} catch ($SocketException&) {
				$var($SocketException, se, $catch());
				handleException(se);
			} catch ($IOException&) {
				$var($IOException, ioe, $catch());
				$init($Alert);
				$throw($($nc(this->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Couldn\'t kickstart handshaking"_s, ioe)));
			} catch ($Exception&) {
				$var($Exception, oe, $catch());
				handleException(oe);
			}
		} catch ($Throwable&) {
			$assign(var$1, $catch());
		} /*finally*/ {
			$nc(this->handshakeLock)->unlock();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
}

void SSLSocketImpl::setUseClientMode(bool mode) {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->conContext)->setUseClientMode(mode);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool SSLSocketImpl::getUseClientMode() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = $nc($nc(this->conContext)->sslConfig)->isClientMode;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void SSLSocketImpl::setNeedClientAuth(bool need) {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($ClientAuthType);
			$set($nc($nc(this->conContext)->sslConfig), clientAuthType, need ? $ClientAuthType::CLIENT_AUTH_REQUIRED : $ClientAuthType::CLIENT_AUTH_NONE);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool SSLSocketImpl::getNeedClientAuth() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$init($ClientAuthType);
			var$2 = ($nc($nc(this->conContext)->sslConfig)->clientAuthType == $ClientAuthType::CLIENT_AUTH_REQUIRED);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void SSLSocketImpl::setWantClientAuth(bool want) {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($ClientAuthType);
			$set($nc($nc(this->conContext)->sslConfig), clientAuthType, want ? $ClientAuthType::CLIENT_AUTH_REQUESTED : $ClientAuthType::CLIENT_AUTH_NONE);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool SSLSocketImpl::getWantClientAuth() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$init($ClientAuthType);
			var$2 = ($nc($nc(this->conContext)->sslConfig)->clientAuthType == $ClientAuthType::CLIENT_AUTH_REQUESTED);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void SSLSocketImpl::setEnableSessionCreation(bool flag) {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc($nc(this->conContext)->sslConfig)->enableSessionCreation = flag;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool SSLSocketImpl::getEnableSessionCreation() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = $nc($nc(this->conContext)->sslConfig)->enableSessionCreation;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool SSLSocketImpl::isClosed() {
	return this->tlsIsClosed;
}

void SSLSocketImpl::close() {
	if (isClosed()) {
		return;
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
		$SSLLogger::fine("duplex close of SSLSocket"_s, $$new($ObjectArray, 0));
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (isConnected()) {
					if (!isOutputShutdown()) {
						duplexCloseOutput();
					}
					if (!isInputShutdown()) {
						duplexCloseInput();
					}
				}
			} catch ($IOException&) {
				$var($IOException, ioe, $catch());
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
					$SSLLogger::warning("SSLSocket duplex close failed. Debug info only. Exception details:"_s, $$new($ObjectArray, {$of(ioe)}));
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (!isClosed()) {
				{
					$var($Throwable, var$1, nullptr);
					try {
						try {
							closeSocket(false);
						} catch ($IOException&) {
							$var($IOException, ioe, $catch());
							if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
								$SSLLogger::warning("SSLSocket close failed. Debug info only. Exception details:"_s, $$new($ObjectArray, {$of(ioe)}));
							}
						}
					} catch ($Throwable&) {
						$assign(var$1, $catch());
					} /*finally*/ {
						this->tlsIsClosed = true;
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SSLSocketImpl::duplexCloseOutput() {
	bool useUserCanceled = false;
	bool hasCloseReceipt = false;
	if ($nc(this->conContext)->isNegotiated) {
		if (!$nc($nc(this->conContext)->protocolVersion)->useTLS13PlusSpec()) {
			hasCloseReceipt = true;
		} else {
			useUserCanceled = true;
		}
	} else if ($nc(this->conContext)->handshakeContext != nullptr) {
		useUserCanceled = true;
		$ProtocolVersion* pv = $nc($nc(this->conContext)->handshakeContext)->negotiatedProtocol;
		if (pv == nullptr || (!$nc(pv)->useTLS13PlusSpec())) {
			hasCloseReceipt = true;
		}
	}
	closeNotify(useUserCanceled);
	if (!isInputShutdown()) {
		bruteForceCloseInput(hasCloseReceipt);
	}
}

void SSLSocketImpl::closeNotify(bool useUserCanceled) {
	int32_t linger = getSoLinger();
	if (linger >= 0) {
		bool interrupted = $Thread::interrupted();
		try {
			bool var$0 = $nc($nc($nc(this->conContext)->outputRecord)->recordLock)->tryLock();
			$init($TimeUnit);
			if (var$0 || $nc($nc($nc(this->conContext)->outputRecord)->recordLock)->tryLock(linger, $TimeUnit::SECONDS)) {
				{
					$var($Throwable, var$1, nullptr);
					try {
						deliverClosedNotify(useUserCanceled);
					} catch ($Throwable&) {
						$assign(var$1, $catch());
					} /*finally*/ {
						$nc($nc($nc(this->conContext)->outputRecord)->recordLock)->unlock();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			} else {
				if (!$BaseSSLSocketImpl::isOutputShutdown()) {
					if (isLayered() && !this->autoClose) {
						$throwNew($SSLException, "SO_LINGER timeout, close_notify message cannot be sent."_s);
					} else {
						$BaseSSLSocketImpl::shutdownOutput();
						$init($SSLLogger);
						if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
							$SSLLogger::warning("SSLSocket output duplex close failed: SO_LINGER timeout, close_notify message cannot be sent."_s, $$new($ObjectArray, 0));
						}
					}
				}
				$nc($nc(this->conContext)->conSession)->invalidate();
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
					$SSLLogger::warning("Invalidate the session: SO_LINGER timeout, close_notify message cannot be sent."_s, $$new($ObjectArray, 0));
				}
			}
		} catch ($InterruptedException&) {
			$var($InterruptedException, ex, $catch());
			interrupted = true;
		}
		if (interrupted) {
			$($Thread::currentThread())->interrupt();
		}
	} else {
		$nc($nc($nc(this->conContext)->outputRecord)->recordLock)->lock();
		{
			$var($Throwable, var$2, nullptr);
			try {
				deliverClosedNotify(useUserCanceled);
			} catch ($Throwable&) {
				$assign(var$2, $catch());
			} /*finally*/ {
				$nc($nc($nc(this->conContext)->outputRecord)->recordLock)->unlock();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

void SSLSocketImpl::deliverClosedNotify(bool useUserCanceled) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (useUserCanceled) {
				$init($Alert);
				$nc(this->conContext)->warning($Alert::USER_CANCELED);
			}
			$init($Alert);
			$nc(this->conContext)->warning($Alert::CLOSE_NOTIFY);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (!$nc(this->conContext)->isOutboundClosed()) {
				$nc($nc(this->conContext)->outputRecord)->close();
			}
			bool var$1 = !$BaseSSLSocketImpl::isOutputShutdown();
			if (var$1 && (this->autoClose || !isLayered())) {
				$BaseSSLSocketImpl::shutdownOutput();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SSLSocketImpl::duplexCloseInput() {
	bool hasCloseReceipt = false;
	if ($nc(this->conContext)->isNegotiated && !$nc($nc(this->conContext)->protocolVersion)->useTLS13PlusSpec()) {
		hasCloseReceipt = true;
	}
	bruteForceCloseInput(hasCloseReceipt);
}

void SSLSocketImpl::bruteForceCloseInput(bool hasCloseReceipt) {
	if (hasCloseReceipt) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				this->shutdown();
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (!isInputShutdown()) {
					shutdownInput(false);
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		if (!$nc(this->conContext)->isInboundClosed()) {
			{
				$var($InputRecord, twrVar0$, $nc(this->conContext)->inputRecord);
				{
					$var($Throwable, var$1, nullptr);
					try {
						try {
							$nc(this->appInput)->deplete();
						} catch ($Throwable&) {
							$var($Throwable, t$, $catch());
							if (twrVar0$ != nullptr) {
								try {
									twrVar0$->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable&) {
						$assign(var$1, $catch());
					} /*finally*/ {
						if (twrVar0$ != nullptr) {
							twrVar0$->close();
						}
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			}
		}
		bool var$2 = (this->autoClose || !isLayered());
		if (var$2 && !$BaseSSLSocketImpl::isInputShutdown()) {
			$BaseSSLSocketImpl::shutdownInput();
		}
	}
}

void SSLSocketImpl::shutdownInput() {
	shutdownInput(true);
}

void SSLSocketImpl::shutdownInput(bool checkCloseNotify) {
	if (isInputShutdown()) {
		return;
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
		$SSLLogger::fine("close inbound of SSLSocket"_s, $$new($ObjectArray, 0));
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (checkCloseNotify && !$nc(this->conContext)->isInputCloseNotified && ($nc(this->conContext)->isNegotiated || $nc(this->conContext)->handshakeContext != nullptr)) {
				$throwNew($SSLException, "closing inbound before receiving peer\'s close_notify"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->conContext)->closeInbound();
			bool var$1 = (this->autoClose || !isLayered());
			if (var$1 && !$BaseSSLSocketImpl::isInputShutdown()) {
				$BaseSSLSocketImpl::shutdownInput();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool SSLSocketImpl::isInputShutdown() {
	bool var$0 = $nc(this->conContext)->isInboundClosed();
	if (var$0) {
		bool var$1 = !this->autoClose && isLayered();
		var$0 = (var$1 || $BaseSSLSocketImpl::isInputShutdown());
	}
	return var$0;
}

void SSLSocketImpl::shutdownOutput() {
	if (isOutputShutdown()) {
		return;
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
		$SSLLogger::fine("close outbound of SSLSocket"_s, $$new($ObjectArray, 0));
	}
	$nc(this->conContext)->closeOutbound();
	bool var$0 = (this->autoClose || !isLayered());
	if (var$0 && !$BaseSSLSocketImpl::isOutputShutdown()) {
		$BaseSSLSocketImpl::shutdownOutput();
	}
}

bool SSLSocketImpl::isOutputShutdown() {
	bool var$0 = $nc(this->conContext)->isOutboundClosed();
	if (var$0) {
		bool var$1 = !this->autoClose && isLayered();
		var$0 = (var$1 || $BaseSSLSocketImpl::isOutputShutdown());
	}
	return var$0;
}

$InputStream* SSLSocketImpl::getInputStream() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($InputStream, var$2, nullptr);
		bool return$1 = false;
		try {
			if (isClosed()) {
				$throwNew($SocketException, "Socket is closed"_s);
			}
			if (!this->isConnected$) {
				$throwNew($SocketException, "Socket is not connected"_s);
			}
			bool var$3 = $nc(this->conContext)->isInboundClosed();
			if (var$3 || isInputShutdown()) {
				$throwNew($SocketException, "Socket input is already shutdown"_s);
			}
			$assign(var$2, this->appInput);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void SSLSocketImpl::ensureNegotiated(bool resumable) {
	bool var$0 = $nc(this->conContext)->isNegotiated || $nc(this->conContext)->isBroken || $nc(this->conContext)->isInboundClosed();
	if (var$0 || $nc(this->conContext)->isOutboundClosed()) {
		return;
	}
	$nc(this->handshakeLock)->lock();
	{
		$var($Throwable, var$1, nullptr);
		bool return$2 = false;
		try {
			bool var$3 = $nc(this->conContext)->isNegotiated || $nc(this->conContext)->isBroken || $nc(this->conContext)->isInboundClosed();
			if (var$3 || $nc(this->conContext)->isOutboundClosed()) {
				return$2 = true;
				goto $finally;
			}
			startHandshake(resumable);
		} catch ($Throwable&) {
			$assign(var$1, $catch());
		} $finally: {
			$nc(this->handshakeLock)->unlock();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
		if (return$2) {
			return;
		}
	}
}

$OutputStream* SSLSocketImpl::getOutputStream() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($OutputStream, var$2, nullptr);
		bool return$1 = false;
		try {
			if (isClosed()) {
				$throwNew($SocketException, "Socket is closed"_s);
			}
			if (!this->isConnected$) {
				$throwNew($SocketException, "Socket is not connected"_s);
			}
			bool var$3 = $nc(this->conContext)->isOutboundDone();
			if (var$3 || isOutputShutdown()) {
				$throwNew($SocketException, "Socket output is already shutdown"_s);
			}
			$assign(var$2, this->appOutput);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$SSLParameters* SSLSocketImpl::getSSLParameters() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($SSLParameters, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc($nc(this->conContext)->sslConfig)->getSSLParameters());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void SSLSocketImpl::setSSLParameters($SSLParameters* params) {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc($nc(this->conContext)->sslConfig)->setSSLParameters(params);
			if ($nc($nc(this->conContext)->sslConfig)->maximumPacketSize != 0) {
				$nc($nc(this->conContext)->outputRecord)->changePacketSize($nc($nc(this->conContext)->sslConfig)->maximumPacketSize);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$String* SSLSocketImpl::getApplicationProtocol() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->conContext)->applicationProtocol);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$String* SSLSocketImpl::getHandshakeApplicationProtocol() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			if ($nc(this->conContext)->handshakeContext != nullptr) {
				$assign(var$2, $nc($nc(this->conContext)->handshakeContext)->applicationProtocol);
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return nullptr;
}

void SSLSocketImpl::setHandshakeApplicationProtocolSelector($BiFunction* selector) {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set($nc($nc(this->conContext)->sslConfig), socketAPSelector, selector);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$BiFunction* SSLSocketImpl::getHandshakeApplicationProtocolSelector() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($BiFunction, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc($nc(this->conContext)->sslConfig)->socketAPSelector);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t SSLSocketImpl::readHandshakeRecord() {
	while (!$nc(this->conContext)->isInboundClosed()) {
		try {
			$var($Plaintext, plainText, decode(nullptr));
			$init($ContentType);
			if (($nc(plainText)->contentType == $ContentType::HANDSHAKE->id) && $nc(this->conContext)->isNegotiated) {
				return 0;
			}
		} catch ($SSLException&) {
			$var($IOException, se, $catch());
			$throw(se);
		} catch ($InterruptedIOException&) {
			$var($IOException, se, $catch());
			$throw(se);
		} catch ($SocketException&) {
			$var($IOException, se, $catch());
			$throw(se);
		} catch ($IOException&) {
			$var($IOException, ioe, $catch());
			$throwNew($SSLException, "readHandshakeRecord"_s, ioe);
		}
	}
	return -1;
}

$ByteBuffer* SSLSocketImpl::readApplicationRecord($ByteBuffer* buffer$renamed) {
	$var($ByteBuffer, buffer, buffer$renamed);
	while (!$nc(this->conContext)->isInboundClosed()) {
		$nc(buffer)->clear();
		int32_t inLen = $nc($nc(this->conContext)->inputRecord)->bytesInCompletePacket();
		if (inLen < 0) {
			handleEOF(nullptr);
			return nullptr;
		}
		if (inLen > $SSLRecord::maxLargeRecordSize) {
			$throwNew($SSLProtocolException, $$str({"Illegal packet size: "_s, $$str(inLen)}));
		}
		if (inLen > buffer->remaining()) {
			$assign(buffer, $ByteBuffer::allocate(inLen));
		}
		try {
			$var($Plaintext, plainText, decode(buffer));
			$init($ContentType);
			if ($nc(plainText)->contentType == $ContentType::APPLICATION_DATA->id && buffer->position() > 0) {
				return buffer;
			}
		} catch ($SSLException&) {
			$var($IOException, se, $catch());
			$throw(se);
		} catch ($InterruptedIOException&) {
			$var($IOException, se, $catch());
			$throw(se);
		} catch ($SocketException&) {
			$var($IOException, se, $catch());
			$throw(se);
		} catch ($IOException&) {
			$var($IOException, ioe, $catch());
			$throwNew($SSLException, "readApplicationRecord"_s, ioe);
		}
	}
	return nullptr;
}

$Plaintext* SSLSocketImpl::decode($ByteBuffer* destination) {
	$var($Plaintext, plainText, nullptr);
	try {
		if (destination == nullptr) {
			$assign(plainText, $SSLTransport::decode(this->conContext, nullptr, 0, 0, nullptr, 0, 0));
		} else {
			$assign(plainText, $SSLTransport::decode(this->conContext, nullptr, 0, 0, $$new($ByteBufferArray, {destination}), 0, 1));
		}
	} catch ($EOFException&) {
		$var($EOFException, eofe, $catch());
		$assign(plainText, handleEOF(eofe));
	}
	$init($Plaintext);
	bool var$0 = plainText != $Plaintext::PLAINTEXT_NULL;
	if (var$0) {
		bool var$1 = $nc($nc(this->conContext)->inputRecord)->seqNumIsHuge();
		var$0 = (var$1 || $nc($nc($nc(this->conContext)->inputRecord)->readCipher)->atKeyLimit());
	}
	if (var$0) {
		tryKeyUpdate();
	}
	return plainText;
}

void SSLSocketImpl::tryKeyUpdate() {
	bool var$0 = ($nc(this->conContext)->handshakeContext == nullptr) && !$nc(this->conContext)->isOutboundClosed();
	if (var$0 && !$nc(this->conContext)->isInboundClosed() && !$nc(this->conContext)->isBroken) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::finest("trigger key update"_s, $$new($ObjectArray, 0));
		}
		startHandshake();
	}
}

void SSLSocketImpl::tryNewSessionTicket() {
	bool var$1 = !$nc($nc(this->conContext)->sslConfig)->isClientMode && $nc($nc(this->conContext)->protocolVersion)->useTLS13PlusSpec() && $nc(this->conContext)->handshakeContext == nullptr;
	bool var$0 = var$1 && !$nc(this->conContext)->isOutboundClosed();
	if (var$0 && !$nc(this->conContext)->isInboundClosed() && !$nc(this->conContext)->isBroken) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::finest("trigger new session ticket"_s, $$new($ObjectArray, 0));
		}
		$init($NewSessionTicket);
		$nc($NewSessionTicket::t13PosthandshakeProducer)->produce($$new($PostHandshakeContext, this->conContext));
	}
}

void SSLSocketImpl::doneConnect() {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->peerHost == nullptr || $nc(this->peerHost)->isEmpty()) {
				bool useNameService = SSLSocketImpl::trustNameService && $nc($nc(this->conContext)->sslConfig)->isClientMode;
				useImplicitHost(useNameService);
			} else {
				$set($nc($nc(this->conContext)->sslConfig), serverNames, $Utilities::addToSNIServerNameList($nc($nc(this->conContext)->sslConfig)->serverNames, this->peerHost));
			}
			$var($InputStream, sockInput, $BaseSSLSocketImpl::getInputStream());
			$nc($nc(this->conContext)->inputRecord)->setReceiverStream(sockInput);
			$var($OutputStream, sockOutput, $BaseSSLSocketImpl::getOutputStream());
			$nc($nc(this->conContext)->inputRecord)->setDeliverStream(sockOutput);
			$nc($nc(this->conContext)->outputRecord)->setDeliverStream(sockOutput);
			this->isConnected$ = true;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SSLSocketImpl::useImplicitHost(bool useNameService) {
	$var($InetAddress, inetAddress, getInetAddress());
	if (inetAddress == nullptr) {
		return;
	}
	$var($JavaNetInetAddressAccess, jna, $SharedSecrets::getJavaNetInetAddressAccess());
	$var($String, originalHostname, $nc(jna)->getOriginalHostName(inetAddress));
	if (originalHostname != nullptr && !originalHostname->isEmpty()) {
		$set(this, peerHost, originalHostname);
		if ($nc($nc($nc(this->conContext)->sslConfig)->serverNames)->isEmpty() && !$nc($nc(this->conContext)->sslConfig)->noSniExtension) {
			$set($nc($nc(this->conContext)->sslConfig), serverNames, $Utilities::addToSNIServerNameList($nc($nc(this->conContext)->sslConfig)->serverNames, this->peerHost));
		}
		return;
	}
	if (!useNameService) {
		$set(this, peerHost, $nc(inetAddress)->getHostAddress());
	} else {
		$set(this, peerHost, $nc($(getInetAddress()))->getHostName());
	}
}

void SSLSocketImpl::setHost($String* host) {
	$nc(this->socketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, peerHost, host);
			$set($nc($nc(this->conContext)->sslConfig), serverNames, $Utilities::addToSNIServerNameList($nc($nc(this->conContext)->sslConfig)->serverNames, host));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->socketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SSLSocketImpl::handleException($Exception* cause) {
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
		$SSLLogger::warning("handling exception"_s, $$new($ObjectArray, {$of(cause)}));
	}
	if ($instanceOf($InterruptedIOException, cause)) {
		$throw($cast($IOException, cause));
	}
	bool isSSLException = ($instanceOf($SSLException, cause));
	$Alert* alert = nullptr;
	if (isSSLException) {
		if ($instanceOf($SSLHandshakeException, cause)) {
			$init($Alert);
			alert = $Alert::HANDSHAKE_FAILURE;
		} else {
			$init($Alert);
			alert = $Alert::UNEXPECTED_MESSAGE;
		}
	} else if ($instanceOf($IOException, cause)) {
		$init($Alert);
		alert = $Alert::UNEXPECTED_MESSAGE;
	} else {
		$init($Alert);
		alert = $Alert::INTERNAL_ERROR;
	}
	if ($instanceOf($SocketException, cause)) {
		try {
			$throw($($nc(this->conContext)->fatal(alert, static_cast<$Throwable*>(cause))));
		} catch ($Exception&) {
			$catch();
		}
		$throw($cast($SocketException, cause));
	}
	$throw($($nc(this->conContext)->fatal(alert, static_cast<$Throwable*>(cause))));
}

$Plaintext* SSLSocketImpl::handleEOF($EOFException* eofe) {
	$init($BaseSSLSocketImpl);
	if ($BaseSSLSocketImpl::requireCloseNotify || $nc(this->conContext)->handshakeContext != nullptr) {
		$var($SSLException, ssle, nullptr);
		if ($nc(this->conContext)->handshakeContext != nullptr) {
			$assign(ssle, $new($SSLHandshakeException, "Remote host terminated the handshake"_s));
		} else {
			$assign(ssle, $new($SSLProtocolException, "Remote host terminated the connection"_s));
		}
		if (eofe != nullptr) {
			$nc(ssle)->initCause(eofe);
		}
		$throw(ssle);
	} else {
		$nc(this->conContext)->isInputCloseNotified = true;
		shutdownInput();
		$init($Plaintext);
		return $Plaintext::PLAINTEXT_NULL;
	}
}

$String* SSLSocketImpl::getPeerHost() {
	return this->peerHost;
}

int32_t SSLSocketImpl::getPeerPort() {
	return getPort();
}

bool SSLSocketImpl::useDelegatedTask() {
	return false;
}

void SSLSocketImpl::shutdown() {
	if (!isClosed()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::fine("close the underlying socket"_s, $$new($ObjectArray, 0));
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				closeSocket($nc(this->conContext)->isNegotiated && !$nc(this->conContext)->isInputCloseNotified);
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				this->tlsIsClosed = true;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$String* SSLSocketImpl::toString() {
	$var($String, var$3, $$str({"SSLSocket[hostname="_s, $(getPeerHost()), ", port="_s}));
	$var($String, var$2, $$concat(var$3, $$str(getPeerPort())));
	$var($String, var$1, $$concat(var$2, ", "));
	$var($String, var$0, $$concat(var$1, $nc(this->conContext)->conSession));
	return $concat(var$0, "]");
}

void SSLSocketImpl::closeSocket(bool selfInitiated) {
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
		$SSLLogger::fine($$str({"close the SSL connection "_s, (selfInitiated ? "(initiative)"_s : "(passive)"_s)}), $$new($ObjectArray, 0));
	}
	if (this->autoClose || !isLayered()) {
		{
			$var($SSLSocketInputRecord, inputRecord, nullptr);
			$var($InputRecord, patt62913$temp, $nc(this->conContext)->inputRecord);
			bool var$0 = $instanceOf($SSLSocketInputRecord, patt62913$temp);
			if (var$0) {
				$assign(inputRecord, $cast($SSLSocketInputRecord, patt62913$temp));
				var$0 = true;
			}
			if (var$0 && this->isConnected$) {
				if ($nc($nc(this->appInput)->readLock)->tryLock()) {
					{
						$var($Throwable, var$1, nullptr);
						try {
							$nc(inputRecord)->deplete(false);
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							$nc($nc(this->appInput)->readLock)->unlock();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				}
			}
		}
		$BaseSSLSocketImpl::close();
	} else if (selfInitiated) {
		bool var$2 = !$nc(this->conContext)->isInboundClosed();
		if (var$2 && !isInputShutdown()) {
			waitForClose();
		}
	}
}

void SSLSocketImpl::waitForClose() {
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
		$SSLLogger::fine("wait for close_notify or alert"_s, $$new($ObjectArray, 0));
	}
	$nc($nc(this->appInput)->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			while (!$nc(this->conContext)->isInboundClosed()) {
				try {
					$var($Plaintext, plainText, decode(nullptr));
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
						$SSLLogger::finest("discard plaintext while waiting for close"_s, $$new($ObjectArray, {$of(plainText)}));
					}
				} catch ($Exception&) {
					$var($Exception, e, $catch());
					handleException(e);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc($nc(this->appInput)->readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Set* SSLSocketImpl::supportedOptions() {
	return $BaseSSLSocketImpl::supportedOptions();
}

$Object* SSLSocketImpl::getOption($SocketOption* name) {
	return $of($BaseSSLSocketImpl::getOption(name));
}

$Socket* SSLSocketImpl::setOption($SocketOption* name, Object$* value) {
	return $BaseSSLSocketImpl::setOption(name, value);
}

void SSLSocketImpl::setSoTimeout(int32_t timeout) {
	$BaseSSLSocketImpl::setSoTimeout(timeout);
}

void SSLSocketImpl::setPerformancePreferences(int32_t connectionTime, int32_t latency, int32_t bandwidth) {
	$BaseSSLSocketImpl::setPerformancePreferences(connectionTime, latency, bandwidth);
}

$SocketAddress* SSLSocketImpl::getRemoteSocketAddress() {
	return $BaseSSLSocketImpl::getRemoteSocketAddress();
}

$SocketAddress* SSLSocketImpl::getLocalSocketAddress() {
	return $BaseSSLSocketImpl::getLocalSocketAddress();
}

void SSLSocketImpl::bind($SocketAddress* bindpoint) {
	$BaseSSLSocketImpl::bind(bindpoint);
}

void clinit$SSLSocketImpl($Class* class$) {
	SSLSocketImpl::trustNameService = $Utilities::getBooleanProperty("jdk.tls.trustNameService"_s, false);
}

SSLSocketImpl::SSLSocketImpl() {
}

$Class* SSLSocketImpl::load$($String* name, bool initialize) {
	$loadClass(SSLSocketImpl, name, initialize, &_SSLSocketImpl_ClassInfo_, clinit$SSLSocketImpl, allocate$SSLSocketImpl);
	return class$;
}

$Class* SSLSocketImpl::class$ = nullptr;

		} // ssl
	} // security
} // sun