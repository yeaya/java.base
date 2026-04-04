#include <SuppressedException$OutputStreamFailsWithException.h>
#include <SuppressedException.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $SuppressedException = ::SuppressedException;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

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
	} else if ((this->throwSeparateFlushException)->booleanValue()) {
		$throwNew($IOException, "Flush exception"_s);
	}
}

void SuppressedException$OutputStreamFailsWithException::close() {
	$nc($System::out)->println("close()"_s);
	if (this->throwSeparateCloseException == nullptr) {
		$throw(this->sameException);
	} else if ((this->throwSeparateCloseException)->booleanValue()) {
		$throwNew($IOException, "Close exception"_s);
	}
}

SuppressedException$OutputStreamFailsWithException::SuppressedException$OutputStreamFailsWithException() {
}

$Class* SuppressedException$OutputStreamFailsWithException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LSuppressedException;", nullptr, $FINAL | $SYNTHETIC, $field(SuppressedException$OutputStreamFailsWithException, this$0)},
		{"sameException", "Ljava/io/IOException;", nullptr, $PRIVATE | $FINAL, $field(SuppressedException$OutputStreamFailsWithException, sameException)},
		{"throwSeparateCloseException", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $FINAL, $field(SuppressedException$OutputStreamFailsWithException, throwSeparateCloseException)},
		{"throwSeparateFlushException", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $FINAL, $field(SuppressedException$OutputStreamFailsWithException, throwSeparateFlushException)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSuppressedException;)V", nullptr, 0, $method(SuppressedException$OutputStreamFailsWithException, init$, void, $SuppressedException*)},
		{"<init>", "(LSuppressedException;ZZ)V", nullptr, 0, $method(SuppressedException$OutputStreamFailsWithException, init$, void, $SuppressedException*, bool, bool)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(SuppressedException$OutputStreamFailsWithException, close, void), "java.io.IOException"},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(SuppressedException$OutputStreamFailsWithException, flush, void), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(SuppressedException$OutputStreamFailsWithException, write, void, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SuppressedException$OutputStreamFailsWithException", "SuppressedException", "OutputStreamFailsWithException", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SuppressedException$OutputStreamFailsWithException",
		"java.io.OutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SuppressedException"
	};
	$loadClass(SuppressedException$OutputStreamFailsWithException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SuppressedException$OutputStreamFailsWithException));
	});
	return class$;
}

$Class* SuppressedException$OutputStreamFailsWithException::class$ = nullptr;