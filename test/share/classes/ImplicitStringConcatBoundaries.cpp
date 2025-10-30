#include <ImplicitStringConcatBoundaries.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

#undef BOOL_FALSE_1
#undef BOOL_FALSE_2
#undef BOOL_TRUE_1
#undef BOOL_TRUE_2
#undef BYTE_MAX_1
#undef BYTE_MAX_2
#undef BYTE_MIN_1
#undef BYTE_MIN_2
#undef CHAR_MAX_1
#undef CHAR_MAX_2
#undef CHAR_MIN_1
#undef CHAR_MIN_2
#undef DOUBLE_MAX_1
#undef DOUBLE_MAX_2
#undef DOUBLE_MIN_1
#undef DOUBLE_MIN_2
#undef DOUBLE_MIN_EXP_1
#undef DOUBLE_MIN_EXP_2
#undef DOUBLE_MIN_NORM_1
#undef DOUBLE_MIN_NORM_2
#undef FLOAT_MAX_1
#undef FLOAT_MAX_2
#undef FLOAT_MIN_1
#undef FLOAT_MIN_2
#undef FLOAT_MIN_EXP_1
#undef FLOAT_MIN_EXP_2
#undef FLOAT_MIN_NORM_1
#undef FLOAT_MIN_NORM_2
#undef INT_MAX_1
#undef INT_MAX_2
#undef INT_MIN_1
#undef INT_MIN_2
#undef LONG_MAX_1
#undef LONG_MAX_2
#undef LONG_MIN_1
#undef LONG_MIN_2
#undef MAX_VALUE
#undef MIN_EXPONENT
#undef MIN_NORMAL
#undef MIN_VALUE
#undef SHORT_MAX_1
#undef SHORT_MAX_2
#undef SHORT_MIN_1
#undef SHORT_MIN_2

using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

$FieldInfo _ImplicitStringConcatBoundaries_FieldInfo_[] = {
	{"BOOL_TRUE_1", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImplicitStringConcatBoundaries, BOOL_TRUE_1)},
	{"BOOL_TRUE_2", "Z", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, BOOL_TRUE_2)},
	{"BOOL_FALSE_1", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImplicitStringConcatBoundaries, BOOL_FALSE_1)},
	{"BOOL_FALSE_2", "Z", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, BOOL_FALSE_2)},
	{"BYTE_MIN_1", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImplicitStringConcatBoundaries, BYTE_MIN_1)},
	{"BYTE_MIN_2", "B", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, BYTE_MIN_2)},
	{"BYTE_MAX_1", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImplicitStringConcatBoundaries, BYTE_MAX_1)},
	{"BYTE_MAX_2", "B", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, BYTE_MAX_2)},
	{"SHORT_MIN_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImplicitStringConcatBoundaries, SHORT_MIN_1)},
	{"SHORT_MIN_2", "S", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, SHORT_MIN_2)},
	{"SHORT_MAX_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImplicitStringConcatBoundaries, SHORT_MAX_1)},
	{"SHORT_MAX_2", "S", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, SHORT_MAX_2)},
	{"CHAR_MIN_1", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImplicitStringConcatBoundaries, CHAR_MIN_1)},
	{"CHAR_MIN_2", "C", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, CHAR_MIN_2)},
	{"CHAR_MAX_1", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImplicitStringConcatBoundaries, CHAR_MAX_1)},
	{"CHAR_MAX_2", "C", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, CHAR_MAX_2)},
	{"INT_MIN_1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImplicitStringConcatBoundaries, INT_MIN_1)},
	{"INT_MIN_2", "I", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, INT_MIN_2)},
	{"INT_MAX_1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImplicitStringConcatBoundaries, INT_MAX_1)},
	{"INT_MAX_2", "I", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, INT_MAX_2)},
	{"FLOAT_MIN_EXP_1", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ImplicitStringConcatBoundaries, FLOAT_MIN_EXP_1)},
	{"FLOAT_MIN_EXP_2", "F", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, FLOAT_MIN_EXP_2)},
	{"FLOAT_MIN_NORM_1", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ImplicitStringConcatBoundaries, FLOAT_MIN_NORM_1)},
	{"FLOAT_MIN_NORM_2", "F", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, FLOAT_MIN_NORM_2)},
	{"FLOAT_MIN_1", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ImplicitStringConcatBoundaries, FLOAT_MIN_1)},
	{"FLOAT_MIN_2", "F", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, FLOAT_MIN_2)},
	{"FLOAT_MAX_1", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ImplicitStringConcatBoundaries, FLOAT_MAX_1)},
	{"FLOAT_MAX_2", "F", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, FLOAT_MAX_2)},
	{"LONG_MIN_1", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImplicitStringConcatBoundaries, LONG_MIN_1)},
	{"LONG_MIN_2", "J", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, LONG_MIN_2)},
	{"LONG_MAX_1", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImplicitStringConcatBoundaries, LONG_MAX_1)},
	{"LONG_MAX_2", "J", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, LONG_MAX_2)},
	{"DOUBLE_MIN_EXP_1", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ImplicitStringConcatBoundaries, DOUBLE_MIN_EXP_1)},
	{"DOUBLE_MIN_EXP_2", "D", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, DOUBLE_MIN_EXP_2)},
	{"DOUBLE_MIN_NORM_1", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ImplicitStringConcatBoundaries, DOUBLE_MIN_NORM_1)},
	{"DOUBLE_MIN_NORM_2", "D", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, DOUBLE_MIN_NORM_2)},
	{"DOUBLE_MIN_1", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ImplicitStringConcatBoundaries, DOUBLE_MIN_1)},
	{"DOUBLE_MIN_2", "D", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, DOUBLE_MIN_2)},
	{"DOUBLE_MAX_1", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ImplicitStringConcatBoundaries, DOUBLE_MAX_1)},
	{"DOUBLE_MAX_2", "D", nullptr, $PUBLIC | $STATIC, $staticField(ImplicitStringConcatBoundaries, DOUBLE_MAX_2)},
	{}
};

