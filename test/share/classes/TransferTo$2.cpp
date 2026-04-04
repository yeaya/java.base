#include <TransferTo$2.h>
#include <TransferTo.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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
	return this->val$bytes->get(this->pos++) & 0xff;
}

TransferTo$2::TransferTo$2() {
}

$Class* TransferTo$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$bytes", "[B", nullptr, $FINAL | $SYNTHETIC, $field(TransferTo$2, val$bytes)},
		{"val$exceptionPosition", "I", nullptr, $FINAL | $SYNTHETIC, $field(TransferTo$2, val$exceptionPosition)},
		{"pos", "I", nullptr, 0, $field(TransferTo$2, pos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[B)V", nullptr, 0, $method(TransferTo$2, init$, void, int32_t, $bytes*)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(TransferTo$2, read, int32_t), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TransferTo",
		"input",
		"(I[B)Ljava/io/InputStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TransferTo$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TransferTo$2",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TransferTo"
	};
	$loadClass(TransferTo$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransferTo$2);
	});
	return class$;
}

$Class* TransferTo$2::class$ = nullptr;