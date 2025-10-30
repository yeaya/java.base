#include <java/net/NetMulticastSocket.h>

#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/AbstractPlainDatagramSocketImpl.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/DatagramSocketImpl.h>
#include <java/net/Inet4Address.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/MulticastSocket.h>
#include <java/net/NetMulticastSocket$1.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketException.h>
#include <java/net/SocketOption.h>
#include <java/net/SocketOptions.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef IP_MULTICAST_IF
#undef IP_MULTICAST_IF2
#undef IP_MULTICAST_LOOP
#undef IP_TOS
#undef SO_BINDADDR
#undef SO_BROADCAST
#undef SO_RCVBUF
#undef SO_REUSEADDR
#undef SO_SNDBUF
#undef SO_TIMEOUT
#undef ST_CONNECTED
#undef ST_CONNECTED_NO_IMPL
#undef ST_NOT_CONNECTED

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractPlainDatagramSocketImpl = ::java::net::AbstractPlainDatagramSocketImpl;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $DatagramSocketImpl = ::java::net::DatagramSocketImpl;
using $Inet4Address = ::java::net::Inet4Address;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $MulticastSocket = ::java::net::MulticastSocket;
using $NetMulticastSocket$1 = ::java::net::NetMulticastSocket$1;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketException = ::java::net::SocketException;
using $SocketOption = ::java::net::SocketOption;
using $SocketOptions = ::java::net::SocketOptions;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;

