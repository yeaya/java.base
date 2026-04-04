#include <java/util/concurrent/ConcurrentHashMap$MapEntry.h>
#include <java/util/Map$Entry.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/Helpers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Map$Entry = ::java::util::Map$Entry;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Helpers = ::java::util::concurrent::Helpers;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentHashMap$MapEntry::init$(Object$* key, Object$* val, $ConcurrentHashMap* map) {
	$set(this, key, key);
	$set(this, val, val);
	$set(this, map, map);
}

$Object* ConcurrentHashMap$MapEntry::getKey() {
	return this->key;
}

$Object* ConcurrentHashMap$MapEntry::getValue() {
	return this->val;
}

int32_t ConcurrentHashMap$MapEntry::hashCode() {
	int32_t var$0 = $nc(this->key)->hashCode();
	return var$0 ^ $nc(this->val)->hashCode();
}

$String* ConcurrentHashMap$MapEntry::toString() {
	return $Helpers::mapEntryToString(this->key, this->val);
}

bool ConcurrentHashMap$MapEntry::equals(Object$* o) {
	$useLocalObjectStack();
	$var($Object, k, nullptr);
	$var($Object, v, nullptr);
	$var($Map$Entry, e, nullptr);
	bool var$2 = ($instanceOf($Map$Entry, o)) && ($assign(k, $nc(($assign(e, $cast($Map$Entry, o))))->getKey())) != nullptr;
	bool var$1 = var$2 && ($assign(v, $nc(e)->getValue())) != nullptr;
	bool var$0 = var$1 && ($equals(k, this->key) || $nc(k)->equals(this->key));
	return (var$0 && ($equals(v, this->val) || $nc(v)->equals(this->val)));
}

$Object* ConcurrentHashMap$MapEntry::setValue(Object$* value) {
	if (value == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Object, v, this->val);
	$set(this, val, value);
	$nc(this->map)->put(this->key, value);
	return v;
}

ConcurrentHashMap$MapEntry::ConcurrentHashMap$MapEntry() {
}

$Class* ConcurrentHashMap$MapEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/Object;", "TK;", $FINAL, $field(ConcurrentHashMap$MapEntry, key)},
		{"val", "Ljava/lang/Object;", "TV;", 0, $field(ConcurrentHashMap$MapEntry, val)},
		{"map", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<TK;TV;>;", $FINAL, $field(ConcurrentHashMap$MapEntry, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/concurrent/ConcurrentHashMap;)V", "(TK;TV;Ljava/util/concurrent/ConcurrentHashMap<TK;TV;>;)V", 0, $method(ConcurrentHashMap$MapEntry, init$, void, Object$*, Object$*, $ConcurrentHashMap*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ConcurrentHashMap$MapEntry, equals, bool, Object$*)},
		{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(ConcurrentHashMap$MapEntry, getKey, $Object*)},
		{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(ConcurrentHashMap$MapEntry, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ConcurrentHashMap$MapEntry, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC, $virtualMethod(ConcurrentHashMap$MapEntry, setValue, $Object*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConcurrentHashMap$MapEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentHashMap$MapEntry", "java.util.concurrent.ConcurrentHashMap", "MapEntry", $STATIC | $FINAL},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentHashMap$MapEntry",
		"java.lang.Object",
		"java.util.Map$Entry",
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentHashMap"
	};
	$loadClass(ConcurrentHashMap$MapEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentHashMap$MapEntry);
	});
	return class$;
}

$Class* ConcurrentHashMap$MapEntry::class$ = nullptr;

		} // concurrent
	} // util
} // java