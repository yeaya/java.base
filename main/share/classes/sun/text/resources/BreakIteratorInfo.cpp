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

$MethodInfo _BreakIteratorInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BreakIteratorInfo::*)()>(&BreakIteratorInfo::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _BreakIteratorInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.BreakIteratorInfo",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_BreakIteratorInfo_MethodInfo_
};

$Object* allocate$BreakIteratorInfo($Class* clazz) {
	return $of($alloc(BreakIteratorInfo));
}

void BreakIteratorInfo::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* BreakIteratorInfo::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BreakIteratorClasses"_s),
			$of($$new($StringArray, {
				"RuleBasedBreakIterator"_s,
				"RuleBasedBreakIterator"_s,
				"RuleBasedBreakIterator"_s,
				"RuleBasedBreakIterator"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("CharacterData"_s),
			$of("CharacterBreakIteratorData"_s)
		}),
		$$new($ObjectArray, {
			$of("WordData"_s),
			$of("WordBreakIteratorData"_s)
		}),
		$$new($ObjectArray, {
			$of("LineData"_s),
			$of("LineBreakIteratorData"_s)
		}),
		$$new($ObjectArray, {
			$of("SentenceData"_s),
			$of("SentenceBreakIteratorData"_s)
		})
	});
}

BreakIteratorInfo::BreakIteratorInfo() {
}

$Class* BreakIteratorInfo::load$($String* name, bool initialize) {
	$loadClass(BreakIteratorInfo, name, initialize, &_BreakIteratorInfo_ClassInfo_, allocate$BreakIteratorInfo);
	return class$;
}

$Class* BreakIteratorInfo::class$ = nullptr;

		} // resources
	} // text
} // sun