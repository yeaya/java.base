#include <java/net/InetAddress$InetAddressHolder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;

namespace java {
	namespace net {

$FieldInfo _InetAddress$InetAddressHolder_FieldInfo_[] = {
	{"originalHostName", "Ljava/lang/String;", nullptr, 0, $field(InetAddress$InetAddressHolder, originalHostName)},
	{"hostName", "Ljava/lang/String;", nullptr, 0, $field(InetAddress$InetAddressHolder, hostName)},
	{"address", "I", nullptr, 0, $field(InetAddress$InetAddressHolder, address)},
	{"family", "I", nullptr, 0, $field(InetAddress$InetAddressHolder, family)},
	{}
};

$MethodInfo _InetAddress$InetAddressHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InetAddress$InetAddressHolder::*)()>(&InetAddress$InetAddressHolder::init$))},
	{"<init>", "(Ljava/lang/String;II)V", nullptr, 0, $method(static_cast<void(InetAddress$InetAddressHolder::*)($String*,int32_t,int32_t)>(&InetAddress$InetAddressHolder::init$))},
	{"getAddress", "()I", nullptr, 0},
	{"getFamily", "()I", nullptr, 0},
	{"getHostName", "()Ljava/lang/String;", nullptr, 0},
	{"getOriginalHostName", "()Ljava/lang/String;", nullptr, 0},
	{"init", "(Ljava/lang/String;I)V", nullptr, 0},
	{}
};

$InnerClassInfo _InetAddress$InetAddressHolder_InnerClassesInfo_[] = {
	{"java.net.InetAddress$InetAddressHolder", "java.net.InetAddress", "InetAddressHolder", $STATIC},
	{}
};

$ClassInfo _InetAddress$InetAddressHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.InetAddress$InetAddressHolder",
	"java.lang.Object",
	nullptr,
	_InetAddress$InetAddressHolder_FieldInfo_,
	_InetAddress$InetAddressHolder_MethodInfo_,
	nullptr,
	nullptr,
	_InetAddress$InetAddressHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.InetAddress"
};

$Object* allocate$InetAddress$InetAddressHolder($Class* clazz) {
	return $of($alloc(InetAddress$InetAddressHolder));
}

void InetAddress$InetAddressHolder::init$() {
}

void InetAddress$InetAddressHolder::init$($String* hostName, int32_t address, int32_t family) {
	$set(this, originalHostName, hostName);
	$set(this, hostName, hostName);
	this->address = address;
	this->family = family;
}

void InetAddress$InetAddressHolder::init($String* hostName, int32_t family) {
	$set(this, originalHostName, hostName);
	$set(this, hostName, hostName);
	if (family != -1) {
		this->family = family;
	}
}

$String* InetAddress$InetAddressHolder::getHostName() {
	return this->hostName;
}

$String* InetAddress$InetAddressHolder::getOriginalHostName() {
	return this->originalHostName;
}

int32_t InetAddress$InetAddressHolder::getAddress() {
	return this->address;
}

int32_t InetAddress$InetAddressHolder::getFamily() {
	return this->family;
}

InetAddress$InetAddressHolder::InetAddress$InetAddressHolder() {
}

$Class* InetAddress$InetAddressHolder::load$($String* name, bool initialize) {
	$loadClass(InetAddress$InetAddressHolder, name, initialize, &_InetAddress$InetAddressHolder_ClassInfo_, allocate$InetAddress$InetAddressHolder);
	return class$;
}

$Class* InetAddress$InetAddressHolder::class$ = nullptr;

	} // net
} // java