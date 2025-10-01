#include <ToUpperCase.h>

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

#undef GERMANY
#undef ROOT
#undef US

using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;

$MethodInfo _ToUpperCase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ToUpperCase::*)()>(&ToUpperCase::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ToUpperCase::main))},
	{"test", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$Locale*,$String*)>(&ToUpperCase::test))},
	{"test0", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$Locale*,$String*)>(&ToUpperCase::test0))},
	{}
};

$ClassInfo _ToUpperCase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ToUpperCase",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ToUpperCase_MethodInfo_
};

$Object* allocate$ToUpperCase($Class* clazz) {
	return $of($alloc(ToUpperCase));
}

void ToUpperCase::init$() {
}

void ToUpperCase::main($StringArray* args) {
	$var($Locale, turkish, $new($Locale, "tr"_s, "TR"_s));
	$var($Locale, lt, $new($Locale, "lt"_s));
	$var($Locale, az, $new($Locale, "az"_s));
	test(u"\u00df"_s, turkish, "SS"_s);
	test(u"a\u00df"_s, turkish, "ASS"_s);
	test("i"_s, turkish, u"\u0130"_s);
	test("i"_s, az, u"\u0130"_s);
	test(u"\u0131"_s, turkish, "I"_s);
	$init($Locale);
	test(u"\u00df"_s, $Locale::GERMANY, "SS"_s);
	test(u"a\u00df"_s, $Locale::GERMANY, "ASS"_s);
	test("i"_s, $Locale::GERMANY, "I"_s);
	test(u"abc\u00df"_s, $Locale::US, "ABCSS"_s);
	test(u"\u0149abc"_s, $Locale::US, u"\u02bcNABC"_s);
	test(u"\u0149abc"_s, turkish, u"\u02bcNABC"_s);
	test(u"\u1f52"_s, $Locale::US, u"\u03a5\u0313\u0300"_s);
	test(u"\u0149\u1f52"_s, $Locale::US, u"\u02bcN\u03a5\u0313\u0300"_s);
	test(u"\u1f54ZZZ"_s, $Locale::US, u"\u03a5\u0313\u0301ZZZ"_s);
	test(u"\u1f54ZZZ"_s, turkish, u"\u03a5\u0313\u0301ZZZ"_s);
	test(u"a\u00df\u1f56"_s, $Locale::US, u"ASS\u03a5\u0313\u0342"_s);
	test(u"\u1fad"_s, turkish, u"\u1f6d\u0399"_s);
	test(u"i\u1fc7"_s, turkish, u"\u0130\u0397\u0342\u0399"_s);
	test(u"i\u1fc7"_s, az, u"\u0130\u0397\u0342\u0399"_s);
	test(u"i\u1fc7"_s, $Locale::US, u"I\u0397\u0342\u0399"_s);
	test(u"\ufb04"_s, $Locale::US, "FFL"_s);
	test(u"\ufb17AbCdEfi"_s, turkish, u"\u0544\u053dABCDEF\u0130"_s);
	test(u"\ufb17AbCdEfi"_s, az, u"\u0544\u053dABCDEF\u0130"_s);
	test(u"i\u0307"_s, lt, "I"_s);
	test(u"\u0307"_s, lt, u"\u0307"_s);
	test(u"\u0307i"_s, lt, u"\u0307I"_s);
	test(u"j\u0307"_s, lt, "J"_s);
	test(u"abci\u0307def"_s, lt, "ABCIDEF"_s);
	test(u"a\u0307"_s, lt, u"A\u0307"_s);
	test(u"abc\u0307def"_s, lt, u"ABC\u0307DEF"_s);
	test(u"i\u0307"_s, $Locale::US, u"I\u0307"_s);
	test(u"i\u0307"_s, turkish, u"\u0130\u0307"_s);
	test($cstr({0x10428, 0x10429, 0x1042A}), $Locale::US, $cstr({0x10400, 0x10401, 0x10402}));
	test($cstr({0x10428, 'a', 0x10429, 'b', 0x1042A, 'c'}), $Locale::US, $cstr({0x10400, 'A', 0x10401, 'B', 0x10402, 'C'}));
	test($cstr({0xD800, 0xD800, 0xD801, 'a', 0xDC00, 0xDC00, 0xDC00, 'b'}), $Locale::US, $cstr({0xD800, 0xD800, 0xD801, 'A', 0xDC00, 0xDC00, 0xDC00, 'B'}));
	test($cstr({'a', 0x10444}), $Locale::ROOT, $cstr({'A', 0x1041C}));
	test($cstr({'A', 0x10444}), $Locale::ROOT, $cstr({'A', 0x1041C}));
	test($cstr({'a', 0x10428, 0x10429, 0x1042A}), $Locale::US, $cstr({'A', 0x10400, 0x10401, 0x10402}));
	test($cstr({'A', 0x10428, 'a', 0x10429, 'b', 0x1042A, 'c'}), $Locale::US, $cstr({'A', 0x10400, 'A', 0x10401, 'B', 0x10402, 'C'}));
	$var($StringBuilder, src, $new($StringBuilder, 256));
	$var($StringBuilder, exp, $new($StringBuilder, 256));
	for (int32_t cp = 0; cp < 256; ++cp) {
		int32_t upperCase = $Character::toUpperCase(cp);
		if (upperCase == -1) {
			continue;
		}
		src->appendCodePoint(cp);
		if (cp == (char16_t)0xDF) {
			exp->append("SS"_s);
		} else {
			exp->appendCodePoint(upperCase);
		}
	}
	$var($String, var$0, src->toString());
	$var($Locale, var$1, $Locale::US);
	test(var$0, var$1, $(exp->toString()));
	$assign(src, $$new($StringBuilder, 256)->append("ABC"_s));
	$assign(exp, $$new($StringBuilder, 256)->append("ABC"_s));
	for (int32_t cp = 256; cp < 0x00010000; ++cp) {
		int32_t upperCase = $Character::toUpperCase(cp);
		if (upperCase < 256) {
			src->appendCodePoint(cp);
			exp->appendCodePoint(upperCase);
		}
	}
	$var($String, var$2, src->toString());
	$var($Locale, var$3, $Locale::US);
	test(var$2, var$3, $(exp->toString()));
}

