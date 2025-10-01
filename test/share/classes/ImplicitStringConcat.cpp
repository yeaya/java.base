#include <ImplicitStringConcat.h>

#include <ImplicitStringConcat$MyClass.h>
#include <ImplicitStringConcat$MyClassNull.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ImplicitStringConcat$MyClass = ::ImplicitStringConcat$MyClass;
using $ImplicitStringConcat$MyClassNull = ::ImplicitStringConcat$MyClassNull;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$FieldInfo _ImplicitStringConcat_FieldInfo_[] = {
	{"b", "Z", nullptr, $STATIC, $staticField(ImplicitStringConcat, b)},
	{"by", "B", nullptr, $STATIC, $staticField(ImplicitStringConcat, by)},
	{"sh", "S", nullptr, $STATIC, $staticField(ImplicitStringConcat, sh)},
	{"ch", "C", nullptr, $STATIC, $staticField(ImplicitStringConcat, ch)},
	{"i", "I", nullptr, $STATIC, $staticField(ImplicitStringConcat, i)},
	{"fl", "F", nullptr, $STATIC, $staticField(ImplicitStringConcat, fl)},
	{"l", "J", nullptr, $STATIC, $staticField(ImplicitStringConcat, l)},
	{"d", "D", nullptr, $STATIC, $staticField(ImplicitStringConcat, d)},
	{"s", "Ljava/lang/String;", nullptr, $STATIC, $staticField(ImplicitStringConcat, s)},
	{"sNull", "Ljava/lang/String;", nullptr, $STATIC, $staticField(ImplicitStringConcat, sNull)},
	{"o", "Ljava/lang/Object;", nullptr, $STATIC, $staticField(ImplicitStringConcat, o)},
	{"oNull", "Ljava/lang/Object;", nullptr, $STATIC, $staticField(ImplicitStringConcat, oNull)},
	{"cs", "Ljava/lang/CharSequence;", nullptr, $STATIC, $staticField(ImplicitStringConcat, cs)},
	{"chars", "[C", nullptr, $STATIC, $staticField(ImplicitStringConcat, chars)},
	{"myCl", "LImplicitStringConcat$MyClass;", nullptr, $STATIC, $staticField(ImplicitStringConcat, myCl)},
	{"myClNull", "LImplicitStringConcat$MyClassNull;", nullptr, $STATIC, $staticField(ImplicitStringConcat, myClNull)},
	{"myCl2", "Ljava/lang/Object;", nullptr, $STATIC, $staticField(ImplicitStringConcat, myCl2)},
	{"myArr", "[Ljava/lang/Object;", nullptr, $STATIC, $staticField(ImplicitStringConcat, myArr)},
	{"s_myArr", "[Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(ImplicitStringConcat, s_myArr)},
	{"sb", "Ljava/lang/StringBuffer;", nullptr, $STATIC, $staticField(ImplicitStringConcat, sb)},
	{}
};

$MethodInfo _ImplicitStringConcat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImplicitStringConcat::*)()>(&ImplicitStringConcat::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ImplicitStringConcat::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&ImplicitStringConcat::test))},
	{}
};

$InnerClassInfo _ImplicitStringConcat_InnerClassesInfo_[] = {
	{"ImplicitStringConcat$MyClassNull", "ImplicitStringConcat", "MyClassNull", $STATIC},
	{"ImplicitStringConcat$MyClass", "ImplicitStringConcat", "MyClass", $STATIC},
	{}
};

$ClassInfo _ImplicitStringConcat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ImplicitStringConcat",
	"java.lang.Object",
	nullptr,
	_ImplicitStringConcat_FieldInfo_,
	_ImplicitStringConcat_MethodInfo_,
	nullptr,
	nullptr,
	_ImplicitStringConcat_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ImplicitStringConcat$MyClassNull,ImplicitStringConcat$MyClass"
};

$Object* allocate$ImplicitStringConcat($Class* clazz) {
	return $of($alloc(ImplicitStringConcat));
}

