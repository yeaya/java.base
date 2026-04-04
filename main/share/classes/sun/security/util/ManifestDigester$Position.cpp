#include <sun/security/util/ManifestDigester$Position.h>
#include <sun/security/util/ManifestDigester.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

void ManifestDigester$Position::init$() {
}

ManifestDigester$Position::ManifestDigester$Position() {
}

$Class* ManifestDigester$Position::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"endOfFirstLine", "I", nullptr, 0, $field(ManifestDigester$Position, endOfFirstLine)},
		{"endOfSection", "I", nullptr, 0, $field(ManifestDigester$Position, endOfSection)},
		{"startOfNext", "I", nullptr, 0, $field(ManifestDigester$Position, startOfNext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ManifestDigester$Position, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.ManifestDigester$Position", "sun.security.util.ManifestDigester", "Position", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.ManifestDigester$Position",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.ManifestDigester"
	};
	$loadClass(ManifestDigester$Position, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManifestDigester$Position);
	});
	return class$;
}

$Class* ManifestDigester$Position::class$ = nullptr;

		} // util
	} // security
} // sun