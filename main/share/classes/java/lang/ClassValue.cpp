#include <java/lang/ClassValue.h>

#include <java/lang/ClassValue$ClassValueMap.h>
#include <java/lang/ClassValue$Entry.h>
#include <java/lang/ClassValue$Identity.h>
#include <java/lang/ClassValue$Version.h>
#include <java/lang/ref/Reference.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef CRITICAL_SECTION
#undef EMPTY_CACHE
#undef HASH_INCREMENT
#undef HASH_MASK
#undef UNSAFE

using $ClassValue$EntryArray = $Array<::java::lang::ClassValue$Entry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue$ClassValueMap = ::java::lang::ClassValue$ClassValueMap;
using $ClassValue$Entry = ::java::lang::ClassValue$Entry;
using $ClassValue$Identity = ::java::lang::ClassValue$Identity;
using $ClassValue$Version = ::java::lang::ClassValue$Version;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {

$FieldInfo _ClassValue_FieldInfo_[] = {
	{"EMPTY_CACHE", "[Ljava/lang/ClassValue$Entry;", "[Ljava/lang/ClassValue$Entry<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(ClassValue, EMPTY_CACHE)},
	{"hashCodeForCache", "I", nullptr, $FINAL, $field(ClassValue, hashCodeForCache)},
	{"nextHashCode", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClassValue, nextHashCode)},
	{"HASH_INCREMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassValue, HASH_INCREMENT)},
	{"HASH_MASK", "I", nullptr, $STATIC | $FINAL, $constField(ClassValue, HASH_MASK)},
	{"identity", "Ljava/lang/ClassValue$Identity;", nullptr, $FINAL, $field(ClassValue, identity)},
	{"version", "Ljava/lang/ClassValue$Version;", "Ljava/lang/ClassValue$Version<TT;>;", $PRIVATE | $VOLATILE, $field(ClassValue, version$)},
	{"CRITICAL_SECTION", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClassValue, CRITICAL_SECTION)},
	{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClassValue, UNSAFE)},
	{}
};

$MethodInfo _ClassValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(ClassValue, init$, void)},
	{"bumpVersion", "()V", nullptr, 0, $virtualMethod(ClassValue, bumpVersion, void)},
	{"castEntry", "(Ljava/lang/ClassValue$Entry;)Ljava/lang/ClassValue$Entry;", "(Ljava/lang/ClassValue$Entry<*>;)Ljava/lang/ClassValue$Entry<TT;>;", 0, $virtualMethod(ClassValue, castEntry, $ClassValue$Entry*, $ClassValue$Entry*)},
	{"computeValue", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)TT;", $PROTECTED | $ABSTRACT, $virtualMethod(ClassValue, computeValue, $Object*, $Class*)},
	{"get", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)TT;", $PUBLIC, $virtualMethod(ClassValue, get, $Object*, $Class*)},
	{"getCacheCarefully", "(Ljava/lang/Class;)[Ljava/lang/ClassValue$Entry;", "(Ljava/lang/Class<*>;)[Ljava/lang/ClassValue$Entry<*>;", $PRIVATE | $STATIC, $staticMethod(ClassValue, getCacheCarefully, $ClassValue$EntryArray*, $Class*)},
	{"getFromBackup", "([Ljava/lang/ClassValue$Entry;Ljava/lang/Class;)Ljava/lang/Object;", "([Ljava/lang/ClassValue$Entry<*>;Ljava/lang/Class<*>;)TT;", $PRIVATE, $method(ClassValue, getFromBackup, $Object*, $ClassValue$EntryArray*, $Class*)},
	{"getFromHashMap", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)TT;", $PRIVATE, $method(ClassValue, getFromHashMap, $Object*, $Class*)},
	{"getMap", "(Ljava/lang/Class;)Ljava/lang/ClassValue$ClassValueMap;", "(Ljava/lang/Class<*>;)Ljava/lang/ClassValue$ClassValueMap;", $PRIVATE | $STATIC, $staticMethod(ClassValue, getMap, $ClassValue$ClassValueMap*, $Class*)},
	{"initializeMap", "(Ljava/lang/Class;)Ljava/lang/ClassValue$ClassValueMap;", "(Ljava/lang/Class<*>;)Ljava/lang/ClassValue$ClassValueMap;", $PRIVATE | $STATIC, $staticMethod(ClassValue, initializeMap, $ClassValue$ClassValueMap*, $Class*)},
	{"makeEntry", "(Ljava/lang/ClassValue$Version;Ljava/lang/Object;)Ljava/lang/ClassValue$Entry;", "<T:Ljava/lang/Object;>(Ljava/lang/ClassValue$Version<TT;>;TT;)Ljava/lang/ClassValue$Entry<TT;>;", $STATIC, $staticMethod(ClassValue, makeEntry, $ClassValue$Entry*, $ClassValue$Version*, Object$*)},
	{"match", "(Ljava/lang/ClassValue$Entry;)Z", "(Ljava/lang/ClassValue$Entry<*>;)Z", 0, $virtualMethod(ClassValue, match, bool, $ClassValue$Entry*)},
	{"put", "(Ljava/lang/Class;Ljava/lang/Object;)V", "(Ljava/lang/Class<*>;TT;)V", 0, $virtualMethod(ClassValue, put, void, $Class*, Object$*)},
	{"remove", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(ClassValue, remove, void, $Class*)},
	{"version", "()Ljava/lang/ClassValue$Version;", "()Ljava/lang/ClassValue$Version<TT;>;", 0, $virtualMethod(ClassValue, version, $ClassValue$Version*)},
	{}
};

