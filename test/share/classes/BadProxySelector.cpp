#include <BadProxySelector.h>

#include <BadProxySelector$HTTPProxySelector.h>
#include <BadProxySelector$NullHTTPProxySelector.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/ProxySelector.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $BadProxySelector$HTTPProxySelector = ::BadProxySelector$HTTPProxySelector;
using $BadProxySelector$NullHTTPProxySelector = ::BadProxySelector$NullHTTPProxySelector;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InetAddress = ::java::net::InetAddress;
using $ProxySelector = ::java::net::ProxySelector;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

$MethodInfo _BadProxySelector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BadProxySelector::*)()>(&BadProxySelector::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BadProxySelector::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _BadProxySelector_InnerClassesInfo_[] = {
	{"BadProxySelector$NullHTTPProxySelector", "BadProxySelector", "NullHTTPProxySelector", $PRIVATE | $STATIC},
	{"BadProxySelector$HTTPProxySelector", "BadProxySelector", "HTTPProxySelector", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BadProxySelector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BadProxySelector",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BadProxySelector_MethodInfo_,
	nullptr,
	nullptr,
	_BadProxySelector_InnerClassesInfo_,
	nullptr,
	nullptr,
	"BadProxySelector$NullHTTPProxySelector,BadProxySelector$HTTPProxySelector"
};

$Object* allocate$BadProxySelector($Class* clazz) {
	return $of($alloc(BadProxySelector));
}

void BadProxySelector::init$() {
}

void BadProxySelector::main($StringArray* args) {
	$ProxySelector::setDefault($$new($BadProxySelector$HTTPProxySelector));
	{
		$var($ServerSocket, ss, $new($ServerSocket, 0, 0, $($InetAddress::getLocalHost())));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($InetAddress, var$1, ss->getInetAddress());
					$var($Socket, s1, $new($Socket, var$1, ss->getLocalPort()));
					{
						$var($Throwable, var$2, nullptr);
						try {
							try {
								$var($Socket, s2, ss->accept());
								{
									if (s2 != nullptr) {
										s2->close();
									}
								}
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									s1->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$2, $catch());
						} /*finally*/ {
							s1->close();
						}
						if (var$2 != nullptr) {
							$throw(var$2);
						}
					}
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
	}
	$ProxySelector::setDefault($$new($BadProxySelector$NullHTTPProxySelector));
	{
		$var($ServerSocket, ss, $new($ServerSocket, 0, 0, $($InetAddress::getLocalHost())));
		{
			$var($Throwable, var$3, nullptr);
			try {
				try {
					$var($InetAddress, var$4, ss->getInetAddress());
					$var($Socket, s1, $new($Socket, var$4, ss->getLocalPort()));
					{
						$var($Throwable, var$5, nullptr);
						try {
							try {
								$var($Socket, s2, ss->accept());
								{
									if (s2 != nullptr) {
										s2->close();
									}
								}
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									s1->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$5, $catch());
						} /*finally*/ {
							s1->close();
						}
						if (var$5 != nullptr) {
							$throw(var$5);
						}
					}
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
				$assign(var$3, $catch());
			} /*finally*/ {
				ss->close();
			}
			if (var$3 != nullptr) {
				$throw(var$3);
			}
		}
	}
}

BadProxySelector::BadProxySelector() {
}

$Class* BadProxySelector::load$($String* name, bool initialize) {
	$loadClass(BadProxySelector, name, initialize, &_BadProxySelector_ClassInfo_, allocate$BadProxySelector);
	return class$;
}

$Class* BadProxySelector::class$ = nullptr;