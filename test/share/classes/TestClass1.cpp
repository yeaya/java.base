#include <TestClass1.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;

void TestClass1::init$() {
}

void TestClass1::method1(int32_t x, double y) {
}

$String* TestClass1::method2(int32_t x, int32_t param2) {
	return nullptr;
}

void TestClass1::method3() {
	return;
}

$Object* TestClass1::method4(Object$* s, Object$* t) {
	return nullptr;
}

$Object* TestClass1::max($Collection* coll, $Comparator* comp) {
	return nullptr;
}

TestClass1::TestClass1() {
}

$Class* TestClass1::load$($String* name, bool initialize) {
	$NamedAttribute maxmethodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public static <T> T TestClass1.max(java.util.Collection<? extends T>,java.util.Comparator<? super T>)"},
		{}
	};
	$CompoundAttribute maxmethodAnnotations$$[] = {
		{"LExpectedGenericString;", maxmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute method1methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "void TestClass1.method1(int,double)"},
		{}
	};
	$CompoundAttribute method1methodAnnotations$$[] = {
		{"LExpectedGenericString;", method1methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute method2methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "private static java.lang.String TestClass1.method2(int,int)"},
		{}
	};
	$CompoundAttribute method2methodAnnotations$$[] = {
		{"LExpectedGenericString;", method2methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute method3methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "static void TestClass1.method3() throws java.lang.RuntimeException"},
		{}
	};
	$CompoundAttribute method3methodAnnotations$$[] = {
		{"LExpectedGenericString;", method3methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute method4methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "protected <S,T> S TestClass1.method4(S,T) throws java.lang.Exception"},
		{}
	};
	$CompoundAttribute method4methodAnnotations$$[] = {
		{"LExpectedGenericString;", method4methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestClass1, init$, void)},
		{"max", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<+TT;>;Ljava/util/Comparator<-TT;>;)TT;", $PUBLIC | $STATIC, $staticMethod(TestClass1, max, $Object*, $Collection*, $Comparator*), nullptr, nullptr, maxmethodAnnotations$$},
		{"method1", "(ID)V", nullptr, 0, $virtualMethod(TestClass1, method1, void, int32_t, double), nullptr, nullptr, method1methodAnnotations$$},
		{"method2", "(II)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(TestClass1, method2, $String*, int32_t, int32_t), nullptr, nullptr, method2methodAnnotations$$},
		{"method3", "()V", nullptr, $STATIC, $staticMethod(TestClass1, method3, void), "java.lang.RuntimeException", nullptr, method3methodAnnotations$$},
		{"method4", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "<S:Ljava/lang/Object;T:Ljava/lang/Object;>(TS;TT;)TS;", $PROTECTED, $virtualMethod(TestClass1, method4, $Object*, Object$*, Object$*), "java.lang.Exception", nullptr, method4methodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestClass1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestClass1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestClass1);
	});
	return class$;
}

$Class* TestClass1::class$ = nullptr;