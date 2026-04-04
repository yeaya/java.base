#include <MapOverEnd.h>
#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
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
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;

void MapOverEnd::init$() {
}

void MapOverEnd::main($StringArray* args) {
	$useLocalObjectStack();
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MapOverEnd, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MapOverEnd, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MapOverEnd",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MapOverEnd, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MapOverEnd);
	});
	return class$;
}

$Class* MapOverEnd::class$ = nullptr;