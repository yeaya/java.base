#include <TestC2.h>

#include <C0B.h>
#include <C2B.h>
#include <I1B.h>
#include <I2B.h>
#include <I3B.h>
#include <java/lang/AssertionError.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

#undef TYPE

using $C0B = ::C0B;
using $C2B = ::C2B;
using $I1B = ::I1B;
using $I2B = ::I2B;
using $I3B = ::I3B;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $TypeVariable = ::java::lang::reflect::TypeVariable;

$FieldInfo _TestC2_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TestC2, $assertionsDisabled)},
	{"cls", "Ljava/lang/Class;", "Ljava/lang/Class<LC2B;>;", $STATIC, $staticField(TestC2, cls)},
	{}
};

$MethodInfo _TestC2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestC2::*)()>(&TestC2::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestC2::main)), "java.lang.Throwable"},
	{"testConstructors", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestC2::testConstructors)), "java.lang.NoSuchMethodException"},
	{"testFields", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestC2::testFields)), "java.lang.NoSuchFieldException"},
	{"testMethods", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestC2::testMethods)), "java.lang.NoSuchMethodException"},
	{"testSuperInterfaces", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestC2::testSuperInterfaces))},
	{"testSuperclass", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestC2::testSuperclass))},
	{"testTypeParameters", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestC2::testTypeParameters))},
	{}
};

$ClassInfo _TestC2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestC2",
	"java.lang.Object",
	nullptr,
	_TestC2_FieldInfo_,
	_TestC2_MethodInfo_
};

$Object* allocate$TestC2($Class* clazz) {
	return $of($alloc(TestC2));
}

bool TestC2::$assertionsDisabled = false;
$Class* TestC2::cls = nullptr;

void TestC2::init$() {
}

void TestC2::main($StringArray* args) {
	$init(TestC2);
	testSuperclass();
	testSuperInterfaces();
	testTypeParameters();
	testMethods();
	testConstructors();
	testFields();
}

void TestC2::testSuperclass() {
	$init(TestC2);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("testing superclass"_s);
	$var($Type, sc, $nc(TestC2::cls)->getGenericSuperclass());
	if (!TestC2::$assertionsDisabled && !$instanceOf($ParameterizedType, sc)) {
		$throwNew($AssertionError, $of("Superclass of C2B should be a parameterized type"_s));
	}
	$var($ParameterizedType, psc, $cast($ParameterizedType, sc));
	$load($C0B);
	if (!TestC2::$assertionsDisabled && !($equals($nc(psc)->getRawType(), $C0B::class$))) {
		$throwNew($AssertionError, $of("The raw generic superclass of C2B should be C0B"_s));
	}
	$var($TypeArray, tas, $nc(psc)->getActualTypeArguments());
	if (!TestC2::$assertionsDisabled && !($nc(tas)->length == 1)) {
		$throwNew($AssertionError, $of("Superclass of C2B should have one type argument"_s));
	}
	$var($Type, t, $nc(tas)->get(0));
	if (!TestC2::$assertionsDisabled && !$instanceOf($TypeVariable, t)) {
		$throwNew($AssertionError, $of("Type argument to superclass of C2B should be a type variable"_s));
	}
	$var($TypeVariable, tv, $cast($TypeVariable, t));
	if (!TestC2::$assertionsDisabled && !$nc($($nc(tv)->getName()))->equals("T1"_s)) {
		$throwNew($AssertionError, $of("Name of type argument to superclass of C2B should be T1"_s));
	}
	$var($TypeArray, bs, $nc(tv)->getBounds());
	if (!TestC2::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("T1 has one bound (superclass)"_s));
	}
	$assign(t, $nc(bs)->get(0));
	if (!TestC2::$assertionsDisabled && !$instanceOf($ParameterizedType, t)) {
		$throwNew($AssertionError, $of("Bound of C0B should be a parameterized type"_s));
	}
	$var($ParameterizedType, pt, $cast($ParameterizedType, t));
	$load($C2B);
	if (!TestC2::$assertionsDisabled && !($equals($nc(pt)->getRawType(), $C2B::class$))) {
		$throwNew($AssertionError, $of("The raw bound of T1 should be C2B"_s));
	}
	$assign(tas, $nc(pt)->getActualTypeArguments());
	if (!TestC2::$assertionsDisabled && !(tas->length == 3)) {
		$throwNew($AssertionError, $of("Bound of T1 should have three type arguments"_s));
	}
	if (!TestC2::$assertionsDisabled && !$instanceOf($TypeVariable, tas->get(0))) {
		$throwNew($AssertionError, $of("First argument to bound of T1 is a type variable"_s));
	}
	if (!TestC2::$assertionsDisabled && !$instanceOf($TypeVariable, tas->get(1))) {
		$throwNew($AssertionError, $of("Second argument to bound of T1 is a type variable"_s));
	}
	if (!TestC2::$assertionsDisabled && !$instanceOf($TypeVariable, tas->get(2))) {
		$throwNew($AssertionError, $of("Third argument to bound of T1 is a type variable"_s));
	}
	$var($TypeVariable, tv1, $cast($TypeVariable, tas->get(0)));
	$var($TypeVariable, tv2, $cast($TypeVariable, tas->get(1)));
	$var($TypeVariable, tv3, $cast($TypeVariable, tas->get(2)));
	if (!TestC2::$assertionsDisabled && !$nc($($nc(tv1)->getName()))->equals("T1"_s)) {
		$throwNew($AssertionError, $of("First type arg to bound of T1 is T1"_s));
	}
	if (!TestC2::$assertionsDisabled && !$nc($($nc(tv2)->getName()))->equals("T2"_s)) {
		$throwNew($AssertionError, $of("Seconmd type arg to bound of T1 is T2"_s));
	}
	if (!TestC2::$assertionsDisabled && !$nc($($nc(tv3)->getName()))->equals("T3"_s)) {
		$throwNew($AssertionError, $of("Third type arg to bound of T1 is T3"_s));
	}
}

