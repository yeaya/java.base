#include <TransferToChannel$1.h>

#include <TransferToChannel.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $TransferToChannel = ::TransferToChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;
using $Random = ::java::util::Random;

$FieldInfo _TransferToChannel$1_FieldInfo_[] = {
	{"rand", "Ljava/util/Random;", nullptr, 0, $field(TransferToChannel$1, rand)},
	{}
};

$MethodInfo _TransferToChannel$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TransferToChannel$1::*)()>(&TransferToChannel$1::init$))},
	{"checkData", "([BI)V", nullptr, 0},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _TransferToChannel$1_EnclosingMethodInfo_ = {
	"TransferToChannel",
	"transferFileToUserChannel",
	"()V"
};

$InnerClassInfo _TransferToChannel$1_InnerClassesInfo_[] = {
	{"TransferToChannel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransferToChannel$1_ClassInfo_ = {
	$ACC_SUPER,
	"TransferToChannel$1",
	"java.lang.Object",
	"java.nio.channels.WritableByteChannel",
	_TransferToChannel$1_FieldInfo_,
	_TransferToChannel$1_MethodInfo_,
	nullptr,
	&_TransferToChannel$1_EnclosingMethodInfo_,
	_TransferToChannel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TransferToChannel"
};

$Object* allocate$TransferToChannel$1($Class* clazz) {
	return $of($alloc(TransferToChannel$1));
}

void TransferToChannel$1::init$() {
	$set(this, rand, $new($Random, 0));
}

int32_t TransferToChannel$1::write($ByteBuffer* src) {
	int32_t read = $nc(src)->remaining();
	$var($bytes, incoming, $new($bytes, read));
	src->get(incoming);
	checkData(incoming, read);
	return read == 0 ? -1 : read;
}

bool TransferToChannel$1::isOpen() {
	return true;
}

void TransferToChannel$1::close() {
}

void TransferToChannel$1::checkData($bytes* incoming, int32_t size) {
	$var($bytes, expected, $new($bytes, size));
	$nc(this->rand)->nextBytes(expected);
	for (int32_t i = 0; i < size; ++i) {
		if ($nc(incoming)->get(i) != expected->get(i)) {
			$throwNew($RuntimeException, "Data corrupted"_s);
		}
	}
}

TransferToChannel$1::TransferToChannel$1() {
}

$Class* TransferToChannel$1::load$($String* name, bool initialize) {
	$loadClass(TransferToChannel$1, name, initialize, &_TransferToChannel$1_ClassInfo_, allocate$TransferToChannel$1);
	return class$;
}

$Class* TransferToChannel$1::class$ = nullptr;