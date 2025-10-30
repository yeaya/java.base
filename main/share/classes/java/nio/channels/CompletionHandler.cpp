#include <java/nio/channels/CompletionHandler.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _CompletionHandler_MethodInfo_[] = {
	{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TV;TA;)V", $PUBLIC | $ABSTRACT},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", "(Ljava/lang/Throwable;TA;)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletionHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.channels.CompletionHandler",
	nullptr,
	nullptr,
	nullptr,
	_CompletionHandler_MethodInfo_,
	"<V:Ljava/lang/Object;A:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$CompletionHandler($Class* clazz) {
	return $of($alloc(CompletionHandler));
}

$Class* CompletionHandler::load$($String* name, bool initialize) {
	$loadClass(CompletionHandler, name, initialize, &_CompletionHandler_ClassInfo_, allocate$CompletionHandler);
	return class$;
}

$Class* CompletionHandler::class$ = nullptr;

		} // channels
	} // nio
} // java