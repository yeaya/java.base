#include <Transfers$FileSource.h>

#include <Transfers$Failure.h>
#include <Transfers$Source.h>
#include <Transfers.h>
#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/channels/ByteChannel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <jcpp.h>

using $Transfers = ::Transfers;
using $Transfers$Failure = ::Transfers$Failure;
using $Transfers$Source = ::Transfers$Source;
using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteChannel = ::java::nio::channels::ByteChannel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$FieldInfo _Transfers$FileSource_FieldInfo_[] = {
	{"fn", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(Transfers$FileSource, fn)},
	{"raf", "Ljava/io/RandomAccessFile;", nullptr, $PRIVATE | $FINAL, $field(Transfers$FileSource, raf)},
	{"fc", "Ljava/nio/channels/FileChannel;", nullptr, $PRIVATE | $FINAL, $field(Transfers$FileSource, fc)},
	{}
};

$MethodInfo _Transfers$FileSource_MethodInfo_[] = {
	{"<init>", "(IJ)V", nullptr, 0, $method(static_cast<void(Transfers$FileSource::*)(int32_t,int64_t)>(&Transfers$FileSource::init$)), "java.io.IOException"},
	{"channel", "()Ljava/nio/channels/ReadableByteChannel;", nullptr, 0},
	{"verify", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Transfers$FileSource_InnerClassesInfo_[] = {
	{"Transfers$FileSource", "Transfers", "FileSource", $STATIC},
	{"Transfers$Source", "Transfers", "Source", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Transfers$FileSource_ClassInfo_ = {
	$ACC_SUPER,
	"Transfers$FileSource",
	"Transfers$Source",
	nullptr,
	_Transfers$FileSource_FieldInfo_,
	_Transfers$FileSource_MethodInfo_,
	nullptr,
	nullptr,
	_Transfers$FileSource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Transfers"
};

$Object* allocate$Transfers$FileSource($Class* clazz) {
	return $of($alloc(Transfers$FileSource));
}

void Transfers$FileSource::init$(int32_t size, int64_t seed) {
	$Transfers$Source::init$(size, seed, "FileChannel"_s);
	$init($Transfers);
	$set(this, fn, $Transfers::sourceFile);
	$set(this, raf, $new($RandomAccessFile, this->fn, "rw"_s));
	$set(this, fc, $nc(this->raf)->getChannel());
	$nc(this->fc)->position(0);
	$Transfers::writeRandomBytes(seed, this->fc, 0, size);
}

$ReadableByteChannel* Transfers$FileSource::channel() {
	return static_cast<$ReadableByteChannel*>(static_cast<$ByteChannel*>(static_cast<$SeekableByteChannel*>(this->fc)));
}

void Transfers$FileSource::verify() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fc)->position() != this->size) {
		$throwNew($Transfers$Failure, $$str({"Wrong position: "_s, $$str($nc(this->fc)->position()), " (expected "_s, $$str(this->size), ")"_s}));
	}
	$Transfers::checkRandomBytes(this->fc, 0, this->size, this->seed);
	$nc(this->fc)->close();
	$nc(this->raf)->close();
}

Transfers$FileSource::Transfers$FileSource() {
}

$Class* Transfers$FileSource::load$($String* name, bool initialize) {
	$loadClass(Transfers$FileSource, name, initialize, &_Transfers$FileSource_ClassInfo_, allocate$Transfers$FileSource);
	return class$;
}

$Class* Transfers$FileSource::class$ = nullptr;