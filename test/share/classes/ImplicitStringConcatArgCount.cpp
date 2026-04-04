#include <ImplicitStringConcatArgCount.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

$String* ImplicitStringConcatArgCount::s = nullptr;
$String* ImplicitStringConcatArgCount::s1 = nullptr;
$String* ImplicitStringConcatArgCount::s2 = nullptr;
int32_t ImplicitStringConcatArgCount::i = 0;

void ImplicitStringConcatArgCount::init$() {
}

void ImplicitStringConcatArgCount::main($StringArray* args) {
	$init(ImplicitStringConcatArgCount);
	$useLocalObjectStack();
	test("fo"_s, $$str({ImplicitStringConcatArgCount::s, ImplicitStringConcatArgCount::s1}));
	test("foo"_s, $$str({ImplicitStringConcatArgCount::s, ImplicitStringConcatArgCount::s1, ImplicitStringConcatArgCount::s2}));
	test("foo7"_s, $$str({ImplicitStringConcatArgCount::s, ImplicitStringConcatArgCount::s1, ImplicitStringConcatArgCount::s2, $$str(ImplicitStringConcatArgCount::i)}));
	test("foo77"_s, $$str({ImplicitStringConcatArgCount::s, ImplicitStringConcatArgCount::s1, ImplicitStringConcatArgCount::s2, $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i)}));
	test("foo777"_s, $$str({ImplicitStringConcatArgCount::s, ImplicitStringConcatArgCount::s1, ImplicitStringConcatArgCount::s2, $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i)}));
	test("foo7777"_s, $$str({ImplicitStringConcatArgCount::s, ImplicitStringConcatArgCount::s1, ImplicitStringConcatArgCount::s2, $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i)}));
	test("foo77777"_s, $$str({ImplicitStringConcatArgCount::s, ImplicitStringConcatArgCount::s1, ImplicitStringConcatArgCount::s2, $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i)}));
	test("foo777777"_s, $$str({ImplicitStringConcatArgCount::s, ImplicitStringConcatArgCount::s1, ImplicitStringConcatArgCount::s2, $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i)}));
	test("foo7777777"_s, $$str({ImplicitStringConcatArgCount::s, ImplicitStringConcatArgCount::s1, ImplicitStringConcatArgCount::s2, $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i)}));
	test("foo77777777"_s, $$str({ImplicitStringConcatArgCount::s, ImplicitStringConcatArgCount::s1, ImplicitStringConcatArgCount::s2, $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i), $$str(ImplicitStringConcatArgCount::i)}));
}

void ImplicitStringConcatArgCount::test($String* expected, $String* actual) {
	$init(ImplicitStringConcatArgCount);
	$useLocalObjectStack();
	if (!$nc(expected)->equals(actual)) {
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("Expected = "_s);
		sb->append(expected);
		sb->append(", actual = "_s);
		sb->append(actual);
		$throwNew($IllegalStateException, $(sb->toString()));
	}
}

void ImplicitStringConcatArgCount::clinit$($Class* clazz) {
	$assignStatic(ImplicitStringConcatArgCount::s, "f"_s);
	$assignStatic(ImplicitStringConcatArgCount::s1, "o"_s);
	$assignStatic(ImplicitStringConcatArgCount::s2, "o"_s);
	ImplicitStringConcatArgCount::i = 7;
}

ImplicitStringConcatArgCount::ImplicitStringConcatArgCount() {
}

$Class* ImplicitStringConcatArgCount::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"s", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ImplicitStringConcatArgCount, s)},
		{"s1", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ImplicitStringConcatArgCount, s1)},
		{"s2", "Ljava/lang/String;", nullptr, $STATIC, $staticField(ImplicitStringConcatArgCount, s2)},
		{"i", "I", nullptr, $STATIC, $staticField(ImplicitStringConcatArgCount, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImplicitStringConcatArgCount, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ImplicitStringConcatArgCount, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ImplicitStringConcatArgCount, test, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ImplicitStringConcatArgCount",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ImplicitStringConcatArgCount, name, initialize, &classInfo$$, ImplicitStringConcatArgCount::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ImplicitStringConcatArgCount);
	});
	return class$;
}

$Class* ImplicitStringConcatArgCount::class$ = nullptr;