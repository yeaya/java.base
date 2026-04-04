#include <TransferTo$CloseLoggingInputStream.h>
#include <TransferTo.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TransferTo$CloseLoggingInputStream::init$($InputStream* in) {
	$FilterInputStream::init$(in);
}

void TransferTo$CloseLoggingInputStream::close() {
	this->closed = true;
	$FilterInputStream::close();
}

bool TransferTo$CloseLoggingInputStream::wasClosed() {
	return this->closed;
}

TransferTo$CloseLoggingInputStream::TransferTo$CloseLoggingInputStream() {
}

$Class* TransferTo$CloseLoggingInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"closed", "Z", nullptr, 0, $field(TransferTo$CloseLoggingInputStream, closed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(TransferTo$CloseLoggingInputStream, init$, void, $InputStream*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(TransferTo$CloseLoggingInputStream, close, void), "java.io.IOException"},
		{"wasClosed", "()Z", nullptr, 0, $virtualMethod(TransferTo$CloseLoggingInputStream, wasClosed, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TransferTo$CloseLoggingInputStream", "TransferTo", "CloseLoggingInputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TransferTo$CloseLoggingInputStream",
		"java.io.FilterInputStream",
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
	$loadClass(TransferTo$CloseLoggingInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransferTo$CloseLoggingInputStream);
	});
	return class$;
}

$Class* TransferTo$CloseLoggingInputStream::class$ = nullptr;