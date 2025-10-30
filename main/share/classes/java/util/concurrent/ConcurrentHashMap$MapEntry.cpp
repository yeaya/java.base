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

$FieldInfo _ConcurrentHashMap$MapEntry_FieldInfo_[] = {
	{"key", "Ljava/lang/Object;", "TK;", $FINAL, $field(ConcurrentHashMap$MapEntry, key)},
	{"val", "Ljava/lang/Object;", "TV;", 0, $field(ConcurrentHashMap$MapEntry, val)},
	{"map", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<TK;TV;>;", $FINAL, $field(ConcurrentHashMap$MapEntry, map)},
	{}
};

$MethodInfo _ConcurrentHashMap$MapEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/concurrent/ConcurrentHashMap;)V", "(TK;TV;Ljava/util/concurrent/ConcurrentHashMap<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$MapEntry::*)(Object$*,Object$*,$ConcurrentHashMap*)>(&ConcurrentHashMap$MapEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentHashMap$MapEntry_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$MapEntry", "java.util.concurrent.ConcurrentHashMap", "MapEntry", $STATIC | $FINAL},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$MapEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$MapEntry",
	"java.lang.Object",
	"java.util.Map$Entry",
	_ConcurrentHashMap$MapEntry_FieldInfo_,
	_ConcurrentHashMap$MapEntry_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
	nullptr,
	_ConcurrentHashMap$MapEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$MapEntry($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$MapEntry));
}

void ConcurrentHashMap$MapEntry::init$(Object$* key, Object$* val, $ConcurrentHashMap* map) {
	$set(this, key, key);
	$set(this, val, val);
	$set(this, map, map);
}

$Object* ConcurrentHashMap$MapEntry::getKey() {
	return $of(this->key);
}

$Object* ConcurrentHashMap$MapEntry::getValue() {
	return $of(this->val);
}

int32_t ConcurrentHashMap$MapEntry::hashCode() {
	int32_t var$0 = $nc($of(this->key))->hashCode();
	return var$0 ^ $nc($of(this->val))->hashCode();
}

$String* ConcurrentHashMap$MapEntry::toString() {
	return $Helpers::mapEntryToString(this->key, this->val);
}

bool ConcurrentHashMap$MapEntry::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($Object, k, nullptr);
	$var($Object, v, nullptr);
	$var($Map$Entry, e, nullptr);
	bool var$2 = ($instanceOf($Map$Entry, o)) && ($assign(k, $nc(($assign(e, $cast($Map$Entry, o))))->getKey())) != nullptr;
	bool var$1 = var$2 && ($assign(v, $nc(e)->getValue())) != nullptr;
	bool var$0 = var$1 && ($equals(k, this->key) || $nc($of(k))->equals(this->key));
	return (var$0 && ($equals(v, this->val) || $nc($of(v))->equals(this->val)));
}

$Object* ConcurrentHashMap$MapEntry::setValue(Object$* value) {
	if (value == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Object, v, this->val);
	$set(this, val, value);
	$nc(this->map)->put(this->key, value);
	return $of(v);
}

ConcurrentHashMap$MapEntry::ConcurrentHashMap$MapEntry() {
}

$Class* ConcurrentHashMap$MapEntry::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$MapEntry, name, initialize, &_ConcurrentHashMap$MapEntry_ClassInfo_, allocate$ConcurrentHashMap$MapEntry);
	return class$;
}

$Class* ConcurrentHashMap$MapEntry::class$ = nullptr;

		} // concurrent
	} // util
} // java