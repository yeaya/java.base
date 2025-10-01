#include <StreamDrainer.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _StreamDrainer_FieldInfo_[] = {
	{"is", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(StreamDrainer, is)},
	{"os", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE | $FINAL, $field(StreamDrainer, os)},
	{}
};

$MethodInfo _StreamDrainer_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamDrainer::*)($InputStream*)>(&StreamDrainer::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StreamDrainer_ClassInfo_ = {
	$ACC_SUPER,
	"StreamDrainer",
	"java.lang.Thread",
	nullptr,
	_StreamDrainer_FieldInfo_,
	_StreamDrainer_MethodInfo_
};

$Object* allocate$StreamDrainer($Class* clazz) {
	return $of($alloc(StreamDrainer));
}

void StreamDrainer::init$($InputStream* is) {
	$Thread::init$();
	$set(this, os, $new($ByteArrayOutputStream));
	$set(this, is, is);
}

void StreamDrainer::run() {
	try {
		int32_t i = 0;
		while ((i = $nc(this->is)->read()) >= 0) {
			$nc(this->os)->write(i);
		}
	} catch ($Exception&) {
		$catch();
	}
}

$String* StreamDrainer::toString() {
	return $nc(this->os)->toString();
}

StreamDrainer::StreamDrainer() {
}

$Class* StreamDrainer::load$($String* name, bool initialize) {
	$loadClass(StreamDrainer, name, initialize, &_StreamDrainer_ClassInfo_, allocate$StreamDrainer);
	return class$;
}

$Class* StreamDrainer::class$ = nullptr;