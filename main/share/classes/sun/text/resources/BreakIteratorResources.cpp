#include <sun/text/resources/BreakIteratorResources.h>
#include <java/util/ResourceBundle.h>
#include <sun/text/resources/BreakIteratorInfo.h>
#include <sun/util/resources/BreakIteratorResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundle = ::java::util::ResourceBundle;
using $BreakIteratorInfo = ::sun::text::resources::BreakIteratorInfo;
using $BreakIteratorResourceBundle = ::sun::util::resources::BreakIteratorResourceBundle;

namespace sun {
	namespace text {
		namespace resources {

void BreakIteratorResources::init$() {
	$BreakIteratorResourceBundle::init$();
}

$ResourceBundle* BreakIteratorResources::getBreakIteratorInfo() {
	return $new($BreakIteratorInfo);
}

BreakIteratorResources::BreakIteratorResources() {
}

$Class* BreakIteratorResources::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BreakIteratorResources, init$, void)},
		{"getBreakIteratorInfo", "()Ljava/util/ResourceBundle;", nullptr, $PROTECTED, $virtualMethod(BreakIteratorResources, getBreakIteratorInfo, $ResourceBundle*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.BreakIteratorResources",
		"sun.util.resources.BreakIteratorResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BreakIteratorResources, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BreakIteratorResources);
	});
	return class$;
}

$Class* BreakIteratorResources::class$ = nullptr;

		} // resources
	} // text
} // sun