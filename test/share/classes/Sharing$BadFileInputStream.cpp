#include <Sharing$BadFileInputStream.h>
#include <Sharing.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream = ::java::io::FileInputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sharing$BadFileInputStream::init$($FileDescriptor* fd) {
	$FileInputStream::init$(fd);
}

void Sharing$BadFileInputStream::close() {
	$throwNew($IOException, "Bad close operation"_s);
}

Sharing$BadFileInputStream::Sharing$BadFileInputStream() {
}

$Class* Sharing$BadFileInputStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/FileDescriptor;)V", nullptr, 0, $method(Sharing$BadFileInputStream, init$, void, $FileDescriptor*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Sharing$BadFileInputStream, close, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sharing$BadFileInputStream", "Sharing", "BadFileInputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Sharing$BadFileInputStream",
		"java.io.FileInputStream",
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
	$loadClass(Sharing$BadFileInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sharing$BadFileInputStream);
	});
	return class$;
}

$Class* Sharing$BadFileInputStream::class$ = nullptr;