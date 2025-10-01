#include <java/net/InetSocketAddress.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress$InetSocketAddressHolder.h>
#include <java/net/SocketAddress.h>
#include <java/net/UnknownHostException.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef UNSAFE
#undef TYPE
#undef FIELDS_OFFSET

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress$InetSocketAddressHolder = ::java::net::InetSocketAddress$InetSocketAddressHolder;
using $SocketAddress = ::java::net::SocketAddress;
using $UnknownHostException = ::java::net::UnknownHostException;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace net {

$FieldInfo _InetSocketAddress_FieldInfo_[] = {
	{"holder", "Ljava/net/InetSocketAddress$InetSocketAddressHolder;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(InetSocketAddress, holder)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InetSocketAddress, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InetSocketAddress, serialPersistentFields)},
	{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InetSocketAddress, UNSAFE)},
	{"FIELDS_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InetSocketAddress, FIELDS_OFFSET)},
	{}
};

$MethodInfo _InetSocketAddress_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(InetSocketAddress::*)(int32_t)>(&InetSocketAddress::init$))},
	{"<init>", "(Ljava/net/InetAddress;I)V", nullptr, $PUBLIC, $method(static_cast<void(InetSocketAddress::*)($InetAddress*,int32_t)>(&InetSocketAddress::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(InetSocketAddress::*)($String*,int32_t)>(&InetSocketAddress::init$))},
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(InetSocketAddress::*)(int32_t,$String*)>(&InetSocketAddress::init$))},
	{"checkHost", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&InetSocketAddress::checkHost))},
	{"checkPort", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&InetSocketAddress::checkPort))},
	{"createUnresolved", "(Ljava/lang/String;I)Ljava/net/InetSocketAddress;", nullptr, $PUBLIC | $STATIC, $method(static_cast<InetSocketAddress*(*)($String*,int32_t)>(&InetSocketAddress::createUnresolved))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"getAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$InetAddress*(InetSocketAddress::*)()>(&InetSocketAddress::getAddress))},
	{"getHostName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(InetSocketAddress::*)()>(&InetSocketAddress::getHostName))},
	{"getHostString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(InetSocketAddress::*)()>(&InetSocketAddress::getHostString))},
	{"getPort", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(InetSocketAddress::*)()>(&InetSocketAddress::getPort))},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"isUnresolved", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(InetSocketAddress::*)()>(&InetSocketAddress::isUnresolved))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(InetSocketAddress::*)($ObjectInputStream*)>(&InetSocketAddress::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readObjectNoData", "()V", nullptr, $PRIVATE, $method(static_cast<void(InetSocketAddress::*)()>(&InetSocketAddress::readObjectNoData)), "java.io.ObjectStreamException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(InetSocketAddress::*)($ObjectOutputStream*)>(&InetSocketAddress::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _InetSocketAddress_InnerClassesInfo_[] = {
	{"java.net.InetSocketAddress$InetSocketAddressHolder", "java.net.InetSocketAddress", "InetSocketAddressHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _InetSocketAddress_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.InetSocketAddress",
	"java.net.SocketAddress",
	nullptr,
	_InetSocketAddress_FieldInfo_,
	_InetSocketAddress_MethodInfo_,
	nullptr,
	nullptr,
	_InetSocketAddress_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.InetSocketAddress$InetSocketAddressHolder"
};

$Object* allocate$InetSocketAddress($Class* clazz) {
	return $of($alloc(InetSocketAddress));
}


$ObjectStreamFieldArray* InetSocketAddress::serialPersistentFields = nullptr;
$Unsafe* InetSocketAddress::UNSAFE = nullptr;
int64_t InetSocketAddress::FIELDS_OFFSET = 0;

int32_t InetSocketAddress::checkPort(int32_t port) {
	$init(InetSocketAddress);
	if (port < 0 || port > 0x0000FFFF) {
		$throwNew($IllegalArgumentException, $$str({"port out of range:"_s, $$str(port)}));
	}
	return port;
}

$String* InetSocketAddress::checkHost($String* hostname) {
	$init(InetSocketAddress);
	if (hostname == nullptr) {
		$throwNew($IllegalArgumentException, "hostname can\'t be null"_s);
	}
	return hostname;
}

void InetSocketAddress::init$(int32_t port) {
	InetSocketAddress::init$($($InetAddress::anyLocalAddress()), port);
}

void InetSocketAddress::init$($InetAddress* addr, int32_t port) {
	$SocketAddress::init$();
	$var($InetAddress, var$0, addr == nullptr ? $InetAddress::anyLocalAddress() : addr);
	$set(this, holder, $new($InetSocketAddress$InetSocketAddressHolder, nullptr, var$0, checkPort(port)));
}

void InetSocketAddress::init$($String* hostname, int32_t port) {
	$SocketAddress::init$();
	checkHost(hostname);
	$var($InetAddress, addr, nullptr);
	$var($String, host, nullptr);
	try {
		$assign(addr, $InetAddress::getByName(hostname));
	} catch ($UnknownHostException&) {
		$var($UnknownHostException, e, $catch());
		$assign(host, hostname);
	}
	$set(this, holder, $new($InetSocketAddress$InetSocketAddressHolder, host, addr, checkPort(port)));
}

void InetSocketAddress::init$(int32_t port, $String* hostname) {
	$SocketAddress::init$();
	$set(this, holder, $new($InetSocketAddress$InetSocketAddressHolder, hostname, nullptr, port));
}

InetSocketAddress* InetSocketAddress::createUnresolved($String* host, int32_t port) {
	$init(InetSocketAddress);
	int32_t var$0 = checkPort(port);
	return $new(InetSocketAddress, var$0, $(checkHost(host)));
}

void InetSocketAddress::writeObject($ObjectOutputStream* out) {
	$var($ObjectOutputStream$PutField, pfields, $nc(out)->putFields());
	$nc(pfields)->put("hostname"_s, $of($nc(this->holder)->hostname));
	pfields->put("addr"_s, $of($nc(this->holder)->addr));
	pfields->put("port"_s, $nc(this->holder)->port);
	out->writeFields();
}

void InetSocketAddress::readObject($ObjectInputStream* in) {
	$var($ObjectInputStream$GetField, oisFields, $nc(in)->readFields());
	$var($String, oisHostname, $cast($String, $nc(oisFields)->get("hostname"_s, ($Object*)nullptr)));
	$var($InetAddress, oisAddr, $cast($InetAddress, oisFields->get("addr"_s, ($Object*)nullptr)));
	int32_t oisPort = oisFields->get("port"_s, -1);
	checkPort(oisPort);
	if (oisHostname == nullptr && oisAddr == nullptr) {
		$throwNew($InvalidObjectException, "hostname and addr can\'t both be null"_s);
	}
	$var($InetSocketAddress$InetSocketAddressHolder, h, $new($InetSocketAddress$InetSocketAddressHolder, oisHostname, oisAddr, oisPort));
	$nc(InetSocketAddress::UNSAFE)->putReference(this, InetSocketAddress::FIELDS_OFFSET, h);
}

void InetSocketAddress::readObjectNoData() {
	$throwNew($InvalidObjectException, "Stream data required"_s);
}

int32_t InetSocketAddress::getPort() {
	return $nc(this->holder)->getPort();
}

$InetAddress* InetSocketAddress::getAddress() {
	return $nc(this->holder)->getAddress();
}

$String* InetSocketAddress::getHostName() {
	return $nc(this->holder)->getHostName();
}

$String* InetSocketAddress::getHostString() {
	return $nc(this->holder)->getHostString();
}

bool InetSocketAddress::isUnresolved() {
	return $nc(this->holder)->isUnresolved();
}

$String* InetSocketAddress::toString() {
	return $nc(this->holder)->toString();
}

bool InetSocketAddress::equals(Object$* obj) {
	{
		$var(InetSocketAddress, addr, nullptr);
		bool var$0 = $instanceOf(InetSocketAddress, obj);
		if (var$0) {
			$assign(addr, $cast(InetSocketAddress, obj));
			var$0 = true;
		}
		if (var$0) {
			return $nc(this->holder)->equals($nc(addr)->holder);
		}
	}
	return false;
}

int32_t InetSocketAddress::hashCode() {
	return $nc(this->holder)->hashCode();
}

void clinit$InetSocketAddress($Class* class$) {
		$load($String);
		$load($InetAddress);
		$init($Integer);
	$assignStatic(InetSocketAddress::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "hostname"_s, $String::class$),
		$$new($ObjectStreamField, "addr"_s, $InetAddress::class$),
		$$new($ObjectStreamField, "port"_s, $Integer::TYPE)
	}));
	$assignStatic(InetSocketAddress::UNSAFE, $Unsafe::getUnsafe());
	InetSocketAddress::FIELDS_OFFSET = $nc(InetSocketAddress::UNSAFE)->objectFieldOffset(InetSocketAddress::class$, "holder"_s);
}

InetSocketAddress::InetSocketAddress() {
}

$Class* InetSocketAddress::load$($String* name, bool initialize) {
	$loadClass(InetSocketAddress, name, initialize, &_InetSocketAddress_ClassInfo_, clinit$InetSocketAddress, allocate$InetSocketAddress);
	return class$;
}

$Class* InetSocketAddress::class$ = nullptr;

	} // net
} // java