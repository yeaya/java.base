#include <sun/nio/ch/PipeImpl$Initializer$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/ch/PipeImpl$Initializer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PipeImpl$Initializer = ::sun::nio::ch::PipeImpl$Initializer;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _PipeImpl$Initializer$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/PipeImpl$Initializer;", nullptr, $FINAL | $SYNTHETIC, $field(PipeImpl$Initializer$1, this$0)},
	{}
};

$MethodInfo _PipeImpl$Initializer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/PipeImpl$Initializer;Ljava/lang/Runnable;)V", nullptr, 0, $method(static_cast<void(PipeImpl$Initializer$1::*)($PipeImpl$Initializer*,$Runnable*)>(&PipeImpl$Initializer$1::init$))},
	{"interrupt", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PipeImpl$Initializer$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.PipeImpl$Initializer",
	"run",
	"()Ljava/lang/Void;"
};

$InnerClassInfo _PipeImpl$Initializer$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.PipeImpl$Initializer", "sun.nio.ch.PipeImpl", "Initializer", $PRIVATE | $STATIC},
	{"sun.nio.ch.PipeImpl$Initializer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PipeImpl$Initializer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.PipeImpl$Initializer$1",
	"java.lang.Thread",
	nullptr,
	_PipeImpl$Initializer$1_FieldInfo_,
	_PipeImpl$Initializer$1_MethodInfo_,
	nullptr,
	&_PipeImpl$Initializer$1_EnclosingMethodInfo_,
	_PipeImpl$Initializer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.PipeImpl"
};

$Object* allocate$PipeImpl$Initializer$1($Class* clazz) {
	return $of($alloc(PipeImpl$Initializer$1));
}

void PipeImpl$Initializer$1::init$($PipeImpl$Initializer* this$0, $Runnable* target) {
	$set(this, this$0, this$0);
	$Thread::init$(target);
}

void PipeImpl$Initializer$1::interrupt() {
}

PipeImpl$Initializer$1::PipeImpl$Initializer$1() {
}

$Class* PipeImpl$Initializer$1::load$($String* name, bool initialize) {
	$loadClass(PipeImpl$Initializer$1, name, initialize, &_PipeImpl$Initializer$1_ClassInfo_, allocate$PipeImpl$Initializer$1);
	return class$;
}

$Class* PipeImpl$Initializer$1::class$ = nullptr;

		} // ch
	} // nio
} // sun