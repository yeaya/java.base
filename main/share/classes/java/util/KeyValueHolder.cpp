#include <java/util/KeyValueHolder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
$CompoundAttribute _KeyValueHolder_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$CompoundAttribute _KeyValueHolder_FieldAnnotations_key[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _KeyValueHolder_FieldAnnotations_value[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};


$FieldInfo _KeyValueHolder_FieldInfo_[] = {
	{"key", "Ljava/lang/Object;", "TK;", $FINAL, $field(KeyValueHolder, key), _KeyValueHolder_FieldAnnotations_key},
	{"value", "Ljava/lang/Object;", "TV;", $FINAL, $field(KeyValueHolder, value), _KeyValueHolder_FieldAnnotations_value},
	{}
};

$MethodInfo _KeyValueHolder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK;TV;)V", 0, $method(static_cast<void(KeyValueHolder::*)(Object$*,Object$*)>(&KeyValueHolder::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeyValueHolder_InnerClassesInfo_[] = {
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyValueHolder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.KeyValueHolder",
	"java.lang.Object",
	"java.util.Map$Entry",
	_KeyValueHolder_FieldInfo_,
	_KeyValueHolder_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
	nullptr,
	_KeyValueHolder_InnerClassesInfo_,
	_KeyValueHolder_Annotations_
};

$Object* allocate$KeyValueHolder($Class* clazz) {
	return $of($alloc(KeyValueHolder));
}

void KeyValueHolder::init$(Object$* k, Object$* v) {
	$set(this, key, $Objects::requireNonNull(k));
	$set(this, value, $Objects::requireNonNull(v));
}

$Object* KeyValueHolder::getKey() {
	return $of(this->key);
}

$Object* KeyValueHolder::getValue() {
	return $of(this->value);
}

$Object* KeyValueHolder::setValue(Object$* value) {
	$throwNew($UnsupportedOperationException, "not supported"_s);
	$shouldNotReachHere();
}

bool KeyValueHolder::equals(Object$* o) {
	$var($Map$Entry, e, nullptr);
	bool var$2 = $instanceOf($Map$Entry, o);
	if (var$2) {
		$assign(e, $cast($Map$Entry, o));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc($of(this->key))->equals($($nc(e)->getKey()));
	return var$0 && $nc($of(this->value))->equals($($nc(e)->getValue()));
}

int32_t KeyValueHolder::hashCode() {
	int32_t var$0 = $nc($of(this->key))->hashCode();
	return var$0 ^ $nc($of(this->value))->hashCode();
}

$String* KeyValueHolder::toString() {
	return $str({this->key, "="_s, this->value});
}

KeyValueHolder::KeyValueHolder() {
}

$Class* KeyValueHolder::load$($String* name, bool initialize) {
	$loadClass(KeyValueHolder, name, initialize, &_KeyValueHolder_ClassInfo_, allocate$KeyValueHolder);
	return class$;
}

$Class* KeyValueHolder::class$ = nullptr;

	} // util
} // java