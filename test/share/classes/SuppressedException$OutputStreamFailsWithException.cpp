#include <SuppressedException$OutputStreamFailsWithException.h>

#include <SuppressedException.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $SuppressedException = ::SuppressedException;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

$FieldInfo _SuppressedException$OutputStreamFailsWithException_FieldInfo_[] = {
	{"this$0", "LSuppressedException;", nullptr, $FINAL | $SYNTHETIC, $field(SuppressedException$OutputStreamFailsWithException, this$0)},
	{"sameException", "Ljava/io/IOException;", nullptr, $PRIVATE | $FINAL, $field(SuppressedException$OutputStreamFailsWithException, sameException)},
	{"throwSeparateCloseException", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $FINAL, $field(SuppressedException$OutputStreamFailsWithException, throwSeparateCloseException)},
	{"throwSeparateFlushException", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $FINAL, $field(SuppressedException$OutputStreamFailsWithException, throwSeparateFlushException)},
	{}
};

$MethodInfo _SuppressedException$OutputStreamFailsWithException_MethodInfo_[] = {
	{"<init>", "(LSuppressedException;)V", nullptr, 0, $method(SuppressedException$OutputStreamFailsWithException, init$, void, $SuppressedException*)},
	{"<init>", "(LSuppressedException;ZZ)V", nullptr, 0, $method(SuppressedException$OutputStreamFailsWithException, init$, void, $SuppressedException*, bool, bool)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(SuppressedException$OutputStreamFailsWithException, close, void), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(SuppressedException$OutputStreamFailsWithException, flush, void), "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(SuppressedException$OutputStreamFailsWithException, write, void, int32_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _SuppressedException$OutputStreamFailsWithException_InnerClassesInfo_[] = {
	{"SuppressedException$OutputStreamFailsWithException", "SuppressedException", "OutputStreamFailsWithException", 0},
	{}
};

$ClassInfo _SuppressedException$OutputStreamFailsWithException_ClassInfo_ = {
	$ACC_SUPER,
	"SuppressedException$OutputStreamFailsWithException",
	"java.io.OutputStream",
	nullptr,
	_SuppressedException$OutputStreamFailsWithException_FieldInfo_,
	_SuppressedException$OutputStreamFailsWithException_MethodInfo_,
	nullptr,
	nullptr,
	_SuppressedException$OutputStreamFailsWithException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SuppressedException"
};

$Object* allocate$SuppressedException$OutputStreamFailsWithException($Class* clazz) {
	return $of($alloc(SuppressedException$OutputStreamFailsWithException));
}

void SuppressedException$OutputStreamFailsWithException::init$($SuppressedException* this$0) {
	$set(this, this$0, this$0);
	$OutputStream::init$();
	$set(this, sameException, $new($IOException, "Same exception"_s));
	$set(this, throwSeparateCloseException, nullptr);
	$set(this, throwSeparateFlushException, nullptr);
}

void SuppressedException$OutputStreamFailsWithException::init$($SuppressedException* this$0, bool throwCloseException, bool throwFlushException) {
	$set(this, this$0, this$0);
	$OutputStream::init$();
	$set(this, sameException, $new($IOException, "Same exception"_s));
	$set(this, throwSeparateCloseException, $Boolean::valueOf(throwCloseException));
	$set(this, throwSeparateFlushException, $Boolean::valueOf(throwFlushException));
}

void SuppressedException$OutputStreamFailsWithException::write(int32_t i) {
	$throwNew($UnsupportedOperationException, ""_s);
}

void SuppressedException$OutputStreamFailsWithException::flush() {
	$nc($System::out)->println("flush()"_s);
	if (this->throwSeparateFlushException == nullptr) {
		$throw(this->sameException);
	} else if ($nc((this->throwSeparateFlushException))->booleanValue()) {
		$throwNew($IOException, "Flush exception"_s);
	}
}

void SuppressedException$OutputStreamFailsWithException::close() {
	$nc($System::out)->println("close()"_s);
	if (this->throwSeparateCloseException == nullptr) {
		$throw(this->sameException);
	} else if ($nc((this->throwSeparateCloseException))->booleanValue()) {
		$throwNew($IOException, "Close exception"_s);
	}
}

SuppressedException$OutputStreamFailsWithException::SuppressedException$OutputStreamFailsWithException() {
}

$Class* SuppressedException$OutputStreamFailsWithException::load$($String* name, bool initialize) {
	$loadClass(SuppressedException$OutputStreamFailsWithException, name, initialize, &_SuppressedException$OutputStreamFailsWithException_ClassInfo_, allocate$SuppressedException$OutputStreamFailsWithException);
	return class$;
}

$Class* SuppressedException$OutputStreamFailsWithException::class$ = nullptr;