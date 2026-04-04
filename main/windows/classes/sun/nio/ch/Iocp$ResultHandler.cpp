#include <sun/nio/ch/Iocp$ResultHandler.h>
#include <java/io/IOException.h>
#include <sun/nio/ch/Iocp.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

$Class* Iocp$ResultHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"completed", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Iocp$ResultHandler, completed, void, int32_t, bool)},
		{"failed", "(ILjava/io/IOException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Iocp$ResultHandler, failed, void, int32_t, $IOException*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Iocp$ResultHandler", "sun.nio.ch.Iocp", "ResultHandler", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.nio.ch.Iocp$ResultHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Iocp"
	};
	$loadClass(Iocp$ResultHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Iocp$ResultHandler);
	});
	return class$;
}

$Class* Iocp$ResultHandler::class$ = nullptr;

		} // ch
	} // nio
} // sun