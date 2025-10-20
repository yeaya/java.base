#include <MapAssertions.h>

#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

#undef READ_ONLY

using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _MapAssertions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MapAssertions::*)()>(&MapAssertions::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MapAssertions::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _MapAssertions_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MapAssertions",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MapAssertions_MethodInfo_
};

$Object* allocate$MapAssertions($Class* clazz) {
	return $of($alloc(MapAssertions));
}

void MapAssertions::init$() {
}

void MapAssertions::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, blah, $File::createTempFile("blah"_s, nullptr));
	$nc(blah)->deleteOnExit();
	$var($RandomAccessFile, raf, $new($RandomAccessFile, blah, "r"_s));
	$var($FileChannel, fc, raf->getChannel());
	int64_t fileSize = $nc(fc)->size();
	$init($FileChannel$MapMode);
	$var($MappedByteBuffer, mapBuf, fc->map($FileChannel$MapMode::READ_ONLY, 0, fileSize));
	fc->close();
	raf->close();
}

MapAssertions::MapAssertions() {
}

$Class* MapAssertions::load$($String* name, bool initialize) {
	$loadClass(MapAssertions, name, initialize, &_MapAssertions_ClassInfo_, allocate$MapAssertions);
	return class$;
}

$Class* MapAssertions::class$ = nullptr;