$InnerClassInfo _ClassValue_InnerClassesInfo_[] = {
	{"java.lang.ClassValue$ClassValueMap", "java.lang.ClassValue", "ClassValueMap", $STATIC},
	{"java.lang.ClassValue$Entry", "java.lang.ClassValue", "Entry", $STATIC},
	{"java.lang.ClassValue$Version", "java.lang.ClassValue", "Version", $STATIC},
	{"java.lang.ClassValue$Identity", "java.lang.ClassValue", "Identity", $STATIC},
	{}
};

$ClassInfo _ClassValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.ClassValue",
	"java.lang.Object",
	nullptr,
	_ClassValue_FieldInfo_,
	_ClassValue_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ClassValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.ClassValue$ClassValueMap,java.lang.ClassValue$Entry,java.lang.ClassValue$Version,java.lang.ClassValue$Identity"
};

$Object* allocate$ClassValue($Class* clazz) {
	return $of($alloc(ClassValue));
}

$ClassValue$EntryArray* ClassValue::EMPTY_CACHE = nullptr;
$AtomicInteger* ClassValue::nextHashCode = nullptr;
$Object* ClassValue::CRITICAL_SECTION = nullptr;
$Unsafe* ClassValue::UNSAFE = nullptr;

void ClassValue::init$() {
	this->hashCodeForCache = (int32_t)($nc(ClassValue::nextHashCode)->getAndAdd(ClassValue::HASH_INCREMENT) & (uint32_t)ClassValue::HASH_MASK);
	$set(this, identity, $new($ClassValue$Identity));
	$set(this, version$, $new($ClassValue$Version, this));
}

$Object* ClassValue::get($Class* type) {
	$useLocalCurrentObjectStackCache();
	$var($ClassValue$EntryArray, cache, nullptr);
	$var($ClassValue$Entry, e, $ClassValue$ClassValueMap::probeHomeLocation($assign(cache, getCacheCarefully(type)), this));
	if (match(e)) {
		return $of($nc(e)->value());
	}
	return $of(getFromBackup(cache, type));
}

void ClassValue::remove($Class* type) {
	$var($ClassValue$ClassValueMap, map, getMap(type));
	$nc(map)->removeEntry(this);
}

