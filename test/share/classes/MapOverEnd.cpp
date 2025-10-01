#include <MapOverEnd.h>

#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

#undef READ_WRITE

using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _MapOverEnd_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MapOverEnd::*)()>(&MapOverEnd::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MapOverEnd::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _MapOverEnd_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MapOverEnd",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MapOverEnd_MethodInfo_
};

$Object* allocate$MapOverEnd($Class* clazz) {
	return $of($alloc(MapOverEnd));
}

void MapOverEnd::init$() {
}

void MapOverEnd::main($StringArray* args) {
	$var($File, blah, $File::createTempFile("blah"_s, nullptr));
	$nc(blah)->deleteOnExit();
	$var($RandomAccessFile, raf, $new($RandomAccessFile, blah, "rw"_s));
	$var($FileChannel, fc, raf->getChannel());
	$init($FileChannel$MapMode);
	$var($MappedByteBuffer, map, $nc(fc)->map($FileChannel$MapMode::READ_WRITE, 0, 2048));
	fc->close();
	double current = $nc(map)->getDouble(50);
	map->putDouble(50, current + 0.1);
	map->force();
}

MapOverEnd::MapOverEnd() {
}

$Class* MapOverEnd::load$($String* name, bool initialize) {
	$loadClass(MapOverEnd, name, initialize, &_MapOverEnd_ClassInfo_, allocate$MapOverEnd);
	return class$;
}

$Class* MapOverEnd::class$ = nullptr;