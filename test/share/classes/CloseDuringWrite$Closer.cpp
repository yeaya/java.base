#include <CloseDuringWrite$Closer.h>

#include <CloseDuringWrite.h>
#include <java/io/Closeable.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _CloseDuringWrite$Closer_FieldInfo_[] = {
	{"c", "Ljava/io/Closeable;", nullptr, $FINAL, $field(CloseDuringWrite$Closer, c)},
	{}
};

$MethodInfo _CloseDuringWrite$Closer_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Closeable;)V", nullptr, 0, $method(CloseDuringWrite$Closer, init$, void, $Closeable*)},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(CloseDuringWrite$Closer, call, $Object*), "java.io.IOException"},
	{}
};

$InnerClassInfo _CloseDuringWrite$Closer_InnerClassesInfo_[] = {
	{"CloseDuringWrite$Closer", "CloseDuringWrite", "Closer", $STATIC},
	{}
};

$ClassInfo _CloseDuringWrite$Closer_ClassInfo_ = {
	$ACC_SUPER,
	"CloseDuringWrite$Closer",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CloseDuringWrite$Closer_FieldInfo_,
	_CloseDuringWrite$Closer_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
	nullptr,
	_CloseDuringWrite$Closer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CloseDuringWrite"
};

$Object* allocate$CloseDuringWrite$Closer($Class* clazz) {
	return $of($alloc(CloseDuringWrite$Closer));
}

void CloseDuringWrite$Closer::init$($Closeable* c) {
	$set(this, c, c);
}

$Object* CloseDuringWrite$Closer::call() {
	$nc(this->c)->close();
	return $of(nullptr);
}

CloseDuringWrite$Closer::CloseDuringWrite$Closer() {
}

$Class* CloseDuringWrite$Closer::load$($String* name, bool initialize) {
	$loadClass(CloseDuringWrite$Closer, name, initialize, &_CloseDuringWrite$Closer_ClassInfo_, allocate$CloseDuringWrite$Closer);
	return class$;
}

$Class* CloseDuringWrite$Closer::class$ = nullptr;