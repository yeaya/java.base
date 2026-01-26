#include <java/net/StandardSocketOptions.h>

#include <java/net/NetworkInterface.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions$StdSocketOption.h>
#include <jcpp.h>

#undef IP_MULTICAST_IF
#undef IP_MULTICAST_LOOP
#undef IP_MULTICAST_TTL
#undef IP_TOS
#undef SO_BROADCAST
#undef SO_KEEPALIVE
#undef SO_LINGER
#undef SO_RCVBUF
#undef SO_REUSEADDR
#undef SO_REUSEPORT
#undef SO_SNDBUF
#undef TCP_NODELAY

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketOption = ::java::net::SocketOption;
using $StandardSocketOptions$StdSocketOption = ::java::net::StandardSocketOptions$StdSocketOption;

namespace java {
	namespace net {

$FieldInfo _StandardSocketOptions_FieldInfo_[] = {
	{"SO_BROADCAST", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Boolean;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardSocketOptions, SO_BROADCAST)},
	{"SO_KEEPALIVE", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Boolean;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardSocketOptions, SO_KEEPALIVE)},
	{"SO_SNDBUF", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardSocketOptions, SO_SNDBUF)},
	{"SO_RCVBUF", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardSocketOptions, SO_RCVBUF)},
	{"SO_REUSEADDR", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Boolean;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardSocketOptions, SO_REUSEADDR)},
	{"SO_REUSEPORT", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Boolean;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardSocketOptions, SO_REUSEPORT)},
	{"SO_LINGER", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardSocketOptions, SO_LINGER)},
	{"IP_TOS", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardSocketOptions, IP_TOS)},
	{"IP_MULTICAST_IF", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/net/NetworkInterface;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardSocketOptions, IP_MULTICAST_IF)},
	{"IP_MULTICAST_TTL", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardSocketOptions, IP_MULTICAST_TTL)},
	{"IP_MULTICAST_LOOP", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Boolean;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardSocketOptions, IP_MULTICAST_LOOP)},
	{"TCP_NODELAY", "Ljava/net/SocketOption;", "Ljava/net/SocketOption<Ljava/lang/Boolean;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardSocketOptions, TCP_NODELAY)},
	{}
};

$MethodInfo _StandardSocketOptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(StandardSocketOptions, init$, void)},
	{}
};

$InnerClassInfo _StandardSocketOptions_InnerClassesInfo_[] = {
	{"java.net.StandardSocketOptions$StdSocketOption", "java.net.StandardSocketOptions", "StdSocketOption", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _StandardSocketOptions_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.net.StandardSocketOptions",
	"java.lang.Object",
	nullptr,
	_StandardSocketOptions_FieldInfo_,
	_StandardSocketOptions_MethodInfo_,
	nullptr,
	nullptr,
	_StandardSocketOptions_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.StandardSocketOptions$StdSocketOption"
};

$Object* allocate$StandardSocketOptions($Class* clazz) {
	return $of($alloc(StandardSocketOptions));
}

$SocketOption* StandardSocketOptions::SO_BROADCAST = nullptr;
$SocketOption* StandardSocketOptions::SO_KEEPALIVE = nullptr;
$SocketOption* StandardSocketOptions::SO_SNDBUF = nullptr;
$SocketOption* StandardSocketOptions::SO_RCVBUF = nullptr;
$SocketOption* StandardSocketOptions::SO_REUSEADDR = nullptr;
$SocketOption* StandardSocketOptions::SO_REUSEPORT = nullptr;
$SocketOption* StandardSocketOptions::SO_LINGER = nullptr;
$SocketOption* StandardSocketOptions::IP_TOS = nullptr;
$SocketOption* StandardSocketOptions::IP_MULTICAST_IF = nullptr;
$SocketOption* StandardSocketOptions::IP_MULTICAST_TTL = nullptr;
$SocketOption* StandardSocketOptions::IP_MULTICAST_LOOP = nullptr;
$SocketOption* StandardSocketOptions::TCP_NODELAY = nullptr;

void StandardSocketOptions::init$() {
}

void clinit$StandardSocketOptions($Class* class$) {
	$load($Boolean);
	$assignStatic(StandardSocketOptions::SO_BROADCAST, $new($StandardSocketOptions$StdSocketOption, "SO_BROADCAST"_s, $Boolean::class$));
	$assignStatic(StandardSocketOptions::SO_KEEPALIVE, $new($StandardSocketOptions$StdSocketOption, "SO_KEEPALIVE"_s, $Boolean::class$));
	$load($Integer);
	$assignStatic(StandardSocketOptions::SO_SNDBUF, $new($StandardSocketOptions$StdSocketOption, "SO_SNDBUF"_s, $Integer::class$));
	$assignStatic(StandardSocketOptions::SO_RCVBUF, $new($StandardSocketOptions$StdSocketOption, "SO_RCVBUF"_s, $Integer::class$));
	$assignStatic(StandardSocketOptions::SO_REUSEADDR, $new($StandardSocketOptions$StdSocketOption, "SO_REUSEADDR"_s, $Boolean::class$));
	$assignStatic(StandardSocketOptions::SO_REUSEPORT, $new($StandardSocketOptions$StdSocketOption, "SO_REUSEPORT"_s, $Boolean::class$));
	$assignStatic(StandardSocketOptions::SO_LINGER, $new($StandardSocketOptions$StdSocketOption, "SO_LINGER"_s, $Integer::class$));
	$assignStatic(StandardSocketOptions::IP_TOS, $new($StandardSocketOptions$StdSocketOption, "IP_TOS"_s, $Integer::class$));
	$load($NetworkInterface);
	$assignStatic(StandardSocketOptions::IP_MULTICAST_IF, $new($StandardSocketOptions$StdSocketOption, "IP_MULTICAST_IF"_s, $NetworkInterface::class$));
	$assignStatic(StandardSocketOptions::IP_MULTICAST_TTL, $new($StandardSocketOptions$StdSocketOption, "IP_MULTICAST_TTL"_s, $Integer::class$));
	$assignStatic(StandardSocketOptions::IP_MULTICAST_LOOP, $new($StandardSocketOptions$StdSocketOption, "IP_MULTICAST_LOOP"_s, $Boolean::class$));
	$assignStatic(StandardSocketOptions::TCP_NODELAY, $new($StandardSocketOptions$StdSocketOption, "TCP_NODELAY"_s, $Boolean::class$));
}

StandardSocketOptions::StandardSocketOptions() {
}

$Class* StandardSocketOptions::load$($String* name, bool initialize) {
	$loadClass(StandardSocketOptions, name, initialize, &_StandardSocketOptions_ClassInfo_, clinit$StandardSocketOptions, allocate$StandardSocketOptions);
	return class$;
}

$Class* StandardSocketOptions::class$ = nullptr;

	} // net
} // java