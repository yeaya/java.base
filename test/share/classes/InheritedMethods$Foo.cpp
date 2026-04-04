#include <InheritedMethods$Foo.h>
#include <InheritedMethods.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* InheritedMethods$Foo::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InheritedMethods$Foo", "InheritedMethods", "Foo", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"InheritedMethods$Foo",
		nullptr,
		"java.util.List",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"InheritedMethods"
	};
	$loadClass(InheritedMethods$Foo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InheritedMethods$Foo);
	});
	return class$;
}

$Class* InheritedMethods$Foo::class$ = nullptr;