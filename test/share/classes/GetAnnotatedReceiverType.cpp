#include <GetAnnotatedReceiverType.h>
#include <GetAnnotatedReceiverType$Inner0.h>
#include <GetAnnotatedReceiverType$Inner1.h>
#include <GetAnnotatedReceiverType$Inner2$Inner3$Inner7.h>
#include <GetAnnotatedReceiverType$Inner2$Inner3.h>
#include <GetAnnotatedReceiverType$Inner2.h>
#include <GetAnnotatedReceiverType$Inner4$Inner5$Inner6.h>
#include <GetAnnotatedReceiverType$Inner4$Inner5.h>
#include <GetAnnotatedReceiverType$Inner4.h>
#include <GetAnnotatedReceiverType$Nested$NestedInner.h>
#include <GetAnnotatedReceiverType$Nested.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

#undef EXPECTED_TEST_CASES

using $GetAnnotatedReceiverType$Inner0 = ::GetAnnotatedReceiverType$Inner0;
using $GetAnnotatedReceiverType$Inner1 = ::GetAnnotatedReceiverType$Inner1;
using $GetAnnotatedReceiverType$Inner2 = ::GetAnnotatedReceiverType$Inner2;
using $GetAnnotatedReceiverType$Inner2$Inner3 = ::GetAnnotatedReceiverType$Inner2$Inner3;
using $GetAnnotatedReceiverType$Inner2$Inner3$Inner7 = ::GetAnnotatedReceiverType$Inner2$Inner3$Inner7;
using $GetAnnotatedReceiverType$Inner4 = ::GetAnnotatedReceiverType$Inner4;
using $GetAnnotatedReceiverType$Inner4$Inner5 = ::GetAnnotatedReceiverType$Inner4$Inner5;
using $GetAnnotatedReceiverType$Inner4$Inner5$Inner6 = ::GetAnnotatedReceiverType$Inner4$Inner5$Inner6;
using $GetAnnotatedReceiverType$Nested = ::GetAnnotatedReceiverType$Nested;
using $GetAnnotatedReceiverType$Nested$NestedInner = ::GetAnnotatedReceiverType$Nested$NestedInner;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Executable = ::java::lang::reflect::Executable;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;

int32_t GetAnnotatedReceiverType::failures = 0;
int32_t GetAnnotatedReceiverType::tests = 0;

void GetAnnotatedReceiverType::init$() {
}

void GetAnnotatedReceiverType::method() {
}

void GetAnnotatedReceiverType::method0() {
}

void GetAnnotatedReceiverType::method4() {
	$init(GetAnnotatedReceiverType);
}

