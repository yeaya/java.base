#include <sun/text/resources/BreakIteratorInfo.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {

void BreakIteratorInfo::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* BreakIteratorInfo::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"BreakIteratorClasses"_s,
			$$new($StringArray, {
				"RuleBasedBreakIterator"_s,
				"RuleBasedBreakIterator"_s,
				"RuleBasedBreakIterator"_s,
				"RuleBasedBreakIterator"_s
			})
		}),
		$$new($ObjectArray, {
			"CharacterData"_s,
			"CharacterBreakIteratorData"_s
		}),
		$$new($ObjectArray, {
			"WordData"_s,
			"WordBreakIteratorData"_s
		}),
		$$new($ObjectArray, {
			"LineData"_s,
			"LineBreakIteratorData"_s
		}),
		$$new($ObjectArray, {
			"SentenceData"_s,
			"SentenceBreakIteratorData"_s
		})
	});
}

BreakIteratorInfo::BreakIteratorInfo() {
}

$Class* BreakIteratorInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BreakIteratorInfo, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(BreakIteratorInfo, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.BreakIteratorInfo",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BreakIteratorInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BreakIteratorInfo);
	});
	return class$;
}

$Class* BreakIteratorInfo::class$ = nullptr;

		} // resources
	} // text
} // sun