#include <SocksServer.h>

#include <SocksServer$ClientHandler.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

#undef ADDR_TYPE_NOT_SUP
#undef BIND
#undef CMD_NOT_SUPPORTED
#undef CONNECT
#undef CONN_REFUSED
#undef DEFAULT_PORT
#undef DOMAIN_NAME
#undef GENERAL_FAILURE
#undef GSSAPI
#undef HOST_UNREACHABLE
#undef IPV4
#undef IPV6
#undef NET_UNREACHABLE
#undef NOT_ALLOWED
#undef NO_AUTH
#undef NO_METHODS
#undef PROTO_VERS
#undef PROTO_VERS4
#undef REQUEST_OK
#undef TTL_EXPIRED
#undef UDP_ASSOC
#undef USER_PASSW

using $SocksServer$ClientHandler = ::SocksServer$ClientHandler;
using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $HashMap = ::java::util::HashMap;

$FieldInfo _SocksServer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SocksServer, $assertionsDisabled)},
	{"PROTO_VERS4", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, PROTO_VERS4)},
	{"PROTO_VERS", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, PROTO_VERS)},
	{"DEFAULT_PORT", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, DEFAULT_PORT)},
	{"NO_AUTH", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, NO_AUTH)},
	{"GSSAPI", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, GSSAPI)},
	{"USER_PASSW", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, USER_PASSW)},
	{"NO_METHODS", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, NO_METHODS)},
	{"CONNECT", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, CONNECT)},
	{"BIND", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, BIND)},
	{"UDP_ASSOC", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, UDP_ASSOC)},
	{"IPV4", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, IPV4)},
	{"DOMAIN_NAME", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, DOMAIN_NAME)},
	{"IPV6", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, IPV6)},
	{"REQUEST_OK", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, REQUEST_OK)},
	{"GENERAL_FAILURE", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, GENERAL_FAILURE)},
	{"NOT_ALLOWED", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, NOT_ALLOWED)},
	{"NET_UNREACHABLE", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, NET_UNREACHABLE)},
	{"HOST_UNREACHABLE", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, HOST_UNREACHABLE)},
	{"CONN_REFUSED", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, CONN_REFUSED)},
	{"TTL_EXPIRED", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, TTL_EXPIRED)},
	{"CMD_NOT_SUPPORTED", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, CMD_NOT_SUPPORTED)},
	{"ADDR_TYPE_NOT_SUP", "I", nullptr, $STATIC | $FINAL, $constField(SocksServer, ADDR_TYPE_NOT_SUP)},
	{"port", "I", nullptr, $PRIVATE, $field(SocksServer, port)},
	{"server", "Ljava/net/ServerSocket;", nullptr, $PRIVATE, $field(SocksServer, server)},
	{"useV4", "Z", nullptr, $PRIVATE, $field(SocksServer, useV4)},
	{"users", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(SocksServer, users)},
	{"done", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SocksServer, done)},
	{}
};

$MethodInfo _SocksServer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(static_cast<void(SocksServer::*)(int32_t,bool)>(&SocksServer::init$)), "java.io.IOException"},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SocksServer::*)(int32_t)>(&SocksServer::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/net/InetAddress;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(SocksServer::*)($InetAddress*,int32_t,bool)>(&SocksServer::init$)), "java.io.IOException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SocksServer::*)()>(&SocksServer::init$)), "java.io.IOException"},
	{"addUser", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"getPort", "()I", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SocksServer_InnerClassesInfo_[] = {
	{"SocksServer$ClientHandler", "SocksServer", "ClientHandler", 0},
	{}
};

$ClassInfo _SocksServer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SocksServer",
	"java.lang.Thread",
	"java.io.Closeable",
	_SocksServer_FieldInfo_,
	_SocksServer_MethodInfo_,
	nullptr,
	nullptr,
	_SocksServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SocksServer$ClientHandler,SocksServer$ClientHandler$Tunnel"
};

$Object* allocate$SocksServer($Class* clazz) {
	return $of($alloc(SocksServer));
}

$Object* SocksServer::clone() {
	 return this->$Thread::clone();
}

$String* SocksServer::toString() {
	 return this->$Thread::toString();
}

int32_t SocksServer::hashCode() {
	 return this->$Thread::hashCode();
}

bool SocksServer::equals(Object$* arg0) {
	 return this->$Thread::equals(arg0);
}

void SocksServer::finalize() {
	this->$Thread::finalize();
}

bool SocksServer::$assertionsDisabled = false;

void SocksServer::init$(int32_t port, bool v4) {
	SocksServer::init$(port);
	this->useV4 = v4;
}

void SocksServer::init$(int32_t port) {
	$Thread::init$();
	this->useV4 = false;
	$set(this, users, $new($HashMap));
	this->done = false;
	this->port = port;
	$set(this, server, $new($ServerSocket));
	if (port == 0) {
		$nc(this->server)->bind(nullptr);
		this->port = $nc(this->server)->getLocalPort();
	} else {
		$nc(this->server)->bind($$new($InetSocketAddress, port));
	}
}

void SocksServer::init$($InetAddress* addr, int32_t port, bool useV4) {
	$useLocalCurrentObjectStackCache();
	$Thread::init$();
	this->useV4 = false;
	$set(this, users, $new($HashMap));
	this->done = false;
	this->port = port;
	this->useV4 = useV4;
	$set(this, server, $new($ServerSocket));
	if (port == 0 && addr == nullptr) {
		$nc(this->server)->bind(nullptr);
		this->port = $nc(this->server)->getLocalPort();
	} else if (port == 0 && addr != nullptr) {
		$nc(this->server)->bind($$new($InetSocketAddress, addr, 0));
		this->port = $nc(this->server)->getLocalPort();
	} else if (addr == nullptr) {
		if (!SocksServer::$assertionsDisabled && !(port != 0)) {
			$throwNew($AssertionError);
		}
		$nc(this->server)->bind($$new($InetSocketAddress, port));
	} else {
		if (!SocksServer::$assertionsDisabled && !(port != 0)) {
			$throwNew($AssertionError);
		}
		$nc(this->server)->bind($$new($InetSocketAddress, addr, port));
	}
}

void SocksServer::init$() {
	SocksServer::init$(SocksServer::DEFAULT_PORT);
}

void SocksServer::addUser($String* user, $String* passwd) {
	$nc(this->users)->put(user, passwd);
}

int32_t SocksServer::getPort() {
	return this->port;
}

void SocksServer::close() {
	this->done = true;
	try {
		$nc(this->server)->close();
	} catch ($IOException& unused) {
	}
}

void SocksServer::run() {
	$useLocalCurrentObjectStackCache();
	$var($SocksServer$ClientHandler, cl, nullptr);
	while (!this->done) {
		try {
			$var($Socket, s, $nc(this->server)->accept());
			$assign(cl, $new($SocksServer$ClientHandler, this, s));
			cl->start();
		} catch ($IOException& ex) {
			if (cl != nullptr) {
				cl->interrupt();
			}
		}
	}
}

void clinit$SocksServer($Class* class$) {
	SocksServer::$assertionsDisabled = !SocksServer::class$->desiredAssertionStatus();
}

SocksServer::SocksServer() {
}

$Class* SocksServer::load$($String* name, bool initialize) {
	$loadClass(SocksServer, name, initialize, &_SocksServer_ClassInfo_, clinit$SocksServer, allocate$SocksServer);
	return class$;
}

$Class* SocksServer::class$ = nullptr;