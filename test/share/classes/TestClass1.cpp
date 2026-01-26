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

$NamedAttribute TestClass1_Attribute_var$0[] = {
	{"value", 's', "public static <T> T TestClass1.max(java.util.Collection<? extends T>,java.util.Comparator<? super T>)"},
	{}
};

$CompoundAttribute _TestClass1_MethodAnnotations_max1[] = {
	{"LExpectedGenericString;", TestClass1_Attribute_var$0},
	{}
};

$NamedAttribute TestClass1_Attribute_var$1[] = {
	{"value", 's', "void TestClass1.method1(int,double)"},
	{}
};

$CompoundAttribute _TestClass1_MethodAnnotations_method12[] = {
	{"LExpectedGenericString;", TestClass1_Attribute_var$1},
	{}
};

$NamedAttribute TestClass1_Attribute_var$2[] = {
	{"value", 's', "private static java.lang.String TestClass1.method2(int,int)"},
	{}
};

$CompoundAttribute _TestClass1_MethodAnnotations_method23[] = {
	{"LExpectedGenericString;", TestClass1_Attribute_var$2},
	{}
};

$NamedAttribute TestClass1_Attribute_var$3[] = {
	{"value", 's', "static void TestClass1.method3() throws java.lang.RuntimeException"},
	{}
};

$CompoundAttribute _TestClass1_MethodAnnotations_method34[] = {
	{"LExpectedGenericString;", TestClass1_Attribute_var$3},
	{}
};

$NamedAttribute TestClass1_Attribute_var$4[] = {
	{"value", 's', "protected <S,T> S TestClass1.method4(S,T) throws java.lang.Exception"},
	{}
};

$CompoundAttribute _TestClass1_MethodAnnotations_method45[] = {
	{"LExpectedGenericString;", TestClass1_Attribute_var$4},
	{}
};

$MethodInfo _TestClass1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TestClass1, init$, void)},
	{"max", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<+TT;>;Ljava/util/Comparator<-TT;>;)TT;", $PUBLIC | $STATIC, $staticMethod(TestClass1, max, $Object*, $Collection*, $Comparator*), nullptr, nullptr, _TestClass1_MethodAnnotations_max1},
	{"method1", "(ID)V", nullptr, 0, $virtualMethod(TestClass1, method1, void, int32_t, double), nullptr, nullptr, _TestClass1_MethodAnnotations_method12},
	{"method2", "(II)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(TestClass1, method2, $String*, int32_t, int32_t), nullptr, nullptr, _TestClass1_MethodAnnotations_method23},
	{"method3", "()V", nullptr, $STATIC, $staticMethod(TestClass1, method3, void), "java.lang.RuntimeException", nullptr, _TestClass1_MethodAnnotations_method34},
	{"method4", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "<S:Ljava/lang/Object;T:Ljava/lang/Object;>(TS;TT;)TS;", $PROTECTED, $virtualMethod(TestClass1, method4, $Object*, Object$*, Object$*), "java.lang.Exception", nullptr, _TestClass1_MethodAnnotations_method45},
	{}
};

$ClassInfo _TestClass1_ClassInfo_ = {
	$ACC_SUPER,
	"TestClass1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestClass1_MethodInfo_
};

$Object* allocate$TestClass1($Class* clazz) {
	return $of($alloc(TestClass1));
}

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
	return $of(nullptr);
}

$Object* TestClass1::max($Collection* coll, $Comparator* comp) {
	return $of(nullptr);
}

TestClass1::TestClass1() {
}

$Class* TestClass1::load$($String* name, bool initialize) {
	$loadClass(TestClass1, name, initialize, &_TestClass1_ClassInfo_, allocate$TestClass1);
	return class$;
}

$Class* TestClass1::class$ = nullptr;