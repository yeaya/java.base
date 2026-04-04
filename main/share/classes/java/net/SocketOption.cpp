#include <java/net/SocketOption.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$Class* SocketOption::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SocketOption, name, $String*)},
		{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SocketOption, type, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.SocketOption",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(SocketOption, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketOption);
	});
	return class$;
}

$Class* SocketOption::class$ = nullptr;

	} // net
} // java