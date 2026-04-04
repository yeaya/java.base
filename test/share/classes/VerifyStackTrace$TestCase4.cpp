#include <VerifyStackTrace$TestCase4.h>
#include <VerifyStackTrace$TestCase3.h>
#include <VerifyStackTrace.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $VerifyStackTrace$TestCase3 = ::VerifyStackTrace$TestCase3;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $EnumSet = ::java::util::EnumSet;

void VerifyStackTrace$TestCase4::init$() {
	$VerifyStackTrace$TestCase3::init$();
	$load($StackWalker$Option);
	$set(this, walker$, $StackWalker::getInstance($($EnumSet::allOf($StackWalker$Option::class$))));
	$set(this, description$, "StackWalker.getInstance(StackWalker.Option.RETAIN_CLASS_REFERENCE, StackWalker.Option.SHOW_HIDDEN_FRAMES, StackWalker.Option.SHOW_REFLECT_FRAMES)"_s);
}

$StackWalker* VerifyStackTrace$TestCase4::walker() {
	return this->walker$;
}

$String* VerifyStackTrace$TestCase4::description() {
	return this->description$;
}

VerifyStackTrace$TestCase4::VerifyStackTrace$TestCase4() {
}

$Class* VerifyStackTrace$TestCase4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"walker", "Ljava/lang/StackWalker;", nullptr, $PRIVATE | $FINAL, $field(VerifyStackTrace$TestCase4, walker$)},
		{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(VerifyStackTrace$TestCase4, description$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VerifyStackTrace$TestCase4, init$, void)},
		{"description", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VerifyStackTrace$TestCase4, description, $String*)},
		{"walker", "()Ljava/lang/StackWalker;", nullptr, $PUBLIC, $virtualMethod(VerifyStackTrace$TestCase4, walker, $StackWalker*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"VerifyStackTrace$TestCase4", "VerifyStackTrace", "TestCase4", $STATIC | $FINAL},
		{"VerifyStackTrace$TestCase3", "VerifyStackTrace", "TestCase3", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"VerifyStackTrace$TestCase4",
		"VerifyStackTrace$TestCase3",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"VerifyStackTrace"
	};
	$loadClass(VerifyStackTrace$TestCase4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VerifyStackTrace$TestCase4);
	});
	return class$;
}

$Class* VerifyStackTrace$TestCase4::class$ = nullptr;