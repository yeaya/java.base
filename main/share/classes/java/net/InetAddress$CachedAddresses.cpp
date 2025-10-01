#include <java/net/InetAddress$CachedAddresses.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress$Addresses.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <jcpp.h>

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetAddress$Addresses = ::java::net::InetAddress$Addresses;
using $UnknownHostException = ::java::net::UnknownHostException;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;

namespace java {
	namespace net {

$FieldInfo _InetAddress$CachedAddresses_FieldInfo_[] = {
	{"seq", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InetAddress$CachedAddresses, seq)},
	{"host", "Ljava/lang/String;", nullptr, $FINAL, $field(InetAddress$CachedAddresses, host)},
	{"inetAddresses", "[Ljava/net/InetAddress;", nullptr, $FINAL, $field(InetAddress$CachedAddresses, inetAddresses)},
	{"expiryTime", "J", nullptr, $FINAL, $field(InetAddress$CachedAddresses, expiryTime)},
	{"id", "J", nullptr, $FINAL, $field(InetAddress$CachedAddresses, id)},
	{}
};

$MethodInfo _InetAddress$CachedAddresses_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;[Ljava/net/InetAddress;J)V", nullptr, 0, $method(static_cast<void(InetAddress$CachedAddresses::*)($String*,$InetAddressArray*,int64_t)>(&InetAddress$CachedAddresses::init$))},
	{"compareTo", "(Ljava/net/InetAddress$CachedAddresses;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(InetAddress$CachedAddresses::*)(InetAddress$CachedAddresses*)>(&InetAddress$CachedAddresses::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()[Ljava/net/InetAddress;", nullptr, $PUBLIC, nullptr, "java.net.UnknownHostException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _InetAddress$CachedAddresses_InnerClassesInfo_[] = {
	{"java.net.InetAddress$CachedAddresses", "java.net.InetAddress", "CachedAddresses", $PRIVATE | $STATIC | $FINAL},
	{"java.net.InetAddress$Addresses", "java.net.InetAddress", "Addresses", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InetAddress$CachedAddresses_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.net.InetAddress$CachedAddresses",
	"java.lang.Object",
	"java.net.InetAddress$Addresses,java.lang.Comparable",
	_InetAddress$CachedAddresses_FieldInfo_,
	_InetAddress$CachedAddresses_MethodInfo_,
	"Ljava/lang/Object;Ljava/net/InetAddress$Addresses;Ljava/lang/Comparable<Ljava/net/InetAddress$CachedAddresses;>;",
	nullptr,
	_InetAddress$CachedAddresses_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.InetAddress"
};

$Object* allocate$InetAddress$CachedAddresses($Class* clazz) {
	return $of($alloc(InetAddress$CachedAddresses));
}

int32_t InetAddress$CachedAddresses::hashCode() {
	 return this->$InetAddress$Addresses::hashCode();
}

bool InetAddress$CachedAddresses::equals(Object$* obj) {
	 return this->$InetAddress$Addresses::equals(obj);
}

$Object* InetAddress$CachedAddresses::clone() {
	 return this->$InetAddress$Addresses::clone();
}

$String* InetAddress$CachedAddresses::toString() {
	 return this->$InetAddress$Addresses::toString();
}

void InetAddress$CachedAddresses::finalize() {
	this->$InetAddress$Addresses::finalize();
}

$AtomicLong* InetAddress$CachedAddresses::seq = nullptr;

void InetAddress$CachedAddresses::init$($String* host, $InetAddressArray* inetAddresses, int64_t expiryTime) {
	this->id = $nc(InetAddress$CachedAddresses::seq)->incrementAndGet();
	$set(this, host, host);
	$set(this, inetAddresses, inetAddresses);
	this->expiryTime = expiryTime;
}

$InetAddressArray* InetAddress$CachedAddresses::get() {
	if (this->inetAddresses == nullptr) {
		$throwNew($UnknownHostException, this->host);
	}
	return this->inetAddresses;
}

int32_t InetAddress$CachedAddresses::compareTo(InetAddress$CachedAddresses* other) {
	int64_t diff = this->expiryTime - $nc(other)->expiryTime;
	if (diff < (int64_t)0) {
		return -1;
	}
	if (diff > (int64_t)0) {
		return 1;
	}
	return $Long::compare(this->id, other->id);
}

int32_t InetAddress$CachedAddresses::compareTo(Object$* other) {
	return this->compareTo($cast(InetAddress$CachedAddresses, other));
}

void clinit$InetAddress$CachedAddresses($Class* class$) {
	$assignStatic(InetAddress$CachedAddresses::seq, $new($AtomicLong));
}

InetAddress$CachedAddresses::InetAddress$CachedAddresses() {
}

$Class* InetAddress$CachedAddresses::load$($String* name, bool initialize) {
	$loadClass(InetAddress$CachedAddresses, name, initialize, &_InetAddress$CachedAddresses_ClassInfo_, clinit$InetAddress$CachedAddresses, allocate$InetAddress$CachedAddresses);
	return class$;
}

$Class* InetAddress$CachedAddresses::class$ = nullptr;

	} // net
} // java