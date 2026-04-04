#include <Truncate$1.h>
#include <Truncate.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;

void Truncate$1::init$($MappedByteBuffer* val$mbb) {
	$set(this, val$mbb, val$mbb);
}

$Object* Truncate$1::call() {
	$nc(this->val$mbb)->get((int32_t)512 + 1);
	this->val$mbb->put((int32_t)512 + 2, (int8_t)123);
	return nullptr;
}

Truncate$1::Truncate$1() {
}

$Class* Truncate$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$mbb", "Ljava/nio/MappedByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(Truncate$1, val$mbb)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/MappedByteBuffer;)V", "()V", 0, $method(Truncate$1, init$, void, $MappedByteBuffer*)},
		{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Truncate$1, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Truncate",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Truncate$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Truncate$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Truncate"
	};
	$loadClass(Truncate$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Truncate$1);
	});
	return class$;
}

$Class* Truncate$1::class$ = nullptr;