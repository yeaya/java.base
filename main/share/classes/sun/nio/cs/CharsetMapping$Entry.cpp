#include <sun/nio/cs/CharsetMapping$Entry.h>
#include <sun/nio/cs/CharsetMapping.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace cs {

void CharsetMapping$Entry::init$() {
}

CharsetMapping$Entry::CharsetMapping$Entry() {
}

$Class* CharsetMapping$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bs", "I", nullptr, $PUBLIC, $field(CharsetMapping$Entry, bs)},
		{"cp", "I", nullptr, $PUBLIC, $field(CharsetMapping$Entry, cp)},
		{"cp2", "I", nullptr, $PUBLIC, $field(CharsetMapping$Entry, cp2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CharsetMapping$Entry, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.CharsetMapping$Entry", "sun.nio.cs.CharsetMapping", "Entry", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.cs.CharsetMapping$Entry",
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
		"sun.nio.cs.CharsetMapping"
	};
	$loadClass(CharsetMapping$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharsetMapping$Entry);
	});
	return class$;
}

$Class* CharsetMapping$Entry::class$ = nullptr;

		} // cs
	} // nio
} // sun