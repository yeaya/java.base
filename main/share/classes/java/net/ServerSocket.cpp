#include <java/net/ServerSocket.h>

#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/DelegatingSocketImpl.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/NetPermission.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketException.h>
#include <java/net/SocketImpl.h>
#include <java/net/SocketImplFactory.h>
#include <java/net/SocketOption.h>
#include <java/net/SocketOptions.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Collections.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <sun/net/PlatformSocketImpl.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef SET_SOCKETIMPL_PERMISSION
#undef SO_RCVBUF
#undef SO_REUSEADDR
#undef SO_TIMEOUT

using $Closeable = ::java::io::Closeable;
using $FileDescriptor = ::java::io::FileDescriptor;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $DelegatingSocketImpl = ::java::net::DelegatingSocketImpl;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $NetPermission = ::java::net::NetPermission;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketException = ::java::net::SocketException;
using $SocketImpl = ::java::net::SocketImpl;
using $SocketImplFactory = ::java::net::SocketImplFactory;
using $SocketOption = ::java::net::SocketOption;
using $SocketOptions = ::java::net::SocketOptions;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Collections = ::java::util::Collections;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $PlatformSocketImpl = ::sun::net::PlatformSocketImpl;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace net {

$NamedAttribute ServerSocket_Attribute_var$0[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _ServerSocket_MethodAnnotations_setSocketFactory34[] = {
	{"Ljava/lang/Deprecated;", ServerSocket_Attribute_var$0},
	{}
};

$FieldInfo _ServerSocket_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ServerSocket, $assertionsDisabled)},
	{"created", "Z", nullptr, $PRIVATE, $field(ServerSocket, created)},
	{"bound", "Z", nullptr, $PRIVATE, $field(ServerSocket, bound)},
	{"closed", "Z", nullptr, $PRIVATE, $field(ServerSocket, closed)},
	{"closeLock", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(ServerSocket, closeLock)},
	{"impl", "Ljava/net/SocketImpl;", nullptr, $PRIVATE, $field(ServerSocket, impl)},
	{"factory", "Ljava/net/SocketImplFactory;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(ServerSocket, factory)},
	{"options", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $VOLATILE, $field(ServerSocket, options)},
	{}
};

