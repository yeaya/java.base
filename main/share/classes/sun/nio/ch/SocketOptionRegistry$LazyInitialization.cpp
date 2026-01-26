/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <sun/nio/ch/SocketOptionRegistry$LazyInitialization.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardProtocolFamily.h>
#include <java/net/StandardSocketOptions.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/nio/ch/ExtendedSocketOption.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/OptionKey.h>
#include <sun/nio/ch/SocketOptionRegistry$RegistryKey.h>
#include <sun/nio/ch/SocketOptionRegistry.h>
#include <jcpp.h>

#include <stdio.h>
#ifdef _WIN32
	#include <winsock2.h>
	#include <ws2tcpip.h>
#else
	#include <sys/types.h>
	#include <sys/socket.h>
	#include <netinet/in.h>
	#include <netinet/tcp.h>
#endif

/* Defines SO_REUSEPORT */
#if !defined(SO_REUSEPORT)
	#ifdef _WIN32
		#define SO_REUSEPORT 0
	#elif defined(__linux__)
		#define SO_REUSEPORT 15
	#elif defined(AIX) || defined(MACOSX)
		#define SO_REUSEPORT 0x0200
	#else
		#define SO_REUSEPORT 0
	#endif
#endif

#define CONST_DEF(x) const int32_t x##$ = x

CONST_DEF(SO_BROADCAST);
CONST_DEF(SO_KEEPALIVE);
CONST_DEF(SO_LINGER);
CONST_DEF(SO_SNDBUF);
CONST_DEF(IP_TOS);
CONST_DEF(IP_MULTICAST_IF);
CONST_DEF(SO_REUSEADDR);
CONST_DEF(TCP_NODELAY);
CONST_DEF(IP_MULTICAST_LOOP);
CONST_DEF(SO_RCVBUF);
CONST_DEF(SO_OOBINLINE);
CONST_DEF(SO_REUSEPORT);
CONST_DEF(IP_MULTICAST_TTL);

CONST_DEF(IPV6_TCLASS);
CONST_DEF(IPV6_MULTICAST_IF);
CONST_DEF(IPV6_MULTICAST_HOPS);
CONST_DEF(IPV6_MULTICAST_LOOP);

#undef IP_TOS
#undef SO_SNDBUF
#undef IP_MULTICAST_IF
#undef UNSPEC
#undef SO_REUSEADDR
#undef INET6
#undef TCP_NODELAY
#undef SO_LINGER
#undef IP_MULTICAST_LOOP
#undef SO_RCVBUF
#undef SO_KEEPALIVE
#undef INET
#undef SO_BROADCAST
#undef SO_OOBINLINE
#undef SO_REUSEPORT
#undef IP_MULTICAST_TTL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $SocketOption = ::java::net::SocketOption;
using $StandardProtocolFamily = ::java::net::StandardProtocolFamily;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $ExtendedSocketOption = ::sun::nio::ch::ExtendedSocketOption;
using $Net = ::sun::nio::ch::Net;
using $OptionKey = ::sun::nio::ch::OptionKey;
using $SocketOptionRegistry = ::sun::nio::ch::SocketOptionRegistry;
using $SocketOptionRegistry$RegistryKey = ::sun::nio::ch::SocketOptionRegistry$RegistryKey;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _SocketOptionRegistry$LazyInitialization_FieldInfo_[] = {
	{"options", "Ljava/util/Map;", "Ljava/util/Map<Lsun/nio/ch/SocketOptionRegistry$RegistryKey;Lsun/nio/ch/OptionKey;>;", $STATIC | $FINAL, $staticField(SocketOptionRegistry$LazyInitialization, options$)},
	{}
};

$MethodInfo _SocketOptionRegistry$LazyInitialization_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SocketOptionRegistry$LazyInitialization, init$, void)},
	{"options", "()Ljava/util/Map;", "()Ljava/util/Map<Lsun/nio/ch/SocketOptionRegistry$RegistryKey;Lsun/nio/ch/OptionKey;>;", $PRIVATE | $STATIC, $staticMethod(SocketOptionRegistry$LazyInitialization, options, $Map*)},
	{}
};

