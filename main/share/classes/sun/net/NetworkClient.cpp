#include <sun/net/NetworkClient.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/InternalError.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Proxy$Type.h>
#include <java/net/Proxy.h>
#include <java/net/Socket.h>
#include <java/security/AccessController.h>
#include <java/util/Arrays.h>
#include <sun/net/NetworkClient$1.h>
#include <sun/net/NetworkClient$2.h>
#include <sun/net/NetworkClient$3.h>
#include <jcpp.h>

#undef DEFAULT_CONNECT_TIMEOUT
#undef DEFAULT_READ_TIMEOUT
#undef DIRECT
#undef NO_PROXY
#undef SOCKS

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Proxy = ::java::net::Proxy;
using $Proxy$Type = ::java::net::Proxy$Type;
using $Socket = ::java::net::Socket;
using $AccessController = ::java::security::AccessController;
using $Arrays = ::java::util::Arrays;
using $NetworkClient$1 = ::sun::net::NetworkClient$1;
using $NetworkClient$2 = ::sun::net::NetworkClient$2;
using $NetworkClient$3 = ::sun::net::NetworkClient$3;

namespace sun {
	namespace net {

int32_t NetworkClient::defaultSoTimeout = 0;
int32_t NetworkClient::defaultConnectTimeout = 0;
$String* NetworkClient::encoding = nullptr;

bool NetworkClient::isASCIISuperset($String* encoding) {
	$init(NetworkClient);
	$useLocalObjectStack();
	$var($String, chkS, "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz-_.!~*\'();/?:@&=+$,"_s);
	$var($bytes, chkB, $new($bytes, {
		48,
		49,
		50,
		51,
		52,
		53,
		54,
		55,
		56,
		57,
		65,
		66,
		67,
		68,
		69,
		70,
		71,
		72,
		73,
		74,
		75,
		76,
		77,
		78,
		79,
		80,
		81,
		82,
		83,
		84,
		85,
		86,
		87,
		88,
		89,
		90,
		97,
		98,
		99,
		100,
		101,
		102,
		103,
		104,
		105,
		106,
		107,
		108,
		109,
		110,
		111,
		112,
		113,
		114,
		115,
		116,
		117,
		118,
		119,
		120,
		121,
		122,
		45,
		95,
		46,
		33,
		126,
		42,
		39,
		40,
		41,
		59,
		47,
		63,
		58,
		64,
		38,
		61,
		43,
		36,
		44
	}));
	$var($bytes, b, chkS->getBytes(encoding));
	return $Arrays::equals(b, chkB);
}

void NetworkClient::openServer($String* server, int32_t port) {
	$useLocalObjectStack();
	if (this->serverSocket != nullptr) {
		closeServer();
	}
	$set(this, serverSocket, doConnect(server, port));
	try {
		$set(this, serverOutput, $new($PrintStream, $$new($BufferedOutputStream, $($nc(this->serverSocket)->getOutputStream())), true, NetworkClient::encoding));
	} catch ($UnsupportedEncodingException& e) {
		$throwNew($InternalError, $$str({NetworkClient::encoding, "encoding not found"_s}), e);
	}
	$set(this, serverInput, $new($BufferedInputStream, $($nc(this->serverSocket)->getInputStream())));
}

$Socket* NetworkClient::doConnect($String* server, int32_t port) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Socket, s, nullptr);
	if (this->proxy != nullptr) {
		$init($Proxy$Type);
		if (this->proxy->type() == $Proxy$Type::SOCKS) {
			$assign(s, $cast($Socket, $AccessController::doPrivileged($$new($NetworkClient$2, this))));
		} else if (this->proxy->type() == $Proxy$Type::DIRECT) {
			$assign(s, createSocket());
		} else {
			$assign(s, $new($Socket, $Proxy::NO_PROXY));
		}
	} else {
		$assign(s, createSocket());
	}
	if (this->connectTimeout >= 0) {
		$nc(s)->connect($$new($InetSocketAddress, server, port), this->connectTimeout);
	} else if (NetworkClient::defaultConnectTimeout > 0) {
		$nc(s)->connect($$new($InetSocketAddress, server, port), NetworkClient::defaultConnectTimeout);
	} else {
		$nc(s)->connect($$new($InetSocketAddress, server, port));
	}
	if (this->readTimeout >= 0) {
		$nc(s)->setSoTimeout(this->readTimeout);
	} else if (NetworkClient::defaultSoTimeout > 0) {
		$nc(s)->setSoTimeout(NetworkClient::defaultSoTimeout);
	}
	return s;
}

