#include <TransferTo$CloseLoggingInputStream.h>

#include <TransferTo.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TransferTo = ::TransferTo;
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
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(TransferTo$CloseLoggingInputStream::*)($InputStream*)>(&TransferTo$CloseLoggingInputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"wasClosed", "()Z", nullptr, 0},
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