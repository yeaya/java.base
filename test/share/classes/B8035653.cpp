#include <B8035653.h>

#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/SocketException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramSocket = ::java::net::DatagramSocket;
using $SocketException = ::java::net::SocketException;

$MethodInfo _B8035653_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(B8035653, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B8035653, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _B8035653_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B8035653",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B8035653_MethodInfo_
};

$Object* allocate$B8035653($Class* clazz) {
	return $of($alloc(B8035653));
}

void B8035653::init$() {
}

void B8035653::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($DatagramSocket, ds, $new($DatagramSocket));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					ds->getLocalAddress();
				} catch ($Throwable& t$) {
					try {
						ds->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				ds->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($SocketException& e) {
		e->printStackTrace();
	}
}

B8035653::B8035653() {
}

$Class* B8035653::load$($String* name, bool initialize) {
	$loadClass(B8035653, name, initialize, &_B8035653_ClassInfo_, allocate$B8035653);
	return class$;
}

$Class* B8035653::class$ = nullptr;