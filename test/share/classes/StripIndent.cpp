#include <StripIndent.h>

#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _StripIndent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StripIndent::*)()>(&StripIndent::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&StripIndent::main))},
	{"test1", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&StripIndent::test1))},
	{"verify", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*)>(&StripIndent::verify))},
	{}
};

$ClassInfo _StripIndent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StripIndent",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StripIndent_MethodInfo_
};

$Object* allocate$StripIndent($Class* clazz) {
	return $of($alloc(StripIndent));
}

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
	$useLocalCurrentObjectStackCache();
	if (!$($nc(a)->stripIndent())->equals(b)) {
		$nc($System::err)->format("\"%s\" not equal \"%s\"%n"_s, $$new($ObjectArray, {
			$of(a),
			$of(b)
		}));
		$throwNew($RuntimeException);
	}
}

StripIndent::StripIndent() {
}

$Class* StripIndent::load$($String* name, bool initialize) {
	$loadClass(StripIndent, name, initialize, &_StripIndent_ClassInfo_, allocate$StripIndent);
	return class$;
}

$Class* StripIndent::class$ = nullptr;