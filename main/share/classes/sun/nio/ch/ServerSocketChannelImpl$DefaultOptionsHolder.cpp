#include <sun/nio/ch/ServerSocketChannelImpl$DefaultOptionsHolder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
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
using $SocketOption = ::java::net::SocketOption;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $ExtendedSocketOptions = ::sun::net::ext::ExtendedSocketOptions;
using $Net = ::sun::nio::ch::Net;
using $ServerSocketChannelImpl = ::sun::nio::ch::ServerSocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _ServerSocketChannelImpl$DefaultOptionsHolder_FieldInfo_[] = {
	{"defaultInetOptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $STATIC | $FINAL, $staticField(ServerSocketChannelImpl$DefaultOptionsHolder, defaultInetOptions$)},
	{"defaultUnixDomainOptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $STATIC | $FINAL, $staticField(ServerSocketChannelImpl$DefaultOptionsHolder, defaultUnixDomainOptions$)},
	{}
};

$MethodInfo _ServerSocketChannelImpl$DefaultOptionsHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerSocketChannelImpl$DefaultOptionsHolder::*)()>(&ServerSocketChannelImpl$DefaultOptionsHolder::init$))},
	{"defaultInetOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $STATIC, $method(static_cast<$Set*(*)()>(&ServerSocketChannelImpl$DefaultOptionsHolder::defaultInetOptions))},
	{"defaultUnixDomainOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $STATIC, $method(static_cast<$Set*(*)()>(&ServerSocketChannelImpl$DefaultOptionsHolder::defaultUnixDomainOptions))},
	{}
};

$InnerClassInfo _ServerSocketChannelImpl$DefaultOptionsHolder_InnerClassesInfo_[] = {
	{"sun.nio.ch.ServerSocketChannelImpl$DefaultOptionsHolder", "sun.nio.ch.ServerSocketChannelImpl", "DefaultOptionsHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ServerSocketChannelImpl$DefaultOptionsHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.ServerSocketChannelImpl$DefaultOptionsHolder",
	"java.lang.Object",
	nullptr,
	_ServerSocketChannelImpl$DefaultOptionsHolder_FieldInfo_,
	_ServerSocketChannelImpl$DefaultOptionsHolder_MethodInfo_,
	nullptr,
	nullptr,
	_ServerSocketChannelImpl$DefaultOptionsHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.ServerSocketChannelImpl"
};

$Object* allocate$ServerSocketChannelImpl$DefaultOptionsHolder($Class* clazz) {
	return $of($alloc(ServerSocketChannelImpl$DefaultOptionsHolder));
}

$Set* ServerSocketChannelImpl$DefaultOptionsHolder::defaultInetOptions$ = nullptr;
$Set* ServerSocketChannelImpl$DefaultOptionsHolder::defaultUnixDomainOptions$ = nullptr;

void ServerSocketChannelImpl$DefaultOptionsHolder::init$() {
}

$Set* ServerSocketChannelImpl$DefaultOptionsHolder::defaultInetOptions() {
	$init(ServerSocketChannelImpl$DefaultOptionsHolder);
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

void clinit$ServerSocketChannelImpl$DefaultOptionsHolder($Class* class$) {
	$assignStatic(ServerSocketChannelImpl$DefaultOptionsHolder::defaultInetOptions$, ServerSocketChannelImpl$DefaultOptionsHolder::defaultInetOptions());
	$assignStatic(ServerSocketChannelImpl$DefaultOptionsHolder::defaultUnixDomainOptions$, ServerSocketChannelImpl$DefaultOptionsHolder::defaultUnixDomainOptions());
}

ServerSocketChannelImpl$DefaultOptionsHolder::ServerSocketChannelImpl$DefaultOptionsHolder() {
}

$Class* ServerSocketChannelImpl$DefaultOptionsHolder::load$($String* name, bool initialize) {
	$loadClass(ServerSocketChannelImpl$DefaultOptionsHolder, name, initialize, &_ServerSocketChannelImpl$DefaultOptionsHolder_ClassInfo_, clinit$ServerSocketChannelImpl$DefaultOptionsHolder, allocate$ServerSocketChannelImpl$DefaultOptionsHolder);
	return class$;
}

$Class* ServerSocketChannelImpl$DefaultOptionsHolder::class$ = nullptr;

		} // ch
	} // nio
} // sun