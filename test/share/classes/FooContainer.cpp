#include <FooContainer.h>

#include <Foo4OrderUnitTest.h>
#include <jcpp.h>

using $Foo4OrderUnitTestArray = $Array<Foo4OrderUnitTest>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute FooContainer_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _FooContainer_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", FooContainer_Attribute_var$0},
	{}
};

$MethodInfo _FooContainer_MethodInfo_[] = {
	{"value", "()[LFoo4OrderUnitTest;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FooContainer, value, $Foo4OrderUnitTestArray*)},
	{}
};

$ClassInfo _FooContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"FooContainer",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_FooContainer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_FooContainer_Annotations_
};

$Object* allocate$FooContainer($Class* clazz) {
	return $of($alloc(FooContainer));
}

$Class* FooContainer::load$($String* name, bool initialize) {
	$loadClass(FooContainer, name, initialize, &_FooContainer_ClassInfo_, allocate$FooContainer);
	return class$;
}

$Class* FooContainer::class$ = nullptr;