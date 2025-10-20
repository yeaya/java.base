#include <ToLowerCase.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef JAPAN
#undef MAX_HIGH_SURROGATE
#undef MIN_HIGH_SURROGATE
#undef ROOT
#undef US

using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;

$MethodInfo _ToLowerCase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ToLowerCase::*)()>(&ToLowerCase::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ToLowerCase::main))},
	{"test", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$Locale*,$String*)>(&ToLowerCase::test))},
	{"test0", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$Locale*,$String*)>(&ToLowerCase::test0))},
	{}
};

$ClassInfo _ToLowerCase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ToLowerCase",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ToLowerCase_MethodInfo_
};

$Object* allocate$ToLowerCase($Class* clazz) {
	return $of($alloc(ToLowerCase));
}

void ToLowerCase::init$() {
}

void ToLowerCase::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, turkish, $new($Locale, "tr"_s, "TR"_s));
	$var($Locale, lt, $new($Locale, "lt"_s));
	$var($Locale, az, $new($Locale, "az"_s));
	$init($Locale);
	test(u"\u03a3"_s, $Locale::US, u"\u03c3"_s);
	test(u"LAST\u03a3"_s, $Locale::US, u"last\u03c2"_s);
	test(u"MID\u03a3DLE"_s, $Locale::US, u"mid\u03c3dle"_s);
	test(u"WORD1 \u03a3 WORD3"_s, $Locale::US, u"word1 \u03c3 word3"_s);
	test(u"WORD1 LAST\u03a3 WORD3"_s, $Locale::US, u"word1 last\u03c2 word3"_s);
	test(u"WORD1 MID\u03a3DLE WORD3"_s, $Locale::US, u"word1 mid\u03c3dle word3"_s);
	test(u"\u0399\u0395\u03a3\u03a5\u03a3 \u03a7\u03a1\u0399\u03a3\u03a4\u039f\u03a3"_s, $Locale::US, u"\u03b9\u03b5\u03c3\u03c5\u03c2 \u03c7\u03c1\u03b9\u03c3\u03c4\u03bf\u03c2"_s);
	test("I"_s, lt, "i"_s);
	test(u"I\u0300"_s, lt, u"i\u0307\u0300"_s);
	test(u"I\u0316"_s, lt, u"i\u0316"_s);
	test("J"_s, lt, "j"_s);
	test(u"J\u0300"_s, lt, u"j\u0307\u0300"_s);
	test(u"J\u0316"_s, lt, u"j\u0316"_s);
	test(u"\u012e"_s, lt, u"\u012f"_s);
	test(u"\u012e\u0300"_s, lt, u"\u012f\u0307\u0300"_s);
	test(u"\u012e\u0316"_s, lt, u"\u012f\u0316"_s);
	test(u"\u00cc"_s, lt, u"i\u0307\u0300"_s);
	test(u"\u00cd"_s, lt, u"i\u0307\u0301"_s);
	test(u"\u0128"_s, lt, u"i\u0307\u0303"_s);
	test(u"I\u0300"_s, $Locale::US, u"i\u0300"_s);
	test(u"J\u0300"_s, $Locale::US, u"j\u0300"_s);
	test(u"\u012e\u0300"_s, $Locale::US, u"\u012f\u0300"_s);
	test(u"\u00cc"_s, $Locale::US, u"\u00ec"_s);
	test(u"\u00cd"_s, $Locale::US, u"\u00ed"_s);
	test(u"\u0128"_s, $Locale::US, u"\u0129"_s);
	test(u"\u0130"_s, turkish, "i"_s);
	test(u"\u0130"_s, az, "i"_s);
	test(u"\u0130"_s, lt, u"i\u0307"_s);
	test(u"\u0130"_s, $Locale::US, u"i\u0307"_s);
	test(u"\u0130"_s, $Locale::JAPAN, u"i\u0307"_s);
	test(u"\u0130"_s, $Locale::ROOT, u"i\u0307"_s);
	test(u"I\u0307"_s, turkish, "i"_s);
	test(u"I\u0307"_s, az, "i"_s);
	test(u"J\u0307"_s, turkish, u"j\u0307"_s);
	test(u"J\u0307"_s, az, u"j\u0307"_s);
	test("I"_s, turkish, u"\u0131"_s);
	test("I"_s, az, u"\u0131"_s);
	test("I"_s, $Locale::US, "i"_s);
	test("IABC"_s, turkish, u"\u0131abc"_s);
	test("IABC"_s, az, u"\u0131abc"_s);
	test("IABC"_s, $Locale::US, "iabc"_s);
	test($cstr({0x10400, 0x10401, 0x10402}), $Locale::US, $cstr({0x10428, 0x10429, 0x1042A}));
	test($cstr({0x10400, 'A', 0x10401, 'B', 0x10402, 'C'}), $Locale::US, $cstr({0x10428, 'a', 0x10429, 'b', 0x1042A, 'c'}));
	test($cstr({0xD800, 0xD800, 0xD801, 'A', 0xDC00, 0xDC00, 0xDC00, 'B'}), $Locale::US, $cstr({0xD800, 0xD800, 0xD801, 'a', 0xDC00, 0xDC00, 0xDC00, 'b'}));
	test($cstr({'a', 0x1041C}), $Locale::ROOT, $cstr({'a', 0x10444}));
	test($cstr({'A', 0x1041C}), $Locale::ROOT, $cstr({'a', 0x10444}));
	test($cstr({'a', 0x10400, 0x10401, 0x10402}), $Locale::US, $cstr({'a', 0x10428, 0x10429, 0x1042A}));
	test($cstr({'A', 0x10400, 0x10401, 0x10402}), $Locale::US, $cstr({'a', 0x10428, 0x10429, 0x1042A}));
	$var($StringBuilder, src, $new($StringBuilder, 0x00020000));
	$var($StringBuilder, exp, $new($StringBuilder, 0x00020000));
	for (int32_t cp = 0; cp < 0x00020000; ++cp) {
		if (cp >= $Character::MIN_HIGH_SURROGATE && cp <= $Character::MAX_HIGH_SURROGATE) {
			continue;
		}
		if (cp == 304) {
			continue;
		}
		int32_t lowerCase = $Character::toLowerCase(cp);
		if (lowerCase == -1) {
			continue;
		}
		src->appendCodePoint(cp);
		exp->appendCodePoint(lowerCase);
	}
	$var($String, var$0, src->toString());
	$var($Locale, var$1, $Locale::US);
	test(var$0, var$1, $(exp->toString()));
	$assign(src, $new($StringBuilder, 256));
	$assign(exp, $new($StringBuilder, 256));
	for (int32_t cp = 0; cp < 256; ++cp) {
		int32_t lowerCase = $Character::toLowerCase(cp);
		if (lowerCase == -1) {
			continue;
		}
		src->appendCodePoint(cp);
		exp->appendCodePoint(lowerCase);
	}
	$var($String, var$2, src->toString());
	$var($Locale, var$3, $Locale::US);
	test(var$2, var$3, $(exp->toString()));
	$assign(src, $$new($StringBuilder, 256)->append("abc"_s));
	$assign(exp, $$new($StringBuilder, 256)->append("abc"_s));
	for (int32_t cp = 256; cp < 0x00010000; ++cp) {
		int32_t lowerCase = $Character::toLowerCase(cp);
		if (lowerCase < 256 && cp != (char16_t)0x130) {
			src->appendCodePoint(cp);
			exp->appendCodePoint(lowerCase);
		}
	}
	$var($String, var$4, src->toString());
	$var($Locale, var$5, $Locale::US);
	test(var$4, var$5, $(exp->toString()));
}

