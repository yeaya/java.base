#include <sun/nio/ch/AsynchronousSocketChannelImpl$DefaultOptionsHolder.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <sun/net/ext/ExtendedSocketOptions.h>
#include <sun/nio/ch/AsynchronousSocketChannelImpl.h>
#include <sun/nio/ch/Net.h>
#include <jcpp.h>

#undef SO_KEEPALIVE
#undef SO_RCVBUF
#undef SO_REUSEADDR
#undef SO_REUSEPORT
#undef SO_SNDBUF
#undef TCP_NODELAY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $ExtendedSocketOptions = ::sun::net::ext::ExtendedSocketOptions;
using $Net = ::sun::nio::ch::Net;

namespace sun {
	namespace nio {
		namespace ch {

$Set* AsynchronousSocketChannelImpl$DefaultOptionsHolder::defaultOptions$ = nullptr;

void AsynchronousSocketChannelImpl$DefaultOptionsHolder::init$() {
}

$Set* AsynchronousSocketChannelImpl$DefaultOptionsHolder::defaultOptions() {
	$init(AsynchronousSocketChannelImpl$DefaultOptionsHolder);
	$useLocalObjectStack();
	$var($HashSet, set, $new($HashSet, 5));
	$init($StandardSocketOptions);
	set->add($StandardSocketOptions::SO_SNDBUF);
	set->add($StandardSocketOptions::SO_RCVBUF);
	set->add($StandardSocketOptions::SO_KEEPALIVE);
	set->add($StandardSocketOptions::SO_REUSEADDR);
	if ($Net::isReusePortAvailable()) {
		set->add($StandardSocketOptions::SO_REUSEPORT);
	}
	set->add($StandardSocketOptions::TCP_NODELAY);
	set->addAll($($ExtendedSocketOptions::clientSocketOptions()));
	return $Collections::unmodifiableSet(set);
}

void AsynchronousSocketChannelImpl$DefaultOptionsHolder::clinit$($Class* clazz) {
	$assignStatic(AsynchronousSocketChannelImpl$DefaultOptionsHolder::defaultOptions$, AsynchronousSocketChannelImpl$DefaultOptionsHolder::defaultOptions());
}

AsynchronousSocketChannelImpl$DefaultOptionsHolder::AsynchronousSocketChannelImpl$DefaultOptionsHolder() {
}

$Class* AsynchronousSocketChannelImpl$DefaultOptionsHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultOptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $STATIC | $FINAL, $staticField(AsynchronousSocketChannelImpl$DefaultOptionsHolder, defaultOptions$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AsynchronousSocketChannelImpl$DefaultOptionsHolder, init$, void)},
		{"defaultOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $STATIC, $staticMethod(AsynchronousSocketChannelImpl$DefaultOptionsHolder, defaultOptions, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.AsynchronousSocketChannelImpl$DefaultOptionsHolder", "sun.nio.ch.AsynchronousSocketChannelImpl", "DefaultOptionsHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.AsynchronousSocketChannelImpl$DefaultOptionsHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.AsynchronousSocketChannelImpl"
	};
	$loadClass(AsynchronousSocketChannelImpl$DefaultOptionsHolder, name, initialize, &classInfo$$, AsynchronousSocketChannelImpl$DefaultOptionsHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AsynchronousSocketChannelImpl$DefaultOptionsHolder);
	});
	return class$;
}

$Class* AsynchronousSocketChannelImpl$DefaultOptionsHolder::class$ = nullptr;

		} // ch
	} // nio
} // sun