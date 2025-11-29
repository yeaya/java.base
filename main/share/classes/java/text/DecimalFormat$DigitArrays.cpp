#include <java/text/DecimalFormat$DigitArrays.h>

#include <java/text/DecimalFormat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

$FieldInfo _DecimalFormat$DigitArrays_FieldInfo_[] = {
	{"DigitOnes1000", "[C", nullptr, $STATIC | $FINAL, $staticField(DecimalFormat$DigitArrays, DigitOnes1000)},
	{"DigitTens1000", "[C", nullptr, $STATIC | $FINAL, $staticField(DecimalFormat$DigitArrays, DigitTens1000)},
	{"DigitHundreds1000", "[C", nullptr, $STATIC | $FINAL, $staticField(DecimalFormat$DigitArrays, DigitHundreds1000)},
	{}
};

$MethodInfo _DecimalFormat$DigitArrays_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat$DigitArrays::*)()>(&DecimalFormat$DigitArrays::init$))},
	{}
};

$InnerClassInfo _DecimalFormat$DigitArrays_InnerClassesInfo_[] = {
	{"java.text.DecimalFormat$DigitArrays", "java.text.DecimalFormat", "DigitArrays", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DecimalFormat$DigitArrays_ClassInfo_ = {
	$ACC_SUPER,
	"java.text.DecimalFormat$DigitArrays",
	"java.lang.Object",
	nullptr,
	_DecimalFormat$DigitArrays_FieldInfo_,
	_DecimalFormat$DigitArrays_MethodInfo_,
	nullptr,
	nullptr,
	_DecimalFormat$DigitArrays_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.text.DecimalFormat"
};

$Object* allocate$DecimalFormat$DigitArrays($Class* clazz) {
	return $of($alloc(DecimalFormat$DigitArrays));
}

$chars* DecimalFormat$DigitArrays::DigitOnes1000 = nullptr;
$chars* DecimalFormat$DigitArrays::DigitTens1000 = nullptr;
$chars* DecimalFormat$DigitArrays::DigitHundreds1000 = nullptr;

void DecimalFormat$DigitArrays::init$() {
}

void clinit$DecimalFormat$DigitArrays($Class* class$) {
	$assignStatic(DecimalFormat$DigitArrays::DigitOnes1000, $new($chars, 1000));
	$assignStatic(DecimalFormat$DigitArrays::DigitTens1000, $new($chars, 1000));
	$assignStatic(DecimalFormat$DigitArrays::DigitHundreds1000, $new($chars, 1000));
	{
		int32_t tenIndex = 0;
		int32_t hundredIndex = 0;
		char16_t digitOne = u'0';
		char16_t digitTen = u'0';
		char16_t digitHundred = u'0';
		for (int32_t i = 0; i < 1000; ++i) {
			$nc(DecimalFormat$DigitArrays::DigitOnes1000)->set(i, digitOne);
			if (digitOne == u'9') {
				digitOne = u'0';
			} else {
				++digitOne;
			}
			$nc(DecimalFormat$DigitArrays::DigitTens1000)->set(i, digitTen);
			if (i == (tenIndex + 9)) {
				tenIndex += 10;
				if (digitTen == u'9') {
					digitTen = u'0';
				} else {
					++digitTen;
				}
			}
			$nc(DecimalFormat$DigitArrays::DigitHundreds1000)->set(i, digitHundred);
			if (i == (hundredIndex + 99)) {
				++digitHundred;
				hundredIndex += 100;
			}
		}
	}
}

DecimalFormat$DigitArrays::DecimalFormat$DigitArrays() {
}

$Class* DecimalFormat$DigitArrays::load$($String* name, bool initialize) {
	$loadClass(DecimalFormat$DigitArrays, name, initialize, &_DecimalFormat$DigitArrays_ClassInfo_, clinit$DecimalFormat$DigitArrays, allocate$DecimalFormat$DigitArrays);
	return class$;
}

$Class* DecimalFormat$DigitArrays::class$ = nullptr;

	} // text
} // java