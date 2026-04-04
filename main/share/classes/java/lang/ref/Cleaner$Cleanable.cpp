#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace ref {

$Class* Cleaner$Cleanable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"clean", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Cleaner$Cleanable, clean, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.Cleaner$Cleanable", "java.lang.ref.Cleaner", "Cleanable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.ref.Cleaner$Cleanable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ref.Cleaner"
	};
	$loadClass(Cleaner$Cleanable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cleaner$Cleanable);
	});
	return class$;
}

$Class* Cleaner$Cleanable::class$ = nullptr;

		} // ref
	} // lang
} // java