#include <TestPlainArrayNotGeneric.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/GenericDeclaration.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <java/lang/reflect/WildcardType.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $ListArray = $Array<::java::util::List>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $GenericArrayType = ::java::lang::reflect::GenericArrayType;
using $GenericDeclaration = ::java::lang::reflect::GenericDeclaration;
using $Method = ::java::lang::reflect::Method;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $TypeVariable = ::java::lang::reflect::TypeVariable;
using $WildcardType = ::java::lang::reflect::WildcardType;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Set = ::java::util::Set;

$String* TestPlainArrayNotGeneric::lastFailure = nullptr;
int32_t TestPlainArrayNotGeneric::failureCount = 0;
$Set* TestPlainArrayNotGeneric::checking = nullptr;

$StringArray* TestPlainArrayNotGeneric::m1($List* p1) {
	return nullptr;
}

$List* TestPlainArrayNotGeneric::m2($StringArray* p1) {
	return nullptr;
}

void TestPlainArrayNotGeneric::m3($List* p1, $StringArray* p2) {
}

void TestPlainArrayNotGeneric::m4($List* p1) {
}

void TestPlainArrayNotGeneric::init$($List* p1) {
}

void TestPlainArrayNotGeneric::init$($List* p1, $StringArray* p2) {
}

$List* TestPlainArrayNotGeneric::m5($List* p1) {
	return nullptr;
}

$ObjectArray* TestPlainArrayNotGeneric::m6($ObjectArray* p1, $List* p2) {
	return nullptr;
}

$List* TestPlainArrayNotGeneric::m6($List* p1) {
	return nullptr;
}

$List* TestPlainArrayNotGeneric::m7($ListArray* p1) {
	return nullptr;
}

$List* TestPlainArrayNotGeneric::m8($List* p1) {
	return nullptr;
}

$ListArray* TestPlainArrayNotGeneric::m9($ListArray* p1) {
	return nullptr;
}

void TestPlainArrayNotGeneric::main($StringArray* args) {
	$init(TestPlainArrayNotGeneric);
	checkClass(TestPlainArrayNotGeneric::class$);
	if (TestPlainArrayNotGeneric::failureCount == 0) {
		$nc($System::out)->println("TEST PASSED"_s);
	} else {
		$throwNew($Exception, $$str({"TEST FAILED: Last failure: "_s, TestPlainArrayNotGeneric::lastFailure}));
	}
}

void TestPlainArrayNotGeneric::checkClass($Class* c) {
	$init(TestPlainArrayNotGeneric);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($MethodArray, methods, $nc(c)->getMethods());
	{
		$var($MethodArray, arr$, methods);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			{
				$var($Type, var$0, $nc(m)->getGenericReturnType());
				check(var$0, $$str({"return type of method "_s, m}));
				$var($TypeArray, var$1, m->getGenericParameterTypes());
				$var($String, var$2, "parameter"_s);
				check(var$1, var$2, $$str({"method "_s, m}));
				$var($TypeArray, var$3, $cast($TypeArray, m->getTypeParameters()));
				$var($String, var$4, "type parameter"_s);
				check(var$3, var$4, $$str({"method "_s, m}));
			}
		}
	}
	$var($ConstructorArray, constructors, c->getConstructors());
	{
		$var($ConstructorArray, arr$, constructors);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Constructor, constr, arr$->get(i$));
			{
				$var($TypeArray, var$5, $nc(constr)->getGenericParameterTypes());
				$var($String, var$6, "parameter"_s);
				check(var$5, var$6, $$str({"constructor "_s, constr}));
				$var($TypeArray, var$7, $cast($TypeArray, constr->getTypeParameters()));
				$var($String, var$8, "type parameter"_s);
				check(var$7, var$8, $$str({"constructor "_s, constr}));
			}
		}
	}
	$var($ClassArray, inners, c->getDeclaredClasses());
	{
		$var($ClassArray, arr$, inners);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$Class* inner = arr$->get(i$);
			checkClass(inner);
		}
	}
}

