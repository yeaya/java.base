#include <jdk/internal/misc/InnocuousThread$1.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;

namespace jdk {
	namespace internal {
		namespace misc {

$FieldInfo _InnocuousThread$1_FieldInfo_[] = {
	{"val$priority", "I", nullptr, $FINAL | $SYNTHETIC, $field(InnocuousThread$1, val$priority)},
	{"val$target", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(InnocuousThread$1, val$target)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(InnocuousThread$1, val$name)},
	{}
};

$MethodInfo _InnocuousThread$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Runnable;I)V", "()V", 0, $method(static_cast<void(InnocuousThread$1::*)($String*,$Runnable*,int32_t)>(&InnocuousThread$1::init$))},
	{"run", "()Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InnocuousThread$1_EnclosingMethodInfo_ = {
	"jdk.internal.misc.InnocuousThread",
	"newThread",
	"(Ljava/lang/String;Ljava/lang/Runnable;I)Ljava/lang/Thread;"
};

$InnerClassInfo _InnocuousThread$1_InnerClassesInfo_[] = {
	{"jdk.internal.misc.InnocuousThread$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InnocuousThread$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.misc.InnocuousThread$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_InnocuousThread$1_FieldInfo_,
	_InnocuousThread$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Thread;>;",
	&_InnocuousThread$1_EnclosingMethodInfo_,
	_InnocuousThread$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.misc.InnocuousThread"
};

$Object* allocate$InnocuousThread$1($Class* clazz) {
	return $of($alloc(InnocuousThread$1));
}

void InnocuousThread$1::init$($String* val$name, $Runnable* val$target, int32_t val$priority) {
	$set(this, val$name, val$name);
	$set(this, val$target, val$target);
	this->val$priority = val$priority;
}

$Object* InnocuousThread$1::run() {
	$beforeCallerSensitive();
	return $of($InnocuousThread::createThread(this->val$name, this->val$target, $($ClassLoader::getSystemClassLoader()), this->val$priority));
}

InnocuousThread$1::InnocuousThread$1() {
}

$Class* InnocuousThread$1::load$($String* name, bool initialize) {
	$loadClass(InnocuousThread$1, name, initialize, &_InnocuousThread$1_ClassInfo_, allocate$InnocuousThread$1);
	return class$;
}

$Class* InnocuousThread$1::class$ = nullptr;

		} // misc
	} // internal
} // jdk