$MethodInfo _ServerSocket_MethodInfo_[] = {
	{"<init>", "(Ljava/net/SocketImpl;)V", nullptr, $PROTECTED, $method(static_cast<void(ServerSocket::*)($SocketImpl*)>(&ServerSocket::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ServerSocket::*)()>(&ServerSocket::init$)), "java.io.IOException"},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ServerSocket::*)(int32_t)>(&ServerSocket::init$)), "java.io.IOException"},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(ServerSocket::*)(int32_t,int32_t)>(&ServerSocket::init$)), "java.io.IOException"},
	{"<init>", "(IILjava/net/InetAddress;)V", nullptr, $PUBLIC, $method(static_cast<void(ServerSocket::*)(int32_t,int32_t,$InetAddress*)>(&ServerSocket::init$)), "java.io.IOException"},
	{"accept", "()Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"bind", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"bind", "(Ljava/net/SocketAddress;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"checkPermission", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Void*(*)()>(&ServerSocket::checkPermission))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createImpl", "()V", nullptr, 0, nullptr, "java.net.SocketException"},
	{"customImplAccept", "(Ljava/net/SocketImpl;)V", nullptr, $PRIVATE, $method(static_cast<void(ServerSocket::*)($SocketImpl*)>(&ServerSocket::customImplAccept)), "java.io.IOException"},
	{"ensureCompatible", "(Ljava/net/SocketImpl;)V", nullptr, $PRIVATE, $method(static_cast<void(ServerSocket::*)($SocketImpl*)>(&ServerSocket::ensureCompatible)), "java.io.IOException"},
	{"getChannel", "()Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC},
	{"getImpl", "()Ljava/net/SocketImpl;", nullptr, 0, nullptr, "java.net.SocketException"},
	{"getInetAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC},
	{"getLocalPort", "()I", nullptr, $PUBLIC},
	{"getLocalSocketAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC, nullptr, "java.io.IOException"},
	{"getReceiveBufferSize", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"getReuseAddress", "()Z", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"getSoTimeout", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"implAccept", "(Ljava/net/Socket;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(ServerSocket::*)($Socket*)>(&ServerSocket::implAccept)), "java.io.IOException"},
	{"implAccept", "()Ljava/net/SocketImpl;", nullptr, $PRIVATE, $method(static_cast<$SocketImpl*(ServerSocket::*)()>(&ServerSocket::implAccept)), "java.io.IOException"},
	{"implAccept", "(Ljava/net/SocketImpl;)V", nullptr, $PRIVATE, $method(static_cast<void(ServerSocket::*)($SocketImpl*)>(&ServerSocket::implAccept)), "java.io.IOException"},
	{"isBound", "()Z", nullptr, $PUBLIC},
	{"isClosed", "()Z", nullptr, $PUBLIC},
	{"platformImplAccept", "()Ljava/net/SocketImpl;", nullptr, $PRIVATE, $method(static_cast<$SocketImpl*(ServerSocket::*)()>(&ServerSocket::platformImplAccept)), "java.io.IOException"},
	{"setImpl", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerSocket::*)()>(&ServerSocket::setImpl))},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/ServerSocket;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)Ljava/net/ServerSocket;", $PUBLIC, nullptr, "java.io.IOException"},
	{"setPerformancePreferences", "(III)V", nullptr, $PUBLIC},
	{"setReceiveBufferSize", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"setReuseAddress", "(Z)V", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"setSoTimeout", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"setSocketFactory", "(Ljava/net/SocketImplFactory;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED | $DEPRECATED, $method(static_cast<void(*)($SocketImplFactory*)>(&ServerSocket::setSocketFactory)), "java.io.IOException", nullptr, _ServerSocket_MethodAnnotations_setSocketFactory34},
	{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ServerSocket_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.ServerSocket",
	"java.lang.Object",
	"java.io.Closeable",
	_ServerSocket_FieldInfo_,
	_ServerSocket_MethodInfo_
};

$Object* allocate$ServerSocket($Class* clazz) {
	return $of($alloc(ServerSocket));
}

bool ServerSocket::$assertionsDisabled = false;

$volatile($SocketImplFactory*) ServerSocket::factory = nullptr;

void ServerSocket::init$($SocketImpl* impl) {
	this->created = false;
	this->bound = false;
	this->closed = false;
	$set(this, closeLock, $new($Object));
	$Objects::requireNonNull(impl);
	checkPermission();
	$set(this, impl, impl);
}

$Void* ServerSocket::checkPermission() {
	$init(ServerSocket);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$init($SecurityConstants);
		sm->checkPermission($SecurityConstants::SET_SOCKETIMPL_PERMISSION);
	}
	return nullptr;
}

void ServerSocket::init$() {
	this->created = false;
	this->bound = false;
	this->closed = false;
	$set(this, closeLock, $new($Object));
	setImpl();
}

void ServerSocket::init$(int32_t port) {
	ServerSocket::init$(port, 50, nullptr);
}

void ServerSocket::init$(int32_t port, int32_t backlog) {
	ServerSocket::init$(port, backlog, nullptr);
}

void ServerSocket::init$(int32_t port, int32_t backlog, $InetAddress* bindAddr) {
	this->created = false;
	this->bound = false;
	this->closed = false;
	$set(this, closeLock, $new($Object));
	setImpl();
	if (port < 0 || port > 0x0000FFFF) {
		$throwNew($IllegalArgumentException, $$str({"Port value out of range: "_s, $$str(port)}));
	}
	if (backlog < 1) {
		backlog = 50;
	}
	try {
		bind($$new($InetSocketAddress, bindAddr, port), backlog);
	} catch ($SecurityException&) {
		$var($SecurityException, e, $catch());
		close();
		$throw(e);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		close();
		$throw(e);
	}
}

$SocketImpl* ServerSocket::getImpl() {
	if (!this->created) {
		createImpl();
	}
	return this->impl;
}

void ServerSocket::setImpl() {
	$var($SocketImplFactory, factory, ServerSocket::factory);
	if (factory != nullptr) {
		$set(this, impl, factory->createSocketImpl());
	} else {
		$set(this, impl, $SocketImpl::createPlatformSocketImpl(true));
	}
}

void ServerSocket::createImpl() {
	if (this->impl == nullptr) {
		setImpl();
	}
	try {
		$nc(this->impl)->create(true);
		this->created = true;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($SocketException, $(e->getMessage()));
	}
}

void ServerSocket::bind($SocketAddress* endpoint) {
	bind(endpoint, 50);
}

void ServerSocket::bind($SocketAddress* endpoint$renamed, int32_t backlog) {
	$var($SocketAddress, endpoint, endpoint$renamed);
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	if (isBound()) {
		$throwNew($SocketException, "Already bound"_s);
	}
	if (endpoint == nullptr) {
		$assign(endpoint, $new($InetSocketAddress, 0));
	}
	$var($InetSocketAddress, epoint, nullptr);
	bool var$0 = $instanceOf($InetSocketAddress, endpoint);
	if (var$0) {
		$assign(epoint, $cast($InetSocketAddress, endpoint));
		var$0 = true;
	}
	if (!(var$0)) {
		$throwNew($IllegalArgumentException, "Unsupported address type"_s);
	}
	if ($nc(epoint)->isUnresolved()) {
		$throwNew($SocketException, "Unresolved address"_s);
	}
	if (backlog < 1) {
		backlog = 50;
	}
	try {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkListen($nc(epoint)->getPort());
		}
		$var($InetAddress, var$1, $nc(epoint)->getAddress());
		$nc($(getImpl()))->bind(var$1, epoint->getPort());
		$nc($(getImpl()))->listen(backlog);
		this->bound = true;
	} catch ($SecurityException&) {
		$var($SecurityException, e, $catch());
		this->bound = false;
		$throw(e);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		this->bound = false;
		$throw(e);
	}
}

$InetAddress* ServerSocket::getInetAddress() {
	if (!isBound()) {
		return nullptr;
	}
	try {
		$var($InetAddress, in, $nc($(getImpl()))->getInetAddress());
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			sm->checkConnect($($nc(in)->getHostAddress()), -1);
		}
		return in;
	} catch ($SecurityException&) {
		$var($SecurityException, e, $catch());
		return $InetAddress::getLoopbackAddress();
	} catch ($SocketException&) {
		$catch();
	}
	return nullptr;
}

