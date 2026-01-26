#include <Close$CloseableBAOS.h>

#include <Close.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Close$CloseableBAOS_FieldInfo_[] = {
	{"closed", "Z", nullptr, $PRIVATE, $field(Close$CloseableBAOS, closed)},
	{}
};

$MethodInfo _Close$CloseableBAOS_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, 0, $method(Close$CloseableBAOS, init$, void, $bytes*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Close$CloseableBAOS, close, void), "java.io.IOException"},
	{"isClosed", "()Z", nullptr, $PUBLIC, $virtualMethod(Close$CloseableBAOS, isClosed, bool)},
	{}
};

$InnerClassInfo _Close$CloseableBAOS_InnerClassesInfo_[] = {
	{"Close$CloseableBAOS", "Close", "CloseableBAOS", $STATIC},
	{}
};

$ClassInfo _Close$CloseableBAOS_ClassInfo_ = {
	$ACC_SUPER,
	"Close$CloseableBAOS",
	"java.io.ByteArrayInputStream",
	nullptr,
	_Close$CloseableBAOS_FieldInfo_,
	_Close$CloseableBAOS_MethodInfo_,
	nullptr,
	nullptr,
	_Close$CloseableBAOS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Close"
};

$Object* allocate$Close$CloseableBAOS($Class* clazz) {
	return $of($alloc(Close$CloseableBAOS));
}

void Close$CloseableBAOS::init$($bytes* buf) {
	$ByteArrayInputStream::init$(buf);
}

void Close$CloseableBAOS::close() {
	this->closed = true;
	$throwNew($IOException);
}

bool Close$CloseableBAOS::isClosed() {
	return this->closed;
}

Close$CloseableBAOS::Close$CloseableBAOS() {
}

$Class* Close$CloseableBAOS::load$($String* name, bool initialize) {
	$loadClass(Close$CloseableBAOS, name, initialize, &_Close$CloseableBAOS_ClassInfo_, allocate$Close$CloseableBAOS);
	return class$;
}

$Class* Close$CloseableBAOS::class$ = nullptr;