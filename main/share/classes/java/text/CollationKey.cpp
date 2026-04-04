#include <java/text/CollationKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace text {

$String* CollationKey::getSourceString() {
	return this->source;
}

void CollationKey::init$($String* source) {
	if (source == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, source, source);
}

int32_t CollationKey::compareTo(Object$* target) {
	return this->compareTo($cast(CollationKey, target));
}

CollationKey::CollationKey() {
}

$Class* CollationKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"source", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CollationKey, source)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(CollationKey, init$, void, $String*)},
		{"compareTo", "(Ljava/text/CollationKey;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CollationKey, compareTo, int32_t, CollationKey*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CollationKey, compareTo, int32_t, Object$*)},
		{"getSourceString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CollationKey, getSourceString, $String*)},
		{"toByteArray", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CollationKey, toByteArray, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.text.CollationKey",
		"java.lang.Object",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/text/CollationKey;>;"
	};
	$loadClass(CollationKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationKey);
	});
	return class$;
}

$Class* CollationKey::class$ = nullptr;

	} // text
} // java