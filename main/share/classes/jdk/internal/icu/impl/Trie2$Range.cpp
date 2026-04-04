#include <jdk/internal/icu/impl/Trie2$Range.h>
#include <jdk/internal/icu/impl/Trie2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Trie2 = ::jdk::internal::icu::impl::Trie2;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void Trie2$Range::init$() {
}

bool Trie2$Range::equals(Object$* other) {
	if (other == nullptr || !($of(other)->getClass()->equals($of(this)->getClass()))) {
		return false;
	}
	$var(Trie2$Range, tother, $cast(Trie2$Range, other));
	return this->startCodePoint == $nc(tother)->startCodePoint && this->endCodePoint == tother->endCodePoint && this->value == tother->value && this->leadSurrogate == tother->leadSurrogate;
}

int32_t Trie2$Range::hashCode() {
	int32_t h = $Trie2::initHash();
	h = $Trie2::hashUChar32(h, this->startCodePoint);
	h = $Trie2::hashUChar32(h, this->endCodePoint);
	h = $Trie2::hashInt(h, this->value);
	h = $Trie2::hashByte(h, this->leadSurrogate ? 1 : 0);
	return h;
}

Trie2$Range::Trie2$Range() {
}

$Class* Trie2$Range::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"startCodePoint", "I", nullptr, $PUBLIC, $field(Trie2$Range, startCodePoint)},
		{"endCodePoint", "I", nullptr, $PUBLIC, $field(Trie2$Range, endCodePoint)},
		{"value", "I", nullptr, $PUBLIC, $field(Trie2$Range, value)},
		{"leadSurrogate", "Z", nullptr, $PUBLIC, $field(Trie2$Range, leadSurrogate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Trie2$Range, init$, void)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Trie2$Range, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Trie2$Range, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.Trie2$Range", "jdk.internal.icu.impl.Trie2", "Range", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.icu.impl.Trie2$Range",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.impl.Trie2"
	};
	$loadClass(Trie2$Range, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Trie2$Range);
	});
	return class$;
}

$Class* Trie2$Range::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk