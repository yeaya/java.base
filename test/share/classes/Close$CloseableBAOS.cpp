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
	$FieldInfo fieldInfos$$[] = {
		{"closed", "Z", nullptr, $PRIVATE, $field(Close$CloseableBAOS, closed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, 0, $method(Close$CloseableBAOS, init$, void, $bytes*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Close$CloseableBAOS, close, void), "java.io.IOException"},
		{"isClosed", "()Z", nullptr, $PUBLIC, $virtualMethod(Close$CloseableBAOS, isClosed, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Close$CloseableBAOS", "Close", "CloseableBAOS", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Close$CloseableBAOS",
		"java.io.ByteArrayInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Close"
	};
	$loadClass(Close$CloseableBAOS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Close$CloseableBAOS);
	});
	return class$;
}

$Class* Close$CloseableBAOS::class$ = nullptr;