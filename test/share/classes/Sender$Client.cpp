#include <Sender$Client.h>

#include <Sender.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/channels/DatagramChannel.h>
#include <jcpp.h>

#undef BIG_ENDIAN

using $Sender = ::Sender;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

$FieldInfo _Sender$Client_FieldInfo_[] = {
	{"port", "I", nullptr, $FINAL, $field(Sender$Client, port)},
	{"e", "Ljava/lang/Exception;", nullptr, 0, $field(Sender$Client, e)},
	{}
};

$MethodInfo _Sender$Client_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(Sender$Client::*)(int32_t)>(&Sender$Client::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"throwException", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _Sender$Client_InnerClassesInfo_[] = {
	{"Sender$Client", "Sender", "Client", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Sender$Client_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Sender$Client",
	"java.lang.Object",
	"java.lang.Runnable",
	_Sender$Client_FieldInfo_,
	_Sender$Client_MethodInfo_,
	nullptr,
	nullptr,
	_Sender$Client_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sender"
};

$Object* allocate$Sender$Client($Class* clazz) {
	return $of($alloc(Sender$Client));
}

void Sender$Client::init$(int32_t port) {
	$set(this, e, nullptr);
	this->port = port;
}

void Sender$Client::throwException() {
	if (this->e != nullptr) {
		$throw(this->e);
	}
}

void Sender$Client::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($DatagramChannel, dc, $DatagramChannel::open());
		$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(12));
		$init($ByteOrder);
		$nc(bb)->order($ByteOrder::BIG_ENDIAN);
		$nc($(bb->putInt(1)))->putLong(1);
		bb->flip();
		$var($InetAddress, address, $InetAddress::getLocalHost());
		$var($InetSocketAddress, isa, $new($InetSocketAddress, address, this->port));
		$nc(dc)->connect(isa);
		$init($Sender);
		$assignStatic($Sender::clientISA, dc->getLocalAddress());
		dc->write(bb);
	} catch ($Exception& ex) {
		$set(this, e, ex);
	}
}

Sender$Client::Sender$Client() {
}

$Class* Sender$Client::load$($String* name, bool initialize) {
	$loadClass(Sender$Client, name, initialize, &_Sender$Client_ClassInfo_, allocate$Sender$Client);
	return class$;
}

$Class* Sender$Client::class$ = nullptr;