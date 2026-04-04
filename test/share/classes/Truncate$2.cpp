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

void Truncate$2::init$($MappedByteBuffer* val$mbb) {
	$set(this, val$mbb, val$mbb);
}

$Object* Truncate$2::call() {
	$nc(this->val$mbb)->load();
	return nullptr;
}

Truncate$2::Truncate$2() {
}

$Class* Truncate$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$mbb", "Ljava/nio/MappedByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(Truncate$2, val$mbb)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/MappedByteBuffer;)V", "()V", 0, $method(Truncate$2, init$, void, $MappedByteBuffer*)},
		{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Truncate$2, call, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Truncate",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Truncate$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Truncate$2",
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
	$loadClass(Truncate$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Truncate$2);
	});
	return class$;
}

$Class* Truncate$2::class$ = nullptr;