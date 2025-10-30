#include <TransferTo$2.h>

#include <TransferTo.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $TransferTo = ::TransferTo;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TransferTo$2_FieldInfo_[] = {
	{"val$bytes", "[B", nullptr, $FINAL | $SYNTHETIC, $field(TransferTo$2, val$bytes)},
	{"val$exceptionPosition", "I", nullptr, $FINAL | $SYNTHETIC, $field(TransferTo$2, val$exceptionPosition)},
	{"pos", "I", nullptr, 0, $field(TransferTo$2, pos)},
	{}
};

$MethodInfo _TransferTo$2_MethodInfo_[] = {
	{"<init>", "(I[B)V", nullptr, 0, $method(static_cast<void(TransferTo$2::*)(int32_t,$bytes*)>(&TransferTo$2::init$))},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _TransferTo$2_EnclosingMethodInfo_ = {
	"TransferTo",
	"input",
	"(I[B)Ljava/io/InputStream;"
};

$InnerClassInfo _TransferTo$2_InnerClassesInfo_[] = {
	{"TransferTo$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransferTo$2_ClassInfo_ = {
	$ACC_SUPER,
	"TransferTo$2",
	"java.io.InputStream",
	nullptr,
	_TransferTo$2_FieldInfo_,
	_TransferTo$2_MethodInfo_,
	nullptr,
	&_TransferTo$2_EnclosingMethodInfo_,
	_TransferTo$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TransferTo"
};

$Object* allocate$TransferTo$2($Class* clazz) {
	return $of($alloc(TransferTo$2));
}

void TransferTo$2::init$(int32_t val$exceptionPosition, $bytes* val$bytes) {
	this->val$exceptionPosition = val$exceptionPosition;
	$set(this, val$bytes, val$bytes);
	$InputStream::init$();
}

int32_t TransferTo$2::read() {
	if (this->pos == this->val$exceptionPosition) {
		$throwNew($IOException);
	}
	if (this->pos >= $nc(this->val$bytes)->length) {
		return -1;
	}
	return (int32_t)($nc(this->val$bytes)->get(this->pos++) & (uint32_t)255);
}

TransferTo$2::TransferTo$2() {
}

$Class* TransferTo$2::load$($String* name, bool initialize) {
	$loadClass(TransferTo$2, name, initialize, &_TransferTo$2_ClassInfo_, allocate$TransferTo$2);
	return class$;
}

$Class* TransferTo$2::class$ = nullptr;