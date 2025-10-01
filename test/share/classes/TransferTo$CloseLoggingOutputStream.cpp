#include <TransferTo$CloseLoggingOutputStream.h>

#include <TransferTo.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
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
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TransferTo$CloseLoggingOutputStream_FieldInfo_[] = {
	{"closed", "Z", nullptr, 0, $field(TransferTo$CloseLoggingOutputStream, closed)},
	{}
};

$MethodInfo _TransferTo$CloseLoggingOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(TransferTo$CloseLoggingOutputStream::*)($OutputStream*)>(&TransferTo$CloseLoggingOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"wasClosed", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _TransferTo$CloseLoggingOutputStream_InnerClassesInfo_[] = {
	{"TransferTo$CloseLoggingOutputStream", "TransferTo", "CloseLoggingOutputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransferTo$CloseLoggingOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"TransferTo$CloseLoggingOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_TransferTo$CloseLoggingOutputStream_FieldInfo_,
	_TransferTo$CloseLoggingOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_TransferTo$CloseLoggingOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TransferTo"
};

$Object* allocate$TransferTo$CloseLoggingOutputStream($Class* clazz) {
	return $of($alloc(TransferTo$CloseLoggingOutputStream));
}

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
	$loadClass(TransferTo$CloseLoggingOutputStream, name, initialize, &_TransferTo$CloseLoggingOutputStream_ClassInfo_, allocate$TransferTo$CloseLoggingOutputStream);
	return class$;
}

$Class* TransferTo$CloseLoggingOutputStream::class$ = nullptr;