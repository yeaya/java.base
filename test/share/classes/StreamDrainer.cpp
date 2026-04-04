#include <StreamDrainer.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StreamDrainer::init$($InputStream* is) {
	$Thread::init$();
	$set(this, os, $new($ByteArrayOutputStream));
	$set(this, is, is);
}

void StreamDrainer::run() {
	try {
		int32_t i = 0;
		while ((i = $nc(this->is)->read()) >= 0) {
			this->os->write(i);
		}
	} catch ($Exception& e) {
	}
}

$String* StreamDrainer::toString() {
	return this->os->toString();
}

StreamDrainer::StreamDrainer() {
}

$Class* StreamDrainer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"is", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(StreamDrainer, is)},
		{"os", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE | $FINAL, $field(StreamDrainer, os)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(StreamDrainer, init$, void, $InputStream*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(StreamDrainer, run, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StreamDrainer, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StreamDrainer",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StreamDrainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamDrainer);
	});
	return class$;
}

$Class* StreamDrainer::class$ = nullptr;