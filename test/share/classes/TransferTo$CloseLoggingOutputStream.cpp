#include <TransferTo$CloseLoggingOutputStream.h>
#include <TransferTo.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TransferTo$CloseLoggingOutputStream::init$($OutputStream* out) {
	$FilterOutputStream::init$(out);
}

void TransferTo$CloseLoggingOutputStream::close() {
	this->closed = true;
	$FilterOutputStream::close();
}

bool TransferTo$CloseLoggingOutputStream::wasClosed() {
	return this->closed;
}

TransferTo$CloseLoggingOutputStream::TransferTo$CloseLoggingOutputStream() {
}

$Class* TransferTo$CloseLoggingOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"closed", "Z", nullptr, 0, $field(TransferTo$CloseLoggingOutputStream, closed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;)V", nullptr, 0, $method(TransferTo$CloseLoggingOutputStream, init$, void, $OutputStream*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(TransferTo$CloseLoggingOutputStream, close, void), "java.io.IOException"},
		{"wasClosed", "()Z", nullptr, 0, $virtualMethod(TransferTo$CloseLoggingOutputStream, wasClosed, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TransferTo$CloseLoggingOutputStream", "TransferTo", "CloseLoggingOutputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TransferTo$CloseLoggingOutputStream",
		"java.io.FilterOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TransferTo"
	};
	$loadClass(TransferTo$CloseLoggingOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TransferTo$CloseLoggingOutputStream));
	});
	return class$;
}

$Class* TransferTo$CloseLoggingOutputStream::class$ = nullptr;