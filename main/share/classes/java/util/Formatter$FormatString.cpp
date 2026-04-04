#include <java/util/Formatter$FormatString.h>
#include <java/util/Formatter.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace java {
	namespace util {

$String* Formatter$FormatString::toString() {
	 return this->$Object::toString();
}

$Class* Formatter$FormatString::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"index", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Formatter$FormatString, index, int32_t)},
		{"print", "(Ljava/lang/Object;Ljava/util/Locale;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Formatter$FormatString, print, void, Object$*, $Locale*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Formatter$FormatString", "java.util.Formatter", "FormatString", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.util.Formatter$FormatString",
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
		"java.util.Formatter"
	};
	$loadClass(Formatter$FormatString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Formatter$FormatString);
	});
	return class$;
}

$Class* Formatter$FormatString::class$ = nullptr;

	} // util
} // java