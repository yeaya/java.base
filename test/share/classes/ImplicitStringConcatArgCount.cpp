#include <ImplicitStringConcatArgCount.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ImplicitStringConcatArgCount_FieldInfo_[] = {
	{"s", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ImplicitStringConcatArgCount, s)},
	{"s1", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ImplicitStringConcatArgCount, s1)},
	{"s2", "Ljava/lang/String;", nullptr, $STATIC, $staticField(ImplicitStringConcatArgCount, s2)},
	{"i", "I", nullptr, $STATIC, $staticField(ImplicitStringConcatArgCount, i)},
	{}
};

$MethodInfo _ImplicitStringConcatArgCount_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImplicitStringConcatArgCount::*)()>(&ImplicitStringConcatArgCount::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ImplicitStringConcatArgCount::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&ImplicitStringConcatArgCount::test))},
	{}
};

$ClassInfo _ImplicitStringConcatArgCount_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ImplicitStringConcatArgCount",
	"java.lang.Object",
	nullptr,
	_ImplicitStringConcatArgCount_FieldInfo_,
	_ImplicitStringConcatArgCount_MethodInfo_
};

$Object* allocate$ImplicitStringConcatArgCount($Class* clazz) {
	return $of($alloc(ImplicitStringConcatArgCount));
}

$String* ImplicitStringConcatArgCount::s = nullptr;
$String* ImplicitStringConcatArgCount::s1 = nullptr;
$String* ImplicitStringConcatArgCount::s2 = nullptr;
int32_t ImplicitStringConcatArgCount::i = 0;

void ImplicitStringConcatArgCount::init$() {
}

void ImplicitStringConcatArgCount::main($StringArray* args) {
	$init(ImplicitStringConcatArgCount);
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
	if (!$nc(expected)->equals(actual)) {
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("Expected = "_s);
		sb->append(expected);
		sb->append(", actual = "_s);
		sb->append(actual);
		$throwNew($IllegalStateException, $(sb->toString()));
	}
}

void clinit$ImplicitStringConcatArgCount($Class* class$) {
	$assignStatic(ImplicitStringConcatArgCount::s, "f"_s);
	$assignStatic(ImplicitStringConcatArgCount::s1, "o"_s);
	$assignStatic(ImplicitStringConcatArgCount::s2, "o"_s);
	ImplicitStringConcatArgCount::i = 7;
}

ImplicitStringConcatArgCount::ImplicitStringConcatArgCount() {
}

$Class* ImplicitStringConcatArgCount::load$($String* name, bool initialize) {
	$loadClass(ImplicitStringConcatArgCount, name, initialize, &_ImplicitStringConcatArgCount_ClassInfo_, clinit$ImplicitStringConcatArgCount, allocate$ImplicitStringConcatArgCount);
	return class$;
}

$Class* ImplicitStringConcatArgCount::class$ = nullptr;