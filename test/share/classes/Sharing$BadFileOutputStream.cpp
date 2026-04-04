#include <Sharing$BadFileOutputStream.h>
#include <Sharing.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sharing$BadFileOutputStream::init$($FileDescriptor* fd) {
	$FileOutputStream::init$(fd);
}

void Sharing$BadFileOutputStream::close() {
	$throwNew($IOException, "Bad close operation"_s);
}

Sharing$BadFileOutputStream::Sharing$BadFileOutputStream() {
}

$Class* Sharing$BadFileOutputStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/FileDescriptor;)V", nullptr, 0, $method(Sharing$BadFileOutputStream, init$, void, $FileDescriptor*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Sharing$BadFileOutputStream, close, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sharing$BadFileOutputStream", "Sharing", "BadFileOutputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Sharing$BadFileOutputStream",
		"java.io.FileOutputStream",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Sharing"
	};
	$loadClass(Sharing$BadFileOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Sharing$BadFileOutputStream));
	});
	return class$;
}

$Class* Sharing$BadFileOutputStream::class$ = nullptr;