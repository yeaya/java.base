#include <InterruptDeadlock$Reader.h>
#include <InterruptDeadlock.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $FileChannel = ::java::nio::channels::FileChannel;

void InterruptDeadlock$Reader::init$($FileChannel* fc) {
	$Thread::init$();
	$set(this, fc, fc);
}

void InterruptDeadlock$Reader::run() {
	$useLocalObjectStack();
	$var($ByteBuffer, bb, $ByteBuffer::allocate(1024));
	try {
		int64_t pos = 0;
		for (;;) {
			$nc(bb)->clear();
			int32_t n = $nc(this->fc)->read(bb, pos);
			if (n > 0) {
				pos += n;
			}
			if (pos >= this->fc->size()) {
				pos = 0;
			}
		}
	} catch ($ClosedChannelException& x) {
		$nc($System::out)->println($$str({x->getClass(), " (expected)"_s}));
	} catch ($Exception& unexpected) {
		$set(this, exception$, unexpected);
	}
}

$Exception* InterruptDeadlock$Reader::exception() {
	return this->exception$;
}

InterruptDeadlock$Reader* InterruptDeadlock$Reader::startReader($FileChannel* fc) {
	$init(InterruptDeadlock$Reader);
	$var(InterruptDeadlock$Reader, r, $new(InterruptDeadlock$Reader, fc));
	r->start();
	return r;
}

InterruptDeadlock$Reader::InterruptDeadlock$Reader() {
}

$Class* InterruptDeadlock$Reader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL, $field(InterruptDeadlock$Reader, fc)},
		{"exception", "Ljava/lang/Exception;", nullptr, $VOLATILE, $field(InterruptDeadlock$Reader, exception$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/FileChannel;)V", nullptr, 0, $method(InterruptDeadlock$Reader, init$, void, $FileChannel*)},
		{"exception", "()Ljava/lang/Exception;", nullptr, 0, $virtualMethod(InterruptDeadlock$Reader, exception, $Exception*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(InterruptDeadlock$Reader, run, void)},
		{"startReader", "(Ljava/nio/channels/FileChannel;)LInterruptDeadlock$Reader;", nullptr, $STATIC, $staticMethod(InterruptDeadlock$Reader, startReader, InterruptDeadlock$Reader*, $FileChannel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InterruptDeadlock$Reader", "InterruptDeadlock", "Reader", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"InterruptDeadlock$Reader",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"InterruptDeadlock"
	};
	$loadClass(InterruptDeadlock$Reader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InterruptDeadlock$Reader);
	});
	return class$;
}

$Class* InterruptDeadlock$Reader::class$ = nullptr;