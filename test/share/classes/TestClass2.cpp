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

$NamedAttribute TestClass2_Attribute_var$0[] = {
	{"value", 's', "public <T> T TestClass2.method1(E,T)"},
	{}
};

$CompoundAttribute _TestClass2_MethodAnnotations_method11[] = {
	{"LExpectedGenericString;", TestClass2_Attribute_var$0},
	{}
};

$NamedAttribute TestClass2_Attribute_var$1[] = {
	{"value", 's', "public void TestClass2.method2() throws F"},
	{}
};

$NamedAttribute TestClass2_Attribute_var$2[] = {
	{"value", 's', "public void TestClass2.method2() throws java.lang.Exception"},
	{}
};

$CompoundAttribute _TestClass2_MethodAnnotations_method22[] = {
	{"LExpectedGenericString;", TestClass2_Attribute_var$1},
	{"LExpectedString;", TestClass2_Attribute_var$2},
	{}
};

$NamedAttribute TestClass2_Attribute_var$3[] = {
	{"value", 's', "public E[] TestClass2.method3()"},
	{}
};

$CompoundAttribute _TestClass2_MethodAnnotations_method33[] = {
	{"LExpectedGenericString;", TestClass2_Attribute_var$3},
	{}
};

$NamedAttribute TestClass2_Attribute_var$4[] = {
	{"value", 's', "public E[][] TestClass2.method4()"},
	{}
};

$CompoundAttribute _TestClass2_MethodAnnotations_method44[] = {
	{"LExpectedGenericString;", TestClass2_Attribute_var$4},
	{}
};

$NamedAttribute TestClass2_Attribute_var$5[] = {
	{"value", 's', "public java.util.List<E[]> TestClass2.method5()"},
	{}
};

$CompoundAttribute _TestClass2_MethodAnnotations_method55[] = {
	{"LExpectedGenericString;", TestClass2_Attribute_var$5},
	{}
};

$NamedAttribute TestClass2_Attribute_var$6[] = {
	{"value", 's', "public java.util.List<?> TestClass2.method6()"},
	{}
};

$CompoundAttribute _TestClass2_MethodAnnotations_method66[] = {
	{"LExpectedGenericString;", TestClass2_Attribute_var$6},
	{}
};

$NamedAttribute TestClass2_Attribute_var$7[] = {
	{"value", 's', "public java.util.List<?>[] TestClass2.method7()"},
	{}
};

$CompoundAttribute _TestClass2_MethodAnnotations_method77[] = {
	{"LExpectedGenericString;", TestClass2_Attribute_var$7},
	{}
};

$NamedAttribute TestClass2_Attribute_var$8[] = {
	{"value", 's', "public <K,V> java.util.Map<K, V> TestClass2.method8()"},
	{}
};

$CompoundAttribute _TestClass2_MethodAnnotations_method88[] = {
	{"LExpectedGenericString;", TestClass2_Attribute_var$8},
	{}
};

$NamedAttribute TestClass2_Attribute_var$9[] = {
	{"value", 's', "public <V extends java.lang.Number & java.lang.Runnable> java.util.Set<V> TestClass2.method9(V)"},
	{}
};

$CompoundAttribute _TestClass2_MethodAnnotations_method99[] = {
	{"LExpectedGenericString;", TestClass2_Attribute_var$9},
	{}
};

$MethodInfo _TestClass2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestClass2::*)()>(&TestClass2::init$))},
	{"method1", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(TE;TT;)TT;", $PUBLIC, nullptr, nullptr, nullptr, _TestClass2_MethodAnnotations_method11},
	{"method2", "()V", "()V^TF;", $PUBLIC, nullptr, "java.lang.Exception", nullptr, _TestClass2_MethodAnnotations_method22},
	{"method3", "()[Ljava/lang/Object;", "()[TE;", $PUBLIC, nullptr, nullptr, nullptr, _TestClass2_MethodAnnotations_method33},
	{"method4", "()[[Ljava/lang/Object;", "()[[TE;", $PUBLIC, nullptr, nullptr, nullptr, _TestClass2_MethodAnnotations_method44},
	{"method5", "()Ljava/util/List;", "()Ljava/util/List<[TE;>;", $PUBLIC, nullptr, nullptr, nullptr, _TestClass2_MethodAnnotations_method55},
	{"method6", "()Ljava/util/List;", "()Ljava/util/List<*>;", $PUBLIC, nullptr, nullptr, nullptr, _TestClass2_MethodAnnotations_method66},
	{"method7", "()[Ljava/util/List;", "()[Ljava/util/List<*>;", $PUBLIC, nullptr, nullptr, nullptr, _TestClass2_MethodAnnotations_method77},
	{"method8", "()Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Ljava/util/Map<TK;TV;>;", $PUBLIC, nullptr, nullptr, nullptr, _TestClass2_MethodAnnotations_method88},
	{"method9", "(Ljava/lang/Number;)Ljava/util/Set;", "<V:Ljava/lang/Number;:Ljava/lang/Runnable;>(TV;)Ljava/util/Set<TV;>;", $PUBLIC, nullptr, nullptr, nullptr, _TestClass2_MethodAnnotations_method99},
	{}
};

$ClassInfo _TestClass2_ClassInfo_ = {
	$ACC_SUPER,
	"TestClass2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestClass2_MethodInfo_,
	"<E:Ljava/lang/Object;F:Ljava/lang/Exception;>Ljava/lang/Object;"
};

$Object* allocate$TestClass2($Class* clazz) {
	return $of($alloc(TestClass2));
}

void TestClass2::init$() {
}

$Object* TestClass2::method1(Object$* e, Object$* t) {
	return $of(nullptr);
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
	$loadClass(TestClass2, name, initialize, &_TestClass2_ClassInfo_, allocate$TestClass2);
	return class$;
}

$Class* TestClass2::class$ = nullptr;