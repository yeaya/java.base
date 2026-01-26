#include <TransferTo$1.h>

#include <TransferTo.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TransferTo$1_FieldInfo_[] = {
	{"val$exceptionPosition", "I", nullptr, $FINAL | $SYNTHETIC, $field(TransferTo$1, val$exceptionPosition)},
	{"pos", "I", nullptr, 0, $field(TransferTo$1, pos)},
	{}
};

$MethodInfo _TransferTo$1_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(TransferTo$1, init$, void, int32_t)},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(TransferTo$1, write, void, int32_t), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _TransferTo$1_EnclosingMethodInfo_ = {
	"TransferTo",
	"output",
	"(I)Ljava/io/OutputStream;"
};

$InnerClassInfo _TransferTo$1_InnerClassesInfo_[] = {
	{"TransferTo$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransferTo$1_ClassInfo_ = {
	$ACC_SUPER,
	"TransferTo$1",
	"java.io.OutputStream",
	nullptr,
	_TransferTo$1_FieldInfo_,
	_TransferTo$1_MethodInfo_,
	nullptr,
	&_TransferTo$1_EnclosingMethodInfo_,
	_TransferTo$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TransferTo"
};

$Object* allocate$TransferTo$1($Class* clazz) {
	return $of($alloc(TransferTo$1));
}

void TransferTo$1::init$(int32_t val$exceptionPosition) {
	this->val$exceptionPosition = val$exceptionPosition;
	$OutputStream::init$();
}

void TransferTo$1::write(int32_t b) {
	if (this->pos++ == this->val$exceptionPosition) {
		$throwNew($IOException);
	}
}

TransferTo$1::TransferTo$1() {
}

$Class* TransferTo$1::load$($String* name, bool initialize) {
	$loadClass(TransferTo$1, name, initialize, &_TransferTo$1_ClassInfo_, allocate$TransferTo$1);
	return class$;
}

$Class* TransferTo$1::class$ = nullptr;