#include <java/math/BigDecimal$StringBuilderHelper.h>
#include <java/lang/AssertionError.h>
#include <java/math/BigDecimal.h>
#include <jcpp.h>

#undef DIGIT_ONES
#undef DIGIT_TENS
#undef MAX_VALUE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;

namespace java {
	namespace math {

bool BigDecimal$StringBuilderHelper::$assertionsDisabled = false;
$chars* BigDecimal$StringBuilderHelper::DIGIT_TENS = nullptr;
$chars* BigDecimal$StringBuilderHelper::DIGIT_ONES = nullptr;

void BigDecimal$StringBuilderHelper::init$() {
	$set(this, sb, $new($StringBuilder, 32));
	$set(this, cmpCharArray, $new($chars, 19));
}

$StringBuilder* BigDecimal$StringBuilderHelper::getStringBuilder() {
	this->sb->setLength(0);
	return this->sb;
}

$chars* BigDecimal$StringBuilderHelper::getCompactCharArray() {
	return this->cmpCharArray;
}

int32_t BigDecimal$StringBuilderHelper::putIntCompact(int64_t intCompact) {
	if (!BigDecimal$StringBuilderHelper::$assertionsDisabled && !(intCompact >= 0)) {
		$throwNew($AssertionError);
	}
	int64_t q = 0;
	int32_t r = 0;
	int32_t charPos = this->cmpCharArray->length;
	while (intCompact > $Integer::MAX_VALUE) {
		q = intCompact / 100;
		r = (int32_t)(intCompact - q * 100);
		intCompact = q;
		this->cmpCharArray->set(--charPos, BigDecimal$StringBuilderHelper::DIGIT_ONES->get(r));
		this->cmpCharArray->set(--charPos, BigDecimal$StringBuilderHelper::DIGIT_TENS->get(r));
	}
	int32_t q2 = 0;
	int32_t i2 = (int32_t)intCompact;
	while (i2 >= 100) {
		q2 = i2 / 100;
		r = i2 - q2 * 100;
		i2 = q2;
		this->cmpCharArray->set(--charPos, BigDecimal$StringBuilderHelper::DIGIT_ONES->get(r));
		this->cmpCharArray->set(--charPos, BigDecimal$StringBuilderHelper::DIGIT_TENS->get(r));
	}
	this->cmpCharArray->set(--charPos, BigDecimal$StringBuilderHelper::DIGIT_ONES->get(i2));
	if (i2 >= 10) {
		this->cmpCharArray->set(--charPos, BigDecimal$StringBuilderHelper::DIGIT_TENS->get(i2));
	}
	return charPos;
}

void BigDecimal$StringBuilderHelper::clinit$($Class* clazz) {
	$load($BigDecimal);
	BigDecimal$StringBuilderHelper::$assertionsDisabled = !$BigDecimal::class$->desiredAssertionStatus();
	$assignStatic(BigDecimal$StringBuilderHelper::DIGIT_TENS, $new($chars, {
		u'0',
		u'0',
		u'0',
		u'0',
		u'0',
		u'0',
		u'0',
		u'0',
		u'0',
		u'0',
		u'1',
		u'1',
		u'1',
		u'1',
		u'1',
		u'1',
		u'1',
		u'1',
		u'1',
		u'1',
		u'2',
		u'2',
		u'2',
		u'2',
		u'2',
		u'2',
		u'2',
		u'2',
		u'2',
		u'2',
		u'3',
		u'3',
		u'3',
		u'3',
		u'3',
		u'3',
		u'3',
		u'3',
		u'3',
		u'3',
		u'4',
		u'4',
		u'4',
		u'4',
		u'4',
		u'4',
		u'4',
		u'4',
		u'4',
		u'4',
		u'5',
		u'5',
		u'5',
		u'5',
		u'5',
		u'5',
		u'5',
		u'5',
		u'5',
		u'5',
		u'6',
		u'6',
		u'6',
		u'6',
		u'6',
		u'6',
		u'6',
		u'6',
		u'6',
		u'6',
		u'7',
		u'7',
		u'7',
		u'7',
		u'7',
		u'7',
		u'7',
		u'7',
		u'7',
		u'7',
		u'8',
		u'8',
		u'8',
		u'8',
		u'8',
		u'8',
		u'8',
		u'8',
		u'8',
		u'8',
		u'9',
		u'9',
		u'9',
		u'9',
		u'9',
		u'9',
		u'9',
		u'9',
		u'9',
		u'9'
	}));
	$assignStatic(BigDecimal$StringBuilderHelper::DIGIT_ONES, $new($chars, {
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9'
	}));
}

BigDecimal$StringBuilderHelper::BigDecimal$StringBuilderHelper() {
}

$Class* BigDecimal$StringBuilderHelper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BigDecimal$StringBuilderHelper, $assertionsDisabled)},
		{"sb", "Ljava/lang/StringBuilder;", nullptr, $FINAL, $field(BigDecimal$StringBuilderHelper, sb)},
		{"cmpCharArray", "[C", nullptr, $FINAL, $field(BigDecimal$StringBuilderHelper, cmpCharArray)},
		{"DIGIT_TENS", "[C", nullptr, $STATIC | $FINAL, $staticField(BigDecimal$StringBuilderHelper, DIGIT_TENS)},
		{"DIGIT_ONES", "[C", nullptr, $STATIC | $FINAL, $staticField(BigDecimal$StringBuilderHelper, DIGIT_ONES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BigDecimal$StringBuilderHelper, init$, void)},
		{"getCompactCharArray", "()[C", nullptr, 0, $virtualMethod(BigDecimal$StringBuilderHelper, getCompactCharArray, $chars*)},
		{"getStringBuilder", "()Ljava/lang/StringBuilder;", nullptr, 0, $virtualMethod(BigDecimal$StringBuilderHelper, getStringBuilder, $StringBuilder*)},
		{"putIntCompact", "(J)I", nullptr, 0, $virtualMethod(BigDecimal$StringBuilderHelper, putIntCompact, int32_t, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.math.BigDecimal$StringBuilderHelper", "java.math.BigDecimal", "StringBuilderHelper", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.math.BigDecimal$StringBuilderHelper",
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
		"java.math.BigDecimal"
	};
	$loadClass(BigDecimal$StringBuilderHelper, name, initialize, &classInfo$$, BigDecimal$StringBuilderHelper::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BigDecimal$StringBuilderHelper);
	});
	return class$;
}

$Class* BigDecimal$StringBuilderHelper::class$ = nullptr;

	} // math
} // java