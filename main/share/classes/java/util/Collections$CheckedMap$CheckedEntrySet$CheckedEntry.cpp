#include <java/util/Collections$CheckedMap$CheckedEntrySet$CheckedEntry.h>
#include <java/lang/ClassCastException.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/Collections$CheckedMap$CheckedEntrySet.h>
#include <java/util/Map$Entry.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {

void Collections$CheckedMap$CheckedEntrySet$CheckedEntry::init$($Map$Entry* e, $Class* valueType) {
	$set(this, e, $cast($Map$Entry, $Objects::requireNonNull(e)));
	$set(this, valueType, $cast($Class, $Objects::requireNonNull(valueType)));
}

$Object* Collections$CheckedMap$CheckedEntrySet$CheckedEntry::getKey() {
	return $nc(this->e)->getKey();
}

$Object* Collections$CheckedMap$CheckedEntrySet$CheckedEntry::getValue() {
	return $nc(this->e)->getValue();
}

int32_t Collections$CheckedMap$CheckedEntrySet$CheckedEntry::hashCode() {
	return $nc(this->e)->hashCode();
}

$String* Collections$CheckedMap$CheckedEntrySet$CheckedEntry::toString() {
	return $nc(this->e)->toString();
}

$Object* Collections$CheckedMap$CheckedEntrySet$CheckedEntry::setValue(Object$* value) {
	if (value != nullptr && !$nc(this->valueType)->isInstance(value)) {
		$throwNew($ClassCastException, $(badValueMsg(value)));
	}
	return $nc(this->e)->setValue(value);
}

$String* Collections$CheckedMap$CheckedEntrySet$CheckedEntry::badValueMsg(Object$* value) {
	return $str({"Attempt to insert "_s, $nc($of(value))->getClass(), " value into map with value type "_s, this->valueType});
}

bool Collections$CheckedMap$CheckedEntrySet$CheckedEntry::equals(Object$* o) {
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf($Map$Entry, o))) {
		return false;
	}
	return $nc(this->e)->equals($$new($AbstractMap$SimpleImmutableEntry, $cast($Map$Entry, o)));
}

Collections$CheckedMap$CheckedEntrySet$CheckedEntry::Collections$CheckedMap$CheckedEntrySet$CheckedEntry() {
}

$Class* Collections$CheckedMap$CheckedEntrySet$CheckedEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"e", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<TK;TV;>;", $PRIVATE | $FINAL, $field(Collections$CheckedMap$CheckedEntrySet$CheckedEntry, e)},
		{"valueType", "Ljava/lang/Class;", "Ljava/lang/Class<TT;>;", $PRIVATE | $FINAL, $field(Collections$CheckedMap$CheckedEntrySet$CheckedEntry, valueType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map$Entry;Ljava/lang/Class;)V", "(Ljava/util/Map$Entry<TK;TV;>;Ljava/lang/Class<TT;>;)V", 0, $method(Collections$CheckedMap$CheckedEntrySet$CheckedEntry, init$, void, $Map$Entry*, $Class*)},
		{"badValueMsg", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE, $method(Collections$CheckedMap$CheckedEntrySet$CheckedEntry, badValueMsg, $String*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet$CheckedEntry, equals, bool, Object$*)},
		{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet$CheckedEntry, getKey, $Object*)},
		{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet$CheckedEntry, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet$CheckedEntry, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet$CheckedEntry, setValue, $Object*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet$CheckedEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Collections$CheckedMap", "java.util.Collections", "CheckedMap", $PRIVATE | $STATIC},
		{"java.util.Collections$CheckedMap$CheckedEntrySet", "java.util.Collections$CheckedMap", "CheckedEntrySet", $STATIC},
		{"java.util.Collections$CheckedMap$CheckedEntrySet$CheckedEntry", "java.util.Collections$CheckedMap$CheckedEntrySet", "CheckedEntry", $PRIVATE | $STATIC},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Collections$CheckedMap$CheckedEntrySet$CheckedEntry",
		"java.lang.Object",
		"java.util.Map$Entry",
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Collections"
	};
	$loadClass(Collections$CheckedMap$CheckedEntrySet$CheckedEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collections$CheckedMap$CheckedEntrySet$CheckedEntry);
	});
	return class$;
}

$Class* Collections$CheckedMap$CheckedEntrySet$CheckedEntry::class$ = nullptr;

	} // util
} // java