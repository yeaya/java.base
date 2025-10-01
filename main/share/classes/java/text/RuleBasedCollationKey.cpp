#include <java/text/RuleBasedCollationKey.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/CollationKey.h>
#include <java/text/Collator.h>
#include <jcpp.h>

#undef EQUAL
#undef GREATER
#undef LESS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CollationKey = ::java::text::CollationKey;
using $Collator = ::java::text::Collator;

namespace java {
	namespace text {

$FieldInfo _RuleBasedCollationKey_FieldInfo_[] = {
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RuleBasedCollationKey, key)},
	{}
};

$MethodInfo _RuleBasedCollationKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(RuleBasedCollationKey::*)($String*,$String*)>(&RuleBasedCollationKey::init$))},
	{"compareTo", "(Ljava/text/CollationKey;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toByteArray", "()[B", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RuleBasedCollationKey_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.text.RuleBasedCollationKey",
	"java.text.CollationKey",
	nullptr,
	_RuleBasedCollationKey_FieldInfo_,
	_RuleBasedCollationKey_MethodInfo_
};

$Object* allocate$RuleBasedCollationKey($Class* clazz) {
	return $of($alloc(RuleBasedCollationKey));
}

int32_t RuleBasedCollationKey::compareTo($CollationKey* target) {
	int32_t result = $nc(this->key)->compareTo($nc((($cast(RuleBasedCollationKey, target))))->key);
	if (result <= $Collator::LESS) {
		return $Collator::LESS;
	} else if (result >= $Collator::GREATER) {
		return $Collator::GREATER;
	}
	return $Collator::EQUAL;
}

bool RuleBasedCollationKey::equals(Object$* target) {
	if ($equals(this, target)) {
		return true;
	}
	if (target == nullptr || !$of($of(this)->getClass())->equals($nc($of(target))->getClass())) {
		return false;
	}
	$var(RuleBasedCollationKey, other, $cast(RuleBasedCollationKey, target));
	return $nc(this->key)->equals($nc(other)->key);
}

int32_t RuleBasedCollationKey::hashCode() {
	return ($nc(this->key)->hashCode());
}

$bytes* RuleBasedCollationKey::toByteArray() {
	$var($chars, src, $nc(this->key)->toCharArray());
	$var($bytes, dest, $new($bytes, 2 * src->length));
	int32_t j = 0;
	for (int32_t i = 0; i < src->length; ++i) {
		dest->set(j++, (int8_t)((int32_t)((uint32_t)src->get(i) >> 8)));
		dest->set(j++, (int8_t)((int32_t)(src->get(i) & (uint32_t)255)));
	}
	return dest;
}

void RuleBasedCollationKey::init$($String* source, $String* key) {
	$CollationKey::init$(source);
	$set(this, key, nullptr);
	$set(this, key, key);
}

int32_t RuleBasedCollationKey::compareTo(Object$* target) {
	return this->compareTo($cast($CollationKey, target));
}

RuleBasedCollationKey::RuleBasedCollationKey() {
}

$Class* RuleBasedCollationKey::load$($String* name, bool initialize) {
	$loadClass(RuleBasedCollationKey, name, initialize, &_RuleBasedCollationKey_ClassInfo_, allocate$RuleBasedCollationKey);
	return class$;
}

$Class* RuleBasedCollationKey::class$ = nullptr;

	} // text
} // java