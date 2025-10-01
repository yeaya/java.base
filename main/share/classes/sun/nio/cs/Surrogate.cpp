#include <sun/nio/cs/Surrogate.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef UCS4_MIN
#undef MIN
#undef UCS4_MAX
#undef MAX
#undef MAX_LOW
#undef MIN_HIGH
#undef MAX_HIGH
#undef MIN_LOW

using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _Surrogate_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Surrogate, $assertionsDisabled)},
	{"MIN_HIGH", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Surrogate, MIN_HIGH)},
	{"MAX_HIGH", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Surrogate, MAX_HIGH)},
	{"MIN_LOW", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Surrogate, MIN_LOW)},
	{"MAX_LOW", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Surrogate, MAX_LOW)},
	{"MIN", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Surrogate, MIN)},
	{"MAX", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Surrogate, MAX)},
	{"UCS4_MIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Surrogate, UCS4_MIN)},
	{"UCS4_MAX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Surrogate, UCS4_MAX)},
	{}
};

$MethodInfo _Surrogate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Surrogate::*)()>(&Surrogate::init$))},
	{"high", "(I)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(int32_t)>(&Surrogate::high))},
	{"is", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Surrogate::is))},
	{"isHigh", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Surrogate::isHigh))},
	{"isLow", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Surrogate::isLow))},
	{"low", "(I)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(int32_t)>(&Surrogate::low))},
	{"neededFor", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Surrogate::neededFor))},
	{"toUCS4", "(CC)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(char16_t,char16_t)>(&Surrogate::toUCS4))},
	{}
};

$InnerClassInfo _Surrogate_InnerClassesInfo_[] = {
	{"sun.nio.cs.Surrogate$Generator", "sun.nio.cs.Surrogate", "Generator", $PUBLIC | $STATIC},
	{"sun.nio.cs.Surrogate$Parser", "sun.nio.cs.Surrogate", "Parser", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Surrogate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.Surrogate",
	"java.lang.Object",
	nullptr,
	_Surrogate_FieldInfo_,
	_Surrogate_MethodInfo_,
	nullptr,
	nullptr,
	_Surrogate_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.Surrogate$Generator,sun.nio.cs.Surrogate$Parser"
};

$Object* allocate$Surrogate($Class* clazz) {
	return $of($alloc(Surrogate));
}

bool Surrogate::$assertionsDisabled = false;

void Surrogate::init$() {
}

bool Surrogate::isHigh(int32_t c) {
	$init(Surrogate);
	return (Surrogate::MIN_HIGH <= c) && (c <= Surrogate::MAX_HIGH);
}

bool Surrogate::isLow(int32_t c) {
	$init(Surrogate);
	return (Surrogate::MIN_LOW <= c) && (c <= Surrogate::MAX_LOW);
}

bool Surrogate::is(int32_t c) {
	$init(Surrogate);
	return (Surrogate::MIN <= c) && (c <= Surrogate::MAX);
}

bool Surrogate::neededFor(int32_t uc) {
	$init(Surrogate);
	return $Character::isSupplementaryCodePoint(uc);
}

char16_t Surrogate::high(int32_t uc) {
	$init(Surrogate);
	if (!Surrogate::$assertionsDisabled && !$Character::isSupplementaryCodePoint(uc)) {
		$throwNew($AssertionError);
	}
	return $Character::highSurrogate(uc);
}

char16_t Surrogate::low(int32_t uc) {
	$init(Surrogate);
	if (!Surrogate::$assertionsDisabled && !$Character::isSupplementaryCodePoint(uc)) {
		$throwNew($AssertionError);
	}
	return $Character::lowSurrogate(uc);
}

int32_t Surrogate::toUCS4(char16_t c, char16_t d) {
	$init(Surrogate);
	bool var$0 = !Surrogate::$assertionsDisabled;
	if (var$0) {
		bool var$1 = $Character::isHighSurrogate(c);
		var$0 = !(var$1 && $Character::isLowSurrogate(d));
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	return $Character::toCodePoint(c, d);
}

void clinit$Surrogate($Class* class$) {
	Surrogate::$assertionsDisabled = !Surrogate::class$->desiredAssertionStatus();
}

Surrogate::Surrogate() {
}

$Class* Surrogate::load$($String* name, bool initialize) {
	$loadClass(Surrogate, name, initialize, &_Surrogate_ClassInfo_, clinit$Surrogate, allocate$Surrogate);
	return class$;
}

$Class* Surrogate::class$ = nullptr;

		} // cs
	} // nio
} // sun