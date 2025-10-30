#include <TestAfterClose.h>

#include <java/io/IOException.h>
#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;

$FieldInfo _TestAfterClose_FieldInfo_[] = {
	{"failCount", "I", nullptr, $STATIC, $staticField(TestAfterClose, failCount)},
	{}
};

$MethodInfo _TestAfterClose_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestAfterClose::*)()>(&TestAfterClose::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestAfterClose::main))},
	{"test", "(Ljava/net/ServerSocket;)V", nullptr, $STATIC, $method(static_cast<void(*)($ServerSocket*)>(&TestAfterClose::test)), "java.io.IOException"},
	{}
};

$ClassInfo _TestAfterClose_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestAfterClose",
	"java.lang.Object",
	nullptr,
	_TestAfterClose_FieldInfo_,
	_TestAfterClose_MethodInfo_
};

$Object* allocate$TestAfterClose($Class* clazz) {
	return $of($alloc(TestAfterClose));
}

int32_t TestAfterClose::failCount = 0;

void TestAfterClose::init$() {
}

void TestAfterClose::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ServerSocket, ss, $new($ServerSocket, 0, 0, nullptr));
		test(ss);
	} catch ($IOException& ioe) {
		ioe->printStackTrace();
	}
	$init(TestAfterClose);
	if (TestAfterClose::failCount > 0) {
		$throwNew($RuntimeException, $$str({"Failed: failcount = "_s, $$str(TestAfterClose::failCount)}));
	}
}

void TestAfterClose::test($ServerSocket* ss) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, ssInetAddress, $nc(ss)->getInetAddress());
	int32_t ssLocalPort = ss->getLocalPort();
	$var($SocketAddress, ssLocalSocketAddress, ss->getLocalSocketAddress());
	ss->close();
	if (ssLocalPort != ss->getLocalPort()) {
		$nc($System::out)->println("ServerSocket.getLocalPort failed"_s);
		$init(TestAfterClose);
		++TestAfterClose::failCount;
	}
	if (!$nc($(ss->getInetAddress()))->equals(ssInetAddress)) {
		$nc($System::out)->println("ServerSocket.getInetAddress failed"_s);
		$init(TestAfterClose);
		++TestAfterClose::failCount;
	}
	if (!$nc($of($(ss->getLocalSocketAddress())))->equals(ssLocalSocketAddress)) {
		$nc($System::out)->println("ServerSocket.getLocalSocketAddress failed"_s);
		$init(TestAfterClose);
		++TestAfterClose::failCount;
	}
	if (!ss->isBound()) {
		$nc($System::out)->println("ServerSocket.isBound failed"_s);
		$init(TestAfterClose);
		++TestAfterClose::failCount;
	}
}

TestAfterClose::TestAfterClose() {
}

$Class* TestAfterClose::load$($String* name, bool initialize) {
	$loadClass(TestAfterClose, name, initialize, &_TestAfterClose_ClassInfo_, allocate$TestAfterClose);
	return class$;
}

$Class* TestAfterClose::class$ = nullptr;