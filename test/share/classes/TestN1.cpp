#include <TestN1.h>

#include <N1$Inner1.h>
#include <N1$Inner2.h>
#include <N1$Inner3.h>
#include <N1.h>
#include <java/lang/AssertionError.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

#undef TYPE

using $N1 = ::N1;
using $N1$Inner1 = ::N1$Inner1;
using $N1$Inner2 = ::N1$Inner2;
using $N1$Inner3 = ::N1$Inner3;
using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Field = ::java::lang::reflect::Field;

$FieldInfo _TestN1_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TestN1, $assertionsDisabled)},
	{"cls", "Ljava/lang/Class;", "Ljava/lang/Class<LN1;>;", $STATIC, $staticField(TestN1, cls)},
	{}
};

$MethodInfo _TestN1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestN1::*)()>(&TestN1::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestN1::main)), "java.lang.Throwable"},
	{"testInner1", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestN1::testInner1))},
	{"testInner2", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestN1::testInner2)), "java.lang.NoSuchFieldException"},
	{"testInner3", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestN1::testInner3))},
	{"testTypeParameters", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestN1::testTypeParameters))},
	{}
};

$ClassInfo _TestN1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestN1",
	"java.lang.Object",
	nullptr,
	_TestN1_FieldInfo_,
	_TestN1_MethodInfo_
};

$Object* allocate$TestN1($Class* clazz) {
	return $of($alloc(TestN1));
}

bool TestN1::$assertionsDisabled = false;
$Class* TestN1::cls = nullptr;

void TestN1::init$() {
}

void TestN1::main($StringArray* args) {
	$init(TestN1);
	testTypeParameters();
	testInner1();
	testInner2();
	testInner3();
}

void TestN1::testTypeParameters() {
	$init(TestN1);
	$nc($System::out)->println("testing type parameters"_s);
	$var($TypeVariableArray, tvs, $nc(TestN1::cls)->getTypeParameters());
	if (!TestN1::$assertionsDisabled && !($nc(tvs)->length == 2)) {
		$throwNew($AssertionError, $of("N1 should have two type parameters"_s));
	}
}

void TestN1::testInner1() {
	$init(TestN1);
	$nc($System::out)->println("testing non-generic inner class"_s);
	$load($N1$Inner1);
	$Class* in1 = $N1$Inner1::class$;
	$var($TypeVariableArray, tvs, $nc(in1)->getTypeParameters());
	if (!TestN1::$assertionsDisabled && !($nc(tvs)->length == 0)) {
		$throwNew($AssertionError, $of("N1.Inner2 should have no type parameters"_s));
	}
}

void TestN1::testInner2() {
	$init(TestN1);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc($System::out)->println("testing generic inner class 1"_s);
	$load($N1$Inner2);
	$Class* in1 = $N1$Inner2::class$;
	$var($TypeVariableArray, tvs, $nc(in1)->getTypeParameters());
	if (!TestN1::$assertionsDisabled && !($nc(tvs)->length == 1)) {
		$throwNew($AssertionError, $of("N1.Inner2 should have one type parameter"_s));
	}
	$init($Boolean);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("x"_s)))->getGenericType(), $Boolean::TYPE)) {
		$throwNew($AssertionError, $of("Type of Inner2.x should be boolean"_s));
	}
	$init($Byte);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("b"_s)))->getGenericType(), $Byte::TYPE)) {
		$throwNew($AssertionError, $of("Type of Inner2.b should be byte"_s));
	}
	$init($Short);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("s"_s)))->getGenericType(), $Short::TYPE)) {
		$throwNew($AssertionError, $of("Type of Inner2.s should be short"_s));
	}
	$init($Character);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("c"_s)))->getGenericType(), $Character::TYPE)) {
		$throwNew($AssertionError, $of("Type of Inner2.x should be char"_s));
	}
	$init($Integer);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("i"_s)))->getGenericType(), $Integer::TYPE)) {
		$throwNew($AssertionError, $of("Type of Inner2.i should be int"_s));
	}
	$init($Long);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("l"_s)))->getGenericType(), $Long::TYPE)) {
		$throwNew($AssertionError, $of("Type of Inner2.l should be long"_s));
	}
	$init($Float);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("f"_s)))->getGenericType(), $Float::TYPE)) {
		$throwNew($AssertionError, $of("Type of Inner2.f should be float"_s));
	}
	$init($Double);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("d"_s)))->getGenericType(), $Double::TYPE)) {
		$throwNew($AssertionError, $of("Type of Inner2.d should be double"_s));
	}
	$load($booleans);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("xa"_s)))->getGenericType(), $getClass($booleans))) {
		$throwNew($AssertionError, $of("Type of Inner2.xa should be boolean[]"_s));
	}
	$load($bytes);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("ba"_s)))->getGenericType(), $getClass($bytes))) {
		$throwNew($AssertionError, $of("Type of Inner2.ba should be byte[]"_s));
	}
	$load($shorts);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("sa"_s)))->getGenericType(), $getClass($shorts))) {
		$throwNew($AssertionError, $of("Type of Inner2.sa should be short[]"_s));
	}
	$load($chars);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("ca"_s)))->getGenericType(), $getClass($chars))) {
		$throwNew($AssertionError, $of("Type of Inner2.xa should be char[]"_s));
	}
	$load($ints);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("ia"_s)))->getGenericType(), $getClass($ints))) {
		$throwNew($AssertionError, $of("Type of Inner2.ia should be int[]"_s));
	}
	$load($longs);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("la"_s)))->getGenericType(), $getClass($longs))) {
		$throwNew($AssertionError, $of("Type of Inner2.la should be long[]"_s));
	}
	$load($floats);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("fa"_s)))->getGenericType(), $getClass($floats))) {
		$throwNew($AssertionError, $of("Type of Inner2.fa should be float[]"_s));
	}
	$load($doubles);
	if (!TestN1::$assertionsDisabled && !$equals($nc($(in1->getField("da"_s)))->getGenericType(), $getClass($doubles))) {
		$throwNew($AssertionError, $of("Type of Inner2.da should be double[]"_s));
	}
}

void TestN1::testInner3() {
	$init(TestN1);
	$nc($System::out)->println("testing generic inner class 3"_s);
	$load($N1$Inner3);
	$Class* in1 = $N1$Inner3::class$;
	$var($TypeVariableArray, tvs, $nc(in1)->getTypeParameters());
	if (!TestN1::$assertionsDisabled && !($nc(tvs)->length == 3)) {
		$throwNew($AssertionError, $of("N1.Inner2 should have three type parameters"_s));
	}
}

void clinit$TestN1($Class* class$) {
	TestN1::$assertionsDisabled = !TestN1::class$->desiredAssertionStatus();
	$load($N1);
	$assignStatic(TestN1::cls, $N1::class$);
}

TestN1::TestN1() {
}

$Class* TestN1::load$($String* name, bool initialize) {
	$loadClass(TestN1, name, initialize, &_TestN1_ClassInfo_, clinit$TestN1, allocate$TestN1);
	return class$;
}

$Class* TestN1::class$ = nullptr;