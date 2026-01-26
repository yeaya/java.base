#include <java/lang/WeakPairMap$Pair$Lookup.h>

#include <java/lang/WeakPairMap$Pair.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakPairMap$Pair = ::java::lang::WeakPairMap$Pair;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {

$FieldInfo _WeakPairMap$Pair$Lookup_FieldInfo_[] = {
	{"k1", "Ljava/lang/Object;", "TK1;", $PRIVATE | $FINAL, $field(WeakPairMap$Pair$Lookup, k1)},
	{"k2", "Ljava/lang/Object;", "TK2;", $PRIVATE | $FINAL, $field(WeakPairMap$Pair$Lookup, k2)},
	{}
};

$MethodInfo _WeakPairMap$Pair$Lookup_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK1;TK2;)V", 0, $method(WeakPairMap$Pair$Lookup, init$, void, Object$*, Object$*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(WeakPairMap$Pair$Lookup, equals, bool, Object$*)},
	{"first", "()Ljava/lang/Object;", "()TK1;", $PUBLIC, $virtualMethod(WeakPairMap$Pair$Lookup, first, $Object*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(WeakPairMap$Pair$Lookup, hashCode, int32_t)},
	{"second", "()Ljava/lang/Object;", "()TK2;", $PUBLIC, $virtualMethod(WeakPairMap$Pair$Lookup, second, $Object*)},
	{}
};

$InnerClassInfo _WeakPairMap$Pair$Lookup_InnerClassesInfo_[] = {
	{"java.lang.WeakPairMap$Pair", "java.lang.WeakPairMap", "Pair", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.lang.WeakPairMap$Pair$Lookup", "java.lang.WeakPairMap$Pair", "Lookup", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _WeakPairMap$Pair$Lookup_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.WeakPairMap$Pair$Lookup",
	"java.lang.Object",
	"java.lang.WeakPairMap$Pair",
	_WeakPairMap$Pair$Lookup_FieldInfo_,
	_WeakPairMap$Pair$Lookup_MethodInfo_,
	"<K1:Ljava/lang/Object;K2:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/WeakPairMap$Pair<TK1;TK2;>;",
	nullptr,
	_WeakPairMap$Pair$Lookup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.WeakPairMap"
};

$Object* allocate$WeakPairMap$Pair$Lookup($Class* clazz) {
	return $of($alloc(WeakPairMap$Pair$Lookup));
}

void WeakPairMap$Pair$Lookup::init$(Object$* k1, Object$* k2) {
	$set(this, k1, $Objects::requireNonNull(k1));
	$set(this, k2, $Objects::requireNonNull(k2));
}

$Object* WeakPairMap$Pair$Lookup::first() {
	return $of(this->k1);
}

$Object* WeakPairMap$Pair$Lookup::second() {
	return $of(this->k2);
}

int32_t WeakPairMap$Pair$Lookup::hashCode() {
	return $WeakPairMap$Pair::hashCode(this->k1, this->k2);
}

bool WeakPairMap$Pair$Lookup::equals(Object$* obj) {
	return $instanceOf($WeakPairMap$Pair, obj) && $WeakPairMap$Pair::equals(this->k1, this->k2, $cast($WeakPairMap$Pair, obj));
}

WeakPairMap$Pair$Lookup::WeakPairMap$Pair$Lookup() {
}

$Class* WeakPairMap$Pair$Lookup::load$($String* name, bool initialize) {
	$loadClass(WeakPairMap$Pair$Lookup, name, initialize, &_WeakPairMap$Pair$Lookup_ClassInfo_, allocate$WeakPairMap$Pair$Lookup);
	return class$;
}

$Class* WeakPairMap$Pair$Lookup::class$ = nullptr;

	} // lang
} // java