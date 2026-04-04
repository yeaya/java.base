#include <Foo4OrderUnitTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* Foo4OrderUnitTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isDirect", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Foo4OrderUnitTest, isDirect, bool)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'c', "LFooContainer;"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Repeatable;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"Foo4OrderUnitTest",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Foo4OrderUnitTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Foo4OrderUnitTest);
	});
	return class$;
}

$Class* Foo4OrderUnitTest::class$ = nullptr;