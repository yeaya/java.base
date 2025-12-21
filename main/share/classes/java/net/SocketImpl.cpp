#include <java/net/SocketImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/AbstractPlainSocketImpl.h>
#include <java/net/InetAddress.h>
#include <java/net/PlainSocketImpl.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/net/SocketOptions.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <sun/net/NetProperties.h>
#include <sun/nio/ch/NioSocketImpl.h>
#include <jcpp.h>

#undef SO_TIMEOUT
#undef USE_PLAINSOCKETIMPL

using $FileDescriptor = ::java::io::FileDescriptor;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractPlainSocketImpl = ::java::net::AbstractPlainSocketImpl;
using $InetAddress = ::java::net::InetAddress;
using $PlainSocketImpl = ::java::net::PlainSocketImpl;
using $SocketOption = ::java::net::SocketOption;
using $SocketOptions = ::java::net::SocketOptions;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $NetProperties = ::sun::net::NetProperties;
using $NioSocketImpl = ::sun::nio::ch::NioSocketImpl;

namespace java {
	namespace net {

class SocketImpl$$Lambda$lambda$usePlainSocketImpl$0 : public $PrivilegedAction {
	$class(SocketImpl$$Lambda$lambda$usePlainSocketImpl$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(SocketImpl::lambda$usePlainSocketImpl$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SocketImpl$$Lambda$lambda$usePlainSocketImpl$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SocketImpl$$Lambda$lambda$usePlainSocketImpl$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SocketImpl$$Lambda$lambda$usePlainSocketImpl$0::*)()>(&SocketImpl$$Lambda$lambda$usePlainSocketImpl$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SocketImpl$$Lambda$lambda$usePlainSocketImpl$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.net.SocketImpl$$Lambda$lambda$usePlainSocketImpl$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* SocketImpl$$Lambda$lambda$usePlainSocketImpl$0::load$($String* name, bool initialize) {
	$loadClass(SocketImpl$$Lambda$lambda$usePlainSocketImpl$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SocketImpl$$Lambda$lambda$usePlainSocketImpl$0::class$ = nullptr;

$FieldInfo _SocketImpl_FieldInfo_[] = {
	{"USE_PLAINSOCKETIMPL", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SocketImpl, USE_PLAINSOCKETIMPL)},
	{"fd", "Ljava/io/FileDescriptor;", nullptr, $PROTECTED, $field(SocketImpl, fd)},
	{"address", "Ljava/net/InetAddress;", nullptr, $PROTECTED, $field(SocketImpl, address)},
	{"port", "I", nullptr, $PROTECTED, $field(SocketImpl, port)},
	{"localport", "I", nullptr, $PROTECTED, $field(SocketImpl, localport)},
	{}
};

$MethodInfo _SocketImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SocketImpl::*)()>(&SocketImpl::init$))},
	{"accept", "(Ljava/net/SocketImpl;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"available", "()I", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"bind", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"closeQuietly", "()V", nullptr, 0},
	{"connect", "(Ljava/lang/String;I)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"connect", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"connect", "(Ljava/net/SocketAddress;I)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"copyOptionsTo", "(Ljava/net/SocketImpl;)V", nullptr, 0},
	{"create", "(Z)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"createPlatformSocketImpl", "(Z)Ljava/net/SocketImpl;", "<S:Ljava/net/SocketImpl;:Lsun/net/PlatformSocketImpl;>(Z)TS;", $STATIC, $method(static_cast<SocketImpl*(*)(bool)>(&SocketImpl::createPlatformSocketImpl))},
	{"getFileDescriptor", "()Ljava/io/FileDescriptor;", nullptr, $PROTECTED},
	{"getInetAddress", "()Ljava/net/InetAddress;", nullptr, $PROTECTED},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getLocalPort", "()I", nullptr, $PROTECTED},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PROTECTED, nullptr, "java.io.IOException"},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getPort", "()I", nullptr, $PROTECTED},
	{"lambda$usePlainSocketImpl$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&SocketImpl::lambda$usePlainSocketImpl$0))},
	{"listen", "(I)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, 0},
	{"sendUrgentData", "(I)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PROTECTED, nullptr, "java.io.IOException"},
	{"setPerformancePreferences", "(III)V", nullptr, $PROTECTED},
	{"shutdownInput", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"shutdownOutput", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PROTECTED},
	{"supportsUrgentData", "()Z", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"usePlainSocketImpl", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&SocketImpl::usePlainSocketImpl))},
	{}
};

$ClassInfo _SocketImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.SocketImpl",
	"java.lang.Object",
	"java.net.SocketOptions",
	_SocketImpl_FieldInfo_,
	_SocketImpl_MethodInfo_
};

$Object* allocate$SocketImpl($Class* clazz) {
	return $of($alloc(SocketImpl));
}

bool SocketImpl::USE_PLAINSOCKETIMPL = false;

bool SocketImpl::usePlainSocketImpl() {
	$init(SocketImpl);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(SocketImpl$$Lambda$lambda$usePlainSocketImpl$0)));
	$var($String, s, $cast($String, $AccessController::doPrivileged(pa)));
	return (s != nullptr) && !s->equalsIgnoreCase("false"_s);
}

SocketImpl* SocketImpl::createPlatformSocketImpl(bool server) {
	$init(SocketImpl);
	if (SocketImpl::USE_PLAINSOCKETIMPL) {
		return static_cast<SocketImpl*>($new($PlainSocketImpl, server));
	} else {
		return static_cast<SocketImpl*>($new($NioSocketImpl, server));
	}
}

void SocketImpl::init$() {
}

void SocketImpl::closeQuietly() {
	try {
		close();
	} catch ($IOException& ignore) {
	}
}

void SocketImpl::shutdownInput() {
	$throwNew($IOException, "Method not implemented!"_s);
}

void SocketImpl::shutdownOutput() {
	$throwNew($IOException, "Method not implemented!"_s);
}

$FileDescriptor* SocketImpl::getFileDescriptor() {
	return this->fd;
}

$InetAddress* SocketImpl::getInetAddress() {
	return this->address;
}

int32_t SocketImpl::getPort() {
	return this->port;
}

bool SocketImpl::supportsUrgentData() {
	return false;
}

int32_t SocketImpl::getLocalPort() {
	return this->localport;
}

$String* SocketImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({"Socket[addr="_s, $(getInetAddress()), ",port="_s}));
	$var($String, var$2, $$concat(var$3, $$str(getPort())));
	$var($String, var$1, $$concat(var$2, ",localport="_s));
	$var($String, var$0, $$concat(var$1, $$str(getLocalPort())));
	return $concat(var$0, "]"_s);
}

