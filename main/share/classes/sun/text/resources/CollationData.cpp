#include <sun/text/resources/CollationData.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {

void CollationData::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		""_s
	})});
}

CollationData::CollationData() {
}

$Class* CollationData::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.CollationData",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData);
	});
	return class$;
}

$Class* CollationData::class$ = nullptr;

		} // resources
	} // text
} // sun