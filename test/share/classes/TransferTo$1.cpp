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
	$FieldInfo fieldInfos$$[] = {
		{"val$exceptionPosition", "I", nullptr, $FINAL | $SYNTHETIC, $field(TransferTo$1, val$exceptionPosition)},
		{"pos", "I", nullptr, 0, $field(TransferTo$1, pos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(TransferTo$1, init$, void, int32_t)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(TransferTo$1, write, void, int32_t), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TransferTo",
		"output",
		"(I)Ljava/io/OutputStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TransferTo$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TransferTo$1",
		"java.io.OutputStream",
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
	$loadClass(TransferTo$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TransferTo$1));
	});
	return class$;
}

$Class* TransferTo$1::class$ = nullptr;