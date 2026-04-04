#include <AdaptServerSocket$1.h>
#include <AdaptServerSocket.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/InterruptedException.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $AdaptServerSocket = ::AdaptServerSocket;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;

void AdaptServerSocket$1::init$(int32_t val$dally, int32_t val$port) {
	this->val$dally = val$dally;
	this->val$port = val$port;
	$Thread::init$();
}

void AdaptServerSocket$1::run() {
	$useLocalObjectStack();
	try {
		$var($Socket, so, $new($Socket));
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				$init($AdaptServerSocket);
				$nc($AdaptServerSocket::out)->println($$str({"client:  "_s, so}));
				$AdaptServerSocket::clientStarted = true;
				if (this->val$dally > 0) {
					$Thread::sleep(this->val$dally);
				}
				so->connect($$new($InetSocketAddress, this->val$port));
				if ($Thread::interrupted()) {
					$AdaptServerSocket::out->println("client interrupted"_s);
					return$1 = true;
					goto $finally;
				}
				$AdaptServerSocket::out->println($$str({"client:  "_s, so}));
				int32_t a = $$nc(so->getInputStream())->read();
				$AdaptServerSocket::out->println($$str({"client:  read "_s, $$str(a)}));
				a += 1;
				$$nc(so->getOutputStream())->write(a);
				$AdaptServerSocket::out->println($$str({"client:  wrote "_s, $$str(a)}));
			} catch ($Throwable& t$) {
				try {
					so->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			so->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	} catch ($Exception& x) {
		if ($instanceOf($InterruptedException, x)) {
			return;
		}
		$init($AdaptServerSocket);
		$assignStatic($AdaptServerSocket::clientException, x);
		x->printStackTrace();
	}
}

AdaptServerSocket$1::AdaptServerSocket$1() {
}

$Class* AdaptServerSocket$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$port", "I", nullptr, $FINAL | $SYNTHETIC, $field(AdaptServerSocket$1, val$port)},
		{"val$dally", "I", nullptr, $FINAL | $SYNTHETIC, $field(AdaptServerSocket$1, val$dally)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, 0, $method(AdaptServerSocket$1, init$, void, int32_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AdaptServerSocket$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"AdaptServerSocket",
		"startClient",
		"(II)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AdaptServerSocket$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AdaptServerSocket$1",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"AdaptServerSocket"
	};
	$loadClass(AdaptServerSocket$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AdaptServerSocket$1);
	});
	return class$;
}

$Class* AdaptServerSocket$1::class$ = nullptr;