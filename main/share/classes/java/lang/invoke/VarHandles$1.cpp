#include <java/lang/invoke/VarHandles$1.h>

#include <java/lang/ClassValue.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _VarHandles$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandles$1::*)()>(&VarHandles$1::init$))},
	{"computeValue", "(Ljava/lang/Class;)Ljava/util/concurrent/ConcurrentMap;", "(Ljava/lang/Class<*>;)Ljava/util/concurrent/ConcurrentMap<Ljava/lang/Integer;Ljava/lang/invoke/MethodHandle;>;", $PROTECTED},
	{}
};

$EnclosingMethodInfo _VarHandles$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.VarHandles",
	nullptr,
	nullptr
};

$InnerClassInfo _VarHandles$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandles$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _VarHandles$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandles$1",
	"java.lang.ClassValue",
	nullptr,
	nullptr,
	_VarHandles$1_MethodInfo_,
	"Ljava/lang/ClassValue<Ljava/util/concurrent/ConcurrentMap<Ljava/lang/Integer;Ljava/lang/invoke/MethodHandle;>;>;",
	&_VarHandles$1_EnclosingMethodInfo_,
	_VarHandles$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandles"
};

$Object* allocate$VarHandles$1($Class* clazz) {
	return $of($alloc(VarHandles$1));
}

void VarHandles$1::init$() {
	$ClassValue::init$();
}

$Object* VarHandles$1::computeValue($Class* type) {
	return $of($new($ConcurrentHashMap));
}

VarHandles$1::VarHandles$1() {
}

$Class* VarHandles$1::load$($String* name, bool initialize) {
	$loadClass(VarHandles$1, name, initialize, &_VarHandles$1_ClassInfo_, allocate$VarHandles$1);
	return class$;
}

$Class* VarHandles$1::class$ = nullptr;

		} // invoke
	} // lang
} // java