bool ImplicitStringConcat::b = false;
int8_t ImplicitStringConcat::by = 0;
int16_t ImplicitStringConcat::sh = 0;
char16_t ImplicitStringConcat::ch = 0;
int32_t ImplicitStringConcat::i = 0;
float ImplicitStringConcat::fl = 0.0;
int64_t ImplicitStringConcat::l = 0;
double ImplicitStringConcat::d = 0.0;
$String* ImplicitStringConcat::s = nullptr;
$String* ImplicitStringConcat::sNull = nullptr;
$Object* ImplicitStringConcat::o = nullptr;
$Object* ImplicitStringConcat::oNull = nullptr;
$CharSequence* ImplicitStringConcat::cs = nullptr;
$chars* ImplicitStringConcat::chars = nullptr;
$ImplicitStringConcat$MyClass* ImplicitStringConcat::myCl = nullptr;
$ImplicitStringConcat$MyClassNull* ImplicitStringConcat::myClNull = nullptr;
$Object* ImplicitStringConcat::myCl2 = nullptr;
$ObjectArray* ImplicitStringConcat::myArr = nullptr;
$ObjectArray* ImplicitStringConcat::s_myArr = nullptr;
$StringBuffer* ImplicitStringConcat::sb = nullptr;

void ImplicitStringConcat::init$() {
}

void ImplicitStringConcat::main($StringArray* args) {
	$init(ImplicitStringConcat);
	test("footrue"_s, $$str({ImplicitStringConcat::s, $$str(ImplicitStringConcat::b)}));
	test("foo42"_s, $$str({ImplicitStringConcat::s, $$str(ImplicitStringConcat::by)}));
	test("foo42"_s, $$str({ImplicitStringConcat::s, $$str(ImplicitStringConcat::sh)}));
	test("fooa"_s, $$str({ImplicitStringConcat::s, $$str(ImplicitStringConcat::ch)}));
	test("foo42"_s, $$str({ImplicitStringConcat::s, $$str(ImplicitStringConcat::i)}));
	test("foo42"_s, $$str({ImplicitStringConcat::s, $$str(ImplicitStringConcat::l)}));
	test("foo42.0"_s, $$str({ImplicitStringConcat::s, $$str(ImplicitStringConcat::fl)}));
	test("foo42.0"_s, $$str({ImplicitStringConcat::s, $$str(ImplicitStringConcat::d)}));
	test("foofoo"_s, $$str({ImplicitStringConcat::s, ImplicitStringConcat::s}));
	test("foonull"_s, $$str({ImplicitStringConcat::s, ImplicitStringConcat::sNull}));
	test("foobar"_s, $$str({ImplicitStringConcat::s, ImplicitStringConcat::o}));
	test("foonull"_s, $$str({ImplicitStringConcat::s, ImplicitStringConcat::oNull}));
	test("foobar"_s, $$str({ImplicitStringConcat::s, ImplicitStringConcat::cs}));
	{
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("foo"_s);
		sb->append($($nc($of(ImplicitStringConcat::myArr))->toString()));
		$var($String, var$0, sb->toString());
		test(var$0, $$str({ImplicitStringConcat::s, ImplicitStringConcat::myArr}));
	}
	{
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("foo"_s);
		sb->append($($nc($of(ImplicitStringConcat::s_myArr))->toString()));
		$var($String, var$1, sb->toString());
		test(var$1, $$str({ImplicitStringConcat::s, ImplicitStringConcat::s_myArr}));
	}
	{
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("foo[C@"_s);
		sb->append($($Integer::toHexString($System::identityHashCode(ImplicitStringConcat::chars))));
		$var($String, var$2, sb->toString());
		test(var$2, $$str({ImplicitStringConcat::s, ImplicitStringConcat::chars}));
	}
	test("fooa"_s, $$str({ImplicitStringConcat::s, ImplicitStringConcat::sb}));
	test("foonull"_s, $$str({ImplicitStringConcat::s, ($String*)nullptr}));
	test("fooMyClass"_s, $$str({ImplicitStringConcat::s, ImplicitStringConcat::myCl}));
	test("foonull"_s, $$str({ImplicitStringConcat::s, ImplicitStringConcat::myClNull}));
	test("fooMyClass"_s, $$str({ImplicitStringConcat::s, ImplicitStringConcat::myCl2}));
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::b);
	test("footrue"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::by);
	test("foo42"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::sh);
	test("foo42"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::ch);
	test("fooa"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::i);
	test("foo42"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::l);
	test("foo42"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::fl);
	test("foo42.0"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::d);
	test("foo42.0"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::s);
	test("foofoo"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::sNull);
	test("foonull"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::o);
	test("foobar"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::oNull);
	test("foonull"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::cs);
	test("foobar"_s, ImplicitStringConcat::s);
	{
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("foo[C@"_s);
		sb->append($($Integer::toHexString($System::identityHashCode(ImplicitStringConcat::chars))));
		$assignStatic(ImplicitStringConcat::s, "foo"_s);
		$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::chars);
		test($(sb->toString()), ImplicitStringConcat::s);
	}
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::sb);
	test("fooa"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, nullptr);
	test("foonull"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::myCl);
	test("fooMyClass"_s, ImplicitStringConcat::s);
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$plusAssignStatic(ImplicitStringConcat::s, ImplicitStringConcat::myCl2);
	test("fooMyClass"_s, ImplicitStringConcat::s);
}

