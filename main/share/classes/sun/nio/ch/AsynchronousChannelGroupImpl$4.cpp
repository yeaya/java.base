#include <sun/nio/ch/AsynchronousChannelGroupImpl$4.h>

#include <java/lang/Runnable.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl$4$1.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;
using $AsynchronousChannelGroupImpl$4$1 = ::sun::nio::ch::AsynchronousChannelGroupImpl$4$1;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _AsynchronousChannelGroupImpl$4_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$4, this$0)},
	{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$4, val$acc)},
	{"val$delegate", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$4, val$delegate)},
	{}
};

$MethodInfo _AsynchronousChannelGroupImpl$4_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/AsynchronousChannelGroupImpl;Ljava/lang/Runnable;Ljava/security/AccessControlContext;)V", "()V", 0, $method(AsynchronousChannelGroupImpl$4, init$, void, $AsynchronousChannelGroupImpl*, $Runnable*, $AccessControlContext*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AsynchronousChannelGroupImpl$4, run, void)},
	{}
};

$EnclosingMethodInfo _AsynchronousChannelGroupImpl$4_EnclosingMethodInfo_ = {
	"sun.nio.ch.AsynchronousChannelGroupImpl",
	"execute",
	"(Ljava/lang/Runnable;)V"
};

$InnerClassInfo _AsynchronousChannelGroupImpl$4_InnerClassesInfo_[] = {
	{"sun.nio.ch.AsynchronousChannelGroupImpl$4", nullptr, nullptr, 0},
	{"sun.nio.ch.AsynchronousChannelGroupImpl$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AsynchronousChannelGroupImpl$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.AsynchronousChannelGroupImpl$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_AsynchronousChannelGroupImpl$4_FieldInfo_,
	_AsynchronousChannelGroupImpl$4_MethodInfo_,
	nullptr,
	&_AsynchronousChannelGroupImpl$4_EnclosingMethodInfo_,
	_AsynchronousChannelGroupImpl$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.AsynchronousChannelGroupImpl"
};

$Object* allocate$AsynchronousChannelGroupImpl$4($Class* clazz) {
	return $of($alloc(AsynchronousChannelGroupImpl$4));
}

void AsynchronousChannelGroupImpl$4::init$($AsynchronousChannelGroupImpl* this$0, $Runnable* val$delegate, $AccessControlContext* val$acc) {
	$set(this, this$0, this$0);
	$set(this, val$delegate, val$delegate);
	$set(this, val$acc, val$acc);
}

void AsynchronousChannelGroupImpl$4::run() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AsynchronousChannelGroupImpl$4$1, this)), this->val$acc);
}

AsynchronousChannelGroupImpl$4::AsynchronousChannelGroupImpl$4() {
}

$Class* AsynchronousChannelGroupImpl$4::load$($String* name, bool initialize) {
	$loadClass(AsynchronousChannelGroupImpl$4, name, initialize, &_AsynchronousChannelGroupImpl$4_ClassInfo_, allocate$AsynchronousChannelGroupImpl$4);
	return class$;
}

$Class* AsynchronousChannelGroupImpl$4::class$ = nullptr;

		} // ch
	} // nio
} // sun