#include <TestC1/TestC1.h>

#include <TestC1/C1.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

using $C1 = ::TestC1::C1;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $TypeVariable = ::java::lang::reflect::TypeVariable;

namespace TestC1 {

$FieldInfo _TestC1_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TestC1, $assertionsDisabled)},
	{"cls", "Ljava/lang/Class;", "Ljava/lang/Class<LTestC1/C1;>;", $STATIC, $staticField(TestC1, cls)},
	{}
};

$MethodInfo _TestC1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestC1::*)()>(&TestC1::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestC1::main)), "java.lang.Throwable"},
	{"testConstructor", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestC1::testConstructor)), "java.lang.NoSuchMethodException"},
	{"testFields", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestC1::testFields)), "java.lang.NoSuchFieldException"},
	{"testMethods", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestC1::testMethods)), "java.lang.NoSuchMethodException"},
	{"testSuperInterfaces", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestC1::testSuperInterfaces))},
	{"testSuperclass", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestC1::testSuperclass))},
	{"testTypeParameters", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestC1::testTypeParameters))},
	{}
};

$ClassInfo _TestC1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestC1.TestC1",
	"java.lang.Object",
	nullptr,
	_TestC1_FieldInfo_,
	_TestC1_MethodInfo_
};

$Object* allocate$TestC1($Class* clazz) {
	return $of($alloc(TestC1));
}

bool TestC1::$assertionsDisabled = false;
$Class* TestC1::cls = nullptr;

void TestC1::init$() {
}

void TestC1::main($StringArray* args) {
	$init(TestC1);
	testSuperclass();
	testSuperInterfaces();
	testTypeParameters();
	testMethods();
	testConstructor();
	testFields();
}

void TestC1::testSuperclass() {
	$init(TestC1);
	$init($System);
	$nc($System::out)->println("testing superclass"_s);
	$var($Type, sc, $nc(TestC1::cls)->getGenericSuperclass());
	$load($Object);
	if (!TestC1::$assertionsDisabled && !($equals(sc, $Object::class$))) {
		$throwNew($AssertionError, $of("The generic superclass of C1 should be Object"_s));
	}
}

void TestC1::testSuperInterfaces() {
	$init(TestC1);
	$init($System);
	$nc($System::out)->println("testing superinterfaces"_s);
	$var($TypeArray, sis, $nc(TestC1::cls)->getGenericInterfaces());
	if (!TestC1::$assertionsDisabled && !($nc(sis)->length == 0)) {
		$throwNew($AssertionError, $of("C1 should have no generic superinterfaces"_s));
	}
}

void TestC1::testTypeParameters() {
	$init(TestC1);
	$useLocalCurrentObjectStackCache();
	$init($System);
	$nc($System::out)->println("testing type parameters"_s);
	$var($TypeVariableArray, tvs, $nc(TestC1::cls)->getTypeParameters());
	if (!TestC1::$assertionsDisabled && !($nc(tvs)->length == 1)) {
		$throwNew($AssertionError, $of("C1 should have one type parameter"_s));
	}
	$var($TypeVariable, tv, $nc(tvs)->get(0));
	$var($TypeArray, bs, $nc(tv)->getBounds());
	if (!TestC1::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("T should have one bound"_s));
	}
	$load($Object);
	if (!TestC1::$assertionsDisabled && !$equals($nc(bs)->get(0), $Object::class$)) {
		$throwNew($AssertionError, $of("The default bound of a type variable should be Object"_s));
	}
}

void TestC1::testMethods() {
	$init(TestC1);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($System);
	$nc($System::out)->println("testing methods"_s);
	$var($ClassArray, params1, $new($ClassArray, 3));
	$load($Object);
	params1->set(0, $Object::class$);
	params1->set(1, TestC1::cls);
	params1->set(2, TestC1::cls);
	$var($ClassArray, params3, $new($ClassArray, 1));
	params3->set(0, $Object::class$);
	$var($Method, mc1t, $nc(TestC1::cls)->getMethod("mc1t"_s, params1));
	$var($Method, mc1, $nc(TestC1::cls)->getMethod("mc1"_s, $$new($ClassArray, 0)));
	$var($Method, mt, $nc(TestC1::cls)->getMethod("mt"_s, params3));
	$var($Type, rt_mc1t, $nc(mc1t)->getGenericReturnType());
	$var($Type, rt_mc1, $nc(mc1)->getGenericReturnType());
	$var($Type, rt_mt, $nc(mt)->getGenericReturnType());
	$var($TypeArray, pt_mc1t, mc1t->getGenericParameterTypes());
	if (!TestC1::$assertionsDisabled && !($nc(pt_mc1t)->length == 3)) {
		$throwNew($AssertionError, $of("C1.mc1t has three parameters"_s));
	}
	$var($Type, p1_mc1t, $nc(pt_mc1t)->get(0));
	if (!TestC1::$assertionsDisabled && !(p1_mc1t != nullptr)) {
		$throwNew($AssertionError);
	}
	if (!TestC1::$assertionsDisabled && !$instanceOf($TypeVariable, p1_mc1t)) {
		$throwNew($AssertionError, $of("Generic type of the 1st parameter of mc1t(T) is a type variable"_s));
	}
	$var($TypeVariable, tv, $cast($TypeVariable, p1_mc1t));
	if (!TestC1::$assertionsDisabled && !$nc($($nc(tv)->getName()))->equals("T"_s)) {
		$throwNew($AssertionError, $of($$str({"Name of 1st type parameter of mc1t is T, not "_s, $(tv->getName())})));
	}
	$var($TypeArray, bs, $nc(tv)->getBounds());
	if (!TestC1::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("T should have one bound (mc1t)"_s));
	}
	if (!TestC1::$assertionsDisabled && !$equals($nc(bs)->get(0), $Object::class$)) {
		$throwNew($AssertionError, $of("The bound of T should be Object (mc1t)"_s));
	}
	$var($Type, p2_mc1t, pt_mc1t->get(1));
	if (!TestC1::$assertionsDisabled && !$instanceOf($ParameterizedType, p2_mc1t)) {
		$throwNew($AssertionError, $of("The type of parameter 2 of mc1t is a parameterized type"_s));
	}
	$var($ParameterizedType, pt, $cast($ParameterizedType, p2_mc1t));
	if (!TestC1::$assertionsDisabled && !$equals($nc(pt)->getRawType(), TestC1::cls)) {
		$throwNew($AssertionError, $of("Type of parameter 2 of mc1t is instantiation of C1"_s));
	}
	if (!TestC1::$assertionsDisabled && !($nc(pt)->getOwnerType() == nullptr)) {
		$throwNew($AssertionError, $of("Type of parameter 2 of mc1t is has null owner"_s));
	}
	$var($TypeArray, tas, $nc(pt)->getActualTypeArguments());
	if (!TestC1::$assertionsDisabled && !($nc(tas)->length == 1)) {
		$throwNew($AssertionError, $of("The type of parameter 2 of mc1t has one type argument"_s));
	}
	$var($Type, ta, $nc(tas)->get(0));
	if (!TestC1::$assertionsDisabled && !$instanceOf($TypeVariable, ta)) {
		$throwNew($AssertionError, $of("The actual type arg of C1<T> is a type variable (mc1t)"_s));
	}
	$assign(tv, $cast($TypeVariable, ta));
	if (!TestC1::$assertionsDisabled && !$nc($(tv->getName()))->equals("T"_s)) {
		$throwNew($AssertionError, $of($$str({"mc1t: Name of the type arg of C1<T> is T, not "_s, $(tv->getName())})));
	}
	$assign(bs, tv->getBounds());
	if (!TestC1::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("mc1t: The type argument of C1<T>  should have one bound"_s));
	}
	if (!TestC1::$assertionsDisabled && !$equals($nc(bs)->get(0), $Object::class$)) {
		$throwNew($AssertionError, $of("mc1t: The bound of the type arg of C1<T> should be Object"_s));
	}
	$var($Type, p3_mc1t, pt_mc1t->get(2));
	if (!TestC1::$assertionsDisabled && !$equals(p3_mc1t, TestC1::cls)) {
		$throwNew($AssertionError, $of("Type of parameter 3 of mc1t is C1"_s));
	}
	$var($TypeArray, pt_mc1, mc1->getGenericParameterTypes());
	if (!TestC1::$assertionsDisabled && !($nc(pt_mc1)->length == 0)) {
		$throwNew($AssertionError, $of("C1.mc1 has zero parameters"_s));
	}
	$var($TypeArray, pt_mt, mt->getGenericParameterTypes());
	if (!TestC1::$assertionsDisabled && !($nc(pt_mt)->length == 1)) {
		$throwNew($AssertionError, $of("C1.mt has one parameter"_s));
	}
	$var($Type, p_mt, $nc(pt_mt)->get(0));
	if (!TestC1::$assertionsDisabled && !$instanceOf($TypeVariable, p_mt)) {
		$throwNew($AssertionError, $of("The generic type of the parameter of mt(T) is a type variable"_s));
	}
	$assign(tv, $cast($TypeVariable, p_mt));
	if (!TestC1::$assertionsDisabled && !$nc($(tv->getName()))->equals("T"_s)) {
		$throwNew($AssertionError, $of($$str({"The name of the type parameter of mt is T, not "_s, $(tv->getName())})));
	}
	$assign(bs, tv->getBounds());
	if (!TestC1::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("T should have one bound"_s));
	}
	if (!TestC1::$assertionsDisabled && !$equals($nc(bs)->get(0), $Object::class$)) {
		$throwNew($AssertionError, $of("The bound of T should be Object"_s));
	}
	$var($TypeArray, et_mc1t, mc1t->getGenericExceptionTypes());
	if (!TestC1::$assertionsDisabled && !($nc(et_mc1t)->length == 0)) {
		$throwNew($AssertionError, $of("Method C1.mc1t should have no generic exception types"_s));
	}
	$var($TypeArray, et_mc1, mc1->getGenericExceptionTypes());
	if (!TestC1::$assertionsDisabled && !($nc(et_mc1)->length == 0)) {
		$throwNew($AssertionError, $of("Method C1.mc1 should have no generic exception types"_s));
	}
	$var($TypeArray, et_mt, mt->getGenericExceptionTypes());
	if (!TestC1::$assertionsDisabled && !($nc(et_mt)->length == 0)) {
		$throwNew($AssertionError, $of("Method C1.mt should have no generic exception types"_s));
	}
	$var($TypeVariableArray, tv_mc1t, mc1t->getTypeParameters());
	if (!TestC1::$assertionsDisabled && !($nc(tv_mc1t)->length == 0)) {
		$throwNew($AssertionError, $of("Method C1.mc1t should have no type parameters"_s));
	}
	$var($TypeVariableArray, tv_mc1, mc1->getTypeParameters());
	if (!TestC1::$assertionsDisabled && !($nc(tv_mc1)->length == 0)) {
		$throwNew($AssertionError, $of("Method C1.mc1 should have no type parameters"_s));
	}
	$var($TypeVariableArray, tv_mt, mt->getTypeParameters());
	if (!TestC1::$assertionsDisabled && !($nc(tv_mt)->length == 0)) {
		$throwNew($AssertionError, $of("Method C1.mt should have no type parameters"_s));
	}
}