$Socket* NetworkClient::createSocket() {
	$init($Proxy);
	return $new($Socket, $Proxy::NO_PROXY);
}

$InetAddress* NetworkClient::getLocalAddress() {
	$beforeCallerSensitive();
	if (this->serverSocket == nullptr) {
		$throwNew($IOException, "not connected"_s);
	}
	return $cast($InetAddress, $AccessController::doPrivileged($$new($NetworkClient$3, this)));
}

void NetworkClient::closeServer() {
	if (!serverIsOpen()) {
		return;
	}
	$nc(this->serverSocket)->close();
	$set(this, serverSocket, nullptr);
	$set(this, serverInput, nullptr);
	$set(this, serverOutput, nullptr);
}

bool NetworkClient::serverIsOpen() {
	return this->serverSocket != nullptr;
}

void NetworkClient::init$($String* host, int32_t port) {
	$init($Proxy);
	$set(this, proxy, $Proxy::NO_PROXY);
	$set(this, serverSocket, nullptr);
	this->readTimeout = NetworkClient::DEFAULT_READ_TIMEOUT;
	this->connectTimeout = NetworkClient::DEFAULT_CONNECT_TIMEOUT;
	openServer(host, port);
}

void NetworkClient::init$() {
	$init($Proxy);
	$set(this, proxy, $Proxy::NO_PROXY);
	$set(this, serverSocket, nullptr);
	this->readTimeout = NetworkClient::DEFAULT_READ_TIMEOUT;
	this->connectTimeout = NetworkClient::DEFAULT_CONNECT_TIMEOUT;
}

void NetworkClient::setConnectTimeout(int32_t timeout) {
	this->connectTimeout = timeout;
}

int32_t NetworkClient::getConnectTimeout() {
	return this->connectTimeout;
}

void NetworkClient::setReadTimeout(int32_t timeout) {
	if (timeout == NetworkClient::DEFAULT_READ_TIMEOUT) {
		timeout = NetworkClient::defaultSoTimeout;
	}
	if (this->serverSocket != nullptr && timeout >= 0) {
		try {
			this->serverSocket->setSoTimeout(timeout);
		} catch ($IOException& e) {
		}
	}
	this->readTimeout = timeout;
}

int32_t NetworkClient::getReadTimeout() {
	return this->readTimeout;
}

void NetworkClient::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		$var($ints, vals, $new($ints, {
			0,
			0
		}));
		$var($StringArray, encs, $new($StringArray, {nullptr}));
		$AccessController::doPrivileged($$new($NetworkClient$1, vals, encs));
		if (vals->get(0) != 0) {
			NetworkClient::defaultSoTimeout = vals->get(0);
		}
		if (vals->get(1) != 0) {
			NetworkClient::defaultConnectTimeout = vals->get(1);
		}
		$assignStatic(NetworkClient::encoding, encs->get(0));
		try {
			if (!NetworkClient::isASCIISuperset(NetworkClient::encoding)) {
				$assignStatic(NetworkClient::encoding, "ISO8859_1"_s);
			}
		} catch ($Exception& e) {
			$assignStatic(NetworkClient::encoding, "ISO8859_1"_s);
		}
	}
}

NetworkClient::NetworkClient() {
}

