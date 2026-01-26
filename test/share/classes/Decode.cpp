#include <Decode.h>

#include <java/lang/NumberFormatException.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;

$MethodInfo _Decode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Decode, init$, void)},
	{"check", "(Ljava/lang/String;S)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Decode, check, void, $String*, int16_t)},
	{"checkFailure", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Decode, checkFailure, void, $String*, $String*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Decode, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Decode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Decode",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Decode_MethodInfo_
};

$Object* allocate$Decode($Class* clazz) {
	return $of($alloc(Decode));
}

void Decode::init$() {
}

void Decode::check($String* ashort, int16_t expected) {
	$useLocalCurrentObjectStackCache();
	int16_t sh = $nc(($($Short::decode(ashort))))->shortValue();
	if (sh != expected) {
		$throwNew($RuntimeException, $$str({"Short.decode failed. String:"_s, ashort, " Result:"_s, $$str(sh)}));
	}
}

void Decode::checkFailure($String* val, $String* message) {
	try {
		int16_t n = $nc(($($Short::decode(val))))->shortValue();
		$throwNew($RuntimeException, message);
	} catch ($NumberFormatException& e) {
	}
}

void Decode::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	check($$new($String, $$str({""_s, $$str($Short::MIN_VALUE)})), $Short::MIN_VALUE);
	check($$new($String, $$str({""_s, $$str($Short::MAX_VALUE)})), $Short::MAX_VALUE);
	check("10"_s, (int16_t)10);
	check("0x10"_s, (int16_t)16);
	check("0X10"_s, (int16_t)16);
	check("010"_s, (int16_t)8);
	check("#10"_s, (int16_t)16);
	check("+10"_s, (int16_t)10);
	check("+0x10"_s, (int16_t)16);
	check("+0X10"_s, (int16_t)16);
	check("+010"_s, (int16_t)8);
	check("+#10"_s, (int16_t)16);
	check("-10"_s, (int16_t)-10);
	check("-0x10"_s, (int16_t)-16);
	check("-0X10"_s, (int16_t)-16);
	check("-010"_s, (int16_t)-8);
	check("-#10"_s, (int16_t)-16);
	check($($Integer::toString((int32_t)$Short::MIN_VALUE)), $Short::MIN_VALUE);
	check($($Integer::toString((int32_t)$Short::MAX_VALUE)), $Short::MAX_VALUE);
	checkFailure("0x-10"_s, "Short.decode allows negative sign in wrong position."_s);
	checkFailure("0x+10"_s, "Short.decode allows positive sign in wrong position."_s);
	checkFailure("+"_s, "Raw plus sign allowed."_s);
	checkFailure("-"_s, "Raw minus sign allowed."_s);
	checkFailure($($Integer::toString((int32_t)$Short::MIN_VALUE - 1)), "Out of range"_s);
	checkFailure($($Integer::toString((int32_t)$Short::MAX_VALUE + 1)), "Out of range"_s);
	checkFailure(""_s, "Empty String"_s);
}

Decode::Decode() {
}

$Class* Decode::load$($String* name, bool initialize) {
	$loadClass(Decode, name, initialize, &_Decode_ClassInfo_, allocate$Decode);
	return class$;
}

$Class* Decode::class$ = nullptr;