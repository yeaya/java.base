#include <Streams$OutputStreamGetter.h>
#include <Streams$StreamGetter.h>
#include <Streams.h>
#include <java/io/OutputStream.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $Streams$StreamGetter = ::Streams$StreamGetter;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;

void Streams$OutputStreamGetter::init$($Socket* s) {
	$Streams$StreamGetter::init$(s);
}

void Streams$OutputStreamGetter::getStream() {
	$nc(this->socket)->getOutputStream();
}

Streams$OutputStreamGetter::Streams$OutputStreamGetter() {
}

$Class* Streams$OutputStreamGetter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/Socket;)V", nullptr, $PUBLIC, $method(Streams$OutputStreamGetter, init$, void, $Socket*)},
		{"getStream", "()V", nullptr, 0, $virtualMethod(Streams$OutputStreamGetter, getStream, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Streams$OutputStreamGetter", "Streams", "OutputStreamGetter", $STATIC},
		{"Streams$StreamGetter", "Streams", "StreamGetter", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Streams$OutputStreamGetter",
		"Streams$StreamGetter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Streams"
	};
	$loadClass(Streams$OutputStreamGetter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Streams$OutputStreamGetter);
	});
	return class$;
}

$Class* Streams$OutputStreamGetter::class$ = nullptr;