int32_t ServerSocket::getLocalPort() {
	if (!isBound()) {
		return -1;
	}
	try {
		return $nc($(getImpl()))->getLocalPort();
	} catch ($SocketException&) {
		$catch();
	}
	return -1;
}

$SocketAddress* ServerSocket::getLocalSocketAddress() {
	if (!isBound()) {
		return nullptr;
	}
	$var($InetAddress, var$0, getInetAddress());
	return $new($InetSocketAddress, var$0, getLocalPort());
}

$Socket* ServerSocket::accept() {
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	if (!isBound()) {
		$throwNew($SocketException, "Socket is not bound yet"_s);
	}
	$var($Socket, s, $new($Socket, ($SocketImpl*)nullptr));
	implAccept(s);
	return s;
}

void ServerSocket::implAccept($Socket* s) {
	$var($SocketImpl, si, $nc(s)->impl);
	if (si == nullptr) {
		$assign(si, implAccept());
		s->setImpl(si);
		s->postAccept();
		return;
	}
	if ($instanceOf($DelegatingSocketImpl, si)) {
		$assign(si, $nc(($cast($DelegatingSocketImpl, si)))->delegate());
		if (!ServerSocket::$assertionsDisabled && !$instanceOf($PlatformSocketImpl, si)) {
			$throwNew($AssertionError);
		}
	}
	ensureCompatible(si);
	if ($instanceOf($PlatformSocketImpl, this->impl)) {
		$var($SocketImpl, psi, platformImplAccept());
		$nc(si)->copyOptionsTo(psi);
		s->setImpl(psi);
		si->closeQuietly();
	} else {
		$set(s, impl, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			try {
				customImplAccept(si);
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$set(s, impl, si);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	s->postAccept();
}

$SocketImpl* ServerSocket::implAccept() {
	if ($instanceOf($PlatformSocketImpl, this->impl)) {
		return platformImplAccept();
	} else {
		$var($SocketImplFactory, factory, $Socket::socketImplFactory());
		if (factory == nullptr) {
			$throwNew($IOException, $$str({"An instance of "_s, $nc($of(this->impl))->getClass(), " cannot accept connection with \'null\' SocketImpl: client socket implementation factory not set"_s}));
		}
		$var($SocketImpl, si, $nc(factory)->createSocketImpl());
		customImplAccept(si);
		return si;
	}
}

$SocketImpl* ServerSocket::platformImplAccept() {
	if (!ServerSocket::$assertionsDisabled && !$instanceOf($PlatformSocketImpl, this->impl)) {
		$throwNew($AssertionError);
	}
	$var($SocketImpl, psi, $SocketImpl::createPlatformSocketImpl(false));
	implAccept(psi);
	return psi;
}

void ServerSocket::customImplAccept($SocketImpl* si) {
	if (!ServerSocket::$assertionsDisabled && !(!($instanceOf($PlatformSocketImpl, this->impl)) && !($instanceOf($PlatformSocketImpl, si)))) {
		$throwNew($AssertionError);
	}
	$nc(si)->reset();
	try {
		$set(si, fd, $new($FileDescriptor));
		$set(si, address, $new($InetAddress));
		implAccept(si);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		si->reset();
		$throw(e);
	}
}

void ServerSocket::implAccept($SocketImpl* si) {
	if (!ServerSocket::$assertionsDisabled && ! !($instanceOf($DelegatingSocketImpl, si))) {
		$throwNew($AssertionError);
	}
	$nc(this->impl)->accept(si);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		try {
			$var($String, var$0, $nc($($nc(si)->getInetAddress()))->getHostAddress());
			sm->checkAccept(var$0, si->getPort());
		} catch ($SecurityException&) {
			$var($SecurityException, se, $catch());
			$nc(si)->close();
			$throw(se);
		}
	}
}

void ServerSocket::ensureCompatible($SocketImpl* si) {
	if (($instanceOf($PlatformSocketImpl, this->impl)) != ($instanceOf($PlatformSocketImpl, si))) {
		$var($String, var$0, $$str({"An instance of "_s, $nc($of(this->impl))->getClass(), " cannot accept a connection with an instance of "_s}));
		$throwNew($IOException, $$concat(var$0, $($nc($of(si))->getClass())));
	}
}

void ServerSocket::close() {
	$synchronized(this->closeLock) {
		if (isClosed()) {
			return;
		}
		if (this->created) {
			$nc(this->impl)->close();
		}
		this->closed = true;
	}
}

$ServerSocketChannel* ServerSocket::getChannel() {
	return nullptr;
}

bool ServerSocket::isBound() {
	return this->bound;
}

bool ServerSocket::isClosed() {
	$synchronized(this->closeLock) {
		return this->closed;
	}
}

void ServerSocket::setSoTimeout(int32_t timeout) {
	$synchronized(this) {
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		if (timeout < 0) {
			$throwNew($IllegalArgumentException, "timeout < 0"_s);
		}
		$nc($(getImpl()))->setOption($SocketOptions::SO_TIMEOUT, $($Integer::valueOf(timeout)));
	}
}

int32_t ServerSocket::getSoTimeout() {
	$synchronized(this) {
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		$var($Object, o, $nc($(getImpl()))->getOption($SocketOptions::SO_TIMEOUT));
		if ($instanceOf($Integer, o)) {
			return $nc(($cast($Integer, o)))->intValue();
		} else {
			return 0;
		}
	}
}

void ServerSocket::setReuseAddress(bool on) {
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	$nc($(getImpl()))->setOption($SocketOptions::SO_REUSEADDR, $($Boolean::valueOf(on)));
}

bool ServerSocket::getReuseAddress() {
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	return $nc((($cast($Boolean, $($nc($(getImpl()))->getOption($SocketOptions::SO_REUSEADDR))))))->booleanValue();
}

$String* ServerSocket::toString() {
	if (!isBound()) {
		return "ServerSocket[unbound]"_s;
	}
	$var($InetAddress, in, nullptr);
	if ($System::getSecurityManager() != nullptr) {
		$assign(in, getInetAddress());
	} else {
		$assign(in, $nc(this->impl)->getInetAddress());
	}
	$var($String, var$1, $$str({"ServerSocket[addr="_s, in, ",localport="_s}));
	$var($String, var$0, $$concat(var$1, $$str($nc(this->impl)->getLocalPort())));
	return $concat(var$0, "]");
}

void ServerSocket::setSocketFactory($SocketImplFactory* fac) {
	$load(ServerSocket);
	$synchronized(class$) {
		$init(ServerSocket);
		if (ServerSocket::factory != nullptr) {
			$throwNew($SocketException, "factory already defined"_s);
		}
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkSetFactory();
		}
		$assignStatic(ServerSocket::factory, fac);
	}
}

void ServerSocket::setReceiveBufferSize(int32_t size) {
	$synchronized(this) {
		if (!(size > 0)) {
			$throwNew($IllegalArgumentException, "negative receive size"_s);
		}
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		$nc($(getImpl()))->setOption($SocketOptions::SO_RCVBUF, $($Integer::valueOf(size)));
	}
}

int32_t ServerSocket::getReceiveBufferSize() {
	$synchronized(this) {
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		int32_t result = 0;
		$var($Object, o, $nc($(getImpl()))->getOption($SocketOptions::SO_RCVBUF));
		if ($instanceOf($Integer, o)) {
			result = $nc(($cast($Integer, o)))->intValue();
		}
		return result;
	}
}

void ServerSocket::setPerformancePreferences(int32_t connectionTime, int32_t latency, int32_t bandwidth) {
}

ServerSocket* ServerSocket::setOption($SocketOption* name, Object$* value) {
	$Objects::requireNonNull(name);
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	$nc($(getImpl()))->setOption(name, value);
	return this;
}

$Object* ServerSocket::getOption($SocketOption* name) {
	$Objects::requireNonNull(name);
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	return $of($nc($(getImpl()))->getOption(name));
}

$Set* ServerSocket::supportedOptions() {
	$var($Set, so, this->options);
	if (so != nullptr) {
		return so;
	}
	try {
		$var($SocketImpl, impl, getImpl());
		$set(this, options, $Collections::unmodifiableSet($($nc(impl)->supportedOptions())));
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$set(this, options, $Collections::emptySet());
	}
	return this->options;
}

void clinit$ServerSocket($Class* class$) {
	ServerSocket::$assertionsDisabled = !ServerSocket::class$->desiredAssertionStatus();
}

ServerSocket::ServerSocket() {
}

$Class* ServerSocket::load$($String* name, bool initialize) {
	$loadClass(ServerSocket, name, initialize, &_ServerSocket_ClassInfo_, clinit$ServerSocket, allocate$ServerSocket);
	return class$;
}

$Class* ServerSocket::class$ = nullptr;

	} // net
} // java