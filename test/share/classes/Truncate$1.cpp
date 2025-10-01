#include <Truncate$1.h>

#include <Truncate.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <jcpp.h>

using $Truncate = ::Truncate;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $Callable = ::java::util::concurrent::Callable;

$FieldInfo _Truncate$1_FieldInfo_[] = {
	{"val$mbb", "Ljava/nio/MappedByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(Truncate$1, val$mbb)},
	{}
};

$MethodInfo _Truncate$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/MappedByteBuffer;)V", "()V", 0, $method(static_cast<void(Truncate$1::*)($MappedByteBuffer*)>(&Truncate$1::init$))},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Truncate$1_EnclosingMethodInfo_ = {
	"Truncate",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Truncate$1_InnerClassesInfo_[] = {
	{"Truncate$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Truncate$1_ClassInfo_ = {
	$ACC_SUPER,
	"Truncate$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Truncate$1_FieldInfo_,
	_Truncate$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
	&_Truncate$1_EnclosingMethodInfo_,
	_Truncate$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Truncate"
};

$Object* allocate$Truncate$1($Class* clazz) {
	return $of($alloc(Truncate$1));
}

void Truncate$1::init$($MappedByteBuffer* val$mbb) {
	$set(this, val$mbb, val$mbb);
}

$Object* Truncate$1::call() {
	$nc(this->val$mbb)->get((int32_t)(int64_t)512 + 1);
	$nc(this->val$mbb)->put((int32_t)(int64_t)512 + 2, (int8_t)123);
	return $of(nullptr);
}

Truncate$1::Truncate$1() {
}

$Class* Truncate$1::load$($String* name, bool initialize) {
	$loadClass(Truncate$1, name, initialize, &_Truncate$1_ClassInfo_, allocate$Truncate$1);
	return class$;
}

$Class* Truncate$1::class$ = nullptr;