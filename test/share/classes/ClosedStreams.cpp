#include <ClosedStreams.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <java/nio/channels/Channel.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void ClosedStreams::init$() {
}

void ClosedStreams::main($StringArray* args) {
	$init($FileDescriptor);
	($$new($FileInputStream, $FileDescriptor::in))->close();
	if ($System::inheritedChannel() != nullptr) {
		$throwNew($RuntimeException, "inherited channel not null - unexpected!"_s);
	}
}

ClosedStreams::ClosedStreams() {
}

$Class* ClosedStreams::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedStreams, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ClosedStreams, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ClosedStreams",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ClosedStreams, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClosedStreams);
	});
	return class$;
}

$Class* ClosedStreams::class$ = nullptr;