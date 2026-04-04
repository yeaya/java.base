#include <FooContainer.h>
#include <Foo4OrderUnitTest.h>
#include <jcpp.h>

using $Foo4OrderUnitTestArray = $Array<Foo4OrderUnitTest>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* FooContainer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[LFoo4OrderUnitTest;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FooContainer, value, $Foo4OrderUnitTestArray*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"FooContainer",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(FooContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FooContainer);
	});
	return class$;
}

$Class* FooContainer::class$ = nullptr;