void GetAnnotatedReceiverType::main($StringArray* args) {
	$init(GetAnnotatedReceiverType);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	checkEmptyAT($(GetAnnotatedReceiverType::class$->getMethod("method"_s, $$new($ClassArray, 0))), "getAnnotatedReceiverType for \"method\" should return an empty AnnotatedType"_s);
	$load($GetAnnotatedReceiverType$Inner0);
	checkEmptyAT($($GetAnnotatedReceiverType$Inner0::class$->getConstructor($$new($ClassArray, {GetAnnotatedReceiverType::class$}))), "getAnnotatedReceiverType for a ctor without a \"this\" should return an empty AnnotatedType"_s);
	checkEmptyAT($(GetAnnotatedReceiverType::class$->getMethod("method0"_s, $$new($ClassArray, 0))), "getAnnotatedReceiverType for \"method0\" should return an empty AnnotatedType"_s);
	$load($GetAnnotatedReceiverType$Inner1);
	checkEmptyAT($($GetAnnotatedReceiverType$Inner1::class$->getConstructor($$new($ClassArray, {GetAnnotatedReceiverType::class$}))), "getAnnotatedReceiverType for a ctor with a \"this\" should return an empty AnnotatedType"_s);
	checkNull($(GetAnnotatedReceiverType::class$->getMethod("method4"_s, $$new($ClassArray, 0))), "getAnnotatedReceiverType() on a static method should return null"_s);
	$var($GetAnnotatedReceiverType$Nested, nested, $new($GetAnnotatedReceiverType$Nested));
	$var($GetAnnotatedReceiverType$Nested$NestedInner, instance, $new($GetAnnotatedReceiverType$Nested$NestedInner, nested));
	checkNull($nc($(nested->getClass()->getConstructors()))->get(0), "getAnnotatedReceiverType() on a constructor for a static class should return null"_s);
	checkEmptyAT($nc($(instance->getClass()->getConstructors()))->get(0), "getAnnotatedReceiverType for a ctor without a \"this\" should return an empty AnnotatedType"_s);
	checkNull($nc($($nc(instance->getLocalClass())->getConstructors()))->get(0), "getAnnotatedReceiverType() on a constructor for a local class should return null"_s);
	checkNull($nc($($nc(instance->getAnonymousClass())->getDeclaredConstructors()))->get(0), "getAnnotatedReceiverType() on a constructor for an anonymous class should return null"_s);
	$var(GetAnnotatedReceiverType, outer, $new(GetAnnotatedReceiverType));
	$var($GetAnnotatedReceiverType$Inner2, instance2, $new($GetAnnotatedReceiverType$Inner2, outer));
	checkEmptyAT($nc($(instance2->getClass()->getConstructors()))->get(0), "getAnnotatedReceiverType for a ctor without a \"this\" should return an empty AnnotatedType"_s);
	checkNull($nc($($nc(instance2->getLocalClass())->getConstructors()))->get(0), "getAnnotatedReceiverType() on a constructor for a local class should return null"_s);
	checkNull($nc($($nc(instance2->getAnonymousClass())->getDeclaredConstructors()))->get(0), "getAnnotatedReceiverType() on a constructor for an anonymous class should return null"_s);
	$var($GetAnnotatedReceiverType$Inner2$Inner3, instance3, $new($GetAnnotatedReceiverType$Inner2$Inner3, instance2));
	checkEmptyAT($nc($(instance3->getClass()->getConstructors()))->get(0), "getAnnotatedReceiverType for a ctor without a \"this\" should return an empty AnnotatedType"_s);
	checkNull($nc($($nc(instance3->getLocalClass())->getConstructors()))->get(0), "getAnnotatedReceiverType() on a constructor for a local class should return null"_s);
	checkNull($nc($($nc(instance3->getAnonymousClass())->getDeclaredConstructors()))->get(0), "getAnnotatedReceiverType() on a constructor for an anonymous class should return null"_s);
	$var($GetAnnotatedReceiverType$Inner4, instance4, $new($GetAnnotatedReceiverType$Inner4, outer));
	$var($GetAnnotatedReceiverType$Inner4$Inner5, instance5, $new($GetAnnotatedReceiverType$Inner4$Inner5, instance4));
	$var($GetAnnotatedReceiverType$Inner4$Inner5$Inner6, instance6, $new($GetAnnotatedReceiverType$Inner4$Inner5$Inner6, instance5));
	checkAnnotatedReceiverType($nc($(instance4->getClass()->getConstructors()))->get(0), false, "The type of .getAnnotatedReceiverType().getType() for this constructor should be"_s);
	checkAnnotatedReceiverType($nc($(instance5->getClass()->getConstructors()))->get(0), true, "The type of .getAnnotatedReceiverType().getType() for this constructor should be"_s);
	checkAnnotatedReceiverType($nc($(instance6->getClass()->getConstructors()))->get(0), true, "The type of .getAnnotatedReceiverType().getType() for this constructor should be"_s);
	checkAnnotatedReceiverType($(outer->getClass()->getMethod("method0"_s, $$new($ClassArray, 0))), false, "The type of .getAnnotatedReceiverType().getType() for this method should be"_s);
	checkAnnotatedReceiverType($(instance4->getClass()->getMethod("innerMethod4"_s, $$new($ClassArray, 0))), true, "The type of .getAnnotatedReceiverType().getType() for this method should be"_s);
	checkAnnotatedReceiverType($(instance5->getClass()->getMethod("innerMethod5"_s, $$new($ClassArray, 0))), true, "The type of .getAnnotatedReceiverType().getType() for this method should be"_s);
	checkAnnotatedReceiverType($(instance2->getClass()->getMethod("innerMethod2"_s, $$new($ClassArray, 0))), false, "The type of .getAnnotatedReceiverType().getType() for this method should be"_s);
	checkAnnotatedReceiverType($(instance3->getClass()->getMethod("innerMethod3"_s, $$new($ClassArray, 0))), false, "The type of .getAnnotatedReceiverType().getType() for this method should be"_s);
	$var($GetAnnotatedReceiverType$Inner2$Inner3$Inner7, instance7, $new($GetAnnotatedReceiverType$Inner2$Inner3$Inner7, instance3));
	checkAnnotatedReceiverType($(instance7->getClass()->getMethod("innerMethod7"_s, $$new($ClassArray, 0))), true, "The type of .getAnnotatedReceiverType().getType() for this method should be"_s);
	recursiveCheckAnnotatedOwnerTypes($($$nc(instance7->getClass()->getMethod("innerMethod7"_s, $$new($ClassArray, 0)))->getAnnotatedReceiverType()));
	if (GetAnnotatedReceiverType::failures != 0) {
		$throwNew($RuntimeException, "Test failed, see log for details"_s);
	} else if (GetAnnotatedReceiverType::tests != GetAnnotatedReceiverType::EXPECTED_TEST_CASES) {
		$throwNew($RuntimeException, "Not all cases ran, failing"_s);
	}
}