$MethodInfo _ImplicitStringConcatBoundaries_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImplicitStringConcatBoundaries::*)()>(&ImplicitStringConcatBoundaries::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ImplicitStringConcatBoundaries::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&ImplicitStringConcatBoundaries::test))},
	{}
};

$ClassInfo _ImplicitStringConcatBoundaries_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ImplicitStringConcatBoundaries",
	"java.lang.Object",
	nullptr,
	_ImplicitStringConcatBoundaries_FieldInfo_,
	_ImplicitStringConcatBoundaries_MethodInfo_
};

$Object* allocate$ImplicitStringConcatBoundaries($Class* clazz) {
	return $of($alloc(ImplicitStringConcatBoundaries));
}

bool ImplicitStringConcatBoundaries::BOOL_TRUE_2 = false;
bool ImplicitStringConcatBoundaries::BOOL_FALSE_2 = false;
int8_t ImplicitStringConcatBoundaries::BYTE_MIN_2 = 0;
int8_t ImplicitStringConcatBoundaries::BYTE_MAX_2 = 0;
int16_t ImplicitStringConcatBoundaries::SHORT_MIN_2 = 0;
int16_t ImplicitStringConcatBoundaries::SHORT_MAX_2 = 0;
char16_t ImplicitStringConcatBoundaries::CHAR_MIN_2 = 0;
char16_t ImplicitStringConcatBoundaries::CHAR_MAX_2 = 0;
int32_t ImplicitStringConcatBoundaries::INT_MIN_2 = 0;
int32_t ImplicitStringConcatBoundaries::INT_MAX_2 = 0;
float ImplicitStringConcatBoundaries::FLOAT_MIN_EXP_1 = 0.0;
float ImplicitStringConcatBoundaries::FLOAT_MIN_EXP_2 = 0.0;
float ImplicitStringConcatBoundaries::FLOAT_MIN_NORM_1 = 0.0;
float ImplicitStringConcatBoundaries::FLOAT_MIN_NORM_2 = 0.0;
float ImplicitStringConcatBoundaries::FLOAT_MIN_1 = 0.0;
float ImplicitStringConcatBoundaries::FLOAT_MIN_2 = 0.0;
float ImplicitStringConcatBoundaries::FLOAT_MAX_1 = 0.0;
float ImplicitStringConcatBoundaries::FLOAT_MAX_2 = 0.0;
int64_t ImplicitStringConcatBoundaries::LONG_MIN_2 = 0;
int64_t ImplicitStringConcatBoundaries::LONG_MAX_2 = 0;
double ImplicitStringConcatBoundaries::DOUBLE_MIN_EXP_1 = 0.0;
double ImplicitStringConcatBoundaries::DOUBLE_MIN_EXP_2 = 0.0;
double ImplicitStringConcatBoundaries::DOUBLE_MIN_NORM_1 = 0.0;
double ImplicitStringConcatBoundaries::DOUBLE_MIN_NORM_2 = 0.0;
double ImplicitStringConcatBoundaries::DOUBLE_MIN_1 = 0.0;
double ImplicitStringConcatBoundaries::DOUBLE_MIN_2 = 0.0;
double ImplicitStringConcatBoundaries::DOUBLE_MAX_1 = 0.0;
double ImplicitStringConcatBoundaries::DOUBLE_MAX_2 = 0.0;