void ToUpperCase::test($String* in, $Locale* locale, $String* expected) {
	test0(in, locale, expected);
	{
		$var($StringArray2, arr$, $new($StringArray2, {
			$$new($StringArray, {
				"abc"_s,
				"ABC"_s
			}),
			$$new($StringArray, {
				"AbC"_s,
				"ABC"_s
			}),
			$$new($StringArray, {
				"ABC"_s,
				"ABC"_s
			}),
			$$new($StringArray, {
				u"AB\u4e00"_s,
				u"AB\u4e00"_s
			}),
			$$new($StringArray, {
				u"ab\u4e00"_s,
				u"AB\u4e00"_s
			}),
			$$new($StringArray, {
				u"aB\u4e00"_s,
				u"AB\u4e00"_s
			}),
			$$new($StringArray, {
				$cstr({'A', 'B', 0x10000}),
				$cstr({'A', 'B', 0x10000})
			}),
			$$new($StringArray, {
				$cstr({'A', 'b', 0x10000}),
				$cstr({'A', 'B', 0x10000})
			}),
			$$new($StringArray, {
				$cstr({'a', 'b', 0x10000}),
				$cstr({'A', 'B', 0x10000})
			}),
			$$new($StringArray, {
				$cstr({'A', 'B', 0x10444}),
				$cstr({'A', 'B', 0x1041C})
			}),
			$$new($StringArray, {
				$cstr({'A', 'b', 0x10444}),
				$cstr({'A', 'B', 0x1041C})
			}),
			$$new($StringArray, {
				$cstr({'a', 'b', 0x10444}),
				$cstr({'A', 'B', 0x1041C})
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

void ToUpperCase::test0($String* in, $Locale* locale, $String* expected) {
	$var($String, result, $nc(in)->toUpperCase(locale));
	if (!result->equals(expected)) {
		$init($System);
		$nc($System::err)->println($$str({"input: "_s, in, ", locale: "_s, locale, ", expected: "_s, expected, ", actual: "_s, result}));
		$throwNew($RuntimeException);
	}
}

ToUpperCase::ToUpperCase() {
}

$Class* ToUpperCase::load$($String* name, bool initialize) {
	$loadClass(ToUpperCase, name, initialize, &_ToUpperCase_ClassInfo_, allocate$ToUpperCase);
	return class$;
}

$Class* ToUpperCase::class$ = nullptr;