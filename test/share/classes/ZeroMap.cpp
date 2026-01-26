#include <ZeroMap.h>

#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef READ_WRITE

using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $Random = ::java::util::Random;

$MethodInfo _ZeroMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ZeroMap, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ZeroMap, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _ZeroMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ZeroMap",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ZeroMap_MethodInfo_
};

$Object* allocate$ZeroMap($Class* clazz) {
	return $of($alloc(ZeroMap));
}

void ZeroMap::init$() {
}

void ZeroMap::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Random, random, $new($Random));
	int64_t filesize = random->nextInt(1024 * 1024);
	int32_t cut = random->nextInt((int32_t)filesize);
	$var($File, file, $File::createTempFile("Blah"_s, nullptr));
	$nc(file)->deleteOnExit();
	{
		$var($RandomAccessFile, raf, $new($RandomAccessFile, file, "rw"_s));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					raf->setLength(filesize);
					$var($FileChannel, fc, raf->getChannel());
					$init($FileChannel$MapMode);
					$var($MappedByteBuffer, mbb, $nc(fc)->map($FileChannel$MapMode::READ_WRITE, cut, 0));
					$nc(mbb)->force();
					mbb->load();
					mbb->isLoaded();
				} catch ($Throwable& t$) {
					try {
						raf->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				raf->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$System::gc();
	$Thread::sleep(500);
}

ZeroMap::ZeroMap() {
}

$Class* ZeroMap::load$($String* name, bool initialize) {
	$loadClass(ZeroMap, name, initialize, &_ZeroMap_ClassInfo_, allocate$ZeroMap);
	return class$;
}

$Class* ZeroMap::class$ = nullptr;