void ImplicitStringConcat::test($String* expected, $String* actual) {
	$init(ImplicitStringConcat);
	if (!$nc(expected)->equals(actual)) {
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("Expected = "_s);
		sb->append(expected);
		sb->append(", actual = "_s);
		sb->append(actual);
		$throwNew($IllegalStateException, $(sb->toString()));
	}
}

void clinit$ImplicitStringConcat($Class* class$) {
	ImplicitStringConcat::b = true;
	ImplicitStringConcat::by = (int8_t)42;
	ImplicitStringConcat::sh = (int16_t)42;
	ImplicitStringConcat::ch = u'a';
	ImplicitStringConcat::i = 42;
	ImplicitStringConcat::fl = 42.0f;
	ImplicitStringConcat::l = 42;
	ImplicitStringConcat::d = 42.0;
	$assignStatic(ImplicitStringConcat::s, "foo"_s);
	$assignStatic(ImplicitStringConcat::sNull, nullptr);
	$assignStatic(ImplicitStringConcat::o, "bar"_s);
	$assignStatic(ImplicitStringConcat::oNull, nullptr);
	$assignStatic(ImplicitStringConcat::cs, "bar"_s);
	$assignStatic(ImplicitStringConcat::chars, $new($chars, {u'a'}));
	$assignStatic(ImplicitStringConcat::myCl, $new($ImplicitStringConcat$MyClass));
	$assignStatic(ImplicitStringConcat::myClNull, $new($ImplicitStringConcat$MyClassNull));
	$assignStatic(ImplicitStringConcat::myCl2, $new($ImplicitStringConcat$MyClass));
	$assignStatic(ImplicitStringConcat::myArr, $new($ObjectArray, {$of(ImplicitStringConcat::myCl)}));
	$assignStatic(ImplicitStringConcat::s_myArr, $new($ObjectArray, {$of(ImplicitStringConcat::myCl)}));
	$assignStatic(ImplicitStringConcat::sb, $new($StringBuffer, "a"_s));
}

ImplicitStringConcat::ImplicitStringConcat() {
}

$Class* ImplicitStringConcat::load$($String* name, bool initialize) {
	$loadClass(ImplicitStringConcat, name, initialize, &_ImplicitStringConcat_ClassInfo_, clinit$ImplicitStringConcat, allocate$ImplicitStringConcat);
	return class$;
}

$Class* ImplicitStringConcat::class$ = nullptr;