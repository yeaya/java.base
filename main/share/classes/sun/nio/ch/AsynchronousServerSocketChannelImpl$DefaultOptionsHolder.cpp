#include <sun/nio/ch/AsynchronousServerSocketChannelImpl$DefaultOptionsHolder.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <sun/net/ext/ExtendedSocketOptions.h>
#include <sun/nio/ch/AsynchronousServerSocketChannelImpl.h>
#include <sun/nio/ch/Net.h>
#include <jcpp.h>

#undef SO_RCVBUF
#undef SO_REUSEADDR
#undef SO_REUSEPORT

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

$Set* AsynchronousServerSocketChannelImpl$DefaultOptionsHolder::defaultOptions$ = nullptr;

void AsynchronousServerSocketChannelImpl$DefaultOptionsHolder::init$() {
}

$Set* AsynchronousServerSocketChannelImpl$DefaultOptionsHolder::defaultOptions() {
	$init(AsynchronousServerSocketChannelImpl$DefaultOptionsHolder);
	$useLocalObjectStack();
	$var($HashSet, set, $new($HashSet, 2));
	$init($StandardSocketOptions);
	set->add($StandardSocketOptions::SO_RCVBUF);
	set->add($StandardSocketOptions::SO_REUSEADDR);
	if ($Net::isReusePortAvailable()) {
		set->add($StandardSocketOptions::SO_REUSEPORT);
	}
	set->addAll($($ExtendedSocketOptions::serverSocketOptions()));
	return $Collections::unmodifiableSet(set);
}

void AsynchronousServerSocketChannelImpl$DefaultOptionsHolder::clinit$($Class* clazz) {
	$assignStatic(AsynchronousServerSocketChannelImpl$DefaultOptionsHolder::defaultOptions$, AsynchronousServerSocketChannelImpl$DefaultOptionsHolder::defaultOptions());
}

AsynchronousServerSocketChannelImpl$DefaultOptionsHolder::AsynchronousServerSocketChannelImpl$DefaultOptionsHolder() {
}

$Class* AsynchronousServerSocketChannelImpl$DefaultOptionsHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultOptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $STATIC | $FINAL, $staticField(AsynchronousServerSocketChannelImpl$DefaultOptionsHolder, defaultOptions$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AsynchronousServerSocketChannelImpl$DefaultOptionsHolder, init$, void)},
		{"defaultOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $STATIC, $staticMethod(AsynchronousServerSocketChannelImpl$DefaultOptionsHolder, defaultOptions, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.AsynchronousServerSocketChannelImpl$DefaultOptionsHolder", "sun.nio.ch.AsynchronousServerSocketChannelImpl", "DefaultOptionsHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.AsynchronousServerSocketChannelImpl$DefaultOptionsHolder",
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
		"sun.nio.ch.AsynchronousServerSocketChannelImpl"
	};
	$loadClass(AsynchronousServerSocketChannelImpl$DefaultOptionsHolder, name, initialize, &classInfo$$, AsynchronousServerSocketChannelImpl$DefaultOptionsHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AsynchronousServerSocketChannelImpl$DefaultOptionsHolder);
	});
	return class$;
}

$Class* AsynchronousServerSocketChannelImpl$DefaultOptionsHolder::class$ = nullptr;

		} // ch
	} // nio
} // sun