void TestC1::testFields() {
	$init(TestC1);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($System);
	$nc($System::out)->println("testing fields"_s);
	$var($Field, ft, $nc(TestC1::cls)->getField("ft"_s));
	$var($Field, fc1t, $nc(TestC1::cls)->getField("fc1t"_s));
	$var($Field, fc1, $nc(TestC1::cls)->getField("fc1"_s));
	$var($Type, gt_ft, $nc(ft)->getGenericType());
	if (!TestC1::$assertionsDisabled && !$instanceOf($TypeVariable, gt_ft)) {
		$throwNew($AssertionError, $of("The generic type of C1.ft is a type variable"_s));
	}
	$var($TypeVariable, tv, $cast($TypeVariable, gt_ft));
	if (!TestC1::$assertionsDisabled && !$nc($($nc(tv)->getName()))->equals("T"_s)) {
		$throwNew($AssertionError, $of($$str({"The name of the type of ft is T, not "_s, $(tv->getName())})));
	}
	$var($TypeArray, bs, $nc(tv)->getBounds());
	if (!TestC1::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("The type of ft should have one bound"_s));
	}
	$load($Object);
	if (!TestC1::$assertionsDisabled && !$equals($nc(bs)->get(0), $Object::class$)) {
		$throwNew($AssertionError, $of("The bound of the type of ft should be Object"_s));
	}
	$var($Type, gt_fc1t, $nc(fc1t)->getGenericType());
	if (!TestC1::$assertionsDisabled && !$instanceOf($ParameterizedType, gt_fc1t)) {
		$throwNew($AssertionError, $of("The generic type of C1.fc1t is a parameterized type"_s));
	}
	$var($ParameterizedType, pt, $cast($ParameterizedType, gt_fc1t));
	if (!TestC1::$assertionsDisabled && !$equals($nc(pt)->getRawType(), TestC1::cls)) {
		$throwNew($AssertionError, $of("Type of C1.fc1t is instantiation of C1"_s));
	}
	if (!TestC1::$assertionsDisabled && !($nc(pt)->getOwnerType() == nullptr)) {
		$throwNew($AssertionError, $of("Type of C1.fc1t is has null owner"_s));
	}
	$var($TypeArray, tas, $nc(pt)->getActualTypeArguments());
	if (!TestC1::$assertionsDisabled && !($nc(tas)->length == 1)) {
		$throwNew($AssertionError, $of("The type of fc1t has one type argument"_s));
	}
	$var($Type, ta, $nc(tas)->get(0));
	if (!TestC1::$assertionsDisabled && !$instanceOf($TypeVariable, ta)) {
		$throwNew($AssertionError, $of("The actual type arg of C1<T> is a type variable"_s));
	}
	$assign(tv, $cast($TypeVariable, ta));
	if (!TestC1::$assertionsDisabled && !$nc($(tv->getName()))->equals("T"_s)) {
		$throwNew($AssertionError, $of($$str({"The name of the type arg of C1<T> is T, not "_s, $(tv->getName())})));
	}
	$assign(bs, tv->getBounds());
	if (!TestC1::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("The type argument of C1<T>  should have one bound"_s));
	}
	if (!TestC1::$assertionsDisabled && !$equals($nc(bs)->get(0), $Object::class$)) {
		$throwNew($AssertionError, $of("The bound of the type arg of C1<T> should be Object"_s));
	}
	$var($Type, gt_fc1, $nc(fc1)->getGenericType());
	if (!TestC1::$assertionsDisabled && !$equals(gt_fc1, TestC1::cls)) {
		$throwNew($AssertionError, $of(" Type of C1.fc1 should be C1"_s));
	}
}

