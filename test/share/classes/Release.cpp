#include <Release.h>

#include <java/io/FileOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _Release_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Release::*)()>(&Release::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Release::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Release_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Release",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Release_MethodInfo_
};

$Object* allocate$Release($Class* clazz) {
	return $of($alloc(Release));
}

void Release::init$() {
}

void Release::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($FileOutputStream, fos, $new($FileOutputStream, "testFile.tmp"_s));
	fos->write($$new($bytes, 128));
	$var($FileChannel, ch, fos->getChannel());
	$var($FileLock, fl, $nc(ch)->lock());
	ch->close();
	try {
		$nc(fl)->release();
		$throwNew($RuntimeException, "Expected exception not thrown"_s);
	} catch ($ClosedChannelException&) {
		$catch();
	}
}

Release::Release() {
}

$Class* Release::load$($String* name, bool initialize) {
	$loadClass(Release, name, initialize, &_Release_ClassInfo_, allocate$Release);
	return class$;
}

$Class* Release::class$ = nullptr;