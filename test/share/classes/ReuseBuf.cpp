#include <ReuseBuf.h>

#include <ReuseBuf$ServerThread.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ReuseBuf$ServerThread = ::ReuseBuf$ServerThread;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;

$FieldInfo _ReuseBuf_FieldInfo_[] = {
	{"msgs", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(ReuseBuf, msgs)},
	{"port", "I", nullptr, $STATIC, $staticField(ReuseBuf, port)},
	{}
};

$MethodInfo _ReuseBuf_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReuseBuf::*)()>(&ReuseBuf::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReuseBuf::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ReuseBuf_InnerClassesInfo_[] = {
	{"ReuseBuf$ServerThread", "ReuseBuf", "ServerThread", $STATIC},
	{}
};

$ClassInfo _ReuseBuf_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReuseBuf",
	"java.lang.Object",
	nullptr,
	_ReuseBuf_FieldInfo_,
	_ReuseBuf_MethodInfo_,
	nullptr,
	nullptr,
	_ReuseBuf_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ReuseBuf$ServerThread"
};

$Object* allocate$ReuseBuf($Class* clazz) {
	return $of($alloc(ReuseBuf));
}

$StringArray* ReuseBuf::msgs = nullptr;
int32_t ReuseBuf::port = 0;

void ReuseBuf::init$() {
}

void ReuseBuf::main($StringArray* args) {
	$init(ReuseBuf);
	$useLocalCurrentObjectStackCache();
	$var($ReuseBuf$ServerThread, st, $new($ReuseBuf$ServerThread));
	st->start();
	$var($InetAddress, local, $InetAddress::getLocalHost());
	$var($InetSocketAddress, bindaddr, $new($InetSocketAddress, local, 0));
	$var($DatagramSocket, ds, $new($DatagramSocket, static_cast<$SocketAddress*>(bindaddr)));
	$var($bytes, b, $new($bytes, 100));
	$var($DatagramPacket, dp, $new($DatagramPacket, b, b->length));
	for (int32_t i = 0; i < $nc(ReuseBuf::msgs)->length; ++i) {
		$var($bytes, var$0, $nc($nc(ReuseBuf::msgs)->get(i))->getBytes());
		int32_t var$1 = $nc($nc(ReuseBuf::msgs)->get(i))->length();
		ds->send($$new($DatagramPacket, var$0, var$1, $($InetAddress::getLocalHost()), ReuseBuf::port));
		ds->receive(dp);
		$var($bytes, var$2, dp->getData());
		int32_t var$3 = dp->getOffset();
		if (!$nc($nc(ReuseBuf::msgs)->get(i))->equals($$new($String, var$2, var$3, dp->getLength()))) {
			$var($String, var$5, $$str({"Msg expected: "_s, $nc(ReuseBuf::msgs)->get(i), $$str($nc($nc(ReuseBuf::msgs)->get(i))->length()), "msg received: "_s}));
			$var($bytes, var$6, dp->getData());
			int32_t var$7 = dp->getOffset();
			$var($String, var$4, $$concat(var$5, $$new($String, var$6, var$7, dp->getLength())));
			$throwNew($RuntimeException, $$concat(var$4, $$str(dp->getLength())));
		}
	}
	ds->close();
	$nc($System::out)->println("Test Passed!!!"_s);
}

void clinit$ReuseBuf($Class* class$) {
	$assignStatic(ReuseBuf::msgs, $new($StringArray, {
		"Hello World"_s,
		"Java"_s,
		"Good Bye"_s
	}));
}

ReuseBuf::ReuseBuf() {
}

$Class* ReuseBuf::load$($String* name, bool initialize) {
	$loadClass(ReuseBuf, name, initialize, &_ReuseBuf_ClassInfo_, clinit$ReuseBuf, allocate$ReuseBuf);
	return class$;
}

$Class* ReuseBuf::class$ = nullptr;