namespace java {
	namespace net {

$CompoundAttribute _NetMulticastSocket_MethodAnnotations_getInterface13[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _NetMulticastSocket_MethodAnnotations_getLoopbackMode17[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _NetMulticastSocket_MethodAnnotations_getTTL26[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _NetMulticastSocket_MethodAnnotations_joinGroup32[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _NetMulticastSocket_MethodAnnotations_leaveGroup34[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _NetMulticastSocket_MethodAnnotations_send38[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _NetMulticastSocket_MethodAnnotations_setInterface40[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _NetMulticastSocket_MethodAnnotations_setLoopbackMode41[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _NetMulticastSocket_MethodAnnotations_setTTL48[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _NetMulticastSocket_FieldInfo_[] = {
	{"bound", "Z", nullptr, $PRIVATE, $field(NetMulticastSocket, bound)},
	{"closed", "Z", nullptr, $PRIVATE, $field(NetMulticastSocket, closed)},
	{"created", "Z", nullptr, $PRIVATE | $VOLATILE, $field(NetMulticastSocket, created)},
	{"closeLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(NetMulticastSocket, closeLock)},
	{"impl", "Ljava/net/DatagramSocketImpl;", nullptr, $PRIVATE | $FINAL, $field(NetMulticastSocket, impl)},
	{"oldImpl", "Z", nullptr, $PRIVATE | $FINAL, $field(NetMulticastSocket, oldImpl)},
	{"explicitFilter", "Z", nullptr, $PRIVATE, $field(NetMulticastSocket, explicitFilter)},
	{"bytesLeftToFilter", "I", nullptr, $PRIVATE, $field(NetMulticastSocket, bytesLeftToFilter)},
	{"ST_NOT_CONNECTED", "I", nullptr, $STATIC | $FINAL, $constField(NetMulticastSocket, ST_NOT_CONNECTED)},
	{"ST_CONNECTED", "I", nullptr, $STATIC | $FINAL, $constField(NetMulticastSocket, ST_CONNECTED)},
	{"ST_CONNECTED_NO_IMPL", "I", nullptr, $STATIC | $FINAL, $constField(NetMulticastSocket, ST_CONNECTED_NO_IMPL)},
	{"connectState", "I", nullptr, 0, $field(NetMulticastSocket, connectState)},
	{"connectedAddress", "Ljava/net/InetAddress;", nullptr, 0, $field(NetMulticastSocket, connectedAddress)},
	{"connectedPort", "I", nullptr, 0, $field(NetMulticastSocket, connectedPort)},
	{"options", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $VOLATILE, $field(NetMulticastSocket, options)},
	{"optionsLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(NetMulticastSocket, optionsLock)},
	{"interfaceSet", "Z", nullptr, $PRIVATE, $field(NetMulticastSocket, interfaceSet)},
	{"ttlLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(NetMulticastSocket, ttlLock)},
	{"infLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(NetMulticastSocket, infLock)},
	{"infAddress", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(NetMulticastSocket, infAddress)},
	{}
};

$MethodInfo _NetMulticastSocket_MethodInfo_[] = {
	{"<init>", "(Ljava/net/DatagramSocketImpl;)V", nullptr, 0, $method(static_cast<void(NetMulticastSocket::*)($DatagramSocketImpl*)>(&NetMulticastSocket::init$))},
	{"bind", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"checkAddress", "(Ljava/net/InetAddress;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($InetAddress*,$String*)>(&NetMulticastSocket::checkAddress))},
	{"checkFiltering", "(Ljava/net/DatagramPacket;)Z", nullptr, $PRIVATE, $method(static_cast<bool(NetMulticastSocket::*)($DatagramPacket*)>(&NetMulticastSocket::checkFiltering)), "java.net.SocketException"},
	{"checkOldImpl", "(Ljava/net/DatagramSocketImpl;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($DatagramSocketImpl*)>(&NetMulticastSocket::checkOldImpl))},
	{"close", "()V", nullptr, $PUBLIC},
	{"connect", "(Ljava/net/InetAddress;I)V", nullptr, $PUBLIC},
	{"connect", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"connectInternal", "(Ljava/net/InetAddress;I)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(NetMulticastSocket::*)($InetAddress*,int32_t)>(&NetMulticastSocket::connectInternal)), "java.net.SocketException"},
	{"disconnect", "()V", nullptr, $PUBLIC},
	{"getBroadcast", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"getImpl", "()Ljava/net/DatagramSocketImpl;", nullptr, $FINAL, $method(static_cast<$DatagramSocketImpl*(NetMulticastSocket::*)()>(&NetMulticastSocket::getImpl)), "java.net.SocketException"},
	{"getInetAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC},
	{"getInterface", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.net.SocketException", nullptr, _NetMulticastSocket_MethodAnnotations_getInterface13},
	{"getLocalAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC},
	{"getLocalPort", "()I", nullptr, $PUBLIC},
	{"getLocalSocketAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC},
	{"getLoopbackMode", "()Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.net.SocketException", nullptr, _NetMulticastSocket_MethodAnnotations_getLoopbackMode17},
	{"getNetworkInterface", "()Ljava/net/NetworkInterface;", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC, nullptr, "java.io.IOException"},
	{"getPort", "()I", nullptr, $PUBLIC},
	{"getReceiveBufferSize", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"getRemoteSocketAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC},
	{"getReuseAddress", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"getSendBufferSize", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"getSoTimeout", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"getTTL", "()B", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _NetMulticastSocket_MethodAnnotations_getTTL26},
	{"getTimeToLive", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getTrafficClass", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"isBound", "()Z", nullptr, $PUBLIC},
	{"isClosed", "()Z", nullptr, $PUBLIC},
	{"isConnected", "()Z", nullptr, $PUBLIC},
	{"joinGroup", "(Ljava/net/InetAddress;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _NetMulticastSocket_MethodAnnotations_joinGroup32},
	{"joinGroup", "(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"leaveGroup", "(Ljava/net/InetAddress;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _NetMulticastSocket_MethodAnnotations_leaveGroup34},
	{"leaveGroup", "(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"receive", "(Ljava/net/DatagramPacket;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"send", "(Ljava/net/DatagramPacket;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"send", "(Ljava/net/DatagramPacket;B)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _NetMulticastSocket_MethodAnnotations_send38},
	{"setBroadcast", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"setInterface", "(Ljava/net/InetAddress;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.net.SocketException", nullptr, _NetMulticastSocket_MethodAnnotations_setInterface40},
	{"setLoopbackMode", "(Z)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.net.SocketException", nullptr, _NetMulticastSocket_MethodAnnotations_setLoopbackMode41},
	{"setNetworkInterface", "(Ljava/net/NetworkInterface;)V", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/DatagramSocket;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)Ljava/net/DatagramSocket;", $PUBLIC, nullptr, "java.io.IOException"},
	{"setReceiveBufferSize", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"setReuseAddress", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"setSendBufferSize", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"setSoTimeout", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"setTTL", "(B)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _NetMulticastSocket_MethodAnnotations_setTTL48},
	{"setTimeToLive", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setTrafficClass", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC},
	{}
};

$InnerClassInfo _NetMulticastSocket_InnerClassesInfo_[] = {
	{"java.net.NetMulticastSocket$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NetMulticastSocket_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.net.NetMulticastSocket",
	"java.net.MulticastSocket",
	nullptr,
	_NetMulticastSocket_FieldInfo_,
	_NetMulticastSocket_MethodInfo_,
	nullptr,
	nullptr,
	_NetMulticastSocket_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.NetMulticastSocket$1"
};

$Object* allocate$NetMulticastSocket($Class* clazz) {
	return $of($alloc(NetMulticastSocket));
}

void NetMulticastSocket::init$($DatagramSocketImpl* impl) {
	$MulticastSocket::init$(($MulticastSocket*)nullptr);
	this->bound = false;
	this->closed = false;
	$set(this, closeLock, $new($Object));
	this->explicitFilter = false;
	this->connectState = NetMulticastSocket::ST_NOT_CONNECTED;
	$set(this, connectedAddress, nullptr);
	this->connectedPort = -1;
	$set(this, optionsLock, $new($Object));
	$set(this, ttlLock, $new($Object));
	$set(this, infLock, $new($Object));
	$set(this, infAddress, nullptr);
	$set(this, impl, $cast($DatagramSocketImpl, $Objects::requireNonNull(impl)));
	this->oldImpl = checkOldImpl(impl);
}

void NetMulticastSocket::connectInternal($InetAddress* address, int32_t port) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (port < 0 || port > 0x0000FFFF) {
			$throwNew($IllegalArgumentException, $$str({"connect: "_s, $$str(port)}));
		}
		if (address == nullptr) {
			$throwNew($IllegalArgumentException, "connect: null address"_s);
		}
		checkAddress(address, "connect"_s);
		if (isClosed()) {
			return;
		}
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			if ($nc(address)->isMulticastAddress()) {
				security->checkMulticast(address);
			} else {
				security->checkConnect($(address->getHostAddress()), port);
				security->checkAccept($(address->getHostAddress()), port);
			}
		}
		if (port == 0) {
			$throwNew($SocketException, "Can\'t connect to port 0"_s);
		}
		if (!isBound()) {
			bind($$new($InetSocketAddress, 0));
		}
		if (this->oldImpl || ($instanceOf($AbstractPlainDatagramSocketImpl, this->impl) && $nc(($cast($AbstractPlainDatagramSocketImpl, this->impl)))->nativeConnectDisabled())) {
			this->connectState = NetMulticastSocket::ST_CONNECTED_NO_IMPL;
		} else {
			try {
				$nc($(getImpl()))->connect(address, port);
				this->connectState = NetMulticastSocket::ST_CONNECTED;
				int32_t avail = $nc($(getImpl()))->dataAvailable();
				if (avail == -1) {
					$throwNew($SocketException);
				}
				this->explicitFilter = avail > 0;
				if (this->explicitFilter) {
					this->bytesLeftToFilter = getReceiveBufferSize();
				}
			} catch ($SocketException& se) {
				this->connectState = NetMulticastSocket::ST_CONNECTED_NO_IMPL;
			}
		}
		$set(this, connectedAddress, address);
		this->connectedPort = port;
	}
}

bool NetMulticastSocket::checkOldImpl($DatagramSocketImpl* impl) {
	$init(NetMulticastSocket);
	$beforeCallerSensitive();
	try {
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($NetMulticastSocket$1, impl)));
		return false;
	} catch ($PrivilegedActionException& e) {
		return true;
	}
	$shouldNotReachHere();
}

$DatagramSocketImpl* NetMulticastSocket::getImpl() {
	if (!this->created) {
		$synchronized(this) {
			if (!this->created) {
				$nc(this->impl)->create();
				this->created = true;
			}
		}
	}
	return this->impl;
}

void NetMulticastSocket::bind($SocketAddress* addr$renamed) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($SocketAddress, addr, addr$renamed);
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		if (isBound()) {
			$throwNew($SocketException, "already bound"_s);
		}
		if (addr == nullptr) {
			$assign(addr, $new($InetSocketAddress, 0));
		}
		$var($InetSocketAddress, epoint, nullptr);
		bool var$0 = $instanceOf($InetSocketAddress, addr);
		if (var$0) {
			$assign(epoint, $cast($InetSocketAddress, addr));
			var$0 = true;
		}
		if (!(var$0)) {
			$throwNew($IllegalArgumentException, "Unsupported address type!"_s);
		}
		if ($nc(epoint)->isUnresolved()) {
			$throwNew($SocketException, "Unresolved address"_s);
		}
		$var($InetAddress, iaddr, $nc(epoint)->getAddress());
		int32_t port = epoint->getPort();
		checkAddress(iaddr, "bind"_s);
		$var($SecurityManager, sec, $System::getSecurityManager());
		if (sec != nullptr) {
			sec->checkListen(port);
		}
		try {
			$nc($(getImpl()))->bind(port, iaddr);
		} catch ($SocketException& e) {
			$nc($(getImpl()))->close();
			$throw(e);
		}
		this->bound = true;
	}
}

void NetMulticastSocket::checkAddress($InetAddress* addr, $String* op) {
	$init(NetMulticastSocket);
	if (addr == nullptr) {
		return;
	}
	if (!($instanceOf($Inet4Address, addr) || $instanceOf($Inet6Address, addr))) {
		$throwNew($IllegalArgumentException, $$str({op, ": invalid address type"_s}));
	}
}

void NetMulticastSocket::connect($InetAddress* address, int32_t port) {
	try {
		connectInternal(address, port);
	} catch ($SocketException& se) {
		$throwNew($UncheckedIOException, "connect failed"_s, se);
	}
}

void NetMulticastSocket::connect($SocketAddress* addr) {
	$useLocalCurrentObjectStackCache();
	if (addr == nullptr) {
		$throwNew($IllegalArgumentException, "Address can\'t be null"_s);
	}
	$var($InetSocketAddress, epoint, nullptr);
	bool var$0 = $instanceOf($InetSocketAddress, addr);
	if (var$0) {
		$assign(epoint, $cast($InetSocketAddress, addr));
		var$0 = true;
	}
	if (!(var$0)) {
		$throwNew($IllegalArgumentException, "Unsupported address type"_s);
	}
	if ($nc(epoint)->isUnresolved()) {
		$throwNew($SocketException, "Unresolved address"_s);
	}
	$var($InetAddress, var$1, $nc(epoint)->getAddress());
	connectInternal(var$1, epoint->getPort());
}

void NetMulticastSocket::disconnect() {
	$synchronized(this) {
		if (isClosed()) {
			return;
		}
		if (this->connectState == NetMulticastSocket::ST_CONNECTED) {
			$nc(this->impl)->disconnect();
		}
		$set(this, connectedAddress, nullptr);
		this->connectedPort = -1;
		this->connectState = NetMulticastSocket::ST_NOT_CONNECTED;
		this->explicitFilter = false;
	}
}

bool NetMulticastSocket::isBound() {
	return this->bound;
}

bool NetMulticastSocket::isConnected() {
	return this->connectState != NetMulticastSocket::ST_NOT_CONNECTED;
}

$InetAddress* NetMulticastSocket::getInetAddress() {
	return this->connectedAddress;
}

int32_t NetMulticastSocket::getPort() {
	return this->connectedPort;
}

$SocketAddress* NetMulticastSocket::getRemoteSocketAddress() {
	if (!isConnected()) {
		return nullptr;
	}
	$var($InetAddress, var$0, getInetAddress());
	return $new($InetSocketAddress, var$0, getPort());
}

$SocketAddress* NetMulticastSocket::getLocalSocketAddress() {
	if (isClosed()) {
		return nullptr;
	}
	if (!isBound()) {
		return nullptr;
	}
	$var($InetAddress, var$0, getLocalAddress());
	return $new($InetSocketAddress, var$0, getLocalPort());
}

void NetMulticastSocket::send($DatagramPacket* p) {
	$useLocalCurrentObjectStackCache();
	$synchronized(p) {
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		$var($InetAddress, packetAddress, $nc(p)->getAddress());
		int32_t packetPort = p->getPort();
		checkAddress(packetAddress, "send"_s);
		if (this->connectState == NetMulticastSocket::ST_NOT_CONNECTED) {
			if (packetAddress == nullptr) {
				$throwNew($IllegalArgumentException, "Address not set"_s);
			}
			if (packetPort < 0 || packetPort > 0x0000FFFF) {
				$throwNew($IllegalArgumentException, $$str({"port out of range: "_s, $$str(packetPort)}));
			}
			$var($SecurityManager, security, $System::getSecurityManager());
			if (security != nullptr) {
				if ($nc(packetAddress)->isMulticastAddress()) {
					security->checkMulticast(packetAddress);
				} else {
					security->checkConnect($(packetAddress->getHostAddress()), packetPort);
				}
			}
			if (packetPort == 0) {
				$throwNew($SocketException, "Can\'t send to port 0"_s);
			}
		} else if (packetAddress == nullptr) {
			p->setAddress(this->connectedAddress);
			p->setPort(this->connectedPort);
		} else if ((!$nc(packetAddress)->equals(this->connectedAddress)) || packetPort != this->connectedPort) {
			$throwNew($IllegalArgumentException, "connected address and packet address differ"_s);
		}
		if (!isBound()) {
			bind($$new($InetSocketAddress, 0));
		}
		$nc($(getImpl()))->send(p);
	}
}

void NetMulticastSocket::receive($DatagramPacket* p) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$synchronized(p) {
			if (!isBound()) {
				bind($$new($InetSocketAddress, 0));
			}
			if (this->connectState == NetMulticastSocket::ST_NOT_CONNECTED) {
				$var($SecurityManager, security, $System::getSecurityManager());
				if (security != nullptr) {
					while (true) {
						$var($String, peekAd, nullptr);
						int32_t peekPort = 0;
						if (!this->oldImpl) {
							$var($DatagramPacket, peekPacket, $new($DatagramPacket, $$new($bytes, 1), 1));
							peekPort = $nc($(getImpl()))->peekData(peekPacket);
							$assign(peekAd, $nc($(peekPacket->getAddress()))->getHostAddress());
						} else {
							$var($InetAddress, adr, $new($InetAddress));
							peekPort = $nc($(getImpl()))->peek(adr);
							$assign(peekAd, adr->getHostAddress());
						}
						try {
							security->checkAccept(peekAd, peekPort);
							break;
						} catch ($SecurityException& se) {
							$var($DatagramPacket, tmp, $new($DatagramPacket, $$new($bytes, 1), 1));
							$nc($(getImpl()))->receive(tmp);
							continue;
						}
					}
				}
			}
			$var($DatagramPacket, tmp, nullptr);
			if ((this->connectState == NetMulticastSocket::ST_CONNECTED_NO_IMPL) || this->explicitFilter) {
				bool stop = false;
				while (!stop) {
					$var($InetAddress, peekAddress, nullptr);
					int32_t peekPort = -1;
					if (!this->oldImpl) {
						$var($DatagramPacket, peekPacket, $new($DatagramPacket, $$new($bytes, 1), 1));
						peekPort = $nc($(getImpl()))->peekData(peekPacket);
						$assign(peekAddress, peekPacket->getAddress());
					} else {
						$assign(peekAddress, $new($InetAddress));
						peekPort = $nc($(getImpl()))->peek(peekAddress);
					}
					if ((!$nc(this->connectedAddress)->equals(peekAddress)) || (this->connectedPort != peekPort)) {
						$assign(tmp, $new($DatagramPacket, $$new($bytes, 1024), 1024));
						$nc($(getImpl()))->receive(tmp);
						if (this->explicitFilter) {
							if (checkFiltering(tmp)) {
								stop = true;
							}
						}
					} else {
						stop = true;
					}
				}
			}
			$nc($(getImpl()))->receive(p);
			if (this->explicitFilter && tmp == nullptr) {
				checkFiltering(p);
			}
		}
	}
}

bool NetMulticastSocket::checkFiltering($DatagramPacket* p) {
	this->bytesLeftToFilter -= $nc(p)->getLength();
	if (this->bytesLeftToFilter <= 0 || $nc($(getImpl()))->dataAvailable() <= 0) {
		this->explicitFilter = false;
		return true;
	}
	return false;
}

$InetAddress* NetMulticastSocket::getLocalAddress() {
	$useLocalCurrentObjectStackCache();
	if (isClosed()) {
		return nullptr;
	}
	$var($InetAddress, in, nullptr);
	try {
		$assign(in, $cast($InetAddress, $nc($(getImpl()))->getOption($SocketOptions::SO_BINDADDR)));
		if ($nc(in)->isAnyLocalAddress()) {
			$assign(in, $InetAddress::anyLocalAddress());
		}
		$var($SecurityManager, s, $System::getSecurityManager());
		if (s != nullptr) {
			s->checkConnect($($nc(in)->getHostAddress()), -1);
		}
	} catch ($Exception& e) {
		$assign(in, $InetAddress::anyLocalAddress());
	}
	return in;
}

int32_t NetMulticastSocket::getLocalPort() {
	if (isClosed()) {
		return -1;
	}
	try {
		return $nc($(getImpl()))->getLocalPort();
	} catch ($Exception& e) {
		return 0;
	}
	$shouldNotReachHere();
}

void NetMulticastSocket::setSoTimeout(int32_t timeout) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		if (timeout < 0) {
			$throwNew($IllegalArgumentException, "timeout < 0"_s);
		}
		$nc($(getImpl()))->setOption($SocketOptions::SO_TIMEOUT, $($Integer::valueOf(timeout)));
	}
}

int32_t NetMulticastSocket::getSoTimeout() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		if (getImpl() == nullptr) {
			return 0;
		}
		$var($Object, o, $nc($(getImpl()))->getOption($SocketOptions::SO_TIMEOUT));
		if ($instanceOf($Integer, o)) {
			return $nc(($cast($Integer, o)))->intValue();
		} else {
			return 0;
		}
	}
}

void NetMulticastSocket::setSendBufferSize(int32_t size) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (!(size > 0)) {
			$throwNew($IllegalArgumentException, "negative send size"_s);
		}
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		$nc($(getImpl()))->setOption($SocketOptions::SO_SNDBUF, $($Integer::valueOf(size)));
	}
}

int32_t NetMulticastSocket::getSendBufferSize() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		int32_t result = 0;
		$var($Object, o, $nc($(getImpl()))->getOption($SocketOptions::SO_SNDBUF));
		if ($instanceOf($Integer, o)) {
			result = $nc(($cast($Integer, o)))->intValue();
		}
		return result;
	}
}

void NetMulticastSocket::setReceiveBufferSize(int32_t size) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (size <= 0) {
			$throwNew($IllegalArgumentException, "invalid receive size"_s);
		}
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		$nc($(getImpl()))->setOption($SocketOptions::SO_RCVBUF, $($Integer::valueOf(size)));
	}
}

int32_t NetMulticastSocket::getReceiveBufferSize() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
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

void NetMulticastSocket::setReuseAddress(bool on) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		if (this->oldImpl) {
			$nc($(getImpl()))->setOption($SocketOptions::SO_REUSEADDR, $($Integer::valueOf(on ? -1 : 0)));
		} else {
			$nc($(getImpl()))->setOption($SocketOptions::SO_REUSEADDR, $($Boolean::valueOf(on)));
		}
	}
}

bool NetMulticastSocket::getReuseAddress() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		$var($Object, o, $nc($(getImpl()))->getOption($SocketOptions::SO_REUSEADDR));
		return $nc(($cast($Boolean, o)))->booleanValue();
	}
}

void NetMulticastSocket::setBroadcast(bool on) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		$nc($(getImpl()))->setOption($SocketOptions::SO_BROADCAST, $($Boolean::valueOf(on)));
	}
}

bool NetMulticastSocket::getBroadcast() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		return $nc((($cast($Boolean, $($nc($(getImpl()))->getOption($SocketOptions::SO_BROADCAST))))))->booleanValue();
	}
}

void NetMulticastSocket::setTrafficClass(int32_t tc) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (tc < 0 || tc > 255) {
			$throwNew($IllegalArgumentException, "tc is not in range 0 -- 255"_s);
		}
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		try {
			$nc($(getImpl()))->setOption($SocketOptions::IP_TOS, $($Integer::valueOf(tc)));
		} catch ($SocketException& se) {
			if (!isConnected()) {
				$throw(se);
			}
		}
	}
}

int32_t NetMulticastSocket::getTrafficClass() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (isClosed()) {
			$throwNew($SocketException, "Socket is closed"_s);
		}
		return $nc((($cast($Integer, $($nc($(getImpl()))->getOption($SocketOptions::IP_TOS))))))->intValue();
	}
}

