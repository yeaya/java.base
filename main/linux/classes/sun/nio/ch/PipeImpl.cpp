#include <sun/nio/ch/PipeImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <sun/nio/ch/IOUtil.h>
#include <sun/nio/ch/SinkChannelImpl.h>
#include <sun/nio/ch/SourceChannelImpl.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pipe = ::java::nio::channels::Pipe;
using $Pipe$SinkChannel = ::java::nio::channels::Pipe$SinkChannel;
using $Pipe$SourceChannel = ::java::nio::channels::Pipe$SourceChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $IOUtil = ::sun::nio::ch::IOUtil;
using $SinkChannelImpl = ::sun::nio::ch::SinkChannelImpl;
using $SourceChannelImpl = ::sun::nio::ch::SourceChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _PipeImpl_FieldInfo_[] = {
	{"source", "Ljava/nio/channels/Pipe$SourceChannel;", nullptr, $PRIVATE | $FINAL, $field(PipeImpl, source$)},
	{"sink", "Ljava/nio/channels/Pipe$SinkChannel;", nullptr, $PRIVATE | $FINAL, $field(PipeImpl, sink$)},
	{}
};

$MethodInfo _PipeImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;)V", nullptr, 0, $method(PipeImpl, init$, void, $SelectorProvider*), "java.io.IOException"},
	{"sink", "()Ljava/nio/channels/Pipe$SinkChannel;", nullptr, $PUBLIC, $virtualMethod(PipeImpl, sink, $Pipe$SinkChannel*)},
	{"source", "()Ljava/nio/channels/Pipe$SourceChannel;", nullptr, $PUBLIC, $virtualMethod(PipeImpl, source, $Pipe$SourceChannel*)},
	{}
};

$ClassInfo _PipeImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.PipeImpl",
	"java.nio.channels.Pipe",
	nullptr,
	_PipeImpl_FieldInfo_,
	_PipeImpl_MethodInfo_
};

$Object* allocate$PipeImpl($Class* clazz) {
	return $of($alloc(PipeImpl));
}

void PipeImpl::init$($SelectorProvider* sp) {
	$useLocalCurrentObjectStackCache();
	$Pipe::init$();
	int64_t pipeFds = $IOUtil::makePipe(true);
	int32_t readFd = (int32_t)((int64_t)((uint64_t)pipeFds >> 32));
	int32_t writeFd = (int32_t)pipeFds;
	$var($FileDescriptor, sourcefd, $new($FileDescriptor));
	$IOUtil::setfdVal(sourcefd, readFd);
	$set(this, source$, $new($SourceChannelImpl, sp, sourcefd));
	$var($FileDescriptor, sinkfd, $new($FileDescriptor));
	$IOUtil::setfdVal(sinkfd, writeFd);
	$set(this, sink$, $new($SinkChannelImpl, sp, sinkfd));
}

$Pipe$SourceChannel* PipeImpl::source() {
	return this->source$;
}

$Pipe$SinkChannel* PipeImpl::sink() {
	return this->sink$;
}

PipeImpl::PipeImpl() {
}

$Class* PipeImpl::load$($String* name, bool initialize) {
	$loadClass(PipeImpl, name, initialize, &_PipeImpl_ClassInfo_, allocate$PipeImpl);
	return class$;
}

$Class* PipeImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun