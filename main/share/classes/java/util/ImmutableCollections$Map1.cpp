#include <java/util/ImmutableCollections$Map1.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/util/CollSer.h>
#include <java/util/ImmutableCollections$AbstractImmutableMap.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/KeyValueHolder.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef IMM_MAP

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CollSer = ::java::util::CollSer;
using $ImmutableCollections$AbstractImmutableMap = ::java::util::ImmutableCollections$AbstractImmutableMap;
using $KeyValueHolder = ::java::util::KeyValueHolder;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;

namespace java {
	namespace util {

$CompoundAttribute _ImmutableCollections$Map1_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$Map1_FieldAnnotations_k0[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$Map1_FieldAnnotations_v0[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _ImmutableCollections$Map1_FieldInfo_[] = {
	{"k0", "Ljava/lang/Object;", "TK;", $PRIVATE | $FINAL, $field(ImmutableCollections$Map1, k0), _ImmutableCollections$Map1_FieldAnnotations_k0},
	{"v0", "Ljava/lang/Object;", "TV;", $PRIVATE | $FINAL, $field(ImmutableCollections$Map1, v0), _ImmutableCollections$Map1_FieldAnnotations_v0},
	{}
};

$MethodInfo _ImmutableCollections$Map1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK;TV;)V", 0, $method(static_cast<void(ImmutableCollections$Map1::*)(Object$*,Object$*)>(&ImmutableCollections$Map1::init$))},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ImmutableCollections$Map1::*)($ObjectInputStream*)>(&ImmutableCollections$Map1::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"size", "()I", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(ImmutableCollections$Map1::*)()>(&ImmutableCollections$Map1::writeReplace))},
	{}
};

$InnerClassInfo _ImmutableCollections$Map1_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$Map1", "java.util.ImmutableCollections", "Map1", $STATIC | $FINAL},
	{"java.util.ImmutableCollections$AbstractImmutableMap", "java.util.ImmutableCollections", "AbstractImmutableMap", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ImmutableCollections$Map1_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ImmutableCollections$Map1",
	"java.util.ImmutableCollections$AbstractImmutableMap",
	nullptr,
	_ImmutableCollections$Map1_FieldInfo_,
	_ImmutableCollections$Map1_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/ImmutableCollections$AbstractImmutableMap<TK;TV;>;",
	nullptr,
	_ImmutableCollections$Map1_InnerClassesInfo_,
	_ImmutableCollections$Map1_Annotations_,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$Map1($Class* clazz) {
	return $of($alloc(ImmutableCollections$Map1));
}

void ImmutableCollections$Map1::init$(Object$* k0, Object$* v0) {
	$ImmutableCollections$AbstractImmutableMap::init$();
	$set(this, k0, $Objects::requireNonNull(k0));
	$set(this, v0, $Objects::requireNonNull(v0));
}

$Set* ImmutableCollections$Map1::entrySet() {
	return $Set::of($of($$new($KeyValueHolder, this->k0, this->v0)));
}

$Object* ImmutableCollections$Map1::get(Object$* o) {
	return $of($nc($of(o))->equals(this->k0) ? this->v0 : ($Object*)nullptr);
}

bool ImmutableCollections$Map1::containsKey(Object$* o) {
	return $nc($of(o))->equals(this->k0);
}

bool ImmutableCollections$Map1::containsValue(Object$* o) {
	return $nc($of(o))->equals(this->v0);
}

int32_t ImmutableCollections$Map1::size() {
	return 1;
}

bool ImmutableCollections$Map1::isEmpty() {
	return false;
}

void ImmutableCollections$Map1::readObject($ObjectInputStream* in) {
	$throwNew($InvalidObjectException, "not serial proxy"_s);
}

$Object* ImmutableCollections$Map1::writeReplace() {
	return $of($new($CollSer, $CollSer::IMM_MAP, $$new($ObjectArray, {
		this->k0,
		this->v0
	})));
}

int32_t ImmutableCollections$Map1::hashCode() {
	int32_t var$0 = $nc($of(this->k0))->hashCode();
	return var$0 ^ $nc($of(this->v0))->hashCode();
}

ImmutableCollections$Map1::ImmutableCollections$Map1() {
}

$Class* ImmutableCollections$Map1::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$Map1, name, initialize, &_ImmutableCollections$Map1_ClassInfo_, allocate$ImmutableCollections$Map1);
	return class$;
}

$Class* ImmutableCollections$Map1::class$ = nullptr;

	} // util
} // java