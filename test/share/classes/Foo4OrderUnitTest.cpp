#include <Foo4OrderUnitTest.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute Foo4OrderUnitTest_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$NamedAttribute Foo4OrderUnitTest_Attribute_var$1[] = {
	{"value", 'c', "LFooContainer;"},
	{}
};

$CompoundAttribute _Foo4OrderUnitTest_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", Foo4OrderUnitTest_Attribute_var$0},
	{"Ljava/lang/annotation/Repeatable;", Foo4OrderUnitTest_Attribute_var$1},
	{}
};

$MethodInfo _Foo4OrderUnitTest_MethodInfo_[] = {
	{"isDirect", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Foo4OrderUnitTest_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"Foo4OrderUnitTest",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Foo4OrderUnitTest_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Foo4OrderUnitTest_Annotations_
};

$Object* allocate$Foo4OrderUnitTest($Class* clazz) {
	return $of($alloc(Foo4OrderUnitTest));
}

$Class* Foo4OrderUnitTest::load$($String* name, bool initialize) {
	$loadClass(Foo4OrderUnitTest, name, initialize, &_Foo4OrderUnitTest_ClassInfo_, allocate$Foo4OrderUnitTest);
	return class$;
}

$Class* Foo4OrderUnitTest::class$ = nullptr;