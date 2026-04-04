#include <SuppressedExceptions$NoSuppression.h>
#include <SuppressedExceptions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SuppressedExceptions$NoSuppression::init$(bool enableSuppression) {
	$Throwable::init$("The medium."_s, nullptr, enableSuppression, true);
}

SuppressedExceptions$NoSuppression::SuppressedExceptions$NoSuppression() {
}

SuppressedExceptions$NoSuppression::SuppressedExceptions$NoSuppression(const SuppressedExceptions$NoSuppression& e) : $Throwable(e) {
}

void SuppressedExceptions$NoSuppression::throw$() {
	throw *this;
}

$Class* SuppressedExceptions$NoSuppression::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(SuppressedExceptions$NoSuppression, init$, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SuppressedExceptions$NoSuppression", "SuppressedExceptions", "NoSuppression", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SuppressedExceptions$NoSuppression",
		"java.lang.Throwable",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SuppressedExceptions"
	};
	$loadClass(SuppressedExceptions$NoSuppression, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SuppressedExceptions$NoSuppression);
	});
	return class$;
}

$Class* SuppressedExceptions$NoSuppression::class$ = nullptr;