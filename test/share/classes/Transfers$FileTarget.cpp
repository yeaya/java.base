#include <Transfers$FileTarget.h>

#include <Transfers$Failure.h>
#include <Transfers$Target.h>
#include <Transfers.h>
#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/ByteChannel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <jcpp.h>

using $Transfers = ::Transfers;
using $Transfers$Failure = ::Transfers$Failure;
using $Transfers$Target = ::Transfers$Target;
using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteChannel = ::java::nio::channels::ByteChannel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$FieldInfo _Transfers$FileTarget_FieldInfo_[] = {
	{"fn", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(Transfers$FileTarget, fn)},
	{"raf", "Ljava/io/RandomAccessFile;", nullptr, $PRIVATE | $FINAL, $field(Transfers$FileTarget, raf)},
	{"fc", "Ljava/nio/channels/FileChannel;", nullptr, $PRIVATE | $FINAL, $field(Transfers$FileTarget, fc)},
	{}
};

$MethodInfo _Transfers$FileTarget_MethodInfo_[] = {
	{"<init>", "(IJ)V", nullptr, 0, $method(static_cast<void(Transfers$FileTarget::*)(int32_t,int64_t)>(&Transfers$FileTarget::init$)), "java.io.IOException"},
	{"channel", "()Ljava/nio/channels/WritableByteChannel;", nullptr, 0},
	{"verify", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Transfers$FileTarget_InnerClassesInfo_[] = {
	{"Transfers$FileTarget", "Transfers", "FileTarget", $STATIC},
	{"Transfers$Target", "Transfers", "Target", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Transfers$FileTarget_ClassInfo_ = {
	$ACC_SUPER,
	"Transfers$FileTarget",
	"Transfers$Target",
	nullptr,
	_Transfers$FileTarget_FieldInfo_,
	_Transfers$FileTarget_MethodInfo_,
	nullptr,
	nullptr,
	_Transfers$FileTarget_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Transfers"
};

$Object* allocate$Transfers$FileTarget($Class* clazz) {
	return $of($alloc(Transfers$FileTarget));
}

void Transfers$FileTarget::init$(int32_t size, int64_t seed) {
	$Transfers$Target::init$(size, seed, "FileChannel"_s);
	$init($Transfers);
	$set(this, fn, $Transfers::targetFile);
	$set(this, raf, $new($RandomAccessFile, this->fn, "rw"_s));
	$set(this, fc, $nc(this->raf)->getChannel());
	$nc(this->fc)->position(0);
}

$WritableByteChannel* Transfers$FileTarget::channel() {
	return static_cast<$WritableByteChannel*>(static_cast<$ByteChannel*>(static_cast<$SeekableByteChannel*>(this->fc)));
}

void Transfers$FileTarget::verify() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fc)->position() != this->size) {
		$throwNew($Transfers$Failure, $$str({"Wrong position: "_s, $$str($nc(this->fc)->position()), " (expected "_s, $$str(this->size), ")"_s}));
	}
	$Transfers::checkRandomBytes(this->fc, 0, this->size, this->seed);
	$nc(this->fc)->close();
	$nc(this->raf)->close();
}

Transfers$FileTarget::Transfers$FileTarget() {
}

$Class* Transfers$FileTarget::load$($String* name, bool initialize) {
	$loadClass(Transfers$FileTarget, name, initialize, &_Transfers$FileTarget_ClassInfo_, allocate$Transfers$FileTarget);
	return class$;
}

$Class* Transfers$FileTarget::class$ = nullptr;