$Class* NetworkClient::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_READ_TIMEOUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NetworkClient, DEFAULT_READ_TIMEOUT)},
		{"DEFAULT_CONNECT_TIMEOUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NetworkClient, DEFAULT_CONNECT_TIMEOUT)},
		{"proxy", "Ljava/net/Proxy;", nullptr, $PROTECTED, $field(NetworkClient, proxy)},
		{"serverSocket", "Ljava/net/Socket;", nullptr, $PROTECTED, $field(NetworkClient, serverSocket)},
		{"serverOutput", "Ljava/io/PrintStream;", nullptr, $PUBLIC, $field(NetworkClient, serverOutput)},
		{"serverInput", "Ljava/io/InputStream;", nullptr, $PUBLIC, $field(NetworkClient, serverInput)},
		{"defaultSoTimeout", "I", nullptr, $PROTECTED | $STATIC, $staticField(NetworkClient, defaultSoTimeout)},
		{"defaultConnectTimeout", "I", nullptr, $PROTECTED | $STATIC, $staticField(NetworkClient, defaultConnectTimeout)},
		{"readTimeout", "I", nullptr, $PROTECTED, $field(NetworkClient, readTimeout)},
		{"connectTimeout", "I", nullptr, $PROTECTED, $field(NetworkClient, connectTimeout)},
		{"encoding", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticField(NetworkClient, encoding)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(NetworkClient, init$, void, $String*, int32_t), "java.io.IOException"},
		{"<init>", "()V", nullptr, $PUBLIC, $method(NetworkClient, init$, void)},
		{"closeServer", "()V", nullptr, $PUBLIC, $virtualMethod(NetworkClient, closeServer, void), "java.io.IOException"},
		{"createSocket", "()Ljava/net/Socket;", nullptr, $PROTECTED, $virtualMethod(NetworkClient, createSocket, $Socket*), "java.io.IOException"},
		{"doConnect", "(Ljava/lang/String;I)Ljava/net/Socket;", nullptr, $PROTECTED, $virtualMethod(NetworkClient, doConnect, $Socket*, $String*, int32_t), "java.io.IOException,java.net.UnknownHostException"},
		{"getConnectTimeout", "()I", nullptr, $PUBLIC, $virtualMethod(NetworkClient, getConnectTimeout, int32_t)},
		{"getLocalAddress", "()Ljava/net/InetAddress;", nullptr, $PROTECTED, $virtualMethod(NetworkClient, getLocalAddress, $InetAddress*), "java.io.IOException"},
		{"getReadTimeout", "()I", nullptr, $PUBLIC, $virtualMethod(NetworkClient, getReadTimeout, int32_t)},
		{"isASCIISuperset", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(NetworkClient, isASCIISuperset, bool, $String*), "java.lang.Exception"},
		{"openServer", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(NetworkClient, openServer, void, $String*, int32_t), "java.io.IOException,java.net.UnknownHostException"},
		{"serverIsOpen", "()Z", nullptr, $PUBLIC, $virtualMethod(NetworkClient, serverIsOpen, bool)},
		{"setConnectTimeout", "(I)V", nullptr, $PUBLIC, $virtualMethod(NetworkClient, setConnectTimeout, void, int32_t)},
		{"setReadTimeout", "(I)V", nullptr, $PUBLIC, $virtualMethod(NetworkClient, setReadTimeout, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.NetworkClient$3", nullptr, nullptr, 0},
		{"sun.net.NetworkClient$2", nullptr, nullptr, 0},
		{"sun.net.NetworkClient$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.NetworkClient",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.net.NetworkClient$3,sun.net.NetworkClient$2,sun.net.NetworkClient$1"
	};
	$loadClass(NetworkClient, name, initialize, &classInfo$$, NetworkClient::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NetworkClient);
	});
	return class$;
}

$Class* NetworkClient::class$ = nullptr;

	} // net
} // sun