#include <SendDatagramToBadAddress$Server.h>

#include <SendDatagramToBadAddress.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <jcpp.h>

using $SendDatagramToBadAddress = ::SendDatagramToBadAddress;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;

$FieldInfo _SendDatagramToBadAddress$Server_FieldInfo_[] = {
	{"this$0", "LSendDatagramToBadAddress;", nullptr, $FINAL | $SYNTHETIC, $field(SendDatagramToBadAddress$Server, this$0)},
	{"server", "Ljava/net/DatagramSocket;", nullptr, 0, $field(SendDatagramToBadAddress$Server, server)},
	{"buf", "[B", nullptr, 0, $field(SendDatagramToBadAddress$Server, buf)},
	{"pack", "Ljava/net/DatagramPacket;", nullptr, 0, $field(SendDatagramToBadAddress$Server, pack)},
	{}
};

$MethodInfo _SendDatagramToBadAddress$Server_MethodInfo_[] = {
	{"<init>", "(LSendDatagramToBadAddress;Ljava/net/DatagramSocket;)V", nullptr, $PUBLIC, $method(static_cast<void(SendDatagramToBadAddress$Server::*)($SendDatagramToBadAddress*,$DatagramSocket*)>(&SendDatagramToBadAddress$Server::init$))},
	{"receive", "(IZ)V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _SendDatagramToBadAddress$Server_InnerClassesInfo_[] = {
	{"SendDatagramToBadAddress$Server", "SendDatagramToBadAddress", "Server", 0},
	{}
};

$ClassInfo _SendDatagramToBadAddress$Server_ClassInfo_ = {
	$ACC_SUPER,
	"SendDatagramToBadAddress$Server",
	"java.lang.Object",
	nullptr,
	_SendDatagramToBadAddress$Server_FieldInfo_,
	_SendDatagramToBadAddress$Server_MethodInfo_,
	nullptr,
	nullptr,
	_SendDatagramToBadAddress$Server_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SendDatagramToBadAddress"
};

$Object* allocate$SendDatagramToBadAddress$Server($Class* clazz) {
	return $of($alloc(SendDatagramToBadAddress$Server));
}

void SendDatagramToBadAddress$Server::init$($SendDatagramToBadAddress* this$0, $DatagramSocket* s) {
	$set(this, this$0, this$0);
	$set(this, buf, $new($bytes, 128));
	$set(this, pack, $new($DatagramPacket, this->buf, $nc(this->buf)->length));
	$set(this, server, s);
}

void SendDatagramToBadAddress$Server::receive(int32_t loop, bool expectError) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < loop; ++i) {
		try {
			$nc(this->server)->receive(this->pack);
		} catch ($Exception& e) {
			if (expectError) {
				$SendDatagramToBadAddress::print($$str({"Got expected error: "_s, e}));
				continue;
			} else {
				$SendDatagramToBadAddress::print($$str({"Got: "_s, $$new($String, $($nc(this->pack)->getData()))}));
				$SendDatagramToBadAddress::print($$str({"Expected: "_s, $$new($String, this->buf)}));
				$throwNew($Exception, $$str({"Error reading data: Iter "_s, $$str(i)}));
			}
		}
		$var($String, s1, $str({"Hello, server"_s, $$str(i)}));
		$var($bytes, buf, $nc(s1)->getBytes());
		$var($bytes, var$0, $nc(this->pack)->getData());
		int32_t var$1 = $nc(this->pack)->getOffset();
		if (!s1->equals($$new($String, var$0, var$1, $nc(this->pack)->getLength()))) {
			$SendDatagramToBadAddress::print($$str({"Got: "_s, $$new($String, $($nc(this->pack)->getData()))}));
			$SendDatagramToBadAddress::print($$str({"Expected: "_s, $$new($String, buf)}));
			$throwNew($Exception, $$str({"Error comparing data: Iter "_s, $$str(i)}));
		}
	}
}

SendDatagramToBadAddress$Server::SendDatagramToBadAddress$Server() {
}

$Class* SendDatagramToBadAddress$Server::load$($String* name, bool initialize) {
	$loadClass(SendDatagramToBadAddress$Server, name, initialize, &_SendDatagramToBadAddress$Server_ClassInfo_, allocate$SendDatagramToBadAddress$Server);
	return class$;
}

$Class* SendDatagramToBadAddress$Server::class$ = nullptr;