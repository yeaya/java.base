#include <java/nio/channels/spi/AbstractInterruptibleChannel$1.h>
#include <java/io/IOException.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

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
		} catch ($IOException& x) {
		}
	}
}

AbstractInterruptibleChannel$1::AbstractInterruptibleChannel$1() {
}

$Class* AbstractInterruptibleChannel$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/nio/channels/spi/AbstractInterruptibleChannel;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractInterruptibleChannel$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/spi/AbstractInterruptibleChannel;)V", nullptr, 0, $method(AbstractInterruptibleChannel$1, init$, void, $AbstractInterruptibleChannel*)},
		{"interrupt", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC, $virtualMethod(AbstractInterruptibleChannel$1, interrupt, void, $Thread*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.channels.spi.AbstractInterruptibleChannel",
		"begin",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.channels.spi.AbstractInterruptibleChannel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.channels.spi.AbstractInterruptibleChannel$1",
		"java.lang.Object",
		"sun.nio.ch.Interruptible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.channels.spi.AbstractInterruptibleChannel"
	};
	$loadClass(AbstractInterruptibleChannel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractInterruptibleChannel$1);
	});
	return class$;
}

$Class* AbstractInterruptibleChannel$1::class$ = nullptr;

			} // spi
		} // channels
	} // nio
} // java