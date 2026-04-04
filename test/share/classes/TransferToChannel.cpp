#include <TransferToChannel.h>
#include <TransferToChannel$1.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Math.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef CHUNK_SIZE

using $TransferToChannel$1 = ::TransferToChannel$1;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileChannel = ::java::nio::channels::FileChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;
using $Random = ::java::util::Random;

$File* TransferToChannel::file = nullptr;
$File* TransferToChannel::outFile = nullptr;
$FileChannel* TransferToChannel::in = nullptr;
int32_t TransferToChannel::CHUNK_SIZE = 0;

void TransferToChannel::init$() {
}

void TransferToChannel::main($StringArray* args) {
	$init(TransferToChannel);
	$assignStatic(TransferToChannel::file, $File::createTempFile("readingin"_s, nullptr));
	$assignStatic(TransferToChannel::outFile, $File::createTempFile("writingout"_s, nullptr));
	$nc(TransferToChannel::file)->deleteOnExit();
	$nc(TransferToChannel::outFile)->deleteOnExit();
	generateBigFile(TransferToChannel::file);
	$var($FileInputStream, fis, $new($FileInputStream, TransferToChannel::file));
	$assignStatic(TransferToChannel::in, fis->getChannel());
	test1();
	test2();
	$nc(TransferToChannel::in)->close();
	$nc(TransferToChannel::file)->delete$();
	$nc(TransferToChannel::outFile)->delete$();
}

void TransferToChannel::test1() {
	$init(TransferToChannel);
	for (int32_t i = 0; i < 10; ++i) {
		transferFileToUserChannel();
		$System::gc();
		$nc($System::err)->println("Transferred file..."_s);
	}
}

void TransferToChannel::test2() {
	$init(TransferToChannel);
	for (int32_t i = 0; i < 10; ++i) {
		transferFileToTrustedChannel();
		$System::gc();
		$nc($System::err)->println("Transferred file..."_s);
	}
}

void TransferToChannel::transferFileToUserChannel() {
	$init(TransferToChannel);
	int64_t remainingBytes = $nc(TransferToChannel::in)->size();
	int64_t size = remainingBytes;
	$var($WritableByteChannel, wbc, $new($TransferToChannel$1));
	while (remainingBytes > 0) {
		int64_t bytesTransferred = TransferToChannel::in->transferTo(size - remainingBytes, $Math::min((int64_t)TransferToChannel::CHUNK_SIZE, remainingBytes), wbc);
		if (bytesTransferred >= 0) {
			remainingBytes -= bytesTransferred;
		} else {
			$throwNew($Exception, "transfer failed"_s);
		}
	}
}

void TransferToChannel::transferFileToTrustedChannel() {
	$init(TransferToChannel);
	$useLocalObjectStack();
	int64_t remainingBytes = $nc(TransferToChannel::in)->size();
	int64_t size = remainingBytes;
	$var($FileOutputStream, fos, $new($FileOutputStream, TransferToChannel::outFile));
	$var($FileChannel, out, fos->getChannel());
	while (remainingBytes > 0) {
		int64_t bytesTransferred = TransferToChannel::in->transferTo(size - remainingBytes, TransferToChannel::CHUNK_SIZE, $cast($SeekableByteChannel, out));
		if (bytesTransferred >= 0) {
			remainingBytes -= bytesTransferred;
		} else {
			$throwNew($Exception, "transfer failed"_s);
		}
	}
	$nc(out)->close();
}

void TransferToChannel::generateBigFile($File* file) {
	$init(TransferToChannel);
	$useLocalObjectStack();
	$var($OutputStream, out, $new($BufferedOutputStream, $$new($FileOutputStream, file)));
	$var($bytes, randomBytes, $new($bytes, 1024));
	$var($Random, rand, $new($Random, 0));
	for (int32_t i = 0; i < 1000; ++i) {
		rand->nextBytes(randomBytes);
		out->write(randomBytes);
	}
	out->flush();
	out->close();
}

void TransferToChannel::clinit$($Class* clazz) {
	TransferToChannel::CHUNK_SIZE = 1024 * 9;
}

TransferToChannel::TransferToChannel() {
}

$Class* TransferToChannel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"file", "Ljava/io/File;", nullptr, $STATIC, $staticField(TransferToChannel, file)},
		{"outFile", "Ljava/io/File;", nullptr, $STATIC, $staticField(TransferToChannel, outFile)},
		{"in", "Ljava/nio/channels/FileChannel;", nullptr, $STATIC, $staticField(TransferToChannel, in)},
		{"CHUNK_SIZE", "I", nullptr, $STATIC, $staticField(TransferToChannel, CHUNK_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TransferToChannel, init$, void)},
		{"generateBigFile", "(Ljava/io/File;)V", nullptr, $STATIC, $staticMethod(TransferToChannel, generateBigFile, void, $File*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TransferToChannel, main, void, $StringArray*), "java.lang.Exception"},
		{"test1", "()V", nullptr, $STATIC, $staticMethod(TransferToChannel, test1, void), "java.lang.Exception"},
		{"test2", "()V", nullptr, $STATIC, $staticMethod(TransferToChannel, test2, void), "java.lang.Exception"},
		{"transferFileToTrustedChannel", "()V", nullptr, $STATIC, $staticMethod(TransferToChannel, transferFileToTrustedChannel, void), "java.lang.Exception"},
		{"transferFileToUserChannel", "()V", nullptr, $STATIC, $staticMethod(TransferToChannel, transferFileToUserChannel, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TransferToChannel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TransferToChannel",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TransferToChannel$1"
	};
	$loadClass(TransferToChannel, name, initialize, &classInfo$$, TransferToChannel::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TransferToChannel);
	});
	return class$;
}

$Class* TransferToChannel::class$ = nullptr;