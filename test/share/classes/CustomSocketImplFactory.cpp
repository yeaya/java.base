#include <CustomSocketImplFactory.h>

#include <CustomSocketImplFactory$CustomSocketImpl.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CustomSocketImplFactory::*)()>(&CustomSocketImplFactory::init$))},
	{"createSocketImpl", "()Ljava/net/SocketImpl;", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CustomSocketImplFactory::main)), "java.lang.Exception"},
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
	try {
		$var($SocketImpl, s, $new($CustomSocketImplFactory$CustomSocketImpl, this));
		$init($System);
		$nc($System::out)->println($$str({"Created "_s, s}));
		return s;
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void CustomSocketImplFactory::main($StringArray* args) {
	$init(CustomSocketImplFactory);
	$Socket::setSocketImplFactory($$new(CustomSocketImplFactory));
	try {
		$var($ServerSocket, ss, $new($ServerSocket, 0));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					ss->setSoTimeout(1);
					ss->accept();
					$init($System);
					$nc($System::out)->println("PASS"_s);
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						ss->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				ss->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($SocketTimeoutException&) {
		$var($Exception, e, $catch());
	} catch ($NullPointerException&) {
		$var($Exception, e, $catch());
	}
}

CustomSocketImplFactory::CustomSocketImplFactory() {
}

$Class* CustomSocketImplFactory::load$($String* name, bool initialize) {
	$loadClass(CustomSocketImplFactory, name, initialize, &_CustomSocketImplFactory_ClassInfo_, allocate$CustomSocketImplFactory);
	return class$;
}

$Class* CustomSocketImplFactory::class$ = nullptr;