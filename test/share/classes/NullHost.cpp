#include <NullHost.h>

#include <NullHost$Server.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $NullHost$Server = ::NullHost$Server;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $Socket = ::java::net::Socket;

$MethodInfo _NullHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullHost::*)()>(&NullHost::init$)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NullHost::main)), "java.io.IOException"},
	{}
};

$InnerClassInfo _NullHost_InnerClassesInfo_[] = {
	{"NullHost$Server", "NullHost", "Server", 0},
	{}
};

$ClassInfo _NullHost_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NullHost_MethodInfo_,
	nullptr,
	nullptr,
	_NullHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	"NullHost$Server"
};

$Object* allocate$NullHost($Class* clazz) {
	return $of($alloc(NullHost));
}

void NullHost::main($StringArray* args) {
	$var(NullHost, n, $new(NullHost));
}

void NullHost::init$() {
	$var($NullHost$Server, s, $new($NullHost$Server, this));
	int32_t port = s->getPort();
	s->start();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				{
					$var($Socket, sock, $new($Socket, ($String*)nullptr, port));
					{
						sock->close();
					}
				}
				{
					$var($Socket, sock, $new($Socket, ($String*)nullptr, port, true));
					{
						sock->close();
					}
				}
				{
					$var($Socket, sock, $new($Socket, ($String*)nullptr, port, ($InetAddress*)nullptr, 0));
					{
						sock->close();
					}
				}
			} catch ($NullPointerException&) {
				$var($NullPointerException, e, $catch());
				$throwNew($RuntimeException, "Got a NPE"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			s->shutdown();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

NullHost::NullHost() {
}

$Class* NullHost::load$($String* name, bool initialize) {
	$loadClass(NullHost, name, initialize, &_NullHost_ClassInfo_, allocate$NullHost);
	return class$;
}

$Class* NullHost::class$ = nullptr;