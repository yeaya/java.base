#include <Regex.h>

#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Regex_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Regex, init$, void)},
	{"ck", "(ZZ)V", nullptr, $STATIC, $staticMethod(Regex, ck, void, bool, bool), "java.lang.Exception"},
	{"ck", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Regex, ck, void, $String*, $String*), "java.lang.Exception"},
	{"ck", "([Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Regex, ck, void, $StringArray*, $StringArray*), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Regex, main, void, $StringArray*), "java.lang.Exception"},
	{"testLiteralReplacement", "()V", nullptr, $STATIC, $staticMethod(Regex, testLiteralReplacement, void), "java.lang.Exception"},
	{}
};

$ClassInfo _Regex_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Regex",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Regex_MethodInfo_
};

$Object* allocate$Regex($Class* clazz) {
	return $of($alloc(Regex));
}

void Regex::init$() {
}

void Regex::ck(bool x, bool ans) {
	if (x != ans) {
		$throwNew($Exception, "Test failed"_s);
	}
}

void Regex::ck($String* x, $String* ans) {
	if (!$nc(x)->equals(ans)) {
		$throwNew($Exception, "Test failed"_s);
	}
}

void Regex::ck($StringArray* x, $StringArray* ans) {
	if ($nc(x)->length != $nc(ans)->length) {
		$throwNew($Exception, "Test failed"_s);
	}
	for (int32_t i = 0; i < $nc(x)->length; ++i) {
		if (!$nc(x->get(i))->equals($nc(ans)->get(i))) {
			$throwNew($Exception, "Test failed"_s);
		}
	}
}

void Regex::testLiteralReplacement() {
	$useLocalCurrentObjectStackCache();
	$var($String, data, "abcdefghi"_s);
	$var($String, result, data->replace(static_cast<$CharSequence*>("def"_s), static_cast<$CharSequence*>("abc"_s)));
	if (!result->equals("abcabcghi"_s)) {
		$throwNew($Exception, "Test failed"_s);
	}
	$assign(data, "abc(def)?ghi"_s);
	$assign(result, data->replace(static_cast<$CharSequence*>("(def)?"_s), static_cast<$CharSequence*>("abc"_s)));
	if (!result->equals("abcabcghi"_s)) {
		$throwNew($Exception, "Test failed"_s);
	}
	$assign(data, "abcdefghi"_s);
	$assign(result, data->replace(static_cast<$CharSequence*>("def"_s), static_cast<$CharSequence*>("\\ab$c"_s)));
	if (!result->equals("abc\\ab$cghi"_s)) {
		$throwNew($Exception, "Test failed"_s);
	}
}

void Regex::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, foo, "boo:and:foo"_s);
	ck(foo->matches("b+"_s), false);
	ck(foo->matches("o+"_s), false);
	ck(foo->matches("b..:and:f.*"_s), true);
	ck($(foo->replaceAll("oo"_s, "uu"_s)), "buu:and:fuu"_s);
	ck($(foo->replaceAll("o+"_s, "<$0>"_s)), "b<oo>:and:f<oo>"_s);
	ck($(foo->replaceFirst("oo"_s, "uu"_s)), "buu:and:foo"_s);
	ck($(foo->replaceFirst("o+"_s, "<$0>"_s)), "b<oo>:and:foo"_s);
	ck($(foo->split(":"_s)), $$new($StringArray, {
		"boo"_s,
		"and"_s,
		"foo"_s
	}));
	ck($(foo->split("o"_s)), $$new($StringArray, {
		"b"_s,
		""_s,
		":and:f"_s
	}));
	ck($(foo->split(":"_s, 2)), $$new($StringArray, {
		"boo"_s,
		"and:foo"_s
	}));
	ck($(foo->split("o"_s, -2)), $$new($StringArray, {
		"b"_s,
		""_s,
		":and:f"_s,
		""_s,
		""_s
	}));
	testLiteralReplacement();
}

Regex::Regex() {
}

$Class* Regex::load$($String* name, bool initialize) {
	$loadClass(Regex, name, initialize, &_Regex_ClassInfo_, allocate$Regex);
	return class$;
}

$Class* Regex::class$ = nullptr;