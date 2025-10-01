#include <java/nio/channels/Pipe.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pipe$SinkChannel = ::java::nio::channels::Pipe$SinkChannel;
using $Pipe$SourceChannel = ::java::nio::channels::Pipe$SourceChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _Pipe_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Pipe::*)()>(&Pipe::init$))},
	{"open", "()Ljava/nio/channels/Pipe;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Pipe*(*)()>(&Pipe::open)), "java.io.IOException"},
	{"sink", "()Ljava/nio/channels/Pipe$SinkChannel;", nullptr, $PUBLIC | $ABSTRACT},
	{"source", "()Ljava/nio/channels/Pipe$SourceChannel;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Pipe_InnerClassesInfo_[] = {
	{"java.nio.channels.Pipe$SinkChannel", "java.nio.channels.Pipe", "SinkChannel", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.nio.channels.Pipe$SourceChannel", "java.nio.channels.Pipe", "SourceChannel", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Pipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.Pipe",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Pipe_MethodInfo_,
	nullptr,
	nullptr,
	_Pipe_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.channels.Pipe$SinkChannel,java.nio.channels.Pipe$SourceChannel"
};

$Object* allocate$Pipe($Class* clazz) {
	return $of($alloc(Pipe));
}

void Pipe::init$() {
}

Pipe* Pipe::open() {
	return $nc($($SelectorProvider::provider()))->openPipe();
}

Pipe::Pipe() {
}

$Class* Pipe::load$($String* name, bool initialize) {
	$loadClass(Pipe, name, initialize, &_Pipe_ClassInfo_, allocate$Pipe);
	return class$;
}

$Class* Pipe::class$ = nullptr;

		} // channels
	} // nio
} // java