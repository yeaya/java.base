#include <sun/nio/ch/WindowsSelectorImpl$FdMap.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/util/HashMap.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <sun/nio/ch/WindowsSelectorImpl$MapEntry.h>
#include <sun/nio/ch/WindowsSelectorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;
using $WindowsSelectorImpl$MapEntry = ::sun::nio::ch::WindowsSelectorImpl$MapEntry;

namespace sun {
	namespace nio {
		namespace ch {

void WindowsSelectorImpl$FdMap::init$() {
	$HashMap::init$();
}

$WindowsSelectorImpl$MapEntry* WindowsSelectorImpl$FdMap::get(int32_t desc) {
	return $cast($WindowsSelectorImpl$MapEntry, get($($Integer::valueOf(desc))));
}

$WindowsSelectorImpl$MapEntry* WindowsSelectorImpl$FdMap::put($SelectionKeyImpl* ski) {
	$useLocalObjectStack();
	$var($Object, var$0, $Integer::valueOf($nc(ski)->getFDVal()));
	return $cast($WindowsSelectorImpl$MapEntry, put(var$0, $$new($WindowsSelectorImpl$MapEntry, ski)));
}

$WindowsSelectorImpl$MapEntry* WindowsSelectorImpl$FdMap::remove($SelectionKeyImpl* ski) {
	$useLocalObjectStack();
	$var($Integer, fd, $Integer::valueOf($nc(ski)->getFDVal()));
	$var($WindowsSelectorImpl$MapEntry, x, $cast($WindowsSelectorImpl$MapEntry, get(fd)));
	bool var$0 = x != nullptr;
	if (var$0) {
		var$0 = $nc(x->ski)->channel() == ski->channel();
	}
	if (var$0) {
		return $cast($WindowsSelectorImpl$MapEntry, remove(fd));
	}
	return nullptr;
}

WindowsSelectorImpl$FdMap::WindowsSelectorImpl$FdMap() {
}

$Class* WindowsSelectorImpl$FdMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(WindowsSelectorImpl$FdMap, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsSelectorImpl$FdMap, init$, void)},
		{"get", "(I)Lsun/nio/ch/WindowsSelectorImpl$MapEntry;", nullptr, $PRIVATE, $method(WindowsSelectorImpl$FdMap, get, $WindowsSelectorImpl$MapEntry*, int32_t)},
		{"put", "(Lsun/nio/ch/SelectionKeyImpl;)Lsun/nio/ch/WindowsSelectorImpl$MapEntry;", nullptr, $PRIVATE, $method(WindowsSelectorImpl$FdMap, put, $WindowsSelectorImpl$MapEntry*, $SelectionKeyImpl*)},
		{"remove", "(Lsun/nio/ch/SelectionKeyImpl;)Lsun/nio/ch/WindowsSelectorImpl$MapEntry;", nullptr, $PRIVATE, $method(WindowsSelectorImpl$FdMap, remove, $WindowsSelectorImpl$MapEntry*, $SelectionKeyImpl*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.WindowsSelectorImpl$FdMap", "sun.nio.ch.WindowsSelectorImpl", "FdMap", $PRIVATE | $STATIC | $FINAL},
		{"sun.nio.ch.WindowsSelectorImpl$MapEntry", "sun.nio.ch.WindowsSelectorImpl", "MapEntry", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.nio.ch.WindowsSelectorImpl$FdMap",
		"java.util.HashMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/HashMap<Ljava/lang/Integer;Lsun/nio/ch/WindowsSelectorImpl$MapEntry;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.WindowsSelectorImpl"
	};
	$loadClass(WindowsSelectorImpl$FdMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsSelectorImpl$FdMap));
	});
	return class$;
}

$Class* WindowsSelectorImpl$FdMap::class$ = nullptr;

		} // ch
	} // nio
} // sun