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

$FieldInfo _TransferTo$CloseLoggingInputStream_FieldInfo_[] = {
	{"closed", "Z", nullptr, 0, $field(TransferTo$CloseLoggingInputStream, closed)},
	{}
};

$MethodInfo _TransferTo$CloseLoggingInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(TransferTo$CloseLoggingInputStream, init$, void, $InputStream*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(TransferTo$CloseLoggingInputStream, close, void), "java.io.IOException"},
	{"wasClosed", "()Z", nullptr, 0, $virtualMethod(TransferTo$CloseLoggingInputStream, wasClosed, bool)},
	{}
};

$InnerClassInfo _TransferTo$CloseLoggingInputStream_InnerClassesInfo_[] = {
	{"TransferTo$CloseLoggingInputStream", "TransferTo", "CloseLoggingInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransferTo$CloseLoggingInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"TransferTo$CloseLoggingInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_TransferTo$CloseLoggingInputStream_FieldInfo_,
	_TransferTo$CloseLoggingInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_TransferTo$CloseLoggingInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TransferTo"
};

$Object* allocate$TransferTo$CloseLoggingInputStream($Class* clazz) {
	return $of($alloc(TransferTo$CloseLoggingInputStream));
}

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
	$loadClass(TransferTo$CloseLoggingInputStream, name, initialize, &_TransferTo$CloseLoggingInputStream_ClassInfo_, allocate$TransferTo$CloseLoggingInputStream);
	return class$;
}

$Class* TransferTo$CloseLoggingInputStream::class$ = nullptr;