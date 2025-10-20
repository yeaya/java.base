#include <EqualsIgnoreCase.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CAPITAL_GREEK_THETA
#undef CAPITAL_I
#undef CAPITAL_I_WITH_DOT
#undef LOWER_GREEK_THETA
#undef SMALL_DOTLESS_I
#undef SMALL_I

using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _EqualsIgnoreCase_FieldInfo_[] = {
	{"SMALL_I", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EqualsIgnoreCase, SMALL_I)},
	{"CAPITAL_I", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EqualsIgnoreCase, CAPITAL_I)},
	{"SMALL_DOTLESS_I", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EqualsIgnoreCase, SMALL_DOTLESS_I)},
	{"CAPITAL_I_WITH_DOT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EqualsIgnoreCase, CAPITAL_I_WITH_DOT)},
	{"LOWER_GREEK_THETA", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EqualsIgnoreCase, LOWER_GREEK_THETA)},
	{"CAPITAL_GREEK_THETA", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EqualsIgnoreCase, CAPITAL_GREEK_THETA)},
	{}
};

$MethodInfo _EqualsIgnoreCase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EqualsIgnoreCase::*)()>(&EqualsIgnoreCase::init$))},
	{"compareFuncs", "(Ljava/lang/String;Ljava/lang/String;ZZ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,bool,bool)>(&EqualsIgnoreCase::compareFuncs))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&EqualsIgnoreCase::main))},
	{"toUpperToLowerOriginals", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&EqualsIgnoreCase::toUpperToLowerOriginals))},
	{}
};

$ClassInfo _EqualsIgnoreCase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EqualsIgnoreCase",
	"java.lang.Object",
	nullptr,
	_EqualsIgnoreCase_FieldInfo_,
	_EqualsIgnoreCase_MethodInfo_
};

$Object* allocate$EqualsIgnoreCase($Class* clazz) {
	return $of($alloc(EqualsIgnoreCase));
}

$String* EqualsIgnoreCase::SMALL_I = nullptr;
$String* EqualsIgnoreCase::CAPITAL_I = nullptr;
$String* EqualsIgnoreCase::SMALL_DOTLESS_I = nullptr;
$String* EqualsIgnoreCase::CAPITAL_I_WITH_DOT = nullptr;
$String* EqualsIgnoreCase::LOWER_GREEK_THETA = nullptr;
$String* EqualsIgnoreCase::CAPITAL_GREEK_THETA = nullptr;

void EqualsIgnoreCase::init$() {
}

void EqualsIgnoreCase::main($StringArray* args) {
	$init(EqualsIgnoreCase);
	compareFuncs(EqualsIgnoreCase::SMALL_I, EqualsIgnoreCase::CAPITAL_I, true, true);
	compareFuncs(EqualsIgnoreCase::CAPITAL_I_WITH_DOT, EqualsIgnoreCase::SMALL_DOTLESS_I, true, false);
	compareFuncs(EqualsIgnoreCase::LOWER_GREEK_THETA, EqualsIgnoreCase::CAPITAL_GREEK_THETA, true, false);
}

void EqualsIgnoreCase::compareFuncs($String* s1, $String* s2, bool expectEquals, bool expectTuTl) {
	$init(EqualsIgnoreCase);
	$useLocalCurrentObjectStackCache();
	$init($System);
	$nc($System::out)->println($$str({s1, ", "_s, s2}));
	bool equalsResult = $nc(s1)->equalsIgnoreCase(s2);
	$nc($System::out)->println($$str({"equalsIgnoreCase:"_s, $$str(equalsResult)}));
	bool tuTlResult = toUpperToLowerOriginals(s1, s2);
	$nc($System::out)->println($$str({"tUtLO:"_s, $$str(tuTlResult)}));
	bool failed = false;
	if (equalsResult != expectEquals) {
		$nc($System::out)->println($$str({"Expected "_s, $$str(expectEquals), " from equalsIgnoreCase() but got "_s, $$str(equalsResult)}));
		failed = true;
	}
	if (tuTlResult != expectTuTl) {
		$nc($System::out)->println($$str({"Expected "_s, $$str(expectTuTl), " from toUpperToLowerOriginals() but got "_s, $$str(tuTlResult)}));
		failed = true;
	}
	if (failed) {
		$throwNew($RuntimeException, "Test Failed"_s);
	}
}

bool EqualsIgnoreCase::toUpperToLowerOriginals($String* str1, $String* str2) {
	$init(EqualsIgnoreCase);
	int32_t var$0 = $nc(str1)->length();
	if (var$0 != $nc(str2)->length()) {
		return false;
	}
	for (int32_t i = 0; i < $nc(str1)->length(); ++i) {
		char16_t c1 = str1->charAt(i);
		char16_t c2 = $nc(str2)->charAt(i);
		char16_t uc1 = $Character::toUpperCase(c1);
		char16_t uc2 = $Character::toUpperCase(c2);
		bool upperMatch = uc1 == uc2;
		char16_t lc1 = $Character::toLowerCase(c1);
		char16_t lc2 = $Character::toLowerCase(c2);
		bool lowerMatch = lc1 == lc2;
		if (!(upperMatch || lowerMatch)) {
			return false;
		}
	}
	return true;
}

EqualsIgnoreCase::EqualsIgnoreCase() {
}

void clinit$EqualsIgnoreCase($Class* class$) {
	$assignStatic(EqualsIgnoreCase::SMALL_I, "i"_s);
	$assignStatic(EqualsIgnoreCase::CAPITAL_I, "I"_s);
	$assignStatic(EqualsIgnoreCase::SMALL_DOTLESS_I, u"\u0131"_s);
	$assignStatic(EqualsIgnoreCase::CAPITAL_I_WITH_DOT, u"\u0130"_s);
	$assignStatic(EqualsIgnoreCase::LOWER_GREEK_THETA, u"\u03d1"_s);
	$assignStatic(EqualsIgnoreCase::CAPITAL_GREEK_THETA, u"\u03f4"_s);
}

$Class* EqualsIgnoreCase::load$($String* name, bool initialize) {
	$loadClass(EqualsIgnoreCase, name, initialize, &_EqualsIgnoreCase_ClassInfo_, clinit$EqualsIgnoreCase, allocate$EqualsIgnoreCase);
	return class$;
}

$Class* EqualsIgnoreCase::class$ = nullptr;