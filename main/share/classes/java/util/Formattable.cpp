#include <java/util/Formattable.h>
#include <java/util/Formatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Formatter = ::java::util::Formatter;

namespace java {
	namespace util {

$Class* Formattable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"formatTo", "(Ljava/util/Formatter;III)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Formattable, formatTo, void, $Formatter*, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.Formattable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Formattable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Formattable);
	});
	return class$;
}

$Class* Formattable::class$ = nullptr;

	} // util
} // java