void TestC1::testConstructor() {
	$init(TestC1);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($System);
	$nc($System::out)->println("testing constructors"_s);
	$var($ClassArray, params, $new($ClassArray, 1));
	$load($Object);
	params->set(0, $Object::class$);
	$var($Constructor, con, $nc(TestC1::cls)->getDeclaredConstructor(params));
	$var($TypeArray, pt_con, $nc(con)->getGenericParameterTypes());
	if (!TestC1::$assertionsDisabled && !($nc(pt_con)->length == 1)) {
		$throwNew($AssertionError, $of("Constructor C1(T) should have one generic parameter type"_s));
	}
	$var($Type, pt, $nc(pt_con)->get(0));
	if (!TestC1::$assertionsDisabled && !$instanceOf($TypeVariable, pt)) {
		$throwNew($AssertionError, $of("The generic type of the parameter of C1(T) is a type variable"_s));
	}
	$var($TypeVariable, tv, $cast($TypeVariable, pt));
	if (!TestC1::$assertionsDisabled && !$nc($($nc(tv)->getName()))->equals("T"_s)) {
		$throwNew($AssertionError, $of($$str({"The name of the type parameter of C is T, not "_s, $(tv->getName())})));
	}
	$var($TypeArray, bs, $nc(tv)->getBounds());
	if (!TestC1::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("T should have one bound"_s));
	}
	if (!TestC1::$assertionsDisabled && !$equals($nc(bs)->get(0), $Object::class$)) {
		$throwNew($AssertionError, $of("The bound of T should be Object"_s));
	}
	$var($TypeArray, et_con, con->getGenericExceptionTypes());
	if (!TestC1::$assertionsDisabled && !($nc(et_con)->length == 0)) {
		$throwNew($AssertionError, $of("Constructor C1(T) should have no generic exception types"_s));
	}
	$var($TypeVariableArray, tv_con, con->getTypeParameters());
	if (!TestC1::$assertionsDisabled && !($nc(tv_con)->length == 0)) {
		$throwNew($AssertionError, $of("Constructor C1(T) should have no type parameters"_s));
	}
}

void clinit$TestC1($Class* class$) {
	$beforeCallerSensitive();
	TestC1::$assertionsDisabled = !TestC1::class$->desiredAssertionStatus();
	$load($C1);
	$assignStatic(TestC1::cls, $C1::class$);
	{
		$nc($(TestC1::class$->getClassLoader()))->setDefaultAssertionStatus(true);
	}
}

TestC1::TestC1() {
}

$Class* TestC1::load$($String* name, bool initialize) {
	$loadClass(TestC1, name, initialize, &_TestC1_ClassInfo_, clinit$TestC1, allocate$TestC1);
	return class$;
}

$Class* TestC1::class$ = nullptr;

} // TestC1