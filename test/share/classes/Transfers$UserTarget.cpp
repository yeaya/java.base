#include <Transfers$UserTarget.h>

#include <Transfers$Failure.h>
#include <Transfers$Target.h>
#include <Transfers$UserTarget$1.h>
#include <Transfers.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $Transfers$Failure = ::Transfers$Failure;
using $Transfers$Target = ::Transfers$Target;
using $Transfers$UserTarget$1 = ::Transfers$UserTarget$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;
using $Random = ::java::util::Random;

$FieldInfo _Transfers$UserTarget_FieldInfo_[] = {
	{"ch", "Ljava/nio/channels/WritableByteChannel;", nullptr, $PRIVATE, $field(Transfers$UserTarget, ch)},
	{"dst", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(Transfers$UserTarget, dst)},
	{}
};

$MethodInfo _Transfers$UserTarget_MethodInfo_[] = {
	{"<init>", "(IJ)V", nullptr, 0, $method(Transfers$UserTarget, init$, void, int32_t, int64_t)},
	{"channel", "()Ljava/nio/channels/WritableByteChannel;", nullptr, 0, $virtualMethod(Transfers$UserTarget, channel, $WritableByteChannel*)},
	{"verify", "()V", nullptr, 0, $virtualMethod(Transfers$UserTarget, verify, void)},
	{}
};

$InnerClassInfo _Transfers$UserTarget_InnerClassesInfo_[] = {
	{"Transfers$UserTarget", "Transfers", "UserTarget", $STATIC},
	{"Transfers$Target", "Transfers", "Target", $STATIC | $ABSTRACT},
	{"Transfers$UserTarget$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Transfers$UserTarget_ClassInfo_ = {
	$ACC_SUPER,
	"Transfers$UserTarget",
	"Transfers$Target",
	nullptr,
	_Transfers$UserTarget_FieldInfo_,
	_Transfers$UserTarget_MethodInfo_,
	nullptr,
	nullptr,
	_Transfers$UserTarget_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Transfers"
};

$Object* allocate$Transfers$UserTarget($Class* clazz) {
	return $of($alloc(Transfers$UserTarget));
}

void Transfers$UserTarget::init$(int32_t size, int64_t seed) {
	$Transfers$Target::init$(size, seed, "UserChannel"_s);
	$set(this, dst, $ByteBuffer::wrap($$new($bytes, size + 1)));
	$set(this, ch, $new($Transfers$UserTarget$1, this));
}

$WritableByteChannel* Transfers$UserTarget::channel() {
	return this->ch;
}

void Transfers$UserTarget::verify() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->dst)->remaining() != 1) {
		$throwNew($Transfers$Failure, $$str({"Destination has "_s, $$str($nc(this->dst)->remaining()), " bytes remaining (expected 1)"_s}));
	}
	$var($bytes, ba, $new($bytes, this->size));
	$var($Random, r, $new($Random, this->seed));
	r->nextBytes(ba);
	$nc(this->dst)->flip();
	$var($ByteBuffer, rbb, $ByteBuffer::wrap(ba, 0, this->size));
	if (!$nc(this->dst)->equals(rbb)) {
		$throwNew($Transfers$Failure, "Wrong data written"_s);
	}
}

Transfers$UserTarget::Transfers$UserTarget() {
}

$Class* Transfers$UserTarget::load$($String* name, bool initialize) {
	$loadClass(Transfers$UserTarget, name, initialize, &_Transfers$UserTarget_ClassInfo_, allocate$Transfers$UserTarget);
	return class$;
}

$Class* Transfers$UserTarget::class$ = nullptr;