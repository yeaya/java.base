#include <MetafactoryDescriptorTest$I.h>
#include <MetafactoryDescriptorTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* MetafactoryDescriptorTest$I::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryDescriptorTest$I", "MetafactoryDescriptorTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"MetafactoryDescriptorTest$I",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MetafactoryDescriptorTest"
	};
	$loadClass(MetafactoryDescriptorTest$I, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryDescriptorTest$I);
	});
	return class$;
}

$Class* MetafactoryDescriptorTest$I::class$ = nullptr;