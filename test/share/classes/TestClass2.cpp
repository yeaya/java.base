#include <TestClass2.h>
#include <java/lang/Number.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ListArray = $Array<::java::util::List>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

void TestClass2::init$() {
}

$Object* TestClass2::method1(Object$* e, Object$* t) {
	return nullptr;
}

void TestClass2::method2() {
	return;
}

$ObjectArray* TestClass2::method3() {
	return nullptr;
}

$ObjectArray2* TestClass2::method4() {
	return nullptr;
}

$List* TestClass2::method5() {
	return nullptr;
}

$List* TestClass2::method6() {
	return nullptr;
}

$ListArray* TestClass2::method7() {
	return nullptr;
}

$Map* TestClass2::method8() {
	return nullptr;
}

$Set* TestClass2::method9($Number* v) {
	return nullptr;
}

TestClass2::TestClass2() {
}

$Class* TestClass2::load$($String* name, bool initialize) {
	$NamedAttribute method1methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public <T> T TestClass2.method1(E,T)"},
		{}
	};
	$CompoundAttribute method1methodAnnotations$$[] = {
		{"LExpectedGenericString;", method1methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute method2methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public void TestClass2.method2() throws F"},
		{}
	};
	$NamedAttribute method2methodAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "public void TestClass2.method2() throws java.lang.Exception"},
		{}
	};
	$CompoundAttribute method2methodAnnotations$$[] = {
		{"LExpectedGenericString;", method2methodAnnotations$$$namedAttribute},
		{"LExpectedString;", method2methodAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute method3methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public E[] TestClass2.method3()"},
		{}
	};
	$CompoundAttribute method3methodAnnotations$$[] = {
		{"LExpectedGenericString;", method3methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute method4methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public E[][] TestClass2.method4()"},
		{}
	};
	$CompoundAttribute method4methodAnnotations$$[] = {
		{"LExpectedGenericString;", method4methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute method5methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public java.util.List<E[]> TestClass2.method5()"},
		{}
	};
	$CompoundAttribute method5methodAnnotations$$[] = {
		{"LExpectedGenericString;", method5methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute method6methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public java.util.List<?> TestClass2.method6()"},
		{}
	};
	$CompoundAttribute method6methodAnnotations$$[] = {
		{"LExpectedGenericString;", method6methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute method7methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public java.util.List<?>[] TestClass2.method7()"},
		{}
	};
	$CompoundAttribute method7methodAnnotations$$[] = {
		{"LExpectedGenericString;", method7methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute method8methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public <K,V> java.util.Map<K, V> TestClass2.method8()"},
		{}
	};
	$CompoundAttribute method8methodAnnotations$$[] = {
		{"LExpectedGenericString;", method8methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute method9methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public <V extends java.lang.Number & java.lang.Runnable> java.util.Set<V> TestClass2.method9(V)"},
		{}
	};
	$CompoundAttribute method9methodAnnotations$$[] = {
		{"LExpectedGenericString;", method9methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestClass2, init$, void)},
		{"method1", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(TE;TT;)TT;", $PUBLIC, $virtualMethod(TestClass2, method1, $Object*, Object$*, Object$*), nullptr, nullptr, method1methodAnnotations$$},
		{"method2", "()V", "()V^TF;", $PUBLIC, $virtualMethod(TestClass2, method2, void), "java.lang.Exception", nullptr, method2methodAnnotations$$},
		{"method3", "()[Ljava/lang/Object;", "()[TE;", $PUBLIC, $virtualMethod(TestClass2, method3, $ObjectArray*), nullptr, nullptr, method3methodAnnotations$$},
		{"method4", "()[[Ljava/lang/Object;", "()[[TE;", $PUBLIC, $virtualMethod(TestClass2, method4, $ObjectArray2*), nullptr, nullptr, method4methodAnnotations$$},
		{"method5", "()Ljava/util/List;", "()Ljava/util/List<[TE;>;", $PUBLIC, $virtualMethod(TestClass2, method5, $List*), nullptr, nullptr, method5methodAnnotations$$},
		{"method6", "()Ljava/util/List;", "()Ljava/util/List<*>;", $PUBLIC, $virtualMethod(TestClass2, method6, $List*), nullptr, nullptr, method6methodAnnotations$$},
		{"method7", "()[Ljava/util/List;", "()[Ljava/util/List<*>;", $PUBLIC, $virtualMethod(TestClass2, method7, $ListArray*), nullptr, nullptr, method7methodAnnotations$$},
		{"method8", "()Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Ljava/util/Map<TK;TV;>;", $PUBLIC, $virtualMethod(TestClass2, method8, $Map*), nullptr, nullptr, method8methodAnnotations$$},
		{"method9", "(Ljava/lang/Number;)Ljava/util/Set;", "<V:Ljava/lang/Number;:Ljava/lang/Runnable;>(TV;)Ljava/util/Set<TV;>;", $PUBLIC, $virtualMethod(TestClass2, method9, $Set*, $Number*), nullptr, nullptr, method9methodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestClass2",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;F:Ljava/lang/Exception;>Ljava/lang/Object;"
	};
	$loadClass(TestClass2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestClass2);
	});
	return class$;
}

$Class* TestClass2::class$ = nullptr;