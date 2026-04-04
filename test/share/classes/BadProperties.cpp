#include <BadProperties.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;

void BadProperties::init$() {
}

void BadProperties::main($StringArray* args) {
	$AsynchronousSocketChannel::open();
}

BadProperties::BadProperties() {
}

$Class* BadProperties::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BadProperties, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BadProperties, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BadProperties",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BadProperties, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BadProperties);
	});
	return class$;
}

$Class* BadProperties::class$ = nullptr;