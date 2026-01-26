#include <sun/nio/ch/Port$1.h>

#include <java/nio/channels/Channel.h>
#include <sun/nio/ch/Port.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channel = ::java::nio::channels::Channel;
using $Port = ::sun::nio::ch::Port;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _Port$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/Port;", nullptr, $FINAL | $SYNTHETIC, $field(Port$1, this$0)},
	{"val$channel", "Ljava/nio/channels/Channel;", nullptr, $FINAL | $SYNTHETIC, $field(Port$1, val$channel)},
	{}
};

$MethodInfo _Port$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/Port;Ljava/nio/channels/Channel;)V", "()V", 0, $method(Port$1, init$, void, $Port*, $Channel*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Port$1, close, void), "java.io.IOException"},
	{"onEvent", "(IZ)V", nullptr, $PUBLIC, $virtualMethod(Port$1, onEvent, void, int32_t, bool)},
	{}
};

$EnclosingMethodInfo _Port$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.Port",
	"attachForeignChannel",
	"(Ljava/nio/channels/Channel;Ljava/io/FileDescriptor;)Ljava/lang/Object;"
};

$InnerClassInfo _Port$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.Port$1", nullptr, nullptr, 0},
	{"sun.nio.ch.Port$PollableChannel", "sun.nio.ch.Port", "PollableChannel", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Port$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Port$1",
	"java.lang.Object",
	"sun.nio.ch.Port$PollableChannel",
	_Port$1_FieldInfo_,
	_Port$1_MethodInfo_,
	nullptr,
	&_Port$1_EnclosingMethodInfo_,
	_Port$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Port"
};

$Object* allocate$Port$1($Class* clazz) {
	return $of($alloc(Port$1));
}

void Port$1::init$($Port* this$0, $Channel* val$channel) {
	$set(this, this$0, this$0);
	$set(this, val$channel, val$channel);
}

void Port$1::onEvent(int32_t events, bool mayInvokeDirect) {
}

void Port$1::close() {
	$nc(this->val$channel)->close();
}

Port$1::Port$1() {
}

$Class* Port$1::load$($String* name, bool initialize) {
	$loadClass(Port$1, name, initialize, &_Port$1_ClassInfo_, allocate$Port$1);
	return class$;
}

$Class* Port$1::class$ = nullptr;

		} // ch
	} // nio
} // sun