#include <CloseDuringWrite$Closer.h>
#include <CloseDuringWrite.h>
#include <java/io/Closeable.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void CloseDuringWrite$Closer::init$($Closeable* c) {
	$set(this, c, c);
}

$Object* CloseDuringWrite$Closer::call() {
	$nc(this->c)->close();
	return nullptr;
}

CloseDuringWrite$Closer::CloseDuringWrite$Closer() {
}

$Class* CloseDuringWrite$Closer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c", "Ljava/io/Closeable;", nullptr, $FINAL, $field(CloseDuringWrite$Closer, c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/Closeable;)V", nullptr, 0, $method(CloseDuringWrite$Closer, init$, void, $Closeable*)},
		{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(CloseDuringWrite$Closer, call, $Object*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CloseDuringWrite$Closer", "CloseDuringWrite", "Closer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CloseDuringWrite$Closer",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"CloseDuringWrite"
	};
	$loadClass(CloseDuringWrite$Closer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloseDuringWrite$Closer);
	});
	return class$;
}

$Class* CloseDuringWrite$Closer::class$ = nullptr;