void NetMulticastSocket::close() {
	$synchronized(this->closeLock) {
		if (isClosed()) {
			return;
		}
		$nc(this->impl)->close();
		this->closed = true;
	}
}

bool NetMulticastSocket::isClosed() {
	$synchronized(this->closeLock) {
		return this->closed;
	}
}

$DatagramSocket* NetMulticastSocket::setOption($SocketOption* name, Object$* value) {
	$Objects::requireNonNull(name);
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	$nc($(getImpl()))->setOption(name, value);
	return this;
}

$Object* NetMulticastSocket::getOption($SocketOption* name) {
	$Objects::requireNonNull(name);
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	return $of($nc($(getImpl()))->getOption(name));
}

$Set* NetMulticastSocket::supportedOptions() {
	$useLocalCurrentObjectStackCache();
	$var($Set, options, this->options);
	if (options != nullptr) {
		return options;
	}
	$synchronized(this->optionsLock) {
		$assign(options, this->options);
		if (options != nullptr) {
			return options;
		}
		try {
			$var($DatagramSocketImpl, impl, getImpl());
			$assign(options, $Collections::unmodifiableSet($($nc(impl)->supportedOptions())));
		} catch ($IOException& e) {
			$assign(options, $Collections::emptySet());
		}
		return $set(this, options, options);
	}
}

