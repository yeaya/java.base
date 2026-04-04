#include <sun/net/util/SocketExceptions.h>
#include <java/io/IOException.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/net/UnixDomainSocketAddress.h>
#include <java/nio/file/Path.h>
#include <java/security/AccessController.h>
#include <sun/net/util/SocketExceptions$1.h>
#include <sun/security/util/SecurityProperties.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $UnixDomainSocketAddress = ::java::net::UnixDomainSocketAddress;
using $AccessController = ::java::security::AccessController;
using $SocketExceptions$1 = ::sun::net::util::SocketExceptions$1;
using $SecurityProperties = ::sun::security::util::SecurityProperties;

namespace sun {
	namespace net {
		namespace util {

bool SocketExceptions::enhancedExceptionText = false;

void SocketExceptions::init$() {
}

$IOException* SocketExceptions::of($IOException* e, $SocketAddress* addr) {
	$init(SocketExceptions);
	if (!SocketExceptions::enhancedExceptionText || addr == nullptr) {
		return e;
	}
	if ($instanceOf($UnixDomainSocketAddress, addr)) {
		return ofUnixDomain(e, $cast($UnixDomainSocketAddress, addr));
	} else if ($instanceOf($InetSocketAddress, addr)) {
		return ofInet(e, $cast($InetSocketAddress, addr));
	} else {
		return e;
	}
}

$IOException* SocketExceptions::ofInet($IOException* e, $InetSocketAddress* addr) {
	$init(SocketExceptions);
	$useLocalObjectStack();
	int32_t port = $nc(addr)->getPort();
	$var($String, host, addr->getHostString());
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($nc(e)->getMessage()));
	sb->append(": "_s);
	sb->append(host);
	sb->append(u':');
	sb->append($($Integer::toString(port)));
	$var($String, enhancedMsg, sb->toString());
	return create(e, enhancedMsg);
}

$IOException* SocketExceptions::ofUnixDomain($IOException* e, $UnixDomainSocketAddress* addr) {
	$init(SocketExceptions);
	$useLocalObjectStack();
	$var($String, path, $$nc($nc(addr)->getPath())->toString());
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($nc(e)->getMessage()));
	sb->append(": "_s);
	sb->append(path);
	$var($String, enhancedMsg, sb->toString());
	return create(e, enhancedMsg);
}

$IOException* SocketExceptions::create($IOException* e, $String* msg) {
	$init(SocketExceptions);
	$beforeCallerSensitive();
	return $cast($IOException, $AccessController::doPrivileged($$new($SocketExceptions$1, e, msg)));
}

void SocketExceptions::clinit$($Class* clazz) {
	SocketExceptions::enhancedExceptionText = $SecurityProperties::includedInExceptions("hostInfo"_s);
}

SocketExceptions::SocketExceptions() {
}

$Class* SocketExceptions::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"enhancedExceptionText", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SocketExceptions, enhancedExceptionText)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SocketExceptions, init$, void)},
		{"create", "(Ljava/io/IOException;Ljava/lang/String;)Ljava/io/IOException;", nullptr, $PRIVATE | $STATIC, $staticMethod(SocketExceptions, create, $IOException*, $IOException*, $String*)},
		{"of", "(Ljava/io/IOException;Ljava/net/SocketAddress;)Ljava/io/IOException;", nullptr, $PUBLIC | $STATIC, $staticMethod(SocketExceptions, of, $IOException*, $IOException*, $SocketAddress*)},
		{"ofInet", "(Ljava/io/IOException;Ljava/net/InetSocketAddress;)Ljava/io/IOException;", nullptr, $PRIVATE | $STATIC, $staticMethod(SocketExceptions, ofInet, $IOException*, $IOException*, $InetSocketAddress*)},
		{"ofUnixDomain", "(Ljava/io/IOException;Ljava/net/UnixDomainSocketAddress;)Ljava/io/IOException;", nullptr, $PRIVATE | $STATIC, $staticMethod(SocketExceptions, ofUnixDomain, $IOException*, $IOException*, $UnixDomainSocketAddress*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.util.SocketExceptions$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.net.util.SocketExceptions",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.net.util.SocketExceptions$1"
	};
	$loadClass(SocketExceptions, name, initialize, &classInfo$$, SocketExceptions::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SocketExceptions);
	});
	return class$;
}

$Class* SocketExceptions::class$ = nullptr;

		} // util
	} // net
} // sun