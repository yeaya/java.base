#include <java/nio/charset/CoderResult$Cache.h>

#include <java/nio/charset/CoderResult.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CoderResult = ::java::nio::charset::CoderResult;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace nio {
		namespace charset {

$FieldInfo _CoderResult$Cache_FieldInfo_[] = {
	{"INSTANCE", "Ljava/nio/charset/CoderResult$Cache;", nullptr, $STATIC | $FINAL, $staticField(CoderResult$Cache, INSTANCE)},
	{"unmappable", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/charset/CoderResult;>;", $FINAL, $field(CoderResult$Cache, unmappable)},
	{"malformed", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/charset/CoderResult;>;", $FINAL, $field(CoderResult$Cache, malformed)},
	{}
};

$MethodInfo _CoderResult$Cache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CoderResult$Cache::*)()>(&CoderResult$Cache::init$))},
	{}
};

$InnerClassInfo _CoderResult$Cache_InnerClassesInfo_[] = {
	{"java.nio.charset.CoderResult$Cache", "java.nio.charset.CoderResult", "Cache", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CoderResult$Cache_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.nio.charset.CoderResult$Cache",
	"java.lang.Object",
	nullptr,
	_CoderResult$Cache_FieldInfo_,
	_CoderResult$Cache_MethodInfo_,
	nullptr,
	nullptr,
	_CoderResult$Cache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.charset.CoderResult"
};

$Object* allocate$CoderResult$Cache($Class* clazz) {
	return $of($alloc(CoderResult$Cache));
}

CoderResult$Cache* CoderResult$Cache::INSTANCE = nullptr;

void CoderResult$Cache::init$() {
	$set(this, unmappable, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
	$set(this, malformed, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

void clinit$CoderResult$Cache($Class* class$) {
	$assignStatic(CoderResult$Cache::INSTANCE, $new(CoderResult$Cache));
}

CoderResult$Cache::CoderResult$Cache() {
}

$Class* CoderResult$Cache::load$($String* name, bool initialize) {
	$loadClass(CoderResult$Cache, name, initialize, &_CoderResult$Cache_ClassInfo_, clinit$CoderResult$Cache, allocate$CoderResult$Cache);
	return class$;
}

$Class* CoderResult$Cache::class$ = nullptr;

		} // charset
	} // nio
} // java