void NetMulticastSocket::setTTL(int8_t ttl) {
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	$nc($(getImpl()))->setTTL(ttl);
}

void NetMulticastSocket::setTimeToLive(int32_t ttl) {
	if (ttl < 0 || ttl > 255) {
		$throwNew($IllegalArgumentException, "ttl out of range"_s);
	}
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	$nc($(getImpl()))->setTimeToLive(ttl);
}

int8_t NetMulticastSocket::getTTL() {
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	return $nc($(getImpl()))->getTTL();
}

int32_t NetMulticastSocket::getTimeToLive() {
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	return $nc($(getImpl()))->getTimeToLive();
}

void NetMulticastSocket::joinGroup($InetAddress* mcastaddr) {
	$useLocalCurrentObjectStackCache();
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	checkAddress(mcastaddr, "joinGroup"_s);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkMulticast(mcastaddr);
	}
	if (!$nc(mcastaddr)->isMulticastAddress()) {
		$throwNew($SocketException, "Not a multicast address"_s);
	}
	$var($NetworkInterface, defaultInterface, $NetworkInterface::getDefault());
	if (!this->interfaceSet && defaultInterface != nullptr) {
		setNetworkInterface(defaultInterface);
	}
	$nc($(getImpl()))->join(mcastaddr);
}

