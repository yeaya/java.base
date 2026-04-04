#include <Intf.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

$Class* Intf::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"i", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Intf, i)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"Intf",
		nullptr,
		nullptr,
		fieldInfos$$
	};
	$loadClass(Intf, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Intf);
	});
	return class$;
}

$Class* Intf::class$ = nullptr;