void GetAnnotatedReceiverType::checkNull($Executable* e, $String* msg) {
	$init(GetAnnotatedReceiverType);
	$useLocalObjectStack();
	$var($AnnotatedType, a, $nc(e)->getAnnotatedReceiverType());
	if (a != nullptr) {
		++GetAnnotatedReceiverType::failures;
		$nc($System::err)->println($$str({msg, ": "_s, e}));
	}
	++GetAnnotatedReceiverType::tests;
}

void GetAnnotatedReceiverType::checkEmptyAT($Executable* e, $String* msg) {
	$init(GetAnnotatedReceiverType);
	$useLocalObjectStack();
	$var($AnnotatedType, a, $nc(e)->getAnnotatedReceiverType());
	if ($nc($($nc(a)->getAnnotations()))->length != 0) {
		++GetAnnotatedReceiverType::failures;
		$nc($System::err)->print($$str({msg, ": "_s, e}));
	}
	++GetAnnotatedReceiverType::tests;
}

void GetAnnotatedReceiverType::checkAnnotatedReceiverType($Executable* e, bool shouldBeParameterized, $String* msg) {
	$init(GetAnnotatedReceiverType);
	$useLocalObjectStack();
	$var($Type, t, $$nc($nc(e)->getAnnotatedReceiverType())->getType());
	if (shouldBeParameterized != ($instanceOf($ParameterizedType, t))) {
		++GetAnnotatedReceiverType::failures;
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append(e);
		var$0->append(", "_s);
		var$0->append(msg);
		var$0->append(" "_s);
		var$0->append(shouldBeParameterized ? "ParameterizedType"_s : "Class"_s);
		var$0->append(", found: "_s);
		var$0->append($(t->getClass()->getSimpleName()));
		$nc($System::err)->println($$str(var$0));
	}
	if (shouldBeParameterized) {
		try {
			$var($ParameterizedType, t1, $cast($ParameterizedType, t));
			$var($AnnotatedParameterizedType, at1, $cast($AnnotatedParameterizedType, e->getAnnotatedReceiverType()));
			int32_t var$1 = $nc($($nc(t1)->getActualTypeArguments()))->length;
			if (var$1 != $nc($($nc(at1)->getAnnotatedActualTypeArguments()))->length) {
				$nc($System::err)->println($$str({t1, "\'s actual type arguments can\'t match "_s, at1}));
				++GetAnnotatedReceiverType::failures;
			}
		} catch ($ClassCastException& cce) {
			$nc($System::err)->println($$str({"Couldn\'t get potentially empty actual type arguments: "_s, $(cce->getMessage())}));
			++GetAnnotatedReceiverType::failures;
		}
	}
	++GetAnnotatedReceiverType::tests;
}

