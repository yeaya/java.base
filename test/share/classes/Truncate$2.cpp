#include <Truncate$2.h>

#include <Truncate.h>
#include <java/nio/MappedByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;

$FieldInfo _Truncate$2_FieldInfo_[] = {
	{"val$mbb", "Ljava/nio/MappedByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(Truncate$2, val$mbb)},
	{}
};

$MethodInfo _Truncate$2_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/MappedByteBuffer;)V", "()V", 0, $method(static_cast<void(Truncate$2::*)($MappedByteBuffer*)>(&Truncate$2::init$))},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Truncate$2_EnclosingMethodInfo_ = {
	"Truncate",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Truncate$2_InnerClassesInfo_[] = {
	{"Truncate$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Truncate$2_ClassInfo_ = {
	$ACC_SUPER,
	"Truncate$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Truncate$2_FieldInfo_,
	_Truncate$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
	&_Truncate$2_EnclosingMethodInfo_,
	_Truncate$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Truncate"
};

$Object* allocate$Truncate$2($Class* clazz) {
	return $of($alloc(Truncate$2));
}

void Truncate$2::init$($MappedByteBuffer* val$mbb) {
	$set(this, val$mbb, val$mbb);
}

$Object* Truncate$2::call() {
	$nc(this->val$mbb)->load();
	return $of(nullptr);
}

Truncate$2::Truncate$2() {
}

$Class* Truncate$2::load$($String* name, bool initialize) {
	$loadClass(Truncate$2, name, initialize, &_Truncate$2_ClassInfo_, allocate$Truncate$2);
	return class$;
}

$Class* Truncate$2::class$ = nullptr;