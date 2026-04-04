#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractMap = ::java::util::AbstractMap;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace util {

$Object* AbstractMap$SimpleImmutableEntry::clone() {
	 return this->$Map$Entry::clone();
}

void AbstractMap$SimpleImmutableEntry::finalize() {
	this->$Map$Entry::finalize();
}

void AbstractMap$SimpleImmutableEntry::init$(Object$* key, Object$* value) {
	$set(this, key, key);
	$set(this, value, value);
}

void AbstractMap$SimpleImmutableEntry::init$($Map$Entry* entry) {
	$set(this, key, $nc(entry)->getKey());
	$set(this, value, entry->getValue());
}

$Object* AbstractMap$SimpleImmutableEntry::getKey() {
	return this->key;
}

$Object* AbstractMap$SimpleImmutableEntry::getValue() {
	return this->value;
}

$Object* AbstractMap$SimpleImmutableEntry::setValue(Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool AbstractMap$SimpleImmutableEntry::equals(Object$* o) {
	$useLocalObjectStack();
	$var($Map$Entry, e, nullptr);
	bool var$2 = $instanceOf($Map$Entry, o);
	if (var$2) {
		$assign(e, $cast($Map$Entry, o));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $AbstractMap::eq(this->key, $($nc(e)->getKey()));
	return var$0 && $AbstractMap::eq(this->value, $(e->getValue()));
}

int32_t AbstractMap$SimpleImmutableEntry::hashCode() {
	int32_t var$0 = this->key == nullptr ? 0 : this->key->hashCode();
	return var$0 ^ (this->value == nullptr ? 0 : this->value->hashCode());
}

$String* AbstractMap$SimpleImmutableEntry::toString() {
	return $str({this->key, "="_s, this->value});
}

AbstractMap$SimpleImmutableEntry::AbstractMap$SimpleImmutableEntry() {
}

$Class* AbstractMap$SimpleImmutableEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractMap$SimpleImmutableEntry, serialVersionUID)},
		{"key", "Ljava/lang/Object;", "TK;", $PRIVATE | $FINAL, $field(AbstractMap$SimpleImmutableEntry, key)},
		{"value", "Ljava/lang/Object;", "TV;", $PRIVATE | $FINAL, $field(AbstractMap$SimpleImmutableEntry, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK;TV;)V", $PUBLIC, $method(AbstractMap$SimpleImmutableEntry, init$, void, Object$*, Object$*)},
		{"<init>", "(Ljava/util/Map$Entry;)V", "(Ljava/util/Map$Entry<+TK;+TV;>;)V", $PUBLIC, $method(AbstractMap$SimpleImmutableEntry, init$, void, $Map$Entry*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractMap$SimpleImmutableEntry, equals, bool, Object$*)},
		{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(AbstractMap$SimpleImmutableEntry, getKey, $Object*)},
		{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(AbstractMap$SimpleImmutableEntry, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractMap$SimpleImmutableEntry, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC, $virtualMethod(AbstractMap$SimpleImmutableEntry, setValue, $Object*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractMap$SimpleImmutableEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.AbstractMap$SimpleImmutableEntry", "java.util.AbstractMap", "SimpleImmutableEntry", $PUBLIC | $STATIC},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.AbstractMap$SimpleImmutableEntry",
		"java.lang.Object",
		"java.util.Map$Entry,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.AbstractMap"
	};
	$loadClass(AbstractMap$SimpleImmutableEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AbstractMap$SimpleImmutableEntry));
	});
	return class$;
}

$Class* AbstractMap$SimpleImmutableEntry::class$ = nullptr;

	} // util
} // java