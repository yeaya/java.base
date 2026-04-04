#include <sun/nio/ch/ServerSocketChannelImpl$DefaultOptionsHolder.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <sun/net/ext/ExtendedSocketOptions.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/ServerSocketChannelImpl.h>
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

$Set* ServerSocketChannelImpl$DefaultOptionsHolder::defaultInetOptions$ = nullptr;
$Set* ServerSocketChannelImpl$DefaultOptionsHolder::defaultUnixDomainOptions$ = nullptr;

void ServerSocketChannelImpl$DefaultOptionsHolder::init$() {
}

$Set* ServerSocketChannelImpl$DefaultOptionsHolder::defaultInetOptions() {
	$init(ServerSocketChannelImpl$DefaultOptionsHolder);
	$useLocalObjectStack();
	$var($HashSet, set, $new($HashSet));
	$init($StandardSocketOptions);
	set->add($StandardSocketOptions::SO_RCVBUF);
	set->add($StandardSocketOptions::SO_REUSEADDR);
	if ($Net::isReusePortAvailable()) {
		set->add($StandardSocketOptions::SO_REUSEPORT);
	}
	set->addAll($($ExtendedSocketOptions::serverSocketOptions()));
	return $Collections::unmodifiableSet(set);
}

$Set* ServerSocketChannelImpl$DefaultOptionsHolder::defaultUnixDomainOptions() {
	$init(ServerSocketChannelImpl$DefaultOptionsHolder);
	$var($HashSet, set, $new($HashSet));
	$init($StandardSocketOptions);
	set->add($StandardSocketOptions::SO_RCVBUF);
	return $Collections::unmodifiableSet(set);
}

void ServerSocketChannelImpl$DefaultOptionsHolder::clinit$($Class* clazz) {
	$assignStatic(ServerSocketChannelImpl$DefaultOptionsHolder::defaultInetOptions$, ServerSocketChannelImpl$DefaultOptionsHolder::defaultInetOptions());
	$assignStatic(ServerSocketChannelImpl$DefaultOptionsHolder::defaultUnixDomainOptions$, ServerSocketChannelImpl$DefaultOptionsHolder::defaultUnixDomainOptions());
}

ServerSocketChannelImpl$DefaultOptionsHolder::ServerSocketChannelImpl$DefaultOptionsHolder() {
}

$Class* ServerSocketChannelImpl$DefaultOptionsHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultInetOptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $STATIC | $FINAL, $staticField(ServerSocketChannelImpl$DefaultOptionsHolder, defaultInetOptions$)},
		{"defaultUnixDomainOptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $STATIC | $FINAL, $staticField(ServerSocketChannelImpl$DefaultOptionsHolder, defaultUnixDomainOptions$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ServerSocketChannelImpl$DefaultOptionsHolder, init$, void)},
		{"defaultInetOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $STATIC, $staticMethod(ServerSocketChannelImpl$DefaultOptionsHolder, defaultInetOptions, $Set*)},
		{"defaultUnixDomainOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $STATIC, $staticMethod(ServerSocketChannelImpl$DefaultOptionsHolder, defaultUnixDomainOptions, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.ServerSocketChannelImpl$DefaultOptionsHolder", "sun.nio.ch.ServerSocketChannelImpl", "DefaultOptionsHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.ServerSocketChannelImpl$DefaultOptionsHolder",
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
		"sun.nio.ch.ServerSocketChannelImpl"
	};
	$loadClass(ServerSocketChannelImpl$DefaultOptionsHolder, name, initialize, &classInfo$$, ServerSocketChannelImpl$DefaultOptionsHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ServerSocketChannelImpl$DefaultOptionsHolder);
	});
	return class$;
}

$Class* ServerSocketChannelImpl$DefaultOptionsHolder::class$ = nullptr;

		} // ch
	} // nio
} // sun