void TestPlainArrayNotGeneric::check($TypeArray* types, $String* elementKind, $String* what) {
	$init(TestPlainArrayNotGeneric);
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(types)->length; ++i) {
		$var($Type, t, types->get(i));
		check(t, $$str({elementKind, " "_s, $$str((i + 1)), " of "_s, what}));
	}
}

void TestPlainArrayNotGeneric::check($Type* t, $String* what) {
	$init(TestPlainArrayNotGeneric);
	if (t == nullptr || !TestPlainArrayNotGeneric::checking->add(t)) {
		return;
	}
	$var($Throwable, var$0, nullptr);
	try {
		check2(t, what);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		TestPlainArrayNotGeneric::checking->remove(t);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void TestPlainArrayNotGeneric::check2($Type* t, $String* what) {
	$init(TestPlainArrayNotGeneric);
	$useLocalObjectStack();
	if ($instanceOf($ParameterizedType, t)) {
		$var($ParameterizedType, pt, $cast($ParameterizedType, t));
		check($(pt->getActualTypeArguments()), "type argument"_s, what);
	} else if ($instanceOf($TypeVariable, t)) {
		$var($TypeVariable, tv, $cast($TypeVariable, t));
		check($(tv->getBounds()), "bound"_s, what);
		$var($GenericDeclaration, gd, tv->getGenericDeclaration());
		if ($instanceOf($Type, gd)) {
			check($cast($Type, gd), $$str({"declaration containing "_s, what}));
		}
	} else if ($instanceOf($WildcardType, t)) {
		$var($WildcardType, wt, $cast($WildcardType, t));
		check($(wt->getLowerBounds()), "lower bound"_s, $$str({"wildcard type in "_s, what}));
		check($(wt->getUpperBounds()), "upper bound"_s, $$str({"wildcard type in "_s, what}));
	} else if ($instanceOf($Class, t)) {
		$Class* c = $cast($Class, t);
		$var($TypeArray, var$0, c->getGenericInterfaces());
		$var($String, var$1, "superinterface"_s);
		check(var$0, var$1, $(c->toString()));
		$var($Type, var$2, c->getGenericSuperclass());
		check(var$2, $$str({"superclass of "_s, c}));
		$var($TypeArray, var$3, $cast($TypeArray, c->getTypeParameters()));
		$var($String, var$4, "type parameter"_s);
		check(var$3, var$4, $(c->toString()));
	} else if ($instanceOf($GenericArrayType, t)) {
		$var($GenericArrayType, gat, $cast($GenericArrayType, t));
		$var($Type, comp, gat->getGenericComponentType());
		if ($instanceOf($Class, comp)) {
			fail($$str({"Type "_s, t, " uses GenericArrayType when plain array would do, in "_s, what}));
		} else {
			check(comp, $$str({"component type of "_s, what}));
		}
	} else {
		$var($StringBuilder, var$5, $new($StringBuilder));
		var$5->append("TEST BUG: mutant Type "_s);
		var$5->append(t);
		var$5->append(" (a "_s);
		var$5->append($($nc($of(t))->getClass()->getName()));
		var$5->append(")"_s);
		fail($$str(var$5));
	}
}

void TestPlainArrayNotGeneric::fail($String* why) {
	$init(TestPlainArrayNotGeneric);
	$nc($System::out)->println($$str({"FAIL: "_s, why}));
	$assignStatic(TestPlainArrayNotGeneric::lastFailure, why);
	++TestPlainArrayNotGeneric::failureCount;
}

void TestPlainArrayNotGeneric::clinit$($Class* clazz) {
	$assignStatic(TestPlainArrayNotGeneric::checking, $new($HashSet));
}

TestPlainArrayNotGeneric::TestPlainArrayNotGeneric() {
}

$Class* TestPlainArrayNotGeneric::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lastFailure", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(TestPlainArrayNotGeneric, lastFailure)},
		{"failureCount", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestPlainArrayNotGeneric, failureCount)},
		{"checking", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/reflect/Type;>;", $PRIVATE | $STATIC | $FINAL, $staticField(TestPlainArrayNotGeneric, checking)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<[Ljava/lang/String;>;)V", $PUBLIC, $method(TestPlainArrayNotGeneric, init$, void, $List*)},
		{"<init>", "(Ljava/util/List;[Ljava/lang/String;)V", "(Ljava/util/List<Ljava/lang/String;>;[Ljava/lang/String;)V", $PUBLIC, $method(TestPlainArrayNotGeneric, init$, void, $List*, $StringArray*)},
		{"check", "([Ljava/lang/reflect/Type;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestPlainArrayNotGeneric, check, void, $TypeArray*, $String*, $String*)},
		{"check", "(Ljava/lang/reflect/Type;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestPlainArrayNotGeneric, check, void, $Type*, $String*)},
		{"check2", "(Ljava/lang/reflect/Type;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestPlainArrayNotGeneric, check2, void, $Type*, $String*)},
		{"checkClass", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $staticMethod(TestPlainArrayNotGeneric, checkClass, void, $Class*), "java.lang.Exception"},
		{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestPlainArrayNotGeneric, fail, void, $String*)},
		{"m1", "(Ljava/util/List;)[Ljava/lang/String;", "(Ljava/util/List<Ljava/lang/String;>;)[Ljava/lang/String;", $PUBLIC, $virtualMethod(TestPlainArrayNotGeneric, m1, $StringArray*, $List*)},
		{"m2", "([Ljava/lang/String;)Ljava/util/List;", "([Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(TestPlainArrayNotGeneric, m2, $List*, $StringArray*)},
		{"m3", "(Ljava/util/List;[Ljava/lang/String;)V", "(Ljava/util/List<Ljava/lang/String;>;[Ljava/lang/String;)V", $PUBLIC, $virtualMethod(TestPlainArrayNotGeneric, m3, void, $List*, $StringArray*)},
		{"m4", "(Ljava/util/List;)V", "(Ljava/util/List<[Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(TestPlainArrayNotGeneric, m4, void, $List*)},
		{"m5", "(Ljava/util/List;)Ljava/util/List;", "<T::Ljava/util/List<[Ljava/lang/String;>;>(TT;)TT;", $PUBLIC, $virtualMethod(TestPlainArrayNotGeneric, m5, $List*, $List*)},
		{"m6", "([Ljava/lang/Object;Ljava/util/List;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;Ljava/util/List<[TT;>;)[TT;", $PUBLIC, $virtualMethod(TestPlainArrayNotGeneric, m6, $ObjectArray*, $ObjectArray*, $List*)},
		{"m6", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<+[Ljava/lang/Object;>;)Ljava/util/List<+[Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(TestPlainArrayNotGeneric, m6, $List*, $List*)},
		{"m7", "([Ljava/util/List;)Ljava/util/List;", "<T::Ljava/util/List<+[Ljava/lang/Object;>;>([TT;)TT;", $PUBLIC, $virtualMethod(TestPlainArrayNotGeneric, m7, $List*, $ListArray*)},
		{"m8", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<-[Ljava/lang/Object;>;)Ljava/util/List<-[Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(TestPlainArrayNotGeneric, m8, $List*, $List*)},
		{"m9", "([Ljava/util/List;)[Ljava/util/List;", "<T::Ljava/util/List<-[Ljava/lang/Object;>;>([TT;)[TT;", $PUBLIC, $virtualMethod(TestPlainArrayNotGeneric, m9, $ListArray*, $ListArray*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestPlainArrayNotGeneric, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestPlainArrayNotGeneric$YMap", "TestPlainArrayNotGeneric", "YMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"TestPlainArrayNotGeneric$XMap", "TestPlainArrayNotGeneric", "XMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestPlainArrayNotGeneric",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestPlainArrayNotGeneric$YMap,TestPlainArrayNotGeneric$XMap"
	};
	$loadClass(TestPlainArrayNotGeneric, name, initialize, &classInfo$$, TestPlainArrayNotGeneric::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestPlainArrayNotGeneric);
	});
	return class$;
}

$Class* TestPlainArrayNotGeneric::class$ = nullptr;