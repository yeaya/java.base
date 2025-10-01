#include <java/net/DatagramSocket$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;

namespace java {
	namespace net {

$MethodInfo _DatagramSocket$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DatagramSocket$1::*)()>(&DatagramSocket$1::init$))},
	{}
};

$EnclosingMethodInfo _DatagramSocket$1_EnclosingMethodInfo_ = {
	"java.net.DatagramSocket",
	nullptr,
	nullptr
};

$InnerClassInfo _DatagramSocket$1_InnerClassesInfo_[] = {
	{"java.net.DatagramSocket$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DatagramSocket$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.DatagramSocket$1",
	"java.net.SocketAddress",
	nullptr,
	nullptr,
	_DatagramSocket$1_MethodInfo_,
	nullptr,
	&_DatagramSocket$1_EnclosingMethodInfo_,
	_DatagramSocket$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.DatagramSocket"
};

$Object* allocate$DatagramSocket$1($Class* clazz) {
	return $of($alloc(DatagramSocket$1));
}

void DatagramSocket$1::init$() {
	$SocketAddress::init$();
}

DatagramSocket$1::DatagramSocket$1() {
}

$Class* DatagramSocket$1::load$($String* name, bool initialize) {
	$loadClass(DatagramSocket$1, name, initialize, &_DatagramSocket$1_ClassInfo_, allocate$DatagramSocket$1);
	return class$;
}

$Class* DatagramSocket$1::class$ = nullptr;

	} // net
} // java