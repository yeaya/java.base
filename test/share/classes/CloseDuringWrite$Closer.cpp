#include <CloseDuringWrite$Closer.h>

#include <CloseDuringWrite.h>
#include <java/io/Closeable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $CloseDuringWrite = ::CloseDuringWrite;
using $Closeable = ::java::io::Closeable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;

$FieldInfo _CloseDuringWrite$Closer_FieldInfo_[] = {
	{"c", "Ljava/io/Closeable;", nullptr, $FINAL, $field(CloseDuringWrite$Closer, c)},
	{}
};

$MethodInfo _CloseDuringWrite$Closer_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Closeable;)V", nullptr, 0, $method(static_cast<void(CloseDuringWrite$Closer::*)($Closeable*)>(&CloseDuringWrite$Closer::init$))},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
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