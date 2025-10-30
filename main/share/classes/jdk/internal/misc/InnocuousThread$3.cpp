#include <jdk/internal/misc/InnocuousThread$3.h>

#include <java/lang/ThreadGroup.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;

namespace jdk {
	namespace internal {
		namespace misc {

$FieldInfo _InnocuousThread$3_FieldInfo_[] = {
	{"val$root", "Ljava/lang/ThreadGroup;", nullptr, $FINAL | $SYNTHETIC, $field(InnocuousThread$3, val$root)},
	{}
};

$MethodInfo _InnocuousThread$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ThreadGroup;)V", "()V", 0, $method(static_cast<void(InnocuousThread$3::*)($ThreadGroup*)>(&InnocuousThread$3::init$))},
	{"run", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InnocuousThread$3_EnclosingMethodInfo_ = {
	"jdk.internal.misc.InnocuousThread",
	nullptr,
	nullptr
};

$InnerClassInfo _InnocuousThread$3_InnerClassesInfo_[] = {
	{"jdk.internal.misc.InnocuousThread$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InnocuousThread$3_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.misc.InnocuousThread$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_InnocuousThread$3_FieldInfo_,
	_InnocuousThread$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ThreadGroup;>;",
	&_InnocuousThread$3_EnclosingMethodInfo_,
	_InnocuousThread$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.misc.InnocuousThread"
};

$Object* allocate$InnocuousThread$3($Class* clazz) {
	return $of($alloc(InnocuousThread$3));
}

void InnocuousThread$3::init$($ThreadGroup* val$root) {
	$set(this, val$root, val$root);
}

$Object* InnocuousThread$3::run() {
	return $of($new($ThreadGroup, this->val$root, "InnocuousThreadGroup"_s));
}

InnocuousThread$3::InnocuousThread$3() {
}

$Class* InnocuousThread$3::load$($String* name, bool initialize) {
	$loadClass(InnocuousThread$3, name, initialize, &_InnocuousThread$3_ClassInfo_, allocate$InnocuousThread$3);
	return class$;
}

$Class* InnocuousThread$3::class$ = nullptr;

		} // misc
	} // internal
} // jdk