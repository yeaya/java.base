#include <java/text/DontCareFieldPosition.h>
#include <java/text/DontCareFieldPosition$1.h>
#include <java/text/FieldPosition.h>
#include <java/text/Format$FieldDelegate.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DontCareFieldPosition$1 = ::java::text::DontCareFieldPosition$1;
using $FieldPosition = ::java::text::FieldPosition;
using $Format$FieldDelegate = ::java::text::Format$FieldDelegate;

namespace java {
	namespace text {

$FieldPosition* DontCareFieldPosition::INSTANCE = nullptr;

void DontCareFieldPosition::init$() {
	$FieldPosition::init$(0);
	$set(this, noDelegate, $new($DontCareFieldPosition$1, this));
}

$Format$FieldDelegate* DontCareFieldPosition::getFieldDelegate() {
	return this->noDelegate;
}

void DontCareFieldPosition::clinit$($Class* clazz) {
	$assignStatic(DontCareFieldPosition::INSTANCE, $new(DontCareFieldPosition));
}

DontCareFieldPosition::DontCareFieldPosition() {
}

$Class* DontCareFieldPosition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljava/text/FieldPosition;", nullptr, $STATIC | $FINAL, $staticField(DontCareFieldPosition, INSTANCE)},
		{"noDelegate", "Ljava/text/Format$FieldDelegate;", nullptr, $PRIVATE | $FINAL, $field(DontCareFieldPosition, noDelegate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DontCareFieldPosition, init$, void)},
		{"getFieldDelegate", "()Ljava/text/Format$FieldDelegate;", nullptr, 0, $virtualMethod(DontCareFieldPosition, getFieldDelegate, $Format$FieldDelegate*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.text.DontCareFieldPosition$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.text.DontCareFieldPosition",
		"java.text.FieldPosition",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.text.DontCareFieldPosition$1"
	};
	$loadClass(DontCareFieldPosition, name, initialize, &classInfo$$, DontCareFieldPosition::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DontCareFieldPosition);
	});
	return class$;
}

$Class* DontCareFieldPosition::class$ = nullptr;

	} // text
} // java