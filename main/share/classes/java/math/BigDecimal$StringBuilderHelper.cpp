#include <java/math/BigDecimal$StringBuilderHelper.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <jcpp.h>

#undef DIGIT_ONES
#undef DIGIT_TENS
#undef MAX_VALUE

using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;

namespace java {
	namespace math {

$FieldInfo _BigDecimal$StringBuilderHelper_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BigDecimal$StringBuilderHelper, $assertionsDisabled)},
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $FINAL, $field(BigDecimal$StringBuilderHelper, sb)},
	{"cmpCharArray", "[C", nullptr, $FINAL, $field(BigDecimal$StringBuilderHelper, cmpCharArray)},
	{"DIGIT_TENS", "[C", nullptr, $STATIC | $FINAL, $staticField(BigDecimal$StringBuilderHelper, DIGIT_TENS)},
	{"DIGIT_ONES", "[C", nullptr, $STATIC | $FINAL, $staticField(BigDecimal$StringBuilderHelper, DIGIT_ONES)},
	{}
};

$MethodInfo _BigDecimal$StringBuilderHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BigDecimal$StringBuilderHelper::*)()>(&BigDecimal$StringBuilderHelper::init$))},
	{"getCompactCharArray", "()[C", nullptr, 0},
	{"getStringBuilder", "()Ljava/lang/StringBuilder;", nullptr, 0},
	{"putIntCompact", "(J)I", nullptr, 0},
	{}
};

$InnerClassInfo _BigDecimal$StringBuilderHelper_InnerClassesInfo_[] = {
	{"java.math.BigDecimal$StringBuilderHelper", "java.math.BigDecimal", "StringBuilderHelper", $STATIC},
	{}
};

$ClassInfo _BigDecimal$StringBuilderHelper_ClassInfo_ = {
	$ACC_SUPER,
	"java.math.BigDecimal$StringBuilderHelper",
	"java.lang.Object",
	nullptr,
	_BigDecimal$StringBuilderHelper_FieldInfo_,
	_BigDecimal$StringBuilderHelper_MethodInfo_,
	nullptr,
	nullptr,
	_BigDecimal$StringBuilderHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.math.BigDecimal"
};

$Object* allocate$BigDecimal$StringBuilderHelper($Class* clazz) {
	return $of($alloc(BigDecimal$StringBuilderHelper));
}

bool BigDecimal$StringBuilderHelper::$assertionsDisabled = false;
$chars* BigDecimal$StringBuilderHelper::DIGIT_TENS = nullptr;
$chars* BigDecimal$StringBuilderHelper::DIGIT_ONES = nullptr;

void BigDecimal$StringBuilderHelper::init$() {
	$set(this, sb, $new($StringBuilder, 32));
	$set(this, cmpCharArray, $new($chars, 19));
}

$StringBuilder* BigDecimal$StringBuilderHelper::getStringBuilder() {
	$nc(this->sb)->setLength(0);
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
	int32_t charPos = $nc(this->cmpCharArray)->length;
	while (intCompact > $Integer::MAX_VALUE) {
		q = intCompact / 100;
		r = (int32_t)(intCompact - q * 100);
		intCompact = q;
		$nc(this->cmpCharArray)->set(--charPos, $nc(BigDecimal$StringBuilderHelper::DIGIT_ONES)->get(r));
		$nc(this->cmpCharArray)->set(--charPos, $nc(BigDecimal$StringBuilderHelper::DIGIT_TENS)->get(r));
	}
	int32_t q2 = 0;
	int32_t i2 = (int32_t)intCompact;
	while (i2 >= 100) {
		q2 = i2 / 100;
		r = i2 - q2 * 100;
		i2 = q2;
		$nc(this->cmpCharArray)->set(--charPos, $nc(BigDecimal$StringBuilderHelper::DIGIT_ONES)->get(r));
		$nc(this->cmpCharArray)->set(--charPos, $nc(BigDecimal$StringBuilderHelper::DIGIT_TENS)->get(r));
	}
	$nc(this->cmpCharArray)->set(--charPos, $nc(BigDecimal$StringBuilderHelper::DIGIT_ONES)->get(i2));
	if (i2 >= 10) {
		$nc(this->cmpCharArray)->set(--charPos, $nc(BigDecimal$StringBuilderHelper::DIGIT_TENS)->get(i2));
	}
	return charPos;
}

void clinit$BigDecimal$StringBuilderHelper($Class* class$) {
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
	$loadClass(BigDecimal$StringBuilderHelper, name, initialize, &_BigDecimal$StringBuilderHelper_ClassInfo_, clinit$BigDecimal$StringBuilderHelper, allocate$BigDecimal$StringBuilderHelper);
	return class$;
}

$Class* BigDecimal$StringBuilderHelper::class$ = nullptr;

	} // math
} // java