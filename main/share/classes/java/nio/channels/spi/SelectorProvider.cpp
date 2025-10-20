#include <java/nio/channels/spi/SelectorProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ProtocolFamily.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractSelector.h>
#include <java/nio/channels/spi/SelectorProvider$Holder.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $Channel = ::java::nio::channels::Channel;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $Pipe = ::java::nio::channels::Pipe;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractSelector = ::java::nio::channels::spi::AbstractSelector;
using $SelectorProvider$Holder = ::java::nio::channels::spi::SelectorProvider$Holder;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Objects = ::java::util::Objects;

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

$MethodInfo _SelectorProvider_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(static_cast<void(SelectorProvider::*)($Void*)>(&SelectorProvider::init$))},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SelectorProvider::*)()>(&SelectorProvider::init$))},
	{"checkPermission", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Void*(*)()>(&SelectorProvider::checkPermission))},
	{"inheritedChannel", "()Ljava/nio/channels/Channel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openDatagramChannel", "()Ljava/nio/channels/DatagramChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"openDatagramChannel", "(Ljava/net/ProtocolFamily;)Ljava/nio/channels/DatagramChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"openPipe", "()Ljava/nio/channels/Pipe;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"openSelector", "()Ljava/nio/channels/spi/AbstractSelector;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"openServerSocketChannel", "()Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"openServerSocketChannel", "(Ljava/net/ProtocolFamily;)Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openSocketChannel", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"openSocketChannel", "(Ljava/net/ProtocolFamily;)Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"provider", "()Ljava/nio/channels/spi/SelectorProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SelectorProvider*(*)()>(&SelectorProvider::provider))},
	{}
};

$InnerClassInfo _SelectorProvider_InnerClassesInfo_[] = {
	{"java.nio.channels.spi.SelectorProvider$Holder", "java.nio.channels.spi.SelectorProvider", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SelectorProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.spi.SelectorProvider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SelectorProvider_MethodInfo_,
	nullptr,
	nullptr,
	_SelectorProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.channels.spi.SelectorProvider$Holder"
};

$Object* allocate$SelectorProvider($Class* clazz) {
	return $of($alloc(SelectorProvider));
}

$Void* SelectorProvider::checkPermission() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "selectorProvider"_s));
	}
	return nullptr;
}

void SelectorProvider::init$($Void* ignore) {
}

void SelectorProvider::init$() {
	SelectorProvider::init$($(checkPermission()));
}

SelectorProvider* SelectorProvider::provider() {
	$init($SelectorProvider$Holder);
	return $SelectorProvider$Holder::INSTANCE;
}

$Channel* SelectorProvider::inheritedChannel() {
	return nullptr;
}

$SocketChannel* SelectorProvider::openSocketChannel($ProtocolFamily* family) {
	$Objects::requireNonNull(family);
	$throwNew($UnsupportedOperationException, "Protocol family not supported"_s);
	$shouldNotReachHere();
}

$ServerSocketChannel* SelectorProvider::openServerSocketChannel($ProtocolFamily* family) {
	$Objects::requireNonNull(family);
	$throwNew($UnsupportedOperationException, "Protocol family not supported"_s);
	$shouldNotReachHere();
}

SelectorProvider::SelectorProvider() {
}

$Class* SelectorProvider::load$($String* name, bool initialize) {
	$loadClass(SelectorProvider, name, initialize, &_SelectorProvider_ClassInfo_, allocate$SelectorProvider);
	return class$;
}

$Class* SelectorProvider::class$ = nullptr;

			} // spi
		} // channels
	} // nio
} // java