void ImplicitStringConcatBoundaries::init$() {
}

void ImplicitStringConcatBoundaries::main($StringArray* args) {
	$init(ImplicitStringConcatBoundaries);
	$useLocalCurrentObjectStackCache();
	test("foofalse"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::BOOL_FALSE_1)}));
	test("foofalse"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::BOOL_FALSE_2)}));
	test("footrue"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::BOOL_TRUE_1)}));
	test("footrue"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::BOOL_TRUE_2)}));
	test("foo127"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::BYTE_MAX_1)}));
	test("foo127"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::BYTE_MAX_2)}));
	test("foo-128"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::BYTE_MIN_1)}));
	test("foo-128"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::BYTE_MIN_2)}));
	test("foo32767"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::SHORT_MAX_1)}));
	test("foo32767"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::SHORT_MAX_2)}));
	test("foo-32768"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::SHORT_MIN_1)}));
	test("foo-32768"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::SHORT_MIN_2)}));
	test($cstr({'f', 'o', 'o', '\0'}), $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::CHAR_MIN_1)}));
	test($cstr({'f', 'o', 'o', '\0'}), $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::CHAR_MIN_2)}));
	test(u"foo\uffff"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::CHAR_MAX_1)}));
	test(u"foo\uffff"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::CHAR_MAX_2)}));
	test("foo2147483647"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::INT_MAX_1)}));
	test("foo2147483647"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::INT_MAX_2)}));
	test("foo-2147483648"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::INT_MIN_1)}));
	test("foo-2147483648"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::INT_MIN_2)}));
	test("foo1.17549435E-38"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::FLOAT_MIN_NORM_1)}));
	test("foo1.17549435E-38"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::FLOAT_MIN_NORM_2)}));
	test("foo-126.0"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::FLOAT_MIN_EXP_1)}));
	test("foo-126.0"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::FLOAT_MIN_EXP_2)}));
	test("foo1.4E-45"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::FLOAT_MIN_1)}));
	test("foo1.4E-45"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::FLOAT_MIN_2)}));
	test("foo3.4028235E38"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::FLOAT_MAX_1)}));
	test("foo3.4028235E38"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::FLOAT_MAX_2)}));
	test("foo-9223372036854775808"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::LONG_MIN_1)}));
	test("foo-9223372036854775808"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::LONG_MIN_2)}));
	test("foo9223372036854775807"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::LONG_MAX_1)}));
	test("foo9223372036854775807"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::LONG_MAX_2)}));
	test("foo2.2250738585072014E-308"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::DOUBLE_MIN_NORM_1)}));
	test("foo2.2250738585072014E-308"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::DOUBLE_MIN_NORM_2)}));
	test("foo-1022.0"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::DOUBLE_MIN_EXP_1)}));
	test("foo-1022.0"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::DOUBLE_MIN_EXP_2)}));
	test("foo4.9E-324"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::DOUBLE_MIN_1)}));
	test("foo4.9E-324"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::DOUBLE_MIN_2)}));
	test("foo1.7976931348623157E308"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::DOUBLE_MAX_1)}));
	test("foo1.7976931348623157E308"_s, $$str({"foo"_s, $$str(ImplicitStringConcatBoundaries::DOUBLE_MAX_2)}));
}

