#include <Streams$InputStreamGetter.h>
#include <Streams$StreamGetter.h>
#include <Streams.h>
#include <java/io/InputStream.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $Streams$StreamGetter = ::Streams$StreamGetter;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;

void Streams$InputStreamGetter::init$($Socket* s) {
	$Streams$StreamGetter::init$(s);
}

void Streams$InputStreamGetter::getStream() {
	$nc(this->socket)->getInputStream();
}

Streams$InputStreamGetter::Streams$InputStreamGetter() {
}

$Class* Streams$InputStreamGetter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/Socket;)V", nullptr, $PUBLIC, $method(Streams$InputStreamGetter, init$, void, $Socket*)},
		{"getStream", "()V", nullptr, 0, $virtualMethod(Streams$InputStreamGetter, getStream, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Streams$InputStreamGetter", "Streams", "InputStreamGetter", $STATIC},
		{"Streams$StreamGetter", "Streams", "StreamGetter", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Streams$InputStreamGetter",
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
	$loadClass(Streams$InputStreamGetter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Streams$InputStreamGetter);
	});
	return class$;
}

$Class* Streams$InputStreamGetter::class$ = nullptr;