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
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InetAddress = ::java::net::InetAddress;
using $PlainSocketImpl = ::java::net::PlainSocketImpl;
using $SocketAddress = ::java::net::SocketAddress;
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
};
$Class* SocketImpl$$Lambda$lambda$usePlainSocketImpl$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SocketImpl$$Lambda$lambda$usePlainSocketImpl$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SocketImpl$$Lambda$lambda$usePlainSocketImpl$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.SocketImpl$$Lambda$lambda$usePlainSocketImpl$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(SocketImpl$$Lambda$lambda$usePlainSocketImpl$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketImpl$$Lambda$lambda$usePlainSocketImpl$0);
	});
	return class$;
}
$Class* SocketImpl$$Lambda$lambda$usePlainSocketImpl$0::class$ = nullptr;

bool SocketImpl::USE_PLAINSOCKETIMPL = false;

bool SocketImpl::usePlainSocketImpl() {
	$init(SocketImpl);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, $new(SocketImpl$$Lambda$lambda$usePlainSocketImpl$0));
	$var($String, s, $cast($String, $AccessController::doPrivileged(pa)));
	return (s != nullptr) && !s->equalsIgnoreCase("false"_s);
}

SocketImpl* SocketImpl::createPlatformSocketImpl(bool server) {
	$init(SocketImpl);
	if (SocketImpl::USE_PLAINSOCKETIMPL) {
		return $cast(SocketImpl, $new($PlainSocketImpl, server));
	} else {
		return $cast(SocketImpl, $new($NioSocketImpl, server));
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
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("Socket[addr="_s);
	var$0->append($(getInetAddress()));
	var$0->append(",port="_s);
	var$0->append(getPort());
	var$0->append(",localport="_s);
	var$0->append(getLocalPort());
	var$0->append("]"_s);
	return $str(var$0);
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

void SocketImpl::clinit$($Class* clazz) {
	SocketImpl::USE_PLAINSOCKETIMPL = SocketImpl::usePlainSocketImpl();
}

SocketImpl::SocketImpl() {
}

$Class* SocketImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.net.SocketImpl$$Lambda$lambda$usePlainSocketImpl$0")) {
			return SocketImpl$$Lambda$lambda$usePlainSocketImpl$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"USE_PLAINSOCKETIMPL", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SocketImpl, USE_PLAINSOCKETIMPL)},
		{"fd", "Ljava/io/FileDescriptor;", nullptr, $PROTECTED, $field(SocketImpl, fd)},
		{"address", "Ljava/net/InetAddress;", nullptr, $PROTECTED, $field(SocketImpl, address)},
		{"port", "I", nullptr, $PROTECTED, $field(SocketImpl, port)},
		{"localport", "I", nullptr, $PROTECTED, $field(SocketImpl, localport)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SocketImpl, init$, void)},
		{"accept", "(Ljava/net/SocketImpl;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SocketImpl, accept, void, SocketImpl*), "java.io.IOException"},
		{"available", "()I", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SocketImpl, available, int32_t), "java.io.IOException"},
		{"bind", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SocketImpl, bind, void, $InetAddress*, int32_t), "java.io.IOException"},
		{"close", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SocketImpl, close, void), "java.io.IOException"},
		{"closeQuietly", "()V", nullptr, 0, $virtualMethod(SocketImpl, closeQuietly, void)},
		{"connect", "(Ljava/lang/String;I)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SocketImpl, connect, void, $String*, int32_t), "java.io.IOException"},
		{"connect", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SocketImpl, connect, void, $InetAddress*, int32_t), "java.io.IOException"},
		{"connect", "(Ljava/net/SocketAddress;I)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SocketImpl, connect, void, $SocketAddress*, int32_t), "java.io.IOException"},
		{"copyOptionsTo", "(Ljava/net/SocketImpl;)V", nullptr, 0, $virtualMethod(SocketImpl, copyOptionsTo, void, SocketImpl*)},
		{"create", "(Z)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SocketImpl, create, void, bool), "java.io.IOException"},
		{"createPlatformSocketImpl", "(Z)Ljava/net/SocketImpl;", "<S:Ljava/net/SocketImpl;:Lsun/net/PlatformSocketImpl;>(Z)TS;", $STATIC, $staticMethod(SocketImpl, createPlatformSocketImpl, SocketImpl*, bool)},
		{"getFileDescriptor", "()Ljava/io/FileDescriptor;", nullptr, $PROTECTED, $virtualMethod(SocketImpl, getFileDescriptor, $FileDescriptor*)},
		{"getInetAddress", "()Ljava/net/InetAddress;", nullptr, $PROTECTED, $virtualMethod(SocketImpl, getInetAddress, $InetAddress*)},
		{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SocketImpl, getInputStream, $InputStream*), "java.io.IOException"},
		{"getLocalPort", "()I", nullptr, $PROTECTED, $virtualMethod(SocketImpl, getLocalPort, int32_t)},
		{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PROTECTED, $virtualMethod(SocketImpl, getOption, $Object*, $SocketOption*), "java.io.IOException"},
		{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SocketImpl, getOutputStream, $OutputStream*), "java.io.IOException"},
		{"getPort", "()I", nullptr, $PROTECTED, $virtualMethod(SocketImpl, getPort, int32_t)},
		{"lambda$usePlainSocketImpl$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SocketImpl, lambda$usePlainSocketImpl$0, $String*)},
		{"listen", "(I)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SocketImpl, listen, void, int32_t), "java.io.IOException"},
		{"reset", "()V", nullptr, 0, $virtualMethod(SocketImpl, reset, void)},
		{"sendUrgentData", "(I)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SocketImpl, sendUrgentData, void, int32_t), "java.io.IOException"},
		{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PROTECTED, $virtualMethod(SocketImpl, setOption, void, $SocketOption*, Object$*), "java.io.IOException"},
		{"setPerformancePreferences", "(III)V", nullptr, $PROTECTED, $virtualMethod(SocketImpl, setPerformancePreferences, void, int32_t, int32_t, int32_t)},
		{"shutdownInput", "()V", nullptr, $PROTECTED, $virtualMethod(SocketImpl, shutdownInput, void), "java.io.IOException"},
		{"shutdownOutput", "()V", nullptr, $PROTECTED, $virtualMethod(SocketImpl, shutdownOutput, void), "java.io.IOException"},
		{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PROTECTED, $virtualMethod(SocketImpl, supportedOptions, $Set*)},
		{"supportsUrgentData", "()Z", nullptr, $PROTECTED, $virtualMethod(SocketImpl, supportsUrgentData, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SocketImpl, toString, $String*)},
		{"usePlainSocketImpl", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(SocketImpl, usePlainSocketImpl, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.net.SocketImpl",
		"java.lang.Object",
		"java.net.SocketOptions",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SocketImpl, name, initialize, &classInfo$$, SocketImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SocketImpl);
	});
	return class$;
}

$Class* SocketImpl::class$ = nullptr;

	} // net
} // java