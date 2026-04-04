#include <sun/nio/ch/SocketOptionRegistry.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/SocketOption.h>
#include <java/util/Map.h>
#include <sun/nio/ch/OptionKey.h>
#include <sun/nio/ch/SocketOptionRegistry$LazyInitialization.h>
#include <sun/nio/ch/SocketOptionRegistry$RegistryKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $SocketOption = ::java::net::SocketOption;
using $OptionKey = ::sun::nio::ch::OptionKey;
using $SocketOptionRegistry$LazyInitialization = ::sun::nio::ch::SocketOptionRegistry$LazyInitialization;
using $SocketOptionRegistry$RegistryKey = ::sun::nio::ch::SocketOptionRegistry$RegistryKey;

namespace sun {
	namespace nio {
		namespace ch {

void SocketOptionRegistry::init$() {
}

$OptionKey* SocketOptionRegistry::findOption($SocketOption* name, $ProtocolFamily* family) {
	$var($SocketOptionRegistry$RegistryKey, key, $new($SocketOptionRegistry$RegistryKey, name, family));
	$init($SocketOptionRegistry$LazyInitialization);
	return $cast($OptionKey, $nc($SocketOptionRegistry$LazyInitialization::options$)->get(key));
}

SocketOptionRegistry::SocketOptionRegistry() {
}

$Class* SocketOptionRegistry::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SocketOptionRegistry, init$, void)},
		{"findOption", "(Ljava/net/SocketOption;Ljava/net/ProtocolFamily;)Lsun/nio/ch/OptionKey;", "(Ljava/net/SocketOption<*>;Ljava/net/ProtocolFamily;)Lsun/nio/ch/OptionKey;", $PUBLIC | $STATIC, $staticMethod(SocketOptionRegistry, findOption, $OptionKey*, $SocketOption*, $ProtocolFamily*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.SocketOptionRegistry$LazyInitialization", "sun.nio.ch.SocketOptionRegistry", "LazyInitialization", $PRIVATE | $STATIC},
		{"sun.nio.ch.SocketOptionRegistry$RegistryKey", "sun.nio.ch.SocketOptionRegistry", "RegistryKey", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.SocketOptionRegistry",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.ch.SocketOptionRegistry$LazyInitialization,sun.nio.ch.SocketOptionRegistry$RegistryKey"
	};
	$loadClass(SocketOptionRegistry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketOptionRegistry);
	});
	return class$;
}

$Class* SocketOptionRegistry::class$ = nullptr;

		} // ch
	} // nio
} // sun