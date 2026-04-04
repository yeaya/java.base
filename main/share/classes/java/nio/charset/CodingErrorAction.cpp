#include <java/nio/charset/CodingErrorAction.h>
#include <jcpp.h>

#undef IGNORE
#undef REPLACE
#undef REPORT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace charset {

CodingErrorAction* CodingErrorAction::IGNORE = nullptr;
CodingErrorAction* CodingErrorAction::REPLACE = nullptr;
CodingErrorAction* CodingErrorAction::REPORT = nullptr;

void CodingErrorAction::init$($String* name) {
	$set(this, name, name);
}

$String* CodingErrorAction::toString() {
	return this->name;
}

void CodingErrorAction::clinit$($Class* clazz) {
	$assignStatic(CodingErrorAction::IGNORE, $new(CodingErrorAction, "IGNORE"_s));
	$assignStatic(CodingErrorAction::REPLACE, $new(CodingErrorAction, "REPLACE"_s));
	$assignStatic(CodingErrorAction::REPORT, $new(CodingErrorAction, "REPORT"_s));
}

CodingErrorAction::CodingErrorAction() {
}

$Class* CodingErrorAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CodingErrorAction, name)},
		{"IGNORE", "Ljava/nio/charset/CodingErrorAction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CodingErrorAction, IGNORE)},
		{"REPLACE", "Ljava/nio/charset/CodingErrorAction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CodingErrorAction, REPLACE)},
		{"REPORT", "Ljava/nio/charset/CodingErrorAction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CodingErrorAction, REPORT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(CodingErrorAction, init$, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CodingErrorAction, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.charset.CodingErrorAction",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CodingErrorAction, name, initialize, &classInfo$$, CodingErrorAction::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CodingErrorAction);
	});
	return class$;
}

$Class* CodingErrorAction::class$ = nullptr;

		} // charset
	} // nio
} // java