void TestC2::testSuperInterfaces() {
	$init(TestC2);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("testing superinterfaces"_s);
	$var($TypeArray, sis, $nc(TestC2::cls)->getGenericInterfaces());
	if (!TestC2::$assertionsDisabled && !($nc(sis)->length == 3)) {
		$throwNew($AssertionError, $of("C2B should have three generic superinterfaces"_s));
	}
	$var($Type, t, $nc(sis)->get(0));
	if (!TestC2::$assertionsDisabled && !$instanceOf($ParameterizedType, t)) {
		$throwNew($AssertionError, $of("First superinterface of C2B should be a parameterized type"_s));
	}
	$var($ParameterizedType, pt, $cast($ParameterizedType, t));
	$load($I1B);
	if (!TestC2::$assertionsDisabled && !$equals($nc(pt)->getRawType(), $I1B::class$)) {
		$throwNew($AssertionError, $of("First super interface of C2B is instantiation of I1B"_s));
	}
	$var($TypeArray, tas, $nc(pt)->getActualTypeArguments());
	if (!TestC2::$assertionsDisabled && !($nc(tas)->length == 2)) {
		$throwNew($AssertionError, $of("First super interface of C2B has 2 type arguments"_s));
	}
	$assign(t, sis->get(1));
	if (!TestC2::$assertionsDisabled && !$instanceOf($ParameterizedType, t)) {
		$throwNew($AssertionError, $of("Second superinterface of C2B should be a parameterized type"_s));
	}
	$assign(pt, $cast($ParameterizedType, t));
	$load($I2B);
	if (!TestC2::$assertionsDisabled && !$equals(pt->getRawType(), $I2B::class$)) {
		$throwNew($AssertionError, $of("Second super interface of C2B is instantiation of I2B"_s));
	}
	$assign(tas, pt->getActualTypeArguments());
	if (!TestC2::$assertionsDisabled && !($nc(tas)->length == 3)) {
		$throwNew($AssertionError, $of("Second super interface of C2B has 3 type arguments"_s));
	}
	$assign(t, sis->get(2));
	$load($I3B);
	if (!TestC2::$assertionsDisabled && !$equals(t, $I3B::class$)) {
		$throwNew($AssertionError, $of("Third superinterface of C2B is I3B"_s));
	}
	$var($TypeVariableArray, tvs, $I1B::class$->getTypeParameters());
	if (!TestC2::$assertionsDisabled && !($nc(tvs)->length == 2)) {
		$throwNew($AssertionError, $of("I3B has two formal type parameters"_s));
	}
	if (!TestC2::$assertionsDisabled && !$nc($($nc($nc(tvs)->get(0))->getName()))->equals("X1"_s)) {
		$throwNew($AssertionError, $of("Name of first formal type arg of I1B is X1"_s));
	}
	if (!TestC2::$assertionsDisabled && !$nc($($nc($nc(tvs)->get(1))->getName()))->equals("X2"_s)) {
		$throwNew($AssertionError, $of("Name of second formal type arg of I1B is X2"_s));
	}
	bool var$0 = !TestC2::$assertionsDisabled;
	if (var$0) {
		var$0 = !$equals($I1B::class$->getGenericSuperclass(), $I1B::class$->getSuperclass());
	}
	if (var$0) {
		$throwNew($AssertionError, $of("The generic and non-generic superclasses of an interface must be the same"_s));
	}
	$assign(sis, $I1B::class$->getGenericInterfaces());
	if (!TestC2::$assertionsDisabled && !(sis->length == 1)) {
		$throwNew($AssertionError, $of("I1B has one generic superinterface"_s));
	}
	if (!TestC2::$assertionsDisabled && !$equals(sis->get(0), $I3B::class$)) {
		$throwNew($AssertionError, $of("Superinterface of I1B is I3B"_s));
	}
	$assign(tvs, $I2B::class$->getTypeParameters());
	if (!TestC2::$assertionsDisabled && !($nc(tvs)->length == 3)) {
		$throwNew($AssertionError, $of("I3B has three formal type parameters"_s));
	}
	if (!TestC2::$assertionsDisabled && !$nc($($nc($nc(tvs)->get(0))->getName()))->equals("E1"_s)) {
		$throwNew($AssertionError, $of("Name of first formal type arg of I2B is E1"_s));
	}
	if (!TestC2::$assertionsDisabled && !$nc($($nc($nc(tvs)->get(1))->getName()))->equals("E2"_s)) {
		$throwNew($AssertionError, $of("Name of second formal type arg of I2B is E2"_s));
	}
	if (!TestC2::$assertionsDisabled && !$nc($($nc($nc(tvs)->get(2))->getName()))->equals("E3"_s)) {
		$throwNew($AssertionError, $of("Name of third formal type arg of I2B is E3"_s));
	}
	bool var$1 = !TestC2::$assertionsDisabled;
	if (var$1) {
		var$1 = !$equals($I2B::class$->getGenericSuperclass(), $I2B::class$->getSuperclass());
	}
	if (var$1) {
		$throwNew($AssertionError, $of("The generic and non-generic superclasses of an interface must be the same"_s));
	}
	$assign(tvs, $I3B::class$->getTypeParameters());
	if (!TestC2::$assertionsDisabled && !($nc(tvs)->length == 0)) {
		$throwNew($AssertionError, $of("I3B has no formal type parameters"_s));
	}
	bool var$2 = !TestC2::$assertionsDisabled;
	if (var$2) {
		var$2 = !$equals($I3B::class$->getGenericSuperclass(), $I3B::class$->getSuperclass());
	}
	if (var$2) {
		$throwNew($AssertionError, $of("The generic and non-generic superclasses of an interface must be the same"_s));
	}
}

