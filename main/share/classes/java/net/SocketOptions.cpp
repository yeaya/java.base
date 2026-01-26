#include <java/net/SocketOptions.h>

#include <jcpp.h>

#undef IP_MULTICAST_IF
#undef IP_MULTICAST_IF2
#undef IP_MULTICAST_LOOP
#undef IP_TOS
#undef SO_BINDADDR
#undef SO_BROADCAST
#undef SO_KEEPALIVE
#undef SO_LINGER
#undef SO_OOBINLINE
#undef SO_RCVBUF
#undef SO_REUSEADDR
#undef SO_REUSEPORT
#undef SO_SNDBUF
#undef SO_TIMEOUT
#undef TCP_NODELAY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$FieldInfo _SocketOptions_FieldInfo_[] = {
	{"TCP_NODELAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, TCP_NODELAY)},
	{"SO_BINDADDR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, SO_BINDADDR)},
	{"SO_REUSEADDR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, SO_REUSEADDR)},
	{"SO_REUSEPORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, SO_REUSEPORT)},
	{"SO_BROADCAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, SO_BROADCAST)},
	{"IP_MULTICAST_IF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, IP_MULTICAST_IF)},
	{"IP_MULTICAST_IF2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, IP_MULTICAST_IF2)},
	{"IP_MULTICAST_LOOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, IP_MULTICAST_LOOP)},
	{"IP_TOS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, IP_TOS)},
	{"SO_LINGER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, SO_LINGER)},
	{"SO_TIMEOUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, SO_TIMEOUT)},
	{"SO_SNDBUF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, SO_SNDBUF)},
	{"SO_RCVBUF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, SO_RCVBUF)},
	{"SO_KEEPALIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, SO_KEEPALIVE)},
	{"SO_OOBINLINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SocketOptions, SO_OOBINLINE)},
	{}
};

$MethodInfo _SocketOptions_MethodInfo_[] = {
	{"getOption", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SocketOptions, getOption, $Object*, int32_t), "java.net.SocketException"},
	{"setOption", "(ILjava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SocketOptions, setOption, void, int32_t, Object$*), "java.net.SocketException"},
	{}
};

$ClassInfo _SocketOptions_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.net.SocketOptions",
	nullptr,
	nullptr,
	_SocketOptions_FieldInfo_,
	_SocketOptions_MethodInfo_
};

$Object* allocate$SocketOptions($Class* clazz) {
	return $of($alloc(SocketOptions));
}

$Class* SocketOptions::load$($String* name, bool initialize) {
	$loadClass(SocketOptions, name, initialize, &_SocketOptions_ClassInfo_, allocate$SocketOptions);
	return class$;
}

$Class* SocketOptions::class$ = nullptr;

	} // net
} // java