void ImplicitStringConcatBoundaries::test($String* expected, $String* actual) {
	$init(ImplicitStringConcatBoundaries);
	$useLocalCurrentObjectStackCache();
	if (!$nc(expected)->equals(actual)) {
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("Expected = "_s);
		sb->append(expected);
		sb->append(", actual = "_s);
		sb->append(actual);
		$throwNew($IllegalStateException, $(sb->toString()));
	}
}

void clinit$ImplicitStringConcatBoundaries($Class* class$) {
	ImplicitStringConcatBoundaries::FLOAT_MIN_EXP_1 = (float)$Float::MIN_EXPONENT;
	$init($Float);
	ImplicitStringConcatBoundaries::FLOAT_MIN_NORM_1 = $Float::MIN_NORMAL;
	ImplicitStringConcatBoundaries::FLOAT_MIN_1 = $Float::MIN_VALUE;
	ImplicitStringConcatBoundaries::FLOAT_MAX_1 = $Float::MAX_VALUE;
	ImplicitStringConcatBoundaries::DOUBLE_MIN_EXP_1 = (double)$Double::MIN_EXPONENT;
	$init($Double);
	ImplicitStringConcatBoundaries::DOUBLE_MIN_NORM_1 = $Double::MIN_NORMAL;
	ImplicitStringConcatBoundaries::DOUBLE_MIN_1 = $Double::MIN_VALUE;
	ImplicitStringConcatBoundaries::DOUBLE_MAX_1 = $Double::MAX_VALUE;
	ImplicitStringConcatBoundaries::BOOL_TRUE_2 = true;
	ImplicitStringConcatBoundaries::BOOL_FALSE_2 = false;
	ImplicitStringConcatBoundaries::BYTE_MIN_2 = $Byte::MIN_VALUE;
	ImplicitStringConcatBoundaries::BYTE_MAX_2 = $Byte::MAX_VALUE;
	ImplicitStringConcatBoundaries::SHORT_MIN_2 = $Short::MIN_VALUE;
	ImplicitStringConcatBoundaries::SHORT_MAX_2 = $Short::MAX_VALUE;
	ImplicitStringConcatBoundaries::CHAR_MIN_2 = $Character::MIN_VALUE;
	ImplicitStringConcatBoundaries::CHAR_MAX_2 = $Character::MAX_VALUE;
	ImplicitStringConcatBoundaries::INT_MIN_2 = $Integer::MIN_VALUE;
	ImplicitStringConcatBoundaries::INT_MAX_2 = $Integer::MAX_VALUE;
	ImplicitStringConcatBoundaries::FLOAT_MIN_EXP_2 = (float)$Float::MIN_EXPONENT;
	$init($Float);
	ImplicitStringConcatBoundaries::FLOAT_MIN_NORM_2 = $Float::MIN_NORMAL;
	ImplicitStringConcatBoundaries::FLOAT_MIN_2 = $Float::MIN_VALUE;
	ImplicitStringConcatBoundaries::FLOAT_MAX_2 = $Float::MAX_VALUE;
	ImplicitStringConcatBoundaries::LONG_MIN_2 = $Long::MIN_VALUE;
	ImplicitStringConcatBoundaries::LONG_MAX_2 = $Long::MAX_VALUE;
	ImplicitStringConcatBoundaries::DOUBLE_MIN_EXP_2 = (double)$Double::MIN_EXPONENT;
	$init($Double);
	ImplicitStringConcatBoundaries::DOUBLE_MIN_NORM_2 = $Double::MIN_NORMAL;
	ImplicitStringConcatBoundaries::DOUBLE_MIN_2 = $Double::MIN_VALUE;
	ImplicitStringConcatBoundaries::DOUBLE_MAX_2 = $Double::MAX_VALUE;
}

ImplicitStringConcatBoundaries::ImplicitStringConcatBoundaries() {
}

$Class* ImplicitStringConcatBoundaries::load$($String* name, bool initialize) {
	$loadClass(ImplicitStringConcatBoundaries, name, initialize, &_ImplicitStringConcatBoundaries_ClassInfo_, clinit$ImplicitStringConcatBoundaries, allocate$ImplicitStringConcatBoundaries);
	return class$;
}

$Class* ImplicitStringConcatBoundaries::class$ = nullptr;