void ClassValue::put($Class* type, Object$* value) {
	$var($ClassValue$ClassValueMap, map, getMap(type));
	$nc(map)->changeEntry(this, value);
}

$ClassValue$EntryArray* ClassValue::getCacheCarefully($Class* type) {
	$init(ClassValue);
	$useLocalCurrentObjectStackCache();
	$var($ClassValue$ClassValueMap, map, $nc(type)->classValueMap);
	if (map == nullptr) {
		return ClassValue::EMPTY_CACHE;
	}
	$var($ClassValue$EntryArray, cache, $nc(map)->getCache());
	return cache;
}

$Object* ClassValue::getFromBackup($ClassValue$EntryArray* cache, $Class* type) {
	$var($ClassValue$Entry, e, $ClassValue$ClassValueMap::probeBackupLocations(cache, this));
	if (e != nullptr) {
		return $of(e->value());
	}
	return $of(getFromHashMap(type));
}

$ClassValue$Entry* ClassValue::castEntry($ClassValue$Entry* e) {
	return e;
}

$Object* ClassValue::getFromHashMap($Class* type) {
	$useLocalCurrentObjectStackCache();
	$var($ClassValue$ClassValueMap, map, getMap(type));
	for (;;) {
		$var($ClassValue$Entry, e, $nc(map)->startEntry(this));
		if (!$nc(e)->isPromise()) {
			return $of(e->value());
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($ClassValue$Version, var$1, $nc(e)->version());
				$assign(e, makeEntry(var$1, $(computeValue(type))));
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} /*finally*/ {
				$assign(e, map->finishEntry(this, e));
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		if (e != nullptr) {
			return $of(e->value());
		}
	}
}

bool ClassValue::match($ClassValue$Entry* e) {
	return (e != nullptr && $equals(e->get(), this->version$));
}

$ClassValue$Version* ClassValue::version() {
	return this->version$;
}

void ClassValue::bumpVersion() {
	$set(this, version$, $new($ClassValue$Version, this));
}

$ClassValue$ClassValueMap* ClassValue::getMap($Class* type) {
	$init(ClassValue);
	$var($ClassValue$ClassValueMap, map, $nc(type)->classValueMap);
	if (map != nullptr) {
		return map;
	}
	return initializeMap(type);
}

$ClassValue$ClassValueMap* ClassValue::initializeMap($Class* type) {
	$init(ClassValue);
	$var($ClassValue$ClassValueMap, map, nullptr);
	$synchronized(ClassValue::CRITICAL_SECTION) {
		if (($assign(map, $nc(type)->classValueMap)) == nullptr) {
			$assign(map, $new($ClassValue$ClassValueMap));
			$nc(ClassValue::UNSAFE)->storeFence();
			$set(type, classValueMap, map);
		}
	}
	return map;
}

$ClassValue$Entry* ClassValue::makeEntry($ClassValue$Version* explicitVersion, Object$* value) {
	$init(ClassValue);
	return $new($ClassValue$Entry, explicitVersion, value);
}

void clinit$ClassValue($Class* class$) {
	$assignStatic(ClassValue::EMPTY_CACHE, $new($ClassValue$EntryArray, {($ClassValue$Entry*)nullptr}));
	$assignStatic(ClassValue::nextHashCode, $new($AtomicInteger));
	$assignStatic(ClassValue::CRITICAL_SECTION, $new($Object));
	$assignStatic(ClassValue::UNSAFE, $Unsafe::getUnsafe());
}

ClassValue::ClassValue() {
}

$Class* ClassValue::load$($String* name, bool initialize) {
	$loadClass(ClassValue, name, initialize, &_ClassValue_ClassInfo_, clinit$ClassValue, allocate$ClassValue);
	return class$;
}

$Class* ClassValue::class$ = nullptr;

	} // lang
} // java