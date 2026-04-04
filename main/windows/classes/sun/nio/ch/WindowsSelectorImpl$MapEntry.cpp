#include <sun/nio/ch/WindowsSelectorImpl$MapEntry.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <sun/nio/ch/WindowsSelectorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;

namespace sun {
	namespace nio {
		namespace ch {

void WindowsSelectorImpl$MapEntry::init$($SelectionKeyImpl* ski) {
	this->updateCount = 0;
	$set(this, ski, ski);
}

WindowsSelectorImpl$MapEntry::WindowsSelectorImpl$MapEntry() {
}

$Class* WindowsSelectorImpl$MapEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ski", "Lsun/nio/ch/SelectionKeyImpl;", nullptr, $FINAL, $field(WindowsSelectorImpl$MapEntry, ski)},
		{"updateCount", "J", nullptr, 0, $field(WindowsSelectorImpl$MapEntry, updateCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/SelectionKeyImpl;)V", nullptr, 0, $method(WindowsSelectorImpl$MapEntry, init$, void, $SelectionKeyImpl*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.WindowsSelectorImpl$MapEntry", "sun.nio.ch.WindowsSelectorImpl", "MapEntry", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.nio.ch.WindowsSelectorImpl$MapEntry",
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
		"sun.nio.ch.WindowsSelectorImpl"
	};
	$loadClass(WindowsSelectorImpl$MapEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsSelectorImpl$MapEntry);
	});
	return class$;
}

$Class* WindowsSelectorImpl$MapEntry::class$ = nullptr;

		} // ch
	} // nio
} // sun