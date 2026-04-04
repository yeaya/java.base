#include <sun/nio/ch/DefaultAsynchronousChannelProvider.h>
#include <java/nio/channels/spi/AsynchronousChannelProvider.h>
#include <sun/nio/ch/LinuxAsynchronousChannelProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousChannelProvider = ::java::nio::channels::spi::AsynchronousChannelProvider;
using $LinuxAsynchronousChannelProvider = ::sun::nio::ch::LinuxAsynchronousChannelProvider;

namespace sun {
	namespace nio {
		namespace ch {

void DefaultAsynchronousChannelProvider::init$() {
}

$AsynchronousChannelProvider* DefaultAsynchronousChannelProvider::create() {
	return $new($LinuxAsynchronousChannelProvider);
}

DefaultAsynchronousChannelProvider::DefaultAsynchronousChannelProvider() {
}

$Class* DefaultAsynchronousChannelProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DefaultAsynchronousChannelProvider, init$, void)},
		{"create", "()Ljava/nio/channels/spi/AsynchronousChannelProvider;", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultAsynchronousChannelProvider, create, $AsynchronousChannelProvider*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.ch.DefaultAsynchronousChannelProvider",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultAsynchronousChannelProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultAsynchronousChannelProvider);
	});
	return class$;
}

$Class* DefaultAsynchronousChannelProvider::class$ = nullptr;

		} // ch
	} // nio
} // sun