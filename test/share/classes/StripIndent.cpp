#include <StripIndent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void StripIndent::init$() {
}

void StripIndent::main($StringArray* arg) {
	test1();
}

void StripIndent::test1() {
	verify(""_s, ""_s);
	verify("abc"_s, "abc"_s);
	verify("   abc"_s, "abc"_s);
	verify("abc   "_s, "abc"_s);
	verify("   abc\n   def\n   "_s, "abc\ndef\n"_s);
	verify("   abc\n   def\n"_s, "   abc\n   def\n"_s);
	verify("   abc\n   def"_s, "abc\ndef"_s);
	verify("   abc\n      def\n   "_s, "abc\n   def\n"_s);
}

void StripIndent::verify($String* a, $String* b) {
	$useLocalObjectStack();
	if (!$($nc(a)->stripIndent())->equals(b)) {
		$nc($System::err)->format("\"%s\" not equal \"%s\"%n"_s, $$new($ObjectArray, {
			a,
			b
		}));
		$throwNew($RuntimeException);
	}
}

StripIndent::StripIndent() {
}

$Class* StripIndent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StripIndent, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(StripIndent, main, void, $StringArray*)},
		{"test1", "()V", nullptr, $STATIC, $staticMethod(StripIndent, test1, void)},
		{"verify", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(StripIndent, verify, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StripIndent",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StripIndent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StripIndent);
	});
	return class$;
}

$Class* StripIndent::class$ = nullptr;