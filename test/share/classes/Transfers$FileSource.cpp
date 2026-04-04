#include <Transfers$FileSource.h>
#include <Transfers$Failure.h>
#include <Transfers$Source.h>
#include <Transfers.h>
#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <jcpp.h>

using $Transfers = ::Transfers;
using $Transfers$Failure = ::Transfers$Failure;
using $Transfers$Source = ::Transfers$Source;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;

void Transfers$FileSource::init$(int32_t size, int64_t seed) {
	$Transfers$Source::init$(size, seed, "FileChannel"_s);
	$init($Transfers);
	$set(this, fn, $Transfers::sourceFile);
	$set(this, raf, $new($RandomAccessFile, this->fn, "rw"_s));
	$set(this, fc, this->raf->getChannel());
	$nc(this->fc)->position(0);
	$Transfers::writeRandomBytes(seed, this->fc, 0, size);
}

$ReadableByteChannel* Transfers$FileSource::channel() {
	return $cast($SeekableByteChannel, this->fc);
}

void Transfers$FileSource::verify() {
	$useLocalObjectStack();
	if ($nc(this->fc)->position() != this->size) {
		$throwNew($Transfers$Failure, $$str({"Wrong position: "_s, $$str(this->fc->position()), " (expected "_s, $$str(this->size), ")"_s}));
	}
	$Transfers::checkRandomBytes(this->fc, 0, this->size, this->seed);
	this->fc->close();
	this->raf->close();
}

Transfers$FileSource::Transfers$FileSource() {
}

$Class* Transfers$FileSource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fn", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(Transfers$FileSource, fn)},
		{"raf", "Ljava/io/RandomAccessFile;", nullptr, $PRIVATE | $FINAL, $field(Transfers$FileSource, raf)},
		{"fc", "Ljava/nio/channels/FileChannel;", nullptr, $PRIVATE | $FINAL, $field(Transfers$FileSource, fc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IJ)V", nullptr, 0, $method(Transfers$FileSource, init$, void, int32_t, int64_t), "java.io.IOException"},
		{"channel", "()Ljava/nio/channels/ReadableByteChannel;", nullptr, 0, $virtualMethod(Transfers$FileSource, channel, $ReadableByteChannel*)},
		{"verify", "()V", nullptr, 0, $virtualMethod(Transfers$FileSource, verify, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Transfers$FileSource", "Transfers", "FileSource", $STATIC},
		{"Transfers$Source", "Transfers", "Source", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Transfers$FileSource",
		"Transfers$Source",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Transfers"
	};
	$loadClass(Transfers$FileSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transfers$FileSource);
	});
	return class$;
}

$Class* Transfers$FileSource::class$ = nullptr;