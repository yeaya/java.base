#include <CharType$CharMethod.h>
#include <CharType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* CharType$CharMethod::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setChar", "(C)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharType$CharMethod, setChar, void, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CharType$CharMethod", "CharType", "CharMethod", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"CharType$CharMethod",
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
		"CharType"
	};
	$loadClass(CharType$CharMethod, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharType$CharMethod);
	});
	return class$;
}

$Class* CharType$CharMethod::class$ = nullptr;