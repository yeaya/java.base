#include <Force.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;

$MethodInfo _Force_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Force, init$, void)},
	{"forceReadableOnly", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Force, forceReadableOnly, void), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Force, main, void, $StringArray*), "java.lang.Exception"},
	{"writeAfterForce", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Force, writeAfterForce, void), "java.lang.Exception"},
	{}
};

$ClassInfo _Force_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Force",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Force_MethodInfo_
};

$Object* allocate$Force($Class* clazz) {
	return $of($alloc(Force));
}

void Force::init$() {
}

void Force::main($StringArray* args) {
	writeAfterForce();
	forceReadableOnly();
}

void Force::writeAfterForce() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, srcData, $new($bytes, 20));
	$var($File, blah, $File::createTempFile("blah"_s, nullptr));
	$nc(blah)->deleteOnExit();
	$var($FileOutputStream, fis, $new($FileOutputStream, blah));
	$var($FileChannel, fc, fis->getChannel());
	$nc(fc)->write($($ByteBuffer::wrap(srcData)));
	fc->force(false);
	fc->write($($ByteBuffer::wrap(srcData)));
	fc->close();
}

void Force::forceReadableOnly() {
	$useLocalCurrentObjectStackCache();
	$var($File, f, $File::createTempFile("blah"_s, nullptr));
	$nc(f)->deleteOnExit();
	$var($FileInputStream, fis, $new($FileInputStream, f));
	$var($FileChannel, fc, fis->getChannel());
	$nc(fc)->force(true);
	fc->close();
	fis->close();
}

Force::Force() {
}

$Class* Force::load$($String* name, bool initialize) {
	$loadClass(Force, name, initialize, &_Force_ClassInfo_, allocate$Force);
	return class$;
}

$Class* Force::class$ = nullptr;