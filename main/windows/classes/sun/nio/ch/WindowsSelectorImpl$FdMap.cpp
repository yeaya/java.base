#include <sun/nio/ch/WindowsSelectorImpl$FdMap.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $HashMap = ::java::util::HashMap;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;
using $WindowsSelectorImpl = ::sun::nio::ch::WindowsSelectorImpl;
using $WindowsSelectorImpl$MapEntry = ::sun::nio::ch::WindowsSelectorImpl$MapEntry;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _WindowsSelectorImpl$FdMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(WindowsSelectorImpl$FdMap, serialVersionUID)},
	{}
};

$MethodInfo _WindowsSelectorImpl$FdMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsSelectorImpl$FdMap::*)()>(&WindowsSelectorImpl$FdMap::init$))},
	{"get", "(I)Lsun/nio/ch/WindowsSelectorImpl$MapEntry;", nullptr, $PRIVATE, $method(static_cast<$WindowsSelectorImpl$MapEntry*(WindowsSelectorImpl$FdMap::*)(int32_t)>(&WindowsSelectorImpl$FdMap::get))},
	{"put", "(Lsun/nio/ch/SelectionKeyImpl;)Lsun/nio/ch/WindowsSelectorImpl$MapEntry;", nullptr, $PRIVATE, $method(static_cast<$WindowsSelectorImpl$MapEntry*(WindowsSelectorImpl$FdMap::*)($SelectionKeyImpl*)>(&WindowsSelectorImpl$FdMap::put))},
	{"remove", "(Lsun/nio/ch/SelectionKeyImpl;)Lsun/nio/ch/WindowsSelectorImpl$MapEntry;", nullptr, $PRIVATE, $method(static_cast<$WindowsSelectorImpl$MapEntry*(WindowsSelectorImpl$FdMap::*)($SelectionKeyImpl*)>(&WindowsSelectorImpl$FdMap::remove))},
	{}
};

$InnerClassInfo _WindowsSelectorImpl$FdMap_InnerClassesInfo_[] = {
	{"sun.nio.ch.WindowsSelectorImpl$FdMap", "sun.nio.ch.WindowsSelectorImpl", "FdMap", $PRIVATE | $STATIC | $FINAL},
	{"sun.nio.ch.WindowsSelectorImpl$MapEntry", "sun.nio.ch.WindowsSelectorImpl", "MapEntry", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _WindowsSelectorImpl$FdMap_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.ch.WindowsSelectorImpl$FdMap",
	"java.util.HashMap",
	nullptr,
	_WindowsSelectorImpl$FdMap_FieldInfo_,
	_WindowsSelectorImpl$FdMap_MethodInfo_,
	"Ljava/util/HashMap<Ljava/lang/Integer;Lsun/nio/ch/WindowsSelectorImpl$MapEntry;>;",
	nullptr,
	_WindowsSelectorImpl$FdMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.WindowsSelectorImpl"
};

$Object* allocate$WindowsSelectorImpl$FdMap($Class* clazz) {
	return $of($alloc(WindowsSelectorImpl$FdMap));
}

void WindowsSelectorImpl$FdMap::init$() {
	$HashMap::init$();
}

$WindowsSelectorImpl$MapEntry* WindowsSelectorImpl$FdMap::get(int32_t desc) {
	return $cast($WindowsSelectorImpl$MapEntry, get($($Integer::valueOf(desc))));
}

$WindowsSelectorImpl$MapEntry* WindowsSelectorImpl$FdMap::put($SelectionKeyImpl* ski) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of($Integer::valueOf($nc(ski)->getFDVal())));
	return $cast($WindowsSelectorImpl$MapEntry, put(var$0, $$new($WindowsSelectorImpl$MapEntry, ski)));
}

$WindowsSelectorImpl$MapEntry* WindowsSelectorImpl$FdMap::remove($SelectionKeyImpl* ski) {
	$useLocalCurrentObjectStackCache();
	$var($Integer, fd, $Integer::valueOf($nc(ski)->getFDVal()));
	$var($WindowsSelectorImpl$MapEntry, x, $cast($WindowsSelectorImpl$MapEntry, get(fd)));
	bool var$0 = (x != nullptr);
	if (var$0) {
		var$0 = ($nc(x->ski)->channel() == $nc(ski)->channel());
	}
	if (var$0) {
		return $cast($WindowsSelectorImpl$MapEntry, remove(fd));
	}
	return nullptr;
}

WindowsSelectorImpl$FdMap::WindowsSelectorImpl$FdMap() {
}

$Class* WindowsSelectorImpl$FdMap::load$($String* name, bool initialize) {
	$loadClass(WindowsSelectorImpl$FdMap, name, initialize, &_WindowsSelectorImpl$FdMap_ClassInfo_, allocate$WindowsSelectorImpl$FdMap);
	return class$;
}

$Class* WindowsSelectorImpl$FdMap::class$ = nullptr;

		} // ch
	} // nio
} // sun