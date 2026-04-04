#include <java/nio/channels/spi/AbstractSelector$1.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/spi/AbstractSelector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSelector = ::java::nio::channels::spi::AbstractSelector;

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

void AbstractSelector$1::init$($AbstractSelector* this$0) {
	$set(this, this$0, this$0);
}

void AbstractSelector$1::interrupt($Thread* ignore) {
	this->this$0->wakeup();
}

AbstractSelector$1::AbstractSelector$1() {
}

$Class* AbstractSelector$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/nio/channels/spi/AbstractSelector;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractSelector$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/spi/AbstractSelector;)V", nullptr, 0, $method(AbstractSelector$1, init$, void, $AbstractSelector*)},
		{"interrupt", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC, $virtualMethod(AbstractSelector$1, interrupt, void, $Thread*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.channels.spi.AbstractSelector",
		"begin",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.channels.spi.AbstractSelector$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.channels.spi.AbstractSelector$1",
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
		"java.nio.channels.spi.AbstractSelector"
	};
	$loadClass(AbstractSelector$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractSelector$1);
	});
	return class$;
}

$Class* AbstractSelector$1::class$ = nullptr;

			} // spi
		} // channels
	} // nio
} // java