#include <java/nio/channels/spi/AbstractInterruptibleChannel$1.h>

#include <java/io/IOException.h>
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
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Interruptible = ::sun::nio::ch::Interruptible;

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

$FieldInfo _AbstractInterruptibleChannel$1_FieldInfo_[] = {
	{"this$0", "Ljava/nio/channels/spi/AbstractInterruptibleChannel;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractInterruptibleChannel$1, this$0)},
	{}
};

$MethodInfo _AbstractInterruptibleChannel$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/spi/AbstractInterruptibleChannel;)V", nullptr, 0, $method(static_cast<void(AbstractInterruptibleChannel$1::*)($AbstractInterruptibleChannel*)>(&AbstractInterruptibleChannel$1::init$))},
	{"interrupt", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractInterruptibleChannel$1_EnclosingMethodInfo_ = {
	"java.nio.channels.spi.AbstractInterruptibleChannel",
	"begin",
	"()V"
};

$InnerClassInfo _AbstractInterruptibleChannel$1_InnerClassesInfo_[] = {
	{"java.nio.channels.spi.AbstractInterruptibleChannel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractInterruptibleChannel$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.channels.spi.AbstractInterruptibleChannel$1",
	"java.lang.Object",
	"sun.nio.ch.Interruptible",
	_AbstractInterruptibleChannel$1_FieldInfo_,
	_AbstractInterruptibleChannel$1_MethodInfo_,
	nullptr,
	&_AbstractInterruptibleChannel$1_EnclosingMethodInfo_,
	_AbstractInterruptibleChannel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.channels.spi.AbstractInterruptibleChannel"
};

$Object* allocate$AbstractInterruptibleChannel$1($Class* clazz) {
	return $of($alloc(AbstractInterruptibleChannel$1));
}

void AbstractInterruptibleChannel$1::init$($AbstractInterruptibleChannel* this$0) {
	$set(this, this$0, this$0);
}

void AbstractInterruptibleChannel$1::interrupt($Thread* target) {
	$synchronized(this->this$0->closeLock) {
		if (this->this$0->closed) {
			return;
		}
		this->this$0->closed = true;
		$set(this->this$0, interrupted, target);
		try {
			this->this$0->implCloseChannel();
		} catch ($IOException&) {
			$catch();
		}
	}
}

AbstractInterruptibleChannel$1::AbstractInterruptibleChannel$1() {
}

$Class* AbstractInterruptibleChannel$1::load$($String* name, bool initialize) {
	$loadClass(AbstractInterruptibleChannel$1, name, initialize, &_AbstractInterruptibleChannel$1_ClassInfo_, allocate$AbstractInterruptibleChannel$1);
	return class$;
}

$Class* AbstractInterruptibleChannel$1::class$ = nullptr;

			} // spi
		} // channels
	} // nio
} // java