void TestC2::testTypeParameters() {
	$init(TestC2);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("testing type parameters"_s);
	$var($TypeVariableArray, tvs, $nc(TestC2::cls)->getTypeParameters());
	if (!TestC2::$assertionsDisabled && !($nc(tvs)->length == 3)) {
		$throwNew($AssertionError, $of("C2B should have three type parameters"_s));
	}
	$var($TypeVariable, tv, $nc(tvs)->get(0));
	$var($TypeArray, bs, $nc(tv)->getBounds());
	if (!TestC2::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("T1 should have one bound"_s));
	}
	if (!TestC2::$assertionsDisabled && !$instanceOf($ParameterizedType, $nc(bs)->get(0))) {
		$throwNew($AssertionError, $of("The bound of T1 should be a parameterized type"_s));
	}
	$assign(tv, tvs->get(1));
	$assign(bs, tv->getBounds());
	if (!TestC2::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("T2 should have one bound"_s));
	}
	if (!TestC2::$assertionsDisabled && !$instanceOf($ParameterizedType, $nc(bs)->get(0))) {
		$throwNew($AssertionError, $of("The bound of T2 should be a parameterized type"_s));
	}
	$assign(tv, tvs->get(2));
	$assign(bs, tv->getBounds());
	if (!TestC2::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("T3 should have one bound"_s));
	}
	if (!TestC2::$assertionsDisabled && !$equals($nc(bs)->get(0), $Throwable::class$)) {
		$throwNew($AssertionError, $of("The bound of T3 should be Throwable"_s));
	}
}

