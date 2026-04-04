#include <Transfers$FileTarget.h>
#include <Transfers$Failure.h>
#include <Transfers$Target.h>
#include <Transfers.h>
#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <jcpp.h>

using $Transfers = ::Transfers;
using $Transfers$Failure = ::Transfers$Failure;
using $Transfers$Target = ::Transfers$Target;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;

void Transfers$FileTarget::init$(int32_t size, int64_t seed) {
	$Transfers$Target::init$(size, seed, "FileChannel"_s);
	$init($Transfers);
	$set(this, fn, $Transfers::targetFile);
	$set(this, raf, $new($RandomAccessFile, this->fn, "rw"_s));
	$set(this, fc, this->raf->getChannel());
	$nc(this->fc)->position(0);
}

$WritableByteChannel* Transfers$FileTarget::channel() {
	return $cast($SeekableByteChannel, this->fc);
}

void Transfers$FileTarget::verify() {
	$useLocalObjectStack();
	if ($nc(this->fc)->position() != this->size) {
		$throwNew($Transfers$Failure, $$str({"Wrong position: "_s, $$str(this->fc->position()), " (expected "_s, $$str(this->size), ")"_s}));
	}
	$Transfers::checkRandomBytes(this->fc, 0, this->size, this->seed);
	this->fc->close();
	this->raf->close();
}

Transfers$FileTarget::Transfers$FileTarget() {
}

$Class* Transfers$FileTarget::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fn", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(Transfers$FileTarget, fn)},
		{"raf", "Ljava/io/RandomAccessFile;", nullptr, $PRIVATE | $FINAL, $field(Transfers$FileTarget, raf)},
		{"fc", "Ljava/nio/channels/FileChannel;", nullptr, $PRIVATE | $FINAL, $field(Transfers$FileTarget, fc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IJ)V", nullptr, 0, $method(Transfers$FileTarget, init$, void, int32_t, int64_t), "java.io.IOException"},
		{"channel", "()Ljava/nio/channels/WritableByteChannel;", nullptr, 0, $virtualMethod(Transfers$FileTarget, channel, $WritableByteChannel*)},
		{"verify", "()V", nullptr, 0, $virtualMethod(Transfers$FileTarget, verify, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Transfers$FileTarget", "Transfers", "FileTarget", $STATIC},
		{"Transfers$Target", "Transfers", "Target", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Transfers$FileTarget",
		"Transfers$Target",
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
	$loadClass(Transfers$FileTarget, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transfers$FileTarget);
	});
	return class$;
}

$Class* Transfers$FileTarget::class$ = nullptr;