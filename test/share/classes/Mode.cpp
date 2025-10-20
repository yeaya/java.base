#include <Mode.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/NonReadableChannelException.h>
#include <java/nio/channels/NonWritableChannelException.h>
#include <jcpp.h>

#undef READ_ONLY
#undef READ_WRITE

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $NonReadableChannelException = ::java::nio::channels::NonReadableChannelException;
using $NonWritableChannelException = ::java::nio::channels::NonWritableChannelException;

$FieldInfo _Mode_FieldInfo_[] = {
	{"testFile", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(Mode, testFile)},
	{}
};

$MethodInfo _Mode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Mode::*)()>(&Mode::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Mode::main)), "java.lang.Exception"},
	{"testReadable", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Mode::testReadable)), "java.io.IOException"},
	{"testWritable", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Mode::testWritable)), "java.io.IOException"},
	{}
};

$ClassInfo _Mode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Mode",
	"java.lang.Object",
	nullptr,
	_Mode_FieldInfo_,
	_Mode_MethodInfo_
};

$Object* allocate$Mode($Class* clazz) {
	return $of($alloc(Mode));
}

$File* Mode::testFile = nullptr;

void Mode::init$() {
}

void Mode::main($StringArray* args) {
	$init(Mode);
	$assignStatic(Mode::testFile, $File::createTempFile("testFile"_s, nullptr));
	$nc(Mode::testFile)->deleteOnExit();
	testReadable();
	testWritable();
}

void Mode::testReadable() {
	$useLocalCurrentObjectStackCache();
	$init(Mode);
	$var($FileInputStream, is, $new($FileInputStream, Mode::testFile));
	$var($FileChannel, channel, is->getChannel());
	try {
		$init($FileChannel$MapMode);
		$var($MappedByteBuffer, buff, $nc(channel)->map($FileChannel$MapMode::READ_WRITE, 0, 8));
		$throwNew($RuntimeException, "Exception expected, none thrown"_s);
	} catch ($NonWritableChannelException&) {
		$catch();
	}
	is->close();
}

void Mode::testWritable() {
	$useLocalCurrentObjectStackCache();
	$init(Mode);
	$var($FileOutputStream, is, $new($FileOutputStream, Mode::testFile));
	$var($FileChannel, channel, is->getChannel());
	try {
		$init($FileChannel$MapMode);
		$var($MappedByteBuffer, buff, $nc(channel)->map($FileChannel$MapMode::READ_ONLY, 0, 8));
		$throwNew($RuntimeException, "Exception expected, none thrown"_s);
	} catch ($NonReadableChannelException&) {
		$catch();
	}
	is->close();
}

Mode::Mode() {
}

$Class* Mode::load$($String* name, bool initialize) {
	$loadClass(Mode, name, initialize, &_Mode_ClassInfo_, allocate$Mode);
	return class$;
}

$Class* Mode::class$ = nullptr;