void GetAnnotatedReceiverType::recursiveCheckAnnotatedOwnerTypes($AnnotatedType* t) {
	$init(GetAnnotatedReceiverType);
	$useLocalObjectStack();
	$var($AnnotatedType, check, $nc(t)->getAnnotatedOwnerType());
	do {
		if (!($instanceOf($Class, $($nc(check)->getType())))) {
			++GetAnnotatedReceiverType::failures;
			$nc($System::err)->println($$str({"Expecting only instances of Class returned for .getType() found "_s, $($$nc(check->getType())->getClass()->getSimpleName())}));
		}
		$assign(check, check->getAnnotatedOwnerType());
	} while (check != nullptr);
	++GetAnnotatedReceiverType::tests;
}

void GetAnnotatedReceiverType::clinit$($Class* clazz) {
	GetAnnotatedReceiverType::failures = 0;
	GetAnnotatedReceiverType::tests = 0;
}

GetAnnotatedReceiverType::GetAnnotatedReceiverType() {
}

$Class* GetAnnotatedReceiverType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"failures", "I", nullptr, $PRIVATE | $STATIC, $staticField(GetAnnotatedReceiverType, failures)},
		{"tests", "I", nullptr, $PRIVATE | $STATIC, $staticField(GetAnnotatedReceiverType, tests)},
		{"EXPECTED_TEST_CASES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GetAnnotatedReceiverType, EXPECTED_TEST_CASES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetAnnotatedReceiverType, init$, void)},
		{"checkAnnotatedReceiverType", "(Ljava/lang/reflect/Executable;ZLjava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetAnnotatedReceiverType, checkAnnotatedReceiverType, void, $Executable*, bool, $String*)},
		{"checkEmptyAT", "(Ljava/lang/reflect/Executable;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetAnnotatedReceiverType, checkEmptyAT, void, $Executable*, $String*)},
		{"checkNull", "(Ljava/lang/reflect/Executable;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetAnnotatedReceiverType, checkNull, void, $Executable*, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetAnnotatedReceiverType, main, void, $StringArray*), "java.lang.NoSuchMethodException"},
		{"method", "()V", nullptr, $PUBLIC, $virtualMethod(GetAnnotatedReceiverType, method, void)},
		{"method0", "()V", nullptr, $PUBLIC, $virtualMethod(GetAnnotatedReceiverType, method0, void)},
		{"method4", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetAnnotatedReceiverType, method4, void)},
		{"recursiveCheckAnnotatedOwnerTypes", "(Ljava/lang/reflect/AnnotatedType;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetAnnotatedReceiverType, recursiveCheckAnnotatedOwnerTypes, void, $AnnotatedType*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedReceiverType$Inner4", "GetAnnotatedReceiverType", "Inner4", $PUBLIC},
		{"GetAnnotatedReceiverType$Inner2", "GetAnnotatedReceiverType", "Inner2", $PUBLIC},
		{"GetAnnotatedReceiverType$Nested", "GetAnnotatedReceiverType", "Nested", $PUBLIC | $STATIC},
		{"GetAnnotatedReceiverType$Inner1", "GetAnnotatedReceiverType", "Inner1", 0},
		{"GetAnnotatedReceiverType$Inner0", "GetAnnotatedReceiverType", "Inner0", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetAnnotatedReceiverType",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"GetAnnotatedReceiverType$Inner4,GetAnnotatedReceiverType$Inner4$Inner5,GetAnnotatedReceiverType$Inner4$Inner5$Inner6,GetAnnotatedReceiverType$Inner2,GetAnnotatedReceiverType$Inner2$Inner3,GetAnnotatedReceiverType$Inner2$Inner3$Inner7,GetAnnotatedReceiverType$Inner2$Inner3$1,GetAnnotatedReceiverType$Inner2$Inner3$1InnerLocal,GetAnnotatedReceiverType$Inner2$1,GetAnnotatedReceiverType$Inner2$1InnerLocal,GetAnnotatedReceiverType$Nested,GetAnnotatedReceiverType$Nested$NestedInner,GetAnnotatedReceiverType$Nested$NestedInner$1,GetAnnotatedReceiverType$Nested$NestedInner$1NestedInnerLocal,GetAnnotatedReceiverType$Inner1,GetAnnotatedReceiverType$Inner0"
	};
	$loadClass(GetAnnotatedReceiverType, name, initialize, &classInfo$$, GetAnnotatedReceiverType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedReceiverType);
	});
	return class$;
}

$Class* GetAnnotatedReceiverType::class$ = nullptr;