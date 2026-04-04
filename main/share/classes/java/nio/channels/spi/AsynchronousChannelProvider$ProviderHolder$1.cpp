#include <java/nio/channels/spi/AsynchronousChannelProvider$ProviderHolder$1.h>
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
using $DefaultAsynchronousChannelProvider = ::sun::nio::ch::DefaultAsynchronousChannelProvider;

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

void AsynchronousChannelProvider$ProviderHolder$1::init$() {
}

$Object* AsynchronousChannelProvider$ProviderHolder$1::run() {
	$var($AsynchronousChannelProvider, p, nullptr);
	$assign(p, $AsynchronousChannelProvider$ProviderHolder::loadProviderFromProperty());
	if (p != nullptr) {
		return p;
	}
	$assign(p, $AsynchronousChannelProvider$ProviderHolder::loadProviderAsService());
	if (p != nullptr) {
		return p;
	}
	return $DefaultAsynchronousChannelProvider::create();
}

AsynchronousChannelProvider$ProviderHolder$1::AsynchronousChannelProvider$ProviderHolder$1() {
}

$Class* AsynchronousChannelProvider$ProviderHolder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AsynchronousChannelProvider$ProviderHolder$1, init$, void)},
		{"run", "()Ljava/nio/channels/spi/AsynchronousChannelProvider;", nullptr, $PUBLIC, $virtualMethod(AsynchronousChannelProvider$ProviderHolder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.channels.spi.AsynchronousChannelProvider$ProviderHolder",
		"load",
		"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.channels.spi.AsynchronousChannelProvider$ProviderHolder", "java.nio.channels.spi.AsynchronousChannelProvider", "ProviderHolder", $PRIVATE | $STATIC},
		{"java.nio.channels.spi.AsynchronousChannelProvider$ProviderHolder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.channels.spi.AsynchronousChannelProvider$ProviderHolder$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/nio/channels/spi/AsynchronousChannelProvider;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.channels.spi.AsynchronousChannelProvider"
	};
	$loadClass(AsynchronousChannelProvider$ProviderHolder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsynchronousChannelProvider$ProviderHolder$1);
	});
	return class$;
}

$Class* AsynchronousChannelProvider$ProviderHolder$1::class$ = nullptr;

			} // spi
		} // channels
	} // nio
} // java