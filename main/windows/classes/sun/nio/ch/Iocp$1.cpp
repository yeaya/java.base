#include <sun/nio/ch/Iocp$1.h>
#include <java/nio/channels/Channel.h>
#include <sun/nio/ch/Iocp.h>
#include <sun/nio/ch/PendingFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channel = ::java::nio::channels::Channel;
using $Iocp = ::sun::nio::ch::Iocp;
using $PendingFuture = ::sun::nio::ch::PendingFuture;

namespace sun {
	namespace nio {
		namespace ch {

void Iocp$1::init$($Iocp* this$0, $Channel* val$channel) {
	$set(this, this$0, this$0);
	$set(this, val$channel, val$channel);
}

$PendingFuture* Iocp$1::getByOverlapped(int64_t overlapped) {
	return nullptr;
}

void Iocp$1::close() {
	$nc(this->val$channel)->close();
}

Iocp$1::Iocp$1() {
}

$Class* Iocp$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/Iocp;", nullptr, $FINAL | $SYNTHETIC, $field(Iocp$1, this$0)},
		{"val$channel", "Ljava/nio/channels/Channel;", nullptr, $FINAL | $SYNTHETIC, $field(Iocp$1, val$channel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/Iocp;Ljava/nio/channels/Channel;)V", "()V", 0, $method(Iocp$1, init$, void, $Iocp*, $Channel*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Iocp$1, close, void), "java.io.IOException"},
		{"getByOverlapped", "(J)Lsun/nio/ch/PendingFuture;", "<V:Ljava/lang/Object;A:Ljava/lang/Object;>(J)Lsun/nio/ch/PendingFuture<TV;TA;>;", $PUBLIC, $virtualMethod(Iocp$1, getByOverlapped, $PendingFuture*, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.Iocp",
		"attachForeignChannel",
		"(Ljava/nio/channels/Channel;Ljava/io/FileDescriptor;)Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Iocp$1", nullptr, nullptr, 0},
		{"sun.nio.ch.Iocp$OverlappedChannel", "sun.nio.ch.Iocp", "OverlappedChannel", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.Iocp$1",
		"java.lang.Object",
		"sun.nio.ch.Iocp$OverlappedChannel",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Iocp"
	};
	$loadClass(Iocp$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Iocp$1);
	});
	return class$;
}

$Class* Iocp$1::class$ = nullptr;

		} // ch
	} // nio
} // sun