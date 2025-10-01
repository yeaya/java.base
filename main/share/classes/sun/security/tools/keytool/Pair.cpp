#include <sun/security/tools/keytool/Pair.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

$FieldInfo _Pair_FieldInfo_[] = {
	{"fst", "Ljava/lang/Object;", "TA;", $PUBLIC | $FINAL, $field(Pair, fst)},
	{"snd", "Ljava/lang/Object;", "TB;", $PUBLIC | $FINAL, $field(Pair, snd)},
	{}
};

$MethodInfo _Pair_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TA;TB;)V", $PUBLIC, $method(static_cast<void(Pair::*)(Object$*,Object$*)>(&Pair::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;)Lsun/security/tools/keytool/Pair;", "<A:Ljava/lang/Object;B:Ljava/lang/Object;>(TA;TB;)Lsun/security/tools/keytool/Pair<TA;TB;>;", $PUBLIC | $STATIC, $method(static_cast<Pair*(*)(Object$*,Object$*)>(&Pair::of))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Pair_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.tools.keytool.Pair",
	"java.lang.Object",
	nullptr,
	_Pair_FieldInfo_,
	_Pair_MethodInfo_,
	"<A:Ljava/lang/Object;B:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$Pair($Class* clazz) {
	return $of($alloc(Pair));
}

void Pair::init$(Object$* fst, Object$* snd) {
	$set(this, fst, fst);
	$set(this, snd, snd);
}

$String* Pair::toString() {
	return $str({"Pair["_s, this->fst, ","_s, this->snd, "]"_s});
}

bool Pair::equals(Object$* other) {
	bool var$0 = $instanceOf(Pair, other) && $Objects::equals(this->fst, $nc(($cast(Pair, other)))->fst);
	return var$0 && $Objects::equals(this->snd, $nc(($cast(Pair, other)))->snd);
}

int32_t Pair::hashCode() {
	if (this->fst == nullptr) {
		return (this->snd == nullptr) ? 0 : $nc($of(this->snd))->hashCode() + 1;
	} else if (this->snd == nullptr) {
		return $nc($of(this->fst))->hashCode() + 2;
	} else {
		int32_t var$0 = $nc($of(this->fst))->hashCode() * 17;
		return var$0 + $nc($of(this->snd))->hashCode();
	}
}

Pair* Pair::of(Object$* a, Object$* b) {
	return $new(Pair, a, b);
}

Pair::Pair() {
}

$Class* Pair::load$($String* name, bool initialize) {
	$loadClass(Pair, name, initialize, &_Pair_ClassInfo_, allocate$Pair);
	return class$;
}

$Class* Pair::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun