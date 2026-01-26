#include <CustomSocketImplFactory.h>

#include <CustomSocketImplFactory$CustomSocketImpl.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketImpl.h>
#include <java/net/SocketImplFactory.h>
#include <java/net/SocketTimeoutException.h>
#include <jcpp.h>

using $CustomSocketImplFactory$CustomSocketImpl = ::CustomSocketImplFactory$CustomSocketImpl;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketImpl = ::java::net::SocketImpl;
using $SocketImplFactory = ::java::net::SocketImplFactory;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;

$MethodInfo _CustomSocketImplFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CustomSocketImplFactory, init$, void)},
	{"createSocketImpl", "()Ljava/net/SocketImpl;", nullptr, $PUBLIC, $virtualMethod(CustomSocketImplFactory, createSocketImpl, $SocketImpl*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CustomSocketImplFactory, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _CustomSocketImplFactory_InnerClassesInfo_[] = {
	{"CustomSocketImplFactory$CustomSocketImpl", "CustomSocketImplFactory", "CustomSocketImpl", 0},
	{}
};

$ClassInfo _CustomSocketImplFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CustomSocketImplFactory",
	"java.lang.Object",
	"java.net.SocketImplFactory",
	nullptr,
	_CustomSocketImplFactory_MethodInfo_,
	nullptr,
	nullptr,
	_CustomSocketImplFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"CustomSocketImplFactory$CustomSocketImpl"
};

$Object* allocate$CustomSocketImplFactory($Class* clazz) {
	return $of($alloc(CustomSocketImplFactory));
}

void CustomSocketImplFactory::init$() {
}

$SocketImpl* CustomSocketImplFactory::createSocketImpl() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($SocketImpl, s, $new($CustomSocketImplFactory$CustomSocketImpl, this));
		$nc($System::out)->println($$str({"Created "_s, s}));
		return s;
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void CustomSocketImplFactory::main($StringArray* args) {
	$init(CustomSocketImplFactory);
	$useLocalCurrentObjectStackCache();
	$Socket::setSocketImplFactory($$new(CustomSocketImplFactory));
	try {
		$var($ServerSocket, ss, $new($ServerSocket, 0));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					ss->setSoTimeout(1);
					ss->accept();
					$nc($System::out)->println("PASS"_s);
				} catch ($Throwable& t$) {
					try {
						ss->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				ss->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($SocketTimeoutException& e) {
	} catch ($NullPointerException& e) {
	}
}

CustomSocketImplFactory::CustomSocketImplFactory() {
}

$Class* CustomSocketImplFactory::load$($String* name, bool initialize) {
	$loadClass(CustomSocketImplFactory, name, initialize, &_CustomSocketImplFactory_ClassInfo_, allocate$CustomSocketImplFactory);
	return class$;
}

$Class* CustomSocketImplFactory::class$ = nullptr;