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
using $Iocp$OverlappedChannel = ::sun::nio::ch::Iocp$OverlappedChannel;
using $PendingFuture = ::sun::nio::ch::PendingFuture;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _Iocp$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/Iocp;", nullptr, $FINAL | $SYNTHETIC, $field(Iocp$1, this$0)},
	{"val$channel", "Ljava/nio/channels/Channel;", nullptr, $FINAL | $SYNTHETIC, $field(Iocp$1, val$channel)},
	{}
};

$MethodInfo _Iocp$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/Iocp;Ljava/nio/channels/Channel;)V", "()V", 0, $method(static_cast<void(Iocp$1::*)($Iocp*,$Channel*)>(&Iocp$1::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getByOverlapped", "(J)Lsun/nio/ch/PendingFuture;", "<V:Ljava/lang/Object;A:Ljava/lang/Object;>(J)Lsun/nio/ch/PendingFuture<TV;TA;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Iocp$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.Iocp",
	"attachForeignChannel",
	"(Ljava/nio/channels/Channel;Ljava/io/FileDescriptor;)Ljava/lang/Object;"
};

$InnerClassInfo _Iocp$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.Iocp$1", nullptr, nullptr, 0},
	{"sun.nio.ch.Iocp$OverlappedChannel", "sun.nio.ch.Iocp", "OverlappedChannel", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Iocp$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Iocp$1",
	"java.lang.Object",
	"sun.nio.ch.Iocp$OverlappedChannel",
	_Iocp$1_FieldInfo_,
	_Iocp$1_MethodInfo_,
	nullptr,
	&_Iocp$1_EnclosingMethodInfo_,
	_Iocp$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Iocp"
};

$Object* allocate$Iocp$1($Class* clazz) {
	return $of($alloc(Iocp$1));
}

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
	$loadClass(Iocp$1, name, initialize, &_Iocp$1_ClassInfo_, allocate$Iocp$1);
	return class$;
}

$Class* Iocp$1::class$ = nullptr;

		} // ch
	} // nio
} // sun