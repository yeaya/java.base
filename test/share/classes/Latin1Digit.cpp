#include <Latin1Digit.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_RADIX
#undef MAX_VALUE
#undef MIN_RADIX
#undef MIN_VALUE

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Latin1Digit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Latin1Digit::*)()>(&Latin1Digit::init$))},
	{"canonicalDigit", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Latin1Digit::canonicalDigit))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Latin1Digit::main)), "java.lang.Exception"},
	{"test", "(II)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,int32_t)>(&Latin1Digit::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _Latin1Digit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Latin1Digit",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Latin1Digit_MethodInfo_
};

$Object* allocate$Latin1Digit($Class* clazz) {
	return $of($alloc(Latin1Digit));
}

void Latin1Digit::init$() {
}

void Latin1Digit::main($StringArray* args) {
	for (int32_t ch = 0; ch < 256; ++ch) {
		for (int32_t radix = -256; radix <= 256; ++radix) {
			test(ch, radix);
		}
		test(ch, $Integer::MIN_VALUE);
		test(ch, $Integer::MAX_VALUE);
	}
}

void Latin1Digit::test(int32_t ch, int32_t radix) {
	$useLocalCurrentObjectStackCache();
	int32_t d1 = $Character::digit(ch, radix);
	int32_t d2 = canonicalDigit(ch, radix);
	if (d1 != d2) {
		$throwNew($Exception, $$str({"Wrong result for char="_s, $$str(ch), " ("_s, $$str((char16_t)ch), "), radix="_s, $$str(radix), "; "_s, $$str(d1), " != "_s, $$str(d2)}));
	}
}

int32_t Latin1Digit::canonicalDigit(int32_t ch, int32_t radix) {
	if (radix < $Character::MIN_RADIX || radix > $Character::MAX_RADIX) {
		return -1;
	}
	if (ch >= u'0' && ch <= u'9' && ch < (radix + u'0')) {
		return ch - u'0';
	}
	if (ch >= u'A' && ch <= u'Z' && ch < (radix + u'A' - 10)) {
		return ch - u'A' + 10;
	}
	if (ch >= u'a' && ch <= u'z' && ch < (radix + u'a' - 10)) {
		return ch - u'a' + 10;
	}
	return -1;
}

Latin1Digit::Latin1Digit() {
}

$Class* Latin1Digit::load$($String* name, bool initialize) {
	$loadClass(Latin1Digit, name, initialize, &_Latin1Digit_ClassInfo_, allocate$Latin1Digit);
	return class$;
}

$Class* Latin1Digit::class$ = nullptr;