void ToLowerCase::test($String* in, $Locale* locale, $String* expected) {
	$useLocalCurrentObjectStackCache();
	test0(in, locale, expected);
	{
		$var($StringArray2, arr$, $new($StringArray2, {
			$$new($StringArray, {
				"abc"_s,
				"abc"_s
			}),
			$$new($StringArray, {
				"aBc"_s,
				"abc"_s
			}),
			$$new($StringArray, {
				"ABC"_s,
				"abc"_s
			}),
			$$new($StringArray, {
				u"ab\u4e00"_s,
				u"ab\u4e00"_s
			}),
			$$new($StringArray, {
				u"aB\u4e00"_s,
				u"ab\u4e00"_s
			}),
			$$new($StringArray, {
				u"AB\u4e00"_s,
				u"ab\u4e00"_s
			}),
			$$new($StringArray, {
				$cstr({'a', 'b', 0x10000}),
				$cstr({'a', 'b', 0x10000})
			}),
			$$new($StringArray, {
				$cstr({'a', 'B', 0x10000}),
				$cstr({'a', 'b', 0x10000})
			}),
			$$new($StringArray, {
				$cstr({'A', 'B', 0x10000}),
				$cstr({'a', 'b', 0x10000})
			}),
			$$new($StringArray, {
				$cstr({'a', 'b', 0x1041C}),
				$cstr({'a', 'b', 0x10444})
			}),
			$$new($StringArray, {
				$cstr({'a', 'B', 0x1041C}),
				$cstr({'a', 'b', 0x10444})
			}),
			$$new($StringArray, {
				$cstr({'A', 'B', 0x1041C}),
				$cstr({'a', 'b', 0x10444})
			})
		}));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($StringArray, ss, arr$->get(i$));
			{
				test0($$str({$nc(ss)->get(0), " "_s, in}), locale, $$str({ss->get(1), " "_s, expected}));
				test0($$str({in, " "_s, $nc(ss)->get(0)}), locale, $$str({expected, " "_s, ss->get(1)}));
			}
		}
	}
}

void ToLowerCase::test0($String* in, $Locale* locale, $String* expected) {
	$useLocalCurrentObjectStackCache();
	$var($String, result, $nc(in)->toLowerCase(locale));
	if (!result->equals(expected)) {
		$init($System);
		$nc($System::err)->println($$str({"input: "_s, in, ", locale: "_s, locale, ", expected: "_s, expected, ", actual: "_s, result}));
		$throwNew($RuntimeException);
	}
}

ToLowerCase::ToLowerCase() {
}

$Class* ToLowerCase::load$($String* name, bool initialize) {
	$loadClass(ToLowerCase, name, initialize, &_ToLowerCase_ClassInfo_, allocate$ToLowerCase);
	return class$;
}

$Class* ToLowerCase::class$ = nullptr;