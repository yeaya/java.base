#include <MapReadOnly.h>

#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

#undef READ_ONLY

using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _MapReadOnly_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MapReadOnly::*)()>(&MapReadOnly::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MapReadOnly::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _MapReadOnly_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MapReadOnly",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MapReadOnly_MethodInfo_
};

$Object* allocate$MapReadOnly($Class* clazz) {
	return $of($alloc(MapReadOnly));
}

void MapReadOnly::init$() {
}

void MapReadOnly::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, testFile, $File::createTempFile("test2"_s, nullptr));
	$nc(testFile)->deleteOnExit();
	$var($RandomAccessFile, raf, $new($RandomAccessFile, testFile, "rw"_s));
	$var($FileChannel, fc, raf->getChannel());
	$init($FileChannel$MapMode);
	$var($MappedByteBuffer, mbb, $nc(fc)->map($FileChannel$MapMode::READ_ONLY, 0, (int32_t)fc->size()));
	$nc(mbb)->load();
	try {
		mbb->put((int8_t)3);
		$throwNew($Exception, "Test failed"_s);
	} catch ($ReadOnlyBufferException& robe) {
	}
	fc->close();
	raf->close();
}

MapReadOnly::MapReadOnly() {
}

$Class* MapReadOnly::load$($String* name, bool initialize) {
	$loadClass(MapReadOnly, name, initialize, &_MapReadOnly_ClassInfo_, allocate$MapReadOnly);
	return class$;
}

$Class* MapReadOnly::class$ = nullptr;