$InnerClassInfo _SocketOptionRegistry$LazyInitialization_InnerClassesInfo_[] = {
	{"sun.nio.ch.SocketOptionRegistry$LazyInitialization", "sun.nio.ch.SocketOptionRegistry", "LazyInitialization", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SocketOptionRegistry$LazyInitialization_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.SocketOptionRegistry$LazyInitialization",
	"java.lang.Object",
	nullptr,
	_SocketOptionRegistry$LazyInitialization_FieldInfo_,
	_SocketOptionRegistry$LazyInitialization_MethodInfo_,
	nullptr,
	nullptr,
	_SocketOptionRegistry$LazyInitialization_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.SocketOptionRegistry"
};

$Object* allocate$SocketOptionRegistry$LazyInitialization($Class* clazz) {
	return $of($alloc(SocketOptionRegistry$LazyInitialization));
}

$Map* SocketOptionRegistry$LazyInitialization::options$ = nullptr;

void SocketOptionRegistry$LazyInitialization::init$() {
}

$Map* SocketOptionRegistry$LazyInitialization::options() {
	$init(SocketOptionRegistry$LazyInitialization);
	$var($Map, map, $new($HashMap));
	$init($StandardSocketOptions);
	$init($Net);
	$var($Object, var$0, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::SO_BROADCAST, $Net::UNSPEC)));
	map->put(var$0, $$new($OptionKey, SOL_SOCKET, SO_BROADCAST$));
	$var($Object, var$1, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::SO_KEEPALIVE, $Net::UNSPEC)));
	map->put(var$1, $$new($OptionKey, SOL_SOCKET, SO_KEEPALIVE$));
	$var($Object, var$2, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::SO_LINGER, $Net::UNSPEC)));
	map->put(var$2, $$new($OptionKey, SOL_SOCKET, SO_LINGER$));
	$var($Object, var$3, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::SO_SNDBUF, $Net::UNSPEC)));
	map->put(var$3, $$new($OptionKey, SOL_SOCKET, SO_SNDBUF$));
	$var($Object, var$4, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::SO_RCVBUF, $Net::UNSPEC)));
	map->put(var$4, $$new($OptionKey, SOL_SOCKET, SO_RCVBUF$));
	$var($Object, var$5, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::SO_REUSEADDR, $Net::UNSPEC)));
	map->put(var$5, $$new($OptionKey, SOL_SOCKET, SO_REUSEADDR$));
	$var($Object, var$6, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::SO_REUSEPORT, $Net::UNSPEC)));
	map->put(var$6, $$new($OptionKey, SOL_SOCKET, SO_REUSEPORT$));

	// IPPROTO_TCP is 6
	$var($Object, var$7, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::TCP_NODELAY, $Net::UNSPEC)));
	map->put(var$7, $$new($OptionKey, 6, TCP_NODELAY$));

	$init($StandardProtocolFamily);
	// IPPROTO_IP is 0
	$var($Object, var$8, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::IP_TOS, $StandardProtocolFamily::INET)));
	map->put(var$8, $$new($OptionKey, 0, IP_TOS$));
	$var($Object, var$9, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::IP_MULTICAST_IF, $StandardProtocolFamily::INET)));
	map->put(var$9, $$new($OptionKey, 0, IP_MULTICAST_IF$));
	$var($Object, var$10, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::IP_MULTICAST_TTL, $StandardProtocolFamily::INET)));
	map->put(var$10, $$new($OptionKey, 0, IP_MULTICAST_TTL$));
	$var($Object, var$11, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::IP_MULTICAST_LOOP, $StandardProtocolFamily::INET)));
	map->put(var$11, $$new($OptionKey, 0, IP_MULTICAST_LOOP$));

#ifdef AF_INET6
	// IPPROTO_IPV6 is 41
	$var($Object, var$12, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::IP_TOS, $StandardProtocolFamily::INET6)));
	map->put(var$12, $$new($OptionKey, 41, IPV6_TCLASS$));
	$var($Object, var$13, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::IP_MULTICAST_IF, $StandardProtocolFamily::INET6)));
	map->put(var$13, $$new($OptionKey, 41, IPV6_MULTICAST_IF$));
	$var($Object, var$14, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::IP_MULTICAST_TTL, $StandardProtocolFamily::INET6)));
	map->put(var$14, $$new($OptionKey, 41, IPV6_MULTICAST_HOPS$));
	$var($Object, var$15, $of($new($SocketOptionRegistry$RegistryKey, $StandardSocketOptions::IP_MULTICAST_LOOP, $StandardProtocolFamily::INET6)));
	map->put(var$15, $$new($OptionKey, 41, IPV6_MULTICAST_LOOP$));
#endif

	$init($ExtendedSocketOption);
	$var($Object, var$16, $of($new($SocketOptionRegistry$RegistryKey, $ExtendedSocketOption::SO_OOBINLINE, $Net::UNSPEC)));
	map->put(var$16, $$new($OptionKey, SOL_SOCKET, SO_OOBINLINE$));
	return map;
}

void clinit$SocketOptionRegistry$LazyInitialization($Class* class$) {
	$assignStatic(SocketOptionRegistry$LazyInitialization::options$, SocketOptionRegistry$LazyInitialization::options());
}

SocketOptionRegistry$LazyInitialization::SocketOptionRegistry$LazyInitialization() {
}

$Class* SocketOptionRegistry$LazyInitialization::load$($String* name, bool initialize) {
	$loadClass(SocketOptionRegistry$LazyInitialization, name, initialize, &_SocketOptionRegistry$LazyInitialization_ClassInfo_, clinit$SocketOptionRegistry$LazyInitialization, allocate$SocketOptionRegistry$LazyInitialization);
	return class$;
}

$Class* SocketOptionRegistry$LazyInitialization::class$ = nullptr;

		} // ch
	} // nio
} // sun