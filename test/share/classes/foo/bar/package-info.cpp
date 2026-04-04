#include <foo/bar/package-info.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;

namespace foo {
	namespace bar {

$Class* package$info::load$($String* name, bool initialize) {
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT | $SYNTHETIC,
		"foo.bar.package-info",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(package$info, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(package$info);
	});
	return class$;
}

$Class* package$info::class$ = nullptr;

	} // bar
} // foo