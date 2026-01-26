#include <TranslateEscapes.h>

#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _TranslateEscapes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TranslateEscapes, init$, void)},
	{"exceptionThrown", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(TranslateEscapes, exceptionThrown, void, $String*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(TranslateEscapes, main, void, $StringArray*)},
	{"test1", "()V", nullptr, $STATIC, $staticMethod(TranslateEscapes, test1, void)},
	{"test2", "()V", nullptr, $STATIC, $staticMethod(TranslateEscapes, test2, void)},
	{"test3", "()V", nullptr, $STATIC, $staticMethod(TranslateEscapes, test3, void)},
	{"test4", "()V", nullptr, $STATIC, $staticMethod(TranslateEscapes, test4, void)},
	{"verifyEscape", "(Ljava/lang/String;C)V", nullptr, $STATIC, $staticMethod(TranslateEscapes, verifyEscape, void, $String*, char16_t)},
	{"verifyLineTerminator", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(TranslateEscapes, verifyLineTerminator, void, $String*)},
	{"verifyOctalEscape", "(Ljava/lang/String;I)V", nullptr, $STATIC, $staticMethod(TranslateEscapes, verifyOctalEscape, void, $String*, int32_t)},
	{}
};

$ClassInfo _TranslateEscapes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TranslateEscapes",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TranslateEscapes_MethodInfo_
};

$Object* allocate$TranslateEscapes($Class* clazz) {
	return $of($alloc(TranslateEscapes));
}

void TranslateEscapes::init$() {
}

void TranslateEscapes::main($StringArray* arg) {
	test1();
	test2();
	test3();
	test4();
}

void TranslateEscapes::test1() {
	verifyEscape("b"_s, u'\b');
	verifyEscape("f"_s, u'\f');
	verifyEscape("n"_s, u'\n');
	verifyEscape("r"_s, u'\r');
	verifyEscape("s"_s, u' ');
	verifyEscape("t"_s, u'\t');
	verifyEscape("\'"_s, u'\'');
	verifyEscape("\""_s, u'\"');
	verifyEscape("\\"_s, u'\\');
}

void TranslateEscapes::test2() {
	verifyOctalEscape("0"_s, 0);
	verifyOctalEscape("3"_s, 3);
	verifyOctalEscape("7"_s, 7);
	verifyOctalEscape("07"_s, 7);
	verifyOctalEscape("17"_s, 15);
	verifyOctalEscape("27"_s, 23);
	verifyOctalEscape("37"_s, 31);
	verifyOctalEscape("377"_s, 255);
	verifyOctalEscape("777"_s, 63);
	verifyOctalEscape("78"_s, 7);
}

void TranslateEscapes::test3() {
	exceptionThrown("+"_s);
	exceptionThrown("q"_s);
}

void TranslateEscapes::test4() {
	verifyLineTerminator("\n"_s);
	verifyLineTerminator("\r\n"_s);
	verifyLineTerminator("\r"_s);
}

void TranslateEscapes::verifyEscape($String* string, char16_t ch) {
	$useLocalCurrentObjectStackCache();
	$var($String, escapes, $str({"\\"_s, string}));
	if ($($nc(escapes)->translateEscapes())->charAt(0) != ch) {
		$nc($System::err)->format("\"%s\" not escape \"%s\"\'%n"_s, $$new($ObjectArray, {
			$of(string),
			$of(escapes)
		}));
		$throwNew($RuntimeException);
	}
}

void TranslateEscapes::verifyOctalEscape($String* string, int32_t octal) {
	$useLocalCurrentObjectStackCache();
	$var($String, escapes, $str({"\\"_s, string}));
	if ($($nc(escapes)->translateEscapes())->charAt(0) != octal) {
		$nc($System::err)->format("\"%s\" not octal %o%n"_s, $$new($ObjectArray, {
			$of(string),
			$($of($Integer::valueOf(octal)))
		}));
		$throwNew($RuntimeException);
	}
}

void TranslateEscapes::exceptionThrown($String* string) {
	$useLocalCurrentObjectStackCache();
	$var($String, escapes, $str({"\\"_s, string}));
	try {
		$nc(escapes)->translateEscapes();
		$nc($System::err)->format("escape not thrown for %s%n"_s, $$new($ObjectArray, {$of(string)}));
		$throwNew($RuntimeException);
	} catch ($IllegalArgumentException& ex) {
	}
}

void TranslateEscapes::verifyLineTerminator($String* string) {
	$useLocalCurrentObjectStackCache();
	$var($String, escapes, $str({"\\"_s, string}));
	if (!$($nc(escapes)->translateEscapes())->isEmpty()) {
		$nc($System::err)->format("escape for line terminator not handled %s%n"_s, $$new($ObjectArray, {$($of($($nc(string)->replace(static_cast<$CharSequence*>("\n"_s), static_cast<$CharSequence*>("\\n"_s)))->replace(static_cast<$CharSequence*>("\r"_s), static_cast<$CharSequence*>("\\r"_s))))}));
		$throwNew($RuntimeException);
	}
}

TranslateEscapes::TranslateEscapes() {
}

$Class* TranslateEscapes::load$($String* name, bool initialize) {
	$loadClass(TranslateEscapes, name, initialize, &_TranslateEscapes_ClassInfo_, allocate$TranslateEscapes);
	return class$;
}

$Class* TranslateEscapes::class$ = nullptr;