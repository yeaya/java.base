#include <Release.h>
#include <java/io/FileOutputStream.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/FileLock.h>
#include <jcpp.h>

using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileLock = ::java::nio::channels::FileLock;

void Release::init$() {
}

void Release::main($StringArray* args) {
	$useLocalObjectStack();
	$var($FileOutputStream, fos, $new($FileOutputStream, "testFile.tmp"_s));
	fos->write($$new($bytes, 128));
	$var($FileChannel, ch, fos->getChannel());
	$var($FileLock, fl, $nc(ch)->lock());
	ch->close();
	try {
		$nc(fl)->release();
		$throwNew($RuntimeException, "Expected exception not thrown"_s);
	} catch ($ClosedChannelException& cce) {
	}
}

Release::Release() {
}

$Class* Release::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Release, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Release, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Release",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Release, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Release);
	});
	return class$;
}

$Class* Release::class$ = nullptr;