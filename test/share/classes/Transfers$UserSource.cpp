#include <Transfers$UserSource.h>

#include <Transfers$Failure.h>
#include <Transfers$Source.h>
#include <Transfers$UserSource$1.h>
#include <Transfers.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $Transfers$Failure = ::Transfers$Failure;
using $Transfers$Source = ::Transfers$Source;
using $Transfers$UserSource$1 = ::Transfers$UserSource$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $Random = ::java::util::Random;

$FieldInfo _Transfers$UserSource_FieldInfo_[] = {
	{"ch", "Ljava/nio/channels/ReadableByteChannel;", nullptr, $PRIVATE, $field(Transfers$UserSource, ch)},
	{"src", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(Transfers$UserSource, src)},
	{}
};

$MethodInfo _Transfers$UserSource_MethodInfo_[] = {
	{"<init>", "(IJ)V", nullptr, 0, $method(static_cast<void(Transfers$UserSource::*)(int32_t,int64_t)>(&Transfers$UserSource::init$))},
	{"channel", "()Ljava/nio/channels/ReadableByteChannel;", nullptr, 0},
	{"verify", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _Transfers$UserSource_InnerClassesInfo_[] = {
	{"Transfers$UserSource", "Transfers", "UserSource", $STATIC},
	{"Transfers$Source", "Transfers", "Source", $STATIC | $ABSTRACT},
	{"Transfers$UserSource$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Transfers$UserSource_ClassInfo_ = {
	$ACC_SUPER,
	"Transfers$UserSource",
	"Transfers$Source",
	nullptr,
	_Transfers$UserSource_FieldInfo_,
	_Transfers$UserSource_MethodInfo_,
	nullptr,
	nullptr,
	_Transfers$UserSource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Transfers"
};

$Object* allocate$Transfers$UserSource($Class* clazz) {
	return $of($alloc(Transfers$UserSource));
}

void Transfers$UserSource::init$(int32_t size, int64_t seed) {
	$useLocalCurrentObjectStackCache();
	$Transfers$Source::init$(size, seed, "UserChannel"_s);
	$var($bytes, bytes, $new($bytes, size + 1));
	$var($Random, r, $new($Random, seed));
	r->nextBytes(bytes);
	$set(this, src, $ByteBuffer::wrap(bytes));
	$set(this, ch, $new($Transfers$UserSource$1, this));
}

$ReadableByteChannel* Transfers$UserSource::channel() {
	return this->ch;
}

void Transfers$UserSource::verify() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->src)->remaining() != 1) {
		$throwNew($Transfers$Failure, $$str({"Source has "_s, $$str($nc(this->src)->remaining()), " bytes remaining (expected 1)"_s}));
	}
}

Transfers$UserSource::Transfers$UserSource() {
}

$Class* Transfers$UserSource::load$($String* name, bool initialize) {
	$loadClass(Transfers$UserSource, name, initialize, &_Transfers$UserSource_ClassInfo_, allocate$Transfers$UserSource);
	return class$;
}

$Class* Transfers$UserSource::class$ = nullptr;