void SocketImpl::reset() {
	$set(this, fd, nullptr);
	$set(this, address, nullptr);
	this->port = 0;
	this->localport = 0;
}

void SocketImpl::setPerformancePreferences(int32_t connectionTime, int32_t latency, int32_t bandwidth) {
}

void SocketImpl::setOption($SocketOption* name, Object$* value) {
	$Objects::requireNonNull(name);
	$throwNew($UnsupportedOperationException, $$str({"\'"_s, name, "\' not supported"_s}));
}

$Object* SocketImpl::getOption($SocketOption* name) {
	$Objects::requireNonNull(name);
	$throwNew($UnsupportedOperationException, $$str({"\'"_s, name, "\' not supported"_s}));
	$shouldNotReachHere();
}

void SocketImpl::copyOptionsTo(SocketImpl* target) {
	try {
		$var($Object, timeout, getOption($SocketOptions::SO_TIMEOUT));
		if ($instanceOf($Integer, timeout)) {
			$nc(target)->setOption($SocketOptions::SO_TIMEOUT, timeout);
		}
	} catch ($IOException& ignore) {
	}
}

$Set* SocketImpl::supportedOptions() {
	return $Set::of();
}

$String* SocketImpl::lambda$usePlainSocketImpl$0() {
	$init(SocketImpl);
	return $NetProperties::get("jdk.net.usePlainSocketImpl"_s);
}

void clinit$SocketImpl($Class* class$) {
	SocketImpl::USE_PLAINSOCKETIMPL = SocketImpl::usePlainSocketImpl();
}

SocketImpl::SocketImpl() {
}

$Class* SocketImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SocketImpl$$Lambda$lambda$usePlainSocketImpl$0::classInfo$.name)) {
			return SocketImpl$$Lambda$lambda$usePlainSocketImpl$0::load$(name, initialize);
		}
	}
	$loadClass(SocketImpl, name, initialize, &_SocketImpl_ClassInfo_, clinit$SocketImpl, allocate$SocketImpl);
	return class$;
}

$Class* SocketImpl::class$ = nullptr;

	} // net
} // java