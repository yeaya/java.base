#include <java/nio/channels/spi/AsynchronousChannelProvider$ProviderHolder$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/spi/AsynchronousChannelProvider$ProviderHolder.h>
#include <java/nio/channels/spi/AsynchronousChannelProvider.h>
#include <sun/nio/ch/DefaultAsynchronousChannelProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousChannelProvider = ::java::nio::channels::spi::AsynchronousChannelProvider;
using $AsynchronousChannelProvider$ProviderHolder = ::java::nio::channels::spi::AsynchronousChannelProvider$ProviderHolder;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $DefaultAsynchronousChannelProvider = ::sun::nio::ch::DefaultAsynchronousChannelProvider;

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

$MethodInfo _AsynchronousChannelProvider$ProviderHolder$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AsynchronousChannelProvider$ProviderHolder$1::*)()>(&AsynchronousChannelProvider$ProviderHolder$1::init$))},
	{"run", "()Ljava/nio/channels/spi/AsynchronousChannelProvider;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AsynchronousChannelProvider$ProviderHolder$1_EnclosingMethodInfo_ = {
	"java.nio.channels.spi.AsynchronousChannelProvider$ProviderHolder",
	"load",
	"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
};

$InnerClassInfo _AsynchronousChannelProvider$ProviderHolder$1_InnerClassesInfo_[] = {
	{"java.nio.channels.spi.AsynchronousChannelProvider$ProviderHolder", "java.nio.channels.spi.AsynchronousChannelProvider", "ProviderHolder", $PRIVATE | $STATIC},
	{"java.nio.channels.spi.AsynchronousChannelProvider$ProviderHolder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AsynchronousChannelProvider$ProviderHolder$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.channels.spi.AsynchronousChannelProvider$ProviderHolder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_AsynchronousChannelProvider$ProviderHolder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/nio/channels/spi/AsynchronousChannelProvider;>;",
	&_AsynchronousChannelProvider$ProviderHolder$1_EnclosingMethodInfo_,
	_AsynchronousChannelProvider$ProviderHolder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.channels.spi.AsynchronousChannelProvider"
};

$Object* allocate$AsynchronousChannelProvider$ProviderHolder$1($Class* clazz) {
	return $of($alloc(AsynchronousChannelProvider$ProviderHolder$1));
}

void AsynchronousChannelProvider$ProviderHolder$1::init$() {
}

$Object* AsynchronousChannelProvider$ProviderHolder$1::run() {
	$var($AsynchronousChannelProvider, p, nullptr);
	$assign(p, $AsynchronousChannelProvider$ProviderHolder::loadProviderFromProperty());
	if (p != nullptr) {
		return $of(p);
	}
	$assign(p, $AsynchronousChannelProvider$ProviderHolder::loadProviderAsService());
	if (p != nullptr) {
		return $of(p);
	}
	return $of($DefaultAsynchronousChannelProvider::create());
}

AsynchronousChannelProvider$ProviderHolder$1::AsynchronousChannelProvider$ProviderHolder$1() {
}

$Class* AsynchronousChannelProvider$ProviderHolder$1::load$($String* name, bool initialize) {
	$loadClass(AsynchronousChannelProvider$ProviderHolder$1, name, initialize, &_AsynchronousChannelProvider$ProviderHolder$1_ClassInfo_, allocate$AsynchronousChannelProvider$ProviderHolder$1);
	return class$;
}

$Class* AsynchronousChannelProvider$ProviderHolder$1::class$ = nullptr;

			} // spi
		} // channels
	} // nio
} // java