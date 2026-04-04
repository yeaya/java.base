#include <java/util/WeakHashMap$Entry.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Map$Entry.h>
#include <java/util/Objects.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace java {
	namespace util {

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
	return $WeakHashMap::unmaskNull($(get()));
}

$Object* WeakHashMap$Entry::getValue() {
	return this->value;
}

$Object* WeakHashMap$Entry::setValue(Object$* newValue) {
	$var($Object, oldValue, this->value);
	$set(this, value, newValue);
	return oldValue;
}

bool WeakHashMap$Entry::equals(Object$* o) {
	$useLocalObjectStack();
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
	if ($equals(k1, k2) || (k1 != nullptr && k1->equals(k2))) {
		$var($Object, v1, getValue());
		$var($Object, v2, e->getValue());
		if ($equals(v1, v2) || (v1 != nullptr && v1->equals(v2))) {
			return true;
		}
	}
	return false;
}

int32_t WeakHashMap$Entry::hashCode() {
	$useLocalObjectStack();
	$var($Object, k, getKey());
	$var($Object, v, getValue());
	int32_t var$0 = $Objects::hashCode(k);
	return var$0 ^ $Objects::hashCode(v);
}

$String* WeakHashMap$Entry::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(getKey()));
	var$0->append("="_s);
	var$0->append($(getValue()));
	return $str(var$0);
}

WeakHashMap$Entry::WeakHashMap$Entry() {
}

$Class* WeakHashMap$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "Ljava/lang/Object;", "TV;", 0, $field(WeakHashMap$Entry, value)},
		{"hash", "I", nullptr, $FINAL, $field(WeakHashMap$Entry, hash)},
		{"next", "Ljava/util/WeakHashMap$Entry;", "Ljava/util/WeakHashMap$Entry<TK;TV;>;", 0, $field(WeakHashMap$Entry, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;ILjava/util/WeakHashMap$Entry;)V", "(Ljava/lang/Object;TV;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;ILjava/util/WeakHashMap$Entry<TK;TV;>;)V", 0, $method(WeakHashMap$Entry, init$, void, Object$*, Object$*, $ReferenceQueue*, int32_t, WeakHashMap$Entry*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(WeakHashMap$Entry, equals, bool, Object$*)},
		{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(WeakHashMap$Entry, getKey, $Object*)},
		{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(WeakHashMap$Entry, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(WeakHashMap$Entry, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC, $virtualMethod(WeakHashMap$Entry, setValue, $Object*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WeakHashMap$Entry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.WeakHashMap$Entry", "java.util.WeakHashMap", "Entry", $PRIVATE | $STATIC},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.WeakHashMap$Entry",
		"java.lang.ref.WeakReference",
		"java.util.Map$Entry",
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<Ljava/lang/Object;>;Ljava/util/Map$Entry<TK;TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.WeakHashMap"
	};
	$loadClass(WeakHashMap$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WeakHashMap$Entry));
	});
	return class$;
}

$Class* WeakHashMap$Entry::class$ = nullptr;

	} // util
} // java