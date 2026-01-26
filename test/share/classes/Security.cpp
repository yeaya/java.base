#include <Security.h>

#include <Security$Command.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/SocketAddress.h>
#include <java/net/StandardProtocolFamily.h>
#include <java/net/UnixDomainSocketAddress.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

#undef IOE
#undef SE
#undef UNIX

using $Security$Command = ::Security$Command;
using $NetworkChannelArray = $Array<::java::nio::channels::NetworkChannel>;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $SocketAddress = ::java::net::SocketAddress;
using $StandardProtocolFamily = ::java::net::StandardProtocolFamily;
using $UnixDomainSocketAddress = ::java::net::UnixDomainSocketAddress;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

class Security$$Lambda$lambda$testPolicy1$0 : public $Security$Command {
	$class(Security$$Lambda$lambda$testPolicy1$0, $NO_CLASS_INIT, $Security$Command)
public:
	void init$($ServerSocketChannel* server, $UnixDomainSocketAddress* saddr) {
		$set(this, server, server);
		$set(this, saddr, saddr);
	}
	virtual void run() override {
		Security::lambda$testPolicy1$0(server, saddr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Security$$Lambda$lambda$testPolicy1$0>());
	}
	$ServerSocketChannel* server = nullptr;
	$UnixDomainSocketAddress* saddr = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Security$$Lambda$lambda$testPolicy1$0::fieldInfos[3] = {
	{"server", "Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC, $field(Security$$Lambda$lambda$testPolicy1$0, server)},
	{"saddr", "Ljava/net/UnixDomainSocketAddress;", nullptr, $PUBLIC, $field(Security$$Lambda$lambda$testPolicy1$0, saddr)},
	{}
};
$MethodInfo Security$$Lambda$lambda$testPolicy1$0::methodInfos[3] = {
	{"<init>", "(Ljava/nio/channels/ServerSocketChannel;Ljava/net/UnixDomainSocketAddress;)V", nullptr, $PUBLIC, $method(Security$$Lambda$lambda$testPolicy1$0, init$, void, $ServerSocketChannel*, $UnixDomainSocketAddress*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Security$$Lambda$lambda$testPolicy1$0, run, void)},
	{}
};
$ClassInfo Security$$Lambda$lambda$testPolicy1$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Security$$Lambda$lambda$testPolicy1$0",
	"java.lang.Object",
	"Security$Command",
	fieldInfos,
	methodInfos
};
$Class* Security$$Lambda$lambda$testPolicy1$0::load$($String* name, bool initialize) {
	$loadClass(Security$$Lambda$lambda$testPolicy1$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Security$$Lambda$lambda$testPolicy1$0::class$ = nullptr;

class Security$$Lambda$lambda$testPolicy1$1$1 : public $Security$Command {
	$class(Security$$Lambda$lambda$testPolicy1$1$1, $NO_CLASS_INIT, $Security$Command)
public:
	void init$($SocketChannel* client, $UnixDomainSocketAddress* saddr) {
		$set(this, client, client);
		$set(this, saddr, saddr);
	}
	virtual void run() override {
		Security::lambda$testPolicy1$1(client, saddr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Security$$Lambda$lambda$testPolicy1$1$1>());
	}
	$SocketChannel* client = nullptr;
	$UnixDomainSocketAddress* saddr = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Security$$Lambda$lambda$testPolicy1$1$1::fieldInfos[3] = {
	{"client", "Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC, $field(Security$$Lambda$lambda$testPolicy1$1$1, client)},
	{"saddr", "Ljava/net/UnixDomainSocketAddress;", nullptr, $PUBLIC, $field(Security$$Lambda$lambda$testPolicy1$1$1, saddr)},
	{}
};
$MethodInfo Security$$Lambda$lambda$testPolicy1$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/nio/channels/SocketChannel;Ljava/net/UnixDomainSocketAddress;)V", nullptr, $PUBLIC, $method(Security$$Lambda$lambda$testPolicy1$1$1, init$, void, $SocketChannel*, $UnixDomainSocketAddress*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Security$$Lambda$lambda$testPolicy1$1$1, run, void)},
	{}
};
$ClassInfo Security$$Lambda$lambda$testPolicy1$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Security$$Lambda$lambda$testPolicy1$1$1",
	"java.lang.Object",
	"Security$Command",
	fieldInfos,
	methodInfos
};
$Class* Security$$Lambda$lambda$testPolicy1$1$1::load$($String* name, bool initialize) {
	$loadClass(Security$$Lambda$lambda$testPolicy1$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Security$$Lambda$lambda$testPolicy1$1$1::class$ = nullptr;

$FieldInfo _Security_FieldInfo_[] = {
	{"SE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/SecurityException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Security, SE)},
	{"IOE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/io/IOException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Security, IOE)},
	{}
};

$MethodInfo _Security_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Security, init$, void)},
	{"call", "(LSecurity$Command;Ljava/lang/Class;)V", "<T:Ljava/lang/Exception;>(LSecurity$Command;Ljava/lang/Class<+Ljava/lang/Exception;>;)V", $STATIC, $staticMethod(Security, call, void, $Security$Command*, $Class*)},
	{"close", "([Ljava/nio/channels/NetworkChannel;)V", nullptr, $STATIC | $TRANSIENT, $staticMethod(Security, close, void, $NetworkChannelArray*)},
	{"lambda$testPolicy1$0", "(Ljava/nio/channels/ServerSocketChannel;Ljava/net/UnixDomainSocketAddress;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Security, lambda$testPolicy1$0, void, $ServerSocketChannel*, $UnixDomainSocketAddress*), "java.lang.Exception"},
	{"lambda$testPolicy1$1", "(Ljava/nio/channels/SocketChannel;Ljava/net/UnixDomainSocketAddress;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Security, lambda$testPolicy1$1, void, $SocketChannel*, $UnixDomainSocketAddress*), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Security, main, void, $StringArray*), "java.lang.Exception"},
	{"setSecurityManager", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Security, setSecurityManager, void, $String*)},
	{"testPolicy1", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Security, testPolicy1, void), "java.lang.Exception"},
	{"testPolicy2", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Security, testPolicy2, void), "java.lang.Exception"},
	{"testPolicy3", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Security, testPolicy3, void), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Security_InnerClassesInfo_[] = {
	{"Security$Command", "Security", "Command", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Security_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Security",
	"java.lang.Object",
	nullptr,
	_Security_FieldInfo_,
	_Security_MethodInfo_,
	nullptr,
	nullptr,
	_Security_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Security$Command"
};

$Object* allocate$Security($Class* clazz) {
	return $of($alloc(Security));
}

$Class* Security::SE = nullptr;
$Class* Security::IOE = nullptr;

void Security::init$() {
}

void Security::call($Security$Command* r, $Class* expectedException) {
	$init(Security);
	$useLocalCurrentObjectStackCache();
	bool threw = false;
	try {
		$nc(r)->run();
	} catch ($Throwable& t) {
		if (expectedException == nullptr) {
			t->printStackTrace();
			$throwNew($RuntimeException, "an exception was thrown but was not expected"_s);
		}
		threw = true;
		if (!($nc(expectedException)->isAssignableFrom($of(t)->getClass()))) {
			$throwNew($RuntimeException, $$str({"wrong exception type thrown "_s, $(t->toString())}));
		}
	}
	if (expectedException != nullptr && !threw) {
		$throwNew($RuntimeException, $("% was expected"_s->formatted($$new($ObjectArray, {$($of(expectedException->getName()))}))));
	}
}

void Security::main($StringArray* args) {
	$init(Security);
	$useLocalCurrentObjectStackCache();
	try {
		$init($StandardProtocolFamily);
		$SocketChannel::open(static_cast<$ProtocolFamily*>($StandardProtocolFamily::UNIX));
	} catch ($UnsupportedOperationException& e) {
		$nc($System::out)->println("Unix domain not supported"_s);
		return;
	}
	$var($String, policy, $nc(args)->get(0));
	{
		$var($String, s2909$, policy);
		int32_t tmp2909$ = -1;
		switch ($nc(s2909$)->hashCode()) {
		case (int32_t)0xE847013F:
			{
				if (s2909$->equals("policy1"_s)) {
					tmp2909$ = 0;
				}
				break;
			}
		case (int32_t)0xE8470140:
			{
				if (s2909$->equals("policy2"_s)) {
					tmp2909$ = 1;
				}
				break;
			}
		case (int32_t)0xE8470141:
			{
				if (s2909$->equals("policy3"_s)) {
					tmp2909$ = 2;
				}
				break;
			}
		}
		switch (tmp2909$) {
		case 0:
			{
				testPolicy1();
				break;
			}
		case 1:
			{
				testPolicy2();
				break;
			}
		case 2:
			{
				testPolicy3();
				break;
			}
		}
	}
}

void Security::setSecurityManager($String* policy) {
	$init(Security);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, testSrc, $System::getProperty("test.src"_s));
	$init($File);
	$var($String, policyURL, $str({"file:///"_s, testSrc, $File::separator, policy}));
	$nc($System::out)->println($$str({"POLICY: "_s, policyURL}));
	$System::setProperty("java.security.policy"_s, policyURL);
	$System::setSecurityManager($$new($SecurityManager));
}

void Security::close($NetworkChannelArray* channels) {
	$init(Security);
	$useLocalCurrentObjectStackCache();
	{
		$var($NetworkChannelArray, arr$, channels);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($NetworkChannel, chan, arr$->get(i$));
			{
				try {
					$nc(chan)->close();
				} catch ($Exception& e) {
				}
			}
		}
	}
}

void Security::testPolicy1() {
	$init(Security);
	$useLocalCurrentObjectStackCache();
	$var($Path, servername, $Path::of("sock"_s, $$new($StringArray, 0)));
	$Files::deleteIfExists(servername);
	$var($UnixDomainSocketAddress, saddr, $UnixDomainSocketAddress::of(servername));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($StandardProtocolFamily);
			$var($ServerSocketChannel, server, $ServerSocketChannel::open($StandardProtocolFamily::UNIX));
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						{
							$var($SocketChannel, client, $SocketChannel::open(static_cast<$ProtocolFamily*>($StandardProtocolFamily::UNIX)));
							{
								$var($Throwable, var$2, nullptr);
								try {
									try {
										call(static_cast<$Security$Command*>($$new(Security$$Lambda$lambda$testPolicy1$0, server, saddr)), Security::SE);
										call(static_cast<$Security$Command*>($$new(Security$$Lambda$lambda$testPolicy1$1$1, client, saddr)), Security::SE);
									} catch ($Throwable& t$) {
										if (client != nullptr) {
											try {
												client->close();
											} catch ($Throwable& x2) {
												t$->addSuppressed(x2);
											}
										}
										$throw(t$);
									}
								} catch ($Throwable& var$3) {
									$assign(var$2, var$3);
								} /*finally*/ {
									if (client != nullptr) {
										client->close();
									}
								}
								if (var$2 != nullptr) {
									$throw(var$2);
								}
							}
						}
					} catch ($Throwable& t$) {
						if (server != nullptr) {
							try {
								server->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$4) {
					$assign(var$1, var$4);
				} /*finally*/ {
					if (server != nullptr) {
						server->close();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$Files::deleteIfExists(servername);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Security::testPolicy2() {
	$init(Security);
	$useLocalCurrentObjectStackCache();
	$var($Path, servername, $Path::of("sock"_s, $$new($StringArray, 0)));
	$Files::deleteIfExists(servername);
	$var($UnixDomainSocketAddress, saddr, $UnixDomainSocketAddress::of(servername));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($StandardProtocolFamily);
			$var($ServerSocketChannel, server, $ServerSocketChannel::open($StandardProtocolFamily::UNIX));
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						{
							$var($SocketChannel, client, $SocketChannel::open(static_cast<$ProtocolFamily*>($StandardProtocolFamily::UNIX)));
							{
								$var($Throwable, var$2, nullptr);
								try {
									try {
										call(static_cast<$Security$Command*>($$new(Security$$Lambda$lambda$testPolicy1$0, server, saddr)), nullptr);
										call(static_cast<$Security$Command*>($$new(Security$$Lambda$lambda$testPolicy1$1$1, client, saddr)), nullptr);
										{
											$var($SocketChannel, peer, $nc(server)->accept());
											{
												if (peer != nullptr) {
													peer->close();
												}
											}
										}
									} catch ($Throwable& t$) {
										if (client != nullptr) {
											try {
												client->close();
											} catch ($Throwable& x2) {
												t$->addSuppressed(x2);
											}
										}
										$throw(t$);
									}
								} catch ($Throwable& var$3) {
									$assign(var$2, var$3);
								} /*finally*/ {
									if (client != nullptr) {
										client->close();
									}
								}
								if (var$2 != nullptr) {
									$throw(var$2);
								}
							}
						}
					} catch ($Throwable& t$) {
						if (server != nullptr) {
							try {
								server->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$4) {
					$assign(var$1, var$4);
				} /*finally*/ {
					if (server != nullptr) {
						server->close();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$Files::deleteIfExists(servername);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Security::testPolicy3() {
	$init(Security);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Path, sock1, $Path::of("sock3"_s, $$new($StringArray, 0)));
	$var($Path, sock2, nullptr);
	$Files::deleteIfExists(sock1);
	$var($UnixDomainSocketAddress, saddr, $UnixDomainSocketAddress::of(sock1));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($StandardProtocolFamily);
			$var($ServerSocketChannel, s1, $ServerSocketChannel::open($StandardProtocolFamily::UNIX));
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$nc(s1)->bind(saddr);
						{
							$var($ServerSocketChannel, s2, $ServerSocketChannel::open($StandardProtocolFamily::UNIX));
							{
								$var($Throwable, var$2, nullptr);
								try {
									try {
										$nc(s2)->bind(nullptr);
										$var($UnixDomainSocketAddress, add2, $cast($UnixDomainSocketAddress, s2->getLocalAddress()));
										$assign(sock2, $nc(add2)->getPath());
										setSecurityManager("policy3"_s);
										if ($nc($($nc($($nc(($cast($UnixDomainSocketAddress, $(s1->getLocalAddress()))))->getPath()))->toString()))->length() != 0) {
											$throwNew($RuntimeException, "address should have been empty"_s);
										}
										if ($nc($($nc($($nc(($cast($UnixDomainSocketAddress, $(s2->getLocalAddress()))))->getPath()))->toString()))->length() != 0) {
											$throwNew($RuntimeException, "address should have been empty"_s);
										}
									} catch ($Throwable& t$) {
										if (s2 != nullptr) {
											try {
												s2->close();
											} catch ($Throwable& x2) {
												t$->addSuppressed(x2);
											}
										}
										$throw(t$);
									}
								} catch ($Throwable& var$3) {
									$assign(var$2, var$3);
								} /*finally*/ {
									if (s2 != nullptr) {
										s2->close();
									}
								}
								if (var$2 != nullptr) {
									$throw(var$2);
								}
							}
						}
					} catch ($Throwable& t$) {
						if (s1 != nullptr) {
							try {
								s1->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$4) {
					$assign(var$1, var$4);
				} /*finally*/ {
					if (s1 != nullptr) {
						s1->close();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$System::setSecurityManager(nullptr);
			$Files::deleteIfExists(sock1);
			$Files::deleteIfExists(sock2);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Security::lambda$testPolicy1$1($SocketChannel* client, $UnixDomainSocketAddress* saddr) {
	$init(Security);
	$nc(client)->connect(saddr);
}

void Security::lambda$testPolicy1$0($ServerSocketChannel* server, $UnixDomainSocketAddress* saddr) {
	$init(Security);
	$nc(server)->bind(saddr);
}

void clinit$Security($Class* class$) {
	$load($SecurityException);
	$assignStatic(Security::SE, $SecurityException::class$);
	$load($IOException);
	$assignStatic(Security::IOE, $IOException::class$);
}

Security::Security() {
}

$Class* Security::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Security$$Lambda$lambda$testPolicy1$0::classInfo$.name)) {
			return Security$$Lambda$lambda$testPolicy1$0::load$(name, initialize);
		}
		if (name->equals(Security$$Lambda$lambda$testPolicy1$1$1::classInfo$.name)) {
			return Security$$Lambda$lambda$testPolicy1$1$1::load$(name, initialize);
		}
	}
	$loadClass(Security, name, initialize, &_Security_ClassInfo_, clinit$Security, allocate$Security);
	return class$;
}

$Class* Security::class$ = nullptr;