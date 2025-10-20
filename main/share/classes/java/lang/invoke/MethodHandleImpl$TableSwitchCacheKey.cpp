#include <java/lang/invoke/MethodHandleImpl$TableSwitchCacheKey.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

#undef CACHE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleImpl$TableSwitchCacheKey_FieldInfo_[] = {
	{"CACHE", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/invoke/MethodHandleImpl$TableSwitchCacheKey;Ljava/lang/invoke/LambdaForm;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MethodHandleImpl$TableSwitchCacheKey, CACHE)},
	{"basicType", "Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $FINAL, $field(MethodHandleImpl$TableSwitchCacheKey, basicType)},
	{"numberOfCases", "I", nullptr, $PRIVATE | $FINAL, $field(MethodHandleImpl$TableSwitchCacheKey, numberOfCases)},
	{}
};

$MethodInfo _MethodHandleImpl$TableSwitchCacheKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;I)V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandleImpl$TableSwitchCacheKey::*)($MethodType*,int32_t)>(&MethodHandleImpl$TableSwitchCacheKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MethodHandleImpl$TableSwitchCacheKey_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$TableSwitchCacheKey", "java.lang.invoke.MethodHandleImpl", "TableSwitchCacheKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MethodHandleImpl$TableSwitchCacheKey_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$TableSwitchCacheKey",
	"java.lang.Object",
	nullptr,
	_MethodHandleImpl$TableSwitchCacheKey_FieldInfo_,
	_MethodHandleImpl$TableSwitchCacheKey_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleImpl$TableSwitchCacheKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$TableSwitchCacheKey($Class* clazz) {
	return $of($alloc(MethodHandleImpl$TableSwitchCacheKey));
}

$Map* MethodHandleImpl$TableSwitchCacheKey::CACHE = nullptr;

void MethodHandleImpl$TableSwitchCacheKey::init$($MethodType* basicType, int32_t numberOfCases) {
	$set(this, basicType, basicType);
	this->numberOfCases = numberOfCases;
}

bool MethodHandleImpl$TableSwitchCacheKey::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	bool var$0 = o == nullptr;
	if (!var$0) {
		var$0 = $of(this)->getClass() != $nc($of(o))->getClass();
	}
	if (var$0) {
		return false;
	}
	$var(MethodHandleImpl$TableSwitchCacheKey, that, $cast(MethodHandleImpl$TableSwitchCacheKey, o));
	return this->numberOfCases == $nc(that)->numberOfCases && $Objects::equals(this->basicType, that->basicType);
}

int32_t MethodHandleImpl$TableSwitchCacheKey::hashCode() {
	$useLocalCurrentObjectStackCache();
	return $Objects::hash($$new($ObjectArray, {
		$of(this->basicType),
		$($of($Integer::valueOf(this->numberOfCases)))
	}));
}

void clinit$MethodHandleImpl$TableSwitchCacheKey($Class* class$) {
	$assignStatic(MethodHandleImpl$TableSwitchCacheKey::CACHE, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

MethodHandleImpl$TableSwitchCacheKey::MethodHandleImpl$TableSwitchCacheKey() {
}

$Class* MethodHandleImpl$TableSwitchCacheKey::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$TableSwitchCacheKey, name, initialize, &_MethodHandleImpl$TableSwitchCacheKey_ClassInfo_, clinit$MethodHandleImpl$TableSwitchCacheKey, allocate$MethodHandleImpl$TableSwitchCacheKey);
	return class$;
}

$Class* MethodHandleImpl$TableSwitchCacheKey::class$ = nullptr;

		} // invoke
	} // lang
} // java