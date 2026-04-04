#include <BasicRunnable.h>
#include <java/lang/Appendable.h>
#include <jcpp.h>

using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* BasicRunnable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"init", "(Ljava/lang/Appendable;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicRunnable, init, void, $Appendable*, $String*, $String*)},
		{"reset", "(Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicRunnable, reset, $Appendable*, $Appendable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"BasicRunnable",
		nullptr,
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicRunnable);
	});
	return class$;
}

$Class* BasicRunnable::class$ = nullptr;