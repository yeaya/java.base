#include <java/util/KeyValueHolder.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Map$Entry.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {

void KeyValueHolder::init$(Object$* k, Object$* v) {
	$set(this, key, $Objects::requireNonNull(k));
	$set(this, value, $Objects::requireNonNull(v));
}

$Object* KeyValueHolder::getKey() {
	return this->key;
}

$Object* KeyValueHolder::getValue() {
	return this->value;
}

$Object* KeyValueHolder::setValue(Object$* value) {
	$throwNew($UnsupportedOperationException, "not supported"_s);
	$shouldNotReachHere();
}

bool KeyValueHolder::equals(Object$* o) {
	$useLocalObjectStack();
	$var($Map$Entry, e, nullptr);
	bool var$2 = $instanceOf($Map$Entry, o);
	if (var$2) {
		$assign(e, $cast($Map$Entry, o));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc(this->key)->equals($($nc(e)->getKey()));
	return var$0 && $nc(this->value)->equals($(e->getValue()));
}

int32_t KeyValueHolder::hashCode() {
	int32_t var$0 = $nc(this->key)->hashCode();
	return var$0 ^ $nc(this->value)->hashCode();
}

$String* KeyValueHolder::toString() {
	return $str({this->key, "="_s, this->value});
}

KeyValueHolder::KeyValueHolder() {
}

$Class* KeyValueHolder::load$($String* name, bool initialize) {
	$CompoundAttribute keyfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute valuefieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/Object;", "TK;", $FINAL, $field(KeyValueHolder, key), keyfieldAnnotations$$},
		{"value", "Ljava/lang/Object;", "TV;", $FINAL, $field(KeyValueHolder, value), valuefieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK;TV;)V", 0, $method(KeyValueHolder, init$, void, Object$*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(KeyValueHolder, equals, bool, Object$*)},
		{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(KeyValueHolder, getKey, $Object*)},
		{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(KeyValueHolder, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(KeyValueHolder, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC, $virtualMethod(KeyValueHolder, setValue, $Object*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyValueHolder, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/ValueBased;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.KeyValueHolder",
		"java.lang.Object",
		"java.util.Map$Entry",
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
		nullptr,
		innerClassesInfo$$,
		annotations$$
	};
	$loadClass(KeyValueHolder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyValueHolder);
	});
	return class$;
}

$Class* KeyValueHolder::class$ = nullptr;

	} // util
} // java