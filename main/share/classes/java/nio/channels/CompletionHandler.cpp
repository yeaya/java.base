#include <java/nio/channels/CompletionHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$Class* CompletionHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TV;TA;)V", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionHandler, completed, void, Object$*, Object$*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", "(Ljava/lang/Throwable;TA;)V", $PUBLIC | $ABSTRACT, $virtualMethod(CompletionHandler, failed, void, $Throwable*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.channels.CompletionHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<V:Ljava/lang/Object;A:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(CompletionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompletionHandler);
	});
	return class$;
}

$Class* CompletionHandler::class$ = nullptr;

		} // channels
	} // nio
} // java