void NetMulticastSocket::leaveGroup($InetAddress* mcastaddr) {
	$useLocalCurrentObjectStackCache();
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	checkAddress(mcastaddr, "leaveGroup"_s);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkMulticast(mcastaddr);
	}
	if (!$nc(mcastaddr)->isMulticastAddress()) {
		$throwNew($SocketException, "Not a multicast address"_s);
	}
	$nc($(getImpl()))->leave(mcastaddr);
}

void NetMulticastSocket::joinGroup($SocketAddress* mcastaddr, $NetworkInterface* netIf) {
	$useLocalCurrentObjectStackCache();
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	$var($InetSocketAddress, addr, nullptr);
	bool var$0 = $instanceOf($InetSocketAddress, mcastaddr);
	if (var$0) {
		$assign(addr, $cast($InetSocketAddress, mcastaddr));
		var$0 = true;
	}
	if (!(var$0)) {
		$throwNew($IllegalArgumentException, "Unsupported address type"_s);
	}
	if (this->oldImpl) {
		$throwNew($UnsupportedOperationException);
	}
	checkAddress($($nc(addr)->getAddress()), "joinGroup"_s);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkMulticast($($nc(addr)->getAddress()));
	}
	if (!$nc($($nc(addr)->getAddress()))->isMulticastAddress()) {
		$throwNew($SocketException, "Not a multicast address"_s);
	}
	$nc($(getImpl()))->joinGroup(mcastaddr, netIf);
}

void NetMulticastSocket::leaveGroup($SocketAddress* mcastaddr, $NetworkInterface* netIf) {
	$useLocalCurrentObjectStackCache();
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	$var($InetSocketAddress, addr, nullptr);
	bool var$0 = $instanceOf($InetSocketAddress, mcastaddr);
	if (var$0) {
		$assign(addr, $cast($InetSocketAddress, mcastaddr));
		var$0 = true;
	}
	if (!(var$0)) {
		$throwNew($IllegalArgumentException, "Unsupported address type"_s);
	}
	if (this->oldImpl) {
		$throwNew($UnsupportedOperationException);
	}
	checkAddress($($nc(addr)->getAddress()), "leaveGroup"_s);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkMulticast($($nc(addr)->getAddress()));
	}
	if (!$nc($($nc(addr)->getAddress()))->isMulticastAddress()) {
		$throwNew($SocketException, "Not a multicast address"_s);
	}
	$nc($(getImpl()))->leaveGroup(mcastaddr, netIf);
}

void NetMulticastSocket::setInterface($InetAddress* inf) {
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	checkAddress(inf, "setInterface"_s);
	$synchronized(this->infLock) {
		$nc($(getImpl()))->setOption($SocketOptions::IP_MULTICAST_IF, inf);
		$set(this, infAddress, inf);
		this->interfaceSet = true;
	}
}

$InetAddress* NetMulticastSocket::getInterface() {
	$useLocalCurrentObjectStackCache();
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	$synchronized(this->infLock) {
		$var($InetAddress, ia, $cast($InetAddress, $nc($(getImpl()))->getOption($SocketOptions::IP_MULTICAST_IF)));
		if (this->infAddress == nullptr) {
			return ia;
		}
		if ($nc(ia)->equals(this->infAddress)) {
			return ia;
		}
		try {
			$var($NetworkInterface, ni, $NetworkInterface::getByInetAddress(ia));
			$var($Enumeration, addrs, $nc(ni)->getInetAddresses());
			while ($nc(addrs)->hasMoreElements()) {
				$var($InetAddress, addr, $cast($InetAddress, addrs->nextElement()));
				if ($nc(addr)->equals(this->infAddress)) {
					return this->infAddress;
				}
			}
			$set(this, infAddress, nullptr);
			return ia;
		} catch ($Exception& e) {
			return ia;
		}
	}
	$shouldNotReachHere();
}

void NetMulticastSocket::setNetworkInterface($NetworkInterface* netIf) {
	$synchronized(this->infLock) {
		$nc($(getImpl()))->setOption($SocketOptions::IP_MULTICAST_IF2, netIf);
		$set(this, infAddress, nullptr);
		this->interfaceSet = true;
	}
}

$NetworkInterface* NetMulticastSocket::getNetworkInterface() {
	$useLocalCurrentObjectStackCache();
	$var($NetworkInterface, ni, $cast($NetworkInterface, $nc($(getImpl()))->getOption($SocketOptions::IP_MULTICAST_IF2)));
	if (ni == nullptr) {
		$var($InetAddressArray, addrs, $new($InetAddressArray, 1));
		addrs->set(0, $($InetAddress::anyLocalAddress()));
		return $new($NetworkInterface, $($nc(addrs->get(0))->getHostName()), 0, addrs);
	} else {
		return ni;
	}
}

void NetMulticastSocket::setLoopbackMode(bool disable) {
	$useLocalCurrentObjectStackCache();
	$nc($(getImpl()))->setOption($SocketOptions::IP_MULTICAST_LOOP, $($Boolean::valueOf(disable)));
}

bool NetMulticastSocket::getLoopbackMode() {
	$useLocalCurrentObjectStackCache();
	return $nc(($cast($Boolean, $($nc($(getImpl()))->getOption($SocketOptions::IP_MULTICAST_LOOP)))))->booleanValue();
}

void NetMulticastSocket::send($DatagramPacket* p, int8_t ttl) {
	$useLocalCurrentObjectStackCache();
	if (isClosed()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	$synchronized(this->ttlLock) {
		$synchronized(p) {
			$var($InetAddress, packetAddress, $nc(p)->getAddress());
			checkAddress(packetAddress, "send"_s);
			if (this->connectState == NetMulticastSocket::ST_NOT_CONNECTED) {
				if (packetAddress == nullptr) {
					$throwNew($IllegalArgumentException, "Address not set"_s);
				}
				$var($SecurityManager, security, $System::getSecurityManager());
				if (security != nullptr) {
					if ($nc(packetAddress)->isMulticastAddress()) {
						security->checkMulticast(packetAddress, ttl);
					} else {
						$var($String, var$0, packetAddress->getHostAddress());
						security->checkConnect(var$0, p->getPort());
					}
				}
			} else if (packetAddress == nullptr) {
				p->setAddress(this->connectedAddress);
				p->setPort(this->connectedPort);
			} else {
				bool var$2 = (!$nc(packetAddress)->equals(this->connectedAddress));
				if (var$2 || p->getPort() != this->connectedPort) {
					$throwNew($IllegalArgumentException, "connected address and packet address differ"_s);
				}
			}
			int8_t dttl = getTTL();
			{
				$var($Throwable, var$3, nullptr);
				try {
					if (ttl != dttl) {
						$nc($(getImpl()))->setTTL(ttl);
					}
					if (p->getPort() == 0) {
						$throwNew($SocketException, "Can\'t send to port 0"_s);
					}
					$nc($(getImpl()))->send(p);
				} catch ($Throwable& var$4) {
					$assign(var$3, var$4);
				} /*finally*/ {
					if (ttl != dttl) {
						$nc($(getImpl()))->setTTL(dttl);
					}
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
			}
		}
	}
}

NetMulticastSocket::NetMulticastSocket() {
}

$Class* NetMulticastSocket::load$($String* name, bool initialize) {
	$loadClass(NetMulticastSocket, name, initialize, &_NetMulticastSocket_ClassInfo_, allocate$NetMulticastSocket);
	return class$;
}

$Class* NetMulticastSocket::class$ = nullptr;

	} // net
} // java