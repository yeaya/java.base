#include <java/util/WeakHashMap$Entry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map$Entry.h>
#include <java/util/Objects.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace java {
	namespace util {

$FieldInfo _WeakHashMap$Entry_FieldInfo_[] = {
	{"value", "Ljava/lang/Object;", "TV;", 0, $field(WeakHashMap$Entry, value)},
	{"hash", "I", nullptr, $FINAL, $field(WeakHashMap$Entry, hash)},
	{"next", "Ljava/util/WeakHashMap$Entry;", "Ljava/util/WeakHashMap$Entry<TK;TV;>;", 0, $field(WeakHashMap$Entry, next)},
	{}
};

$MethodInfo _WeakHashMap$Entry_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;ILjava/util/WeakHashMap$Entry;)V", "(Ljava/lang/Object;TV;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;ILjava/util/WeakHashMap$Entry<TK;TV;>;)V", 0, $method(static_cast<void(WeakHashMap$Entry::*)(Object$*,Object$*,$ReferenceQueue*,int32_t,WeakHashMap$Entry*)>(&WeakHashMap$Entry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WeakHashMap$Entry_InnerClassesInfo_[] = {
	{"java.util.WeakHashMap$Entry", "java.util.WeakHashMap", "Entry", $PRIVATE | $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WeakHashMap$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.WeakHashMap$Entry",
	"java.lang.ref.WeakReference",
	"java.util.Map$Entry",
	_WeakHashMap$Entry_FieldInfo_,
	_WeakHashMap$Entry_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<Ljava/lang/Object;>;Ljava/util/Map$Entry<TK;TV;>;",
	nullptr,
	_WeakHashMap$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.WeakHashMap"
};

$Object* allocate$WeakHashMap$Entry($Class* clazz) {
	return $of($alloc(WeakHashMap$Entry));
}

$Object* WeakHashMap$Entry::clone() {
	 return this->$WeakReference::clone();
}

void WeakHashMap$Entry::finalize() {
	this->$WeakReference::finalize();
}

void WeakHashMap$Entry::init$(Object$* key, Object$* value, $ReferenceQueue* queue, int32_t hash, WeakHashMap$Entry* next) {
	$WeakReference::init$(key, queue);
	$set(this, value, value);
	this->hash = hash;
	$set(this, next, next);
}

$Object* WeakHashMap$Entry::getKey() {
	return $of($WeakHashMap::unmaskNull($(get())));
}

$Object* WeakHashMap$Entry::getValue() {
	return $of(this->value);
}

$Object* WeakHashMap$Entry::setValue(Object$* newValue) {
	$var($Object, oldValue, this->value);
	$set(this, value, newValue);
	return $of(oldValue);
}

bool WeakHashMap$Entry::equals(Object$* o) {
	$var($Map$Entry, e, nullptr);
	bool var$0 = $instanceOf($Map$Entry, o);
	if (var$0) {
		$assign(e, $cast($Map$Entry, o));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	$var($Object, k1, getKey());
	$var($Object, k2, $nc(e)->getKey());
	if ($equals(k1, k2) || (k1 != nullptr && $of(k1)->equals(k2))) {
		$var($Object, v1, getValue());
		$var($Object, v2, e->getValue());
		if ($equals(v1, v2) || (v1 != nullptr && $of(v1)->equals(v2))) {
			return true;
		}
	}
	return false;
}

int32_t WeakHashMap$Entry::hashCode() {
	$var($Object, k, getKey());
	$var($Object, v, getValue());
	int32_t var$0 = $Objects::hashCode(k);
	return var$0 ^ $Objects::hashCode(v);
}

$String* WeakHashMap$Entry::toString() {
	$var($String, var$0, $$str({$(getKey()), "="_s}));
	return $concat(var$0, $(getValue()));
}

WeakHashMap$Entry::WeakHashMap$Entry() {
}

$Class* WeakHashMap$Entry::load$($String* name, bool initialize) {
	$loadClass(WeakHashMap$Entry, name, initialize, &_WeakHashMap$Entry_ClassInfo_, allocate$WeakHashMap$Entry);
	return class$;
}

$Class* WeakHashMap$Entry::class$ = nullptr;

	} // util
} // java