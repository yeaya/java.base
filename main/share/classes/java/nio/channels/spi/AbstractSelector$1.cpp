#include <java/nio/channels/spi/AbstractSelector$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/spi/AbstractSelector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Selector = ::java::nio::channels::Selector;
using $AbstractSelector = ::java::nio::channels::spi::AbstractSelector;
using $Interruptible = ::sun::nio::ch::Interruptible;

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

$FieldInfo _AbstractSelector$1_FieldInfo_[] = {
	{"this$0", "Ljava/nio/channels/spi/AbstractSelector;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractSelector$1, this$0)},
	{}
};

$MethodInfo _AbstractSelector$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/spi/AbstractSelector;)V", nullptr, 0, $method(static_cast<void(AbstractSelector$1::*)($AbstractSelector*)>(&AbstractSelector$1::init$))},
	{"interrupt", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractSelector$1_EnclosingMethodInfo_ = {
	"java.nio.channels.spi.AbstractSelector",
	"begin",
	"()V"
};

$InnerClassInfo _AbstractSelector$1_InnerClassesInfo_[] = {
	{"java.nio.channels.spi.AbstractSelector$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractSelector$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.channels.spi.AbstractSelector$1",
	"java.lang.Object",
	"sun.nio.ch.Interruptible",
	_AbstractSelector$1_FieldInfo_,
	_AbstractSelector$1_MethodInfo_,
	nullptr,
	&_AbstractSelector$1_EnclosingMethodInfo_,
	_AbstractSelector$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.channels.spi.AbstractSelector"
};

$Object* allocate$AbstractSelector$1($Class* clazz) {
	return $of($alloc(AbstractSelector$1));
}

void AbstractSelector$1::init$($AbstractSelector* this$0) {
	$set(this, this$0, this$0);
}

void AbstractSelector$1::interrupt($Thread* ignore) {
	this->this$0->wakeup();
}

AbstractSelector$1::AbstractSelector$1() {
}

$Class* AbstractSelector$1::load$($String* name, bool initialize) {
	$loadClass(AbstractSelector$1, name, initialize, &_AbstractSelector$1_ClassInfo_, allocate$AbstractSelector$1);
	return class$;
}

$Class* AbstractSelector$1::class$ = nullptr;

			} // spi
		} // channels
	} // nio
} // java