void TestC2::testMethods() {
	$init(TestC2);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc($System::out)->println("testing methods"_s);
	$var($ClassArray, params1, $new($ClassArray, 3));
	params1->set(0, $Throwable::class$);
	$load($C0B);
	params1->set(1, $C0B::class$);
	params1->set(2, $C0B::class$);
	$var($ClassArray, params2, $new($ClassArray, 1));
	params2->set(0, $Object::class$);
	$var($ClassArray, params3, $new($ClassArray, 1));
	params3->set(0, $C0B::class$);
	$var($Method, mc1t, $nc(TestC2::cls)->getMethod("mc1t"_s, params1));
	$var($Method, mc1, $nc(TestC2::cls)->getMethod("mc1"_s, params2));
	$var($Method, mt, $nc(TestC2::cls)->getMethod("mt"_s, params3));
	$var($Type, rt_mc1t, $nc(mc1t)->getGenericReturnType());
	if (!TestC2::$assertionsDisabled && !$instanceOf($ParameterizedType, rt_mc1t)) {
		$throwNew($AssertionError, $of("The return type of mc1t should be a parameterized type"_s));
	}
	$var($ParameterizedType, pt, $cast($ParameterizedType, rt_mc1t));
	if (!TestC2::$assertionsDisabled && !$equals($nc(pt)->getRawType(), $C0B::class$)) {
		$throwNew($AssertionError, $of("The raw return type of mc1t should be C0B"_s));
	}
	$var($TypeArray, tas, $nc(pt)->getActualTypeArguments());
	if (!TestC2::$assertionsDisabled && !($nc(tas)->length == 1)) {
		$throwNew($AssertionError, $of("Return type of mc1t should have one type argument"_s));
	}
	if (!TestC2::$assertionsDisabled && !$instanceOf($TypeVariable, $nc(tas)->get(0))) {
		$throwNew($AssertionError, $of("Type argument of return type of mc1t is a type variable"_s));
	}
	$var($Type, rt_mc1, $nc(mc1)->getGenericReturnType());
	if (!TestC2::$assertionsDisabled && !$equals(rt_mc1, $C0B::class$)) {
		$throwNew($AssertionError, $of("Return type of mc1 is C0B"_s));
	}
	$var($Type, rt_mt, $nc(mt)->getGenericReturnType());
	if (!TestC2::$assertionsDisabled && !$instanceOf($TypeVariable, rt_mt)) {
		$throwNew($AssertionError, $of("Return type of mt is a type variable"_s));
	}
	$var($TypeArray, pt_mc1t, mc1t->getGenericParameterTypes());
	if (!TestC2::$assertionsDisabled && !($nc(pt_mc1t)->length == 3)) {
		$throwNew($AssertionError, $of("C0B.mc1t has three parameters"_s));
	}
	$var($Type, p1_mc1t, $nc(pt_mc1t)->get(0));
	if (!TestC2::$assertionsDisabled && !(p1_mc1t != nullptr)) {
		$throwNew($AssertionError);
	}
	if (!TestC2::$assertionsDisabled && !$instanceOf($TypeVariable, p1_mc1t)) {
		$throwNew($AssertionError, $of("Generic type of the 1st parameter of mc1t(T) is a type variable"_s));
	}
	$var($TypeVariable, tv, $cast($TypeVariable, p1_mc1t));
	if (!TestC2::$assertionsDisabled && !$nc($($nc(tv)->getName()))->equals("T3"_s)) {
		$throwNew($AssertionError, $of($$str({"Name of 1st type parameter of mc1t is T3, not "_s, $(tv->getName())})));
	}
	$var($TypeArray, bs, $nc(tv)->getBounds());
	if (!TestC2::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("T3 should have one bound (mc1t)"_s));
	}
	if (!TestC2::$assertionsDisabled && !$equals($nc(bs)->get(0), $Throwable::class$)) {
		$throwNew($AssertionError, $of("The bound of T3 should be Throwable(mc1t)"_s));
	}
	$var($Type, p2_mc1t, pt_mc1t->get(1));
	if (!TestC2::$assertionsDisabled && !$instanceOf($ParameterizedType, p2_mc1t)) {
		$throwNew($AssertionError, $of("The type of parameter 2 of mc1t is a parameterized type"_s));
	}
	$assign(pt, $cast($ParameterizedType, p2_mc1t));
	if (!TestC2::$assertionsDisabled && !$equals(pt->getRawType(), $C0B::class$)) {
		$throwNew($AssertionError, $of("Type of parameter 2 of mc1t is instantiation of C0B"_s));
	}
	if (!TestC2::$assertionsDisabled && !(pt->getOwnerType() == nullptr)) {
		$throwNew($AssertionError, $of("Type of parameter 2 of mc1t is has null owner"_s));
	}
	$assign(tas, pt->getActualTypeArguments());
	if (!TestC2::$assertionsDisabled && !($nc(tas)->length == 1)) {
		$throwNew($AssertionError, $of("The type of parameter 2 of mc1t has one type argument"_s));
	}
	$var($Type, ta, $nc(tas)->get(0));
	if (!TestC2::$assertionsDisabled && !$instanceOf($TypeVariable, ta)) {
		$throwNew($AssertionError, $of("The actual type arg of C0B<T> is a type variable (mc1t)"_s));
	}
	$assign(tv, $cast($TypeVariable, ta));
	if (!TestC2::$assertionsDisabled && !$nc($(tv->getName()))->equals("T"_s)) {
		$throwNew($AssertionError, $of($$str({"mc1t: Name of the type arg of C0B<T> is T, not "_s, $(tv->getName())})));
	}
	$assign(bs, tv->getBounds());
	if (!TestC2::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("mc1t: The type argument of C0B<T>  should have one bound"_s));
	}
	if (!TestC2::$assertionsDisabled && !$equals($nc(bs)->get(0), $Object::class$)) {
		$throwNew($AssertionError, $of("mc1t: The bound of the type arg of C0B<T> should be Object"_s));
	}
	$var($Type, p3_mc1t, pt_mc1t->get(2));
	if (!TestC2::$assertionsDisabled && !$equals(p3_mc1t, $C0B::class$)) {
		$throwNew($AssertionError, $of("Type of parameter 3 of mc1t is C0B"_s));
	}
	$var($TypeArray, pt_mc1, mc1->getGenericParameterTypes());
	if (!TestC2::$assertionsDisabled && !($nc(pt_mc1)->length == 1)) {
		$throwNew($AssertionError, $of("C2B.mc1 has one parameter"_s));
	}
	$var($TypeArray, pt_mt, mt->getGenericParameterTypes());
	if (!TestC2::$assertionsDisabled && !($nc(pt_mt)->length == 1)) {
		$throwNew($AssertionError, $of("C2B.mt has one parameter"_s));
	}
	$var($Type, p_mt, $nc(pt_mt)->get(0));
	if (!TestC2::$assertionsDisabled && !$instanceOf($TypeVariable, p_mt)) {
		$throwNew($AssertionError, $of("The generic type of the parameter of mt(T) is a type variable"_s));
	}
	$assign(tv, $cast($TypeVariable, p_mt));
	if (!TestC2::$assertionsDisabled && !$nc($(tv->getName()))->equals("T2"_s)) {
		$throwNew($AssertionError, $of($$str({"The name of the type parameter of mt is T2, not "_s, $(tv->getName())})));
	}
	$assign(bs, tv->getBounds());
	if (!TestC2::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("T2 should have one bound"_s));
	}
	if (!TestC2::$assertionsDisabled && !$instanceOf($ParameterizedType, $nc(bs)->get(0))) {
		$throwNew($AssertionError, $of("The bound of T2 should be parameterized type"_s));
	}
	$var($TypeArray, et_mc1t, mc1t->getGenericExceptionTypes());
	if (!TestC2::$assertionsDisabled && !($nc(et_mc1t)->length == 0)) {
		$throwNew($AssertionError, $of("Method C0B.mc1t should have no generic exception types"_s));
	}
	$var($TypeArray, et_mc1, mc1->getGenericExceptionTypes());
	if (!TestC2::$assertionsDisabled && !($nc(et_mc1)->length == 0)) {
		$throwNew($AssertionError, $of("Method C0B.mc1 should have no generic exception types"_s));
	}
	$var($TypeArray, et_mt, mt->getGenericExceptionTypes());
	if (!TestC2::$assertionsDisabled && !($nc(et_mt)->length == 0)) {
		$throwNew($AssertionError, $of("Method C0B.mt should have no generic exception types"_s));
	}
	$var($TypeVariableArray, tv_mc1t, mc1t->getTypeParameters());
	if (!TestC2::$assertionsDisabled && !($nc(tv_mc1t)->length == 1)) {
		$throwNew($AssertionError, $of("Method C2B.mc1t should have one type parameter"_s));
	}
	$var($TypeVariableArray, tv_mc1, mc1->getTypeParameters());
	if (!TestC2::$assertionsDisabled && !($nc(tv_mc1)->length == 2)) {
		$throwNew($AssertionError, $of("Method C2B.mc1 should have two type parameters"_s));
	}
	$var($TypeVariableArray, tv_mt, mt->getTypeParameters());
	if (!TestC2::$assertionsDisabled && !($nc(tv_mt)->length == 0)) {
		$throwNew($AssertionError, $of("Method C2B.mt should have no type parameters"_s));
	}
}

void TestC2::testFields() {
	$init(TestC2);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc($System::out)->println("testing fields"_s);
	$var($Field, ft, $nc(TestC2::cls)->getField("ft"_s));
	$var($Field, fc1t, $nc(TestC2::cls)->getField("fc1t"_s));
	$var($Field, fc1, $nc(TestC2::cls)->getField("fc1"_s));
	$var($Field, fi, $nc(TestC2::cls)->getField("fi"_s));
	$var($Type, gt_ft, $nc(ft)->getGenericType());
	if (!TestC2::$assertionsDisabled && !$instanceOf($TypeVariable, gt_ft)) {
		$throwNew($AssertionError, $of("The generic type of C0B.ft is a type variable"_s));
	}
	$var($TypeVariable, tv, $cast($TypeVariable, gt_ft));
	if (!TestC2::$assertionsDisabled && !$nc($($nc(tv)->getName()))->equals("T1"_s)) {
		$throwNew($AssertionError, $of($$str({"The name of the type of ft is T1, not "_s, $(tv->getName())})));
	}
	$var($TypeArray, bs, $nc(tv)->getBounds());
	if (!TestC2::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("The type of ft should have one bound"_s));
	}
	$var($Type, gt_fc1t, $nc(fc1t)->getGenericType());
	if (!TestC2::$assertionsDisabled && !$instanceOf($ParameterizedType, gt_fc1t)) {
		$throwNew($AssertionError, $of("The generic type of C0B.fc1t is a parameterized type"_s));
	}
	$var($ParameterizedType, pt, $cast($ParameterizedType, gt_fc1t));
	$load($C0B);
	if (!TestC2::$assertionsDisabled && !$equals($nc(pt)->getRawType(), $C0B::class$)) {
		$throwNew($AssertionError, $of("Type of C2B.fc1t is an instantiation of C0B"_s));
	}
	if (!TestC2::$assertionsDisabled && !($nc(pt)->getOwnerType() == nullptr)) {
		$throwNew($AssertionError, $of("Type of C2B.fc1t is has null owner"_s));
	}
	$var($TypeArray, tas, $nc(pt)->getActualTypeArguments());
	if (!TestC2::$assertionsDisabled && !($nc(tas)->length == 1)) {
		$throwNew($AssertionError, $of("The type of fc1t has one type argument"_s));
	}
	$var($Type, ta, $nc(tas)->get(0));
	if (!TestC2::$assertionsDisabled && !$equals(ta, $String::class$)) {
		$throwNew($AssertionError, $of("The actual type arg of C0B<String> is String"_s));
	}
	$var($Type, gt_fc1, $nc(fc1)->getGenericType());
	if (!TestC2::$assertionsDisabled && !$equals(gt_fc1, $C0B::class$)) {
		$throwNew($AssertionError, $of(" Type of C2B.fc1 should be C0B"_s));
	}
	$var($Type, gt_fi, $nc(fi)->getGenericType());
	$init($Integer);
	if (!TestC2::$assertionsDisabled && !$equals(gt_fi, $Integer::TYPE)) {
		$throwNew($AssertionError, $of(" Type of C2B.fi should be int"_s));
	}
}

void TestC2::testConstructors() {
	$init(TestC2);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc($System::out)->println("testing constructors"_s);
	$var($ClassArray, params1, $new($ClassArray, 1));
	$load($C0B);
	params1->set(0, $C0B::class$);
	$var($Constructor, con, $nc(TestC2::cls)->getDeclaredConstructor(params1));
	$var($TypeArray, pt_con, $nc(con)->getGenericParameterTypes());
	if (!TestC2::$assertionsDisabled && !($nc(pt_con)->length == 1)) {
		$throwNew($AssertionError, $of("Constructor C0B(T) should have one generic parameter type"_s));
	}
	$var($Type, pt, $nc(pt_con)->get(0));
	if (!TestC2::$assertionsDisabled && !$instanceOf($TypeVariable, pt)) {
		$throwNew($AssertionError, $of("The generic type of the parameter of C0B(T2) is a type variable"_s));
	}
	$var($TypeVariable, tv, $cast($TypeVariable, pt));
	if (!TestC2::$assertionsDisabled && !$nc($($nc(tv)->getName()))->equals("T2"_s)) {
		$throwNew($AssertionError, $of($$str({"The name of the type parameter of C2B is T2, not "_s, $(tv->getName())})));
	}
	$var($TypeArray, bs, $nc(tv)->getBounds());
	if (!TestC2::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("T should have one bound"_s));
	}
	$var($TypeArray, et_con, con->getGenericExceptionTypes());
	if (!TestC2::$assertionsDisabled && !($nc(et_con)->length == 0)) {
		$throwNew($AssertionError, $of("Constructor C2B(T2) should have no generic exception types"_s));
	}
	$var($TypeVariableArray, tv_con, con->getTypeParameters());
	if (!TestC2::$assertionsDisabled && !($nc(tv_con)->length == 0)) {
		$throwNew($AssertionError, $of("Constructor C2B(T2) should have no type parameters"_s));
	}
	$var($ClassArray, params2, $new($ClassArray, 1));
	params2->set(0, $Object::class$);
	$assign(con, $nc(TestC2::cls)->getDeclaredConstructor(params2));
	$assign(pt_con, con->getGenericParameterTypes());
	if (!TestC2::$assertionsDisabled && !(pt_con->length == 1)) {
		$throwNew($AssertionError, $of("Constructor C0B(T) should have one generic parameter type"_s));
	}
	$assign(pt, pt_con->get(0));
	if (!TestC2::$assertionsDisabled && !$instanceOf($TypeVariable, pt)) {
		$throwNew($AssertionError, $of("The generic type of the parameter of C2B(T) is a type variable"_s));
	}
	$assign(tv, $cast($TypeVariable, pt));
	if (!TestC2::$assertionsDisabled && !$nc($(tv->getName()))->equals("T"_s)) {
		$throwNew($AssertionError, $of($$str({"The name of the type parameter of C2B is T, not "_s, $(tv->getName())})));
	}
	$assign(bs, tv->getBounds());
	if (!TestC2::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("T should have one bound"_s));
	}
	$assign(et_con, con->getGenericExceptionTypes());
	if (!TestC2::$assertionsDisabled && !($nc(et_con)->length == 0)) {
		$throwNew($AssertionError, $of("Constructor C2B(T) should have no generic exception types"_s));
	}
	$assign(tv_con, con->getTypeParameters());
	if (!TestC2::$assertionsDisabled && !($nc(tv_con)->length == 1)) {
		$throwNew($AssertionError, $of("Constructor C2B(T) should have one type parameter"_s));
	}
	$var($ClassArray, params3, $new($ClassArray, 3));
	params3->set(0, $Object::class$);
	params3->set(1, $Object::class$);
	params3->set(2, $Object::class$);
	$assign(con, $nc(TestC2::cls)->getDeclaredConstructor(params3));
	$assign(pt_con, con->getGenericParameterTypes());
	if (!TestC2::$assertionsDisabled && !(pt_con->length == 3)) {
		$throwNew($AssertionError, $of("Constructor C2B(T1,T2,T4) should have three generic parameter types"_s));
	}
	$assign(pt, pt_con->get(0));
	if (!TestC2::$assertionsDisabled && !$instanceOf($TypeVariable, pt)) {
		$throwNew($AssertionError, $of("The generic type of the first parameter of C2B(T1,T2,T4) is a type variable"_s));
	}
	$assign(tv, $cast($TypeVariable, pt));
	if (!TestC2::$assertionsDisabled && !$nc($(tv->getName()))->equals("T1"_s)) {
		$throwNew($AssertionError, $of($$str({"The name of the type parameter of C2B(T1,T2,T4) is T1, not "_s, $(tv->getName())})));
	}
	$assign(bs, tv->getBounds());
	if (!TestC2::$assertionsDisabled && !($nc(bs)->length == 1)) {
		$throwNew($AssertionError, $of("T should have one bound"_s));
	}
	$assign(et_con, con->getGenericExceptionTypes());
	if (!TestC2::$assertionsDisabled && !($nc(et_con)->length == 0)) {
		$throwNew($AssertionError, $of("Constructor C2B(T1,T2,T4) should have no generic exception types"_s));
	}
	$assign(tv_con, con->getTypeParameters());
	if (!TestC2::$assertionsDisabled && !($nc(tv_con)->length == 4)) {
		$throwNew($AssertionError, $of("Constructor C2B(T1,T2,T4) should have four type parameters"_s));
	}
	$var($ClassArray, params4, $new($ClassArray, 0));
	$assign(con, $nc(TestC2::cls)->getDeclaredConstructor(params4));
	$assign(pt_con, con->getGenericParameterTypes());
	if (!TestC2::$assertionsDisabled && !(pt_con->length == 0)) {
		$throwNew($AssertionError, $of("Constructor C2B() should have no generic parameter types"_s));
	}
	$assign(et_con, con->getGenericExceptionTypes());
	if (!TestC2::$assertionsDisabled && !($nc(et_con)->length == 1)) {
		$throwNew($AssertionError, $of("Constructor C2B() should have one generic exception type"_s));
	}
	$assign(tv_con, con->getTypeParameters());
	if (!TestC2::$assertionsDisabled && !($nc(tv_con)->length == 0)) {
		$throwNew($AssertionError, $of("Constructor C2B() should have no type parameters"_s));
	}
}

void clinit$TestC2($Class* class$) {
	TestC2::$assertionsDisabled = !TestC2::class$->desiredAssertionStatus();
	$load($C2B);
	$assignStatic(TestC2::cls, $C2B::class$);
}

TestC2::TestC2() {
}

$Class* TestC2::load$($String* name, bool initialize) {
	$loadClass(TestC2, name, initialize, &_TestC2_ClassInfo_, clinit$TestC2, allocate$TestC2);
	return class$;
}

$Class* TestC2::class$ = nullptr;