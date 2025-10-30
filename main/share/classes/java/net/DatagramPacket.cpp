#include <java/net/DatagramPacket.h>

#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <jdk/internal/loader/BootLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $BootLoader = ::jdk::internal::loader::BootLoader;

namespace java {
	namespace net {

$FieldInfo _DatagramPacket_FieldInfo_[] = {
	{"buf", "[B", nullptr, 0, $field(DatagramPacket, buf)},
	{"offset", "I", nullptr, 0, $field(DatagramPacket, offset)},
	{"length", "I", nullptr, 0, $field(DatagramPacket, length)},
	{"bufLength", "I", nullptr, 0, $field(DatagramPacket, bufLength)},
	{"address", "Ljava/net/InetAddress;", nullptr, 0, $field(DatagramPacket, address)},
	{"port", "I", nullptr, 0, $field(DatagramPacket, port)},
	{}
};

$MethodInfo _DatagramPacket_MethodInfo_[] = {
	{"<init>", "([BII)V", nullptr, $PUBLIC, $method(static_cast<void(DatagramPacket::*)($bytes*,int32_t,int32_t)>(&DatagramPacket::init$))},
	{"<init>", "([BI)V", nullptr, $PUBLIC, $method(static_cast<void(DatagramPacket::*)($bytes*,int32_t)>(&DatagramPacket::init$))},
	{"<init>", "([BIILjava/net/InetAddress;I)V", nullptr, $PUBLIC, $method(static_cast<void(DatagramPacket::*)($bytes*,int32_t,int32_t,$InetAddress*,int32_t)>(&DatagramPacket::init$))},
	{"<init>", "([BIILjava/net/SocketAddress;)V", nullptr, $PUBLIC, $method(static_cast<void(DatagramPacket::*)($bytes*,int32_t,int32_t,$SocketAddress*)>(&DatagramPacket::init$))},
	{"<init>", "([BILjava/net/InetAddress;I)V", nullptr, $PUBLIC, $method(static_cast<void(DatagramPacket::*)($bytes*,int32_t,$InetAddress*,int32_t)>(&DatagramPacket::init$))},
	{"<init>", "([BILjava/net/SocketAddress;)V", nullptr, $PUBLIC, $method(static_cast<void(DatagramPacket::*)($bytes*,int32_t,$SocketAddress*)>(&DatagramPacket::init$))},
	{"getAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<$InetAddress*(DatagramPacket::*)()>(&DatagramPacket::getAddress))},
	{"getData", "()[B", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<$bytes*(DatagramPacket::*)()>(&DatagramPacket::getData))},
	{"getLength", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<int32_t(DatagramPacket::*)()>(&DatagramPacket::getLength))},
	{"getOffset", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<int32_t(DatagramPacket::*)()>(&DatagramPacket::getOffset))},
	{"getPort", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<int32_t(DatagramPacket::*)()>(&DatagramPacket::getPort))},
	{"getSocketAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<$SocketAddress*(DatagramPacket::*)()>(&DatagramPacket::getSocketAddress))},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&DatagramPacket::init))},
	{"setAddress", "(Ljava/net/InetAddress;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(DatagramPacket::*)($InetAddress*)>(&DatagramPacket::setAddress))},
	{"setData", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(DatagramPacket::*)($bytes*,int32_t,int32_t)>(&DatagramPacket::setData))},
	{"setData", "([B)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(DatagramPacket::*)($bytes*)>(&DatagramPacket::setData))},
	{"setLength", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(DatagramPacket::*)(int32_t)>(&DatagramPacket::setLength))},
	{"setPort", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(DatagramPacket::*)(int32_t)>(&DatagramPacket::setPort))},
	{"setSocketAddress", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(DatagramPacket::*)($SocketAddress*)>(&DatagramPacket::setSocketAddress))},
	{}
};

#define _METHOD_INDEX_init 12

$ClassInfo _DatagramPacket_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.net.DatagramPacket",
	"java.lang.Object",
	nullptr,
	_DatagramPacket_FieldInfo_,
	_DatagramPacket_MethodInfo_
};

$Object* allocate$DatagramPacket($Class* clazz) {
	return $of($alloc(DatagramPacket));
}

void DatagramPacket::init$($bytes* buf, int32_t offset, int32_t length) {
	setData(buf, offset, length);
}

void DatagramPacket::init$($bytes* buf, int32_t length) {
	DatagramPacket::init$(buf, 0, length);
}

void DatagramPacket::init$($bytes* buf, int32_t offset, int32_t length, $InetAddress* address, int32_t port) {
	setData(buf, offset, length);
	setAddress(address);
	setPort(port);
}

void DatagramPacket::init$($bytes* buf, int32_t offset, int32_t length, $SocketAddress* address) {
	setData(buf, offset, length);
	setSocketAddress(address);
}

void DatagramPacket::init$($bytes* buf, int32_t length, $InetAddress* address, int32_t port) {
	DatagramPacket::init$(buf, 0, length, address, port);
}

void DatagramPacket::init$($bytes* buf, int32_t length, $SocketAddress* address) {
	DatagramPacket::init$(buf, 0, length, address);
}

$InetAddress* DatagramPacket::getAddress() {
	$synchronized(this) {
		return this->address;
	}
}

int32_t DatagramPacket::getPort() {
	$synchronized(this) {
		return this->port;
	}
}

$bytes* DatagramPacket::getData() {
	$synchronized(this) {
		return this->buf;
	}
}

int32_t DatagramPacket::getOffset() {
	$synchronized(this) {
		return this->offset;
	}
}

int32_t DatagramPacket::getLength() {
	$synchronized(this) {
		return this->length;
	}
}

void DatagramPacket::setData($bytes* buf, int32_t offset, int32_t length) {
	$synchronized(this) {
		if (length < 0 || offset < 0 || (length + offset) < 0 || ((length + offset) > $nc(buf)->length)) {
			$throwNew($IllegalArgumentException, "illegal length or offset"_s);
		}
		$set(this, buf, buf);
		this->length = length;
		this->bufLength = length;
		this->offset = offset;
	}
}

void DatagramPacket::setAddress($InetAddress* iaddr) {
	$synchronized(this) {
		$set(this, address, iaddr);
	}
}

void DatagramPacket::setPort(int32_t iport) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (iport < 0 || iport > 0x0000FFFF) {
			$throwNew($IllegalArgumentException, $$str({"Port out of range:"_s, $$str(iport)}));
		}
		this->port = iport;
	}
}

void DatagramPacket::setSocketAddress($SocketAddress* address) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($InetSocketAddress, addr, nullptr);
		bool var$0 = $instanceOf($InetSocketAddress, address);
		if (var$0) {
			$assign(addr, $cast($InetSocketAddress, address));
			var$0 = true;
		}
		if (!(var$0)) {
			$throwNew($IllegalArgumentException, "unsupported address type"_s);
		}
		if ($nc(addr)->isUnresolved()) {
			$throwNew($IllegalArgumentException, "unresolved address"_s);
		}
		setAddress($($nc(addr)->getAddress()));
		setPort($nc(addr)->getPort());
	}
}

$SocketAddress* DatagramPacket::getSocketAddress() {
	$synchronized(this) {
		$var($InetAddress, var$0, getAddress());
		return $new($InetSocketAddress, var$0, getPort());
	}
}

void DatagramPacket::setData($bytes* buf) {
	$synchronized(this) {
		if (buf == nullptr) {
			$throwNew($NullPointerException, "null packet buffer"_s);
		}
		$set(this, buf, buf);
		this->offset = 0;
		this->length = $nc(buf)->length;
		this->bufLength = buf->length;
	}
}

void DatagramPacket::setLength(int32_t length) {
	$synchronized(this) {
		if ((length + this->offset) > $nc(this->buf)->length || length < 0 || (length + this->offset) < 0) {
			$throwNew($IllegalArgumentException, "illegal length"_s);
		}
		this->length = length;
		this->bufLength = this->length;
	}
}

void DatagramPacket::init() {
	$init(DatagramPacket);
	$prepareNativeStatic(DatagramPacket, init, void);
	$invokeNativeStatic(DatagramPacket, init);
	$finishNativeStatic();
}

void clinit$DatagramPacket($Class* class$) {
	{
		$BootLoader::loadLibrary("net"_s);
		DatagramPacket::init();
	}
}

DatagramPacket::DatagramPacket() {
}

$Class* DatagramPacket::load$($String* name, bool initialize) {
	$loadClass(DatagramPacket, name, initialize, &_DatagramPacket_ClassInfo_, clinit$DatagramPacket, allocate$DatagramPacket);
	return class$;
}

$Class* DatagramPacket::class$ = nullptr;

	} // net
} // java