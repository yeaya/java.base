#include <Basic2$Writer.h>

#include <Basic2.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $Basic2 = ::Basic2;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Random = ::java::util::Random;

$FieldInfo _Basic2$Writer_FieldInfo_[] = {
	{"out", "Ljava/io/OutputStream;", nullptr, $PRIVATE | $FINAL, $field(Basic2$Writer, out)},
	{"total", "I", nullptr, $PRIVATE | $FINAL, $field(Basic2$Writer, total$)},
	{"hash", "I", nullptr, $PRIVATE | $VOLATILE, $field(Basic2$Writer, hash$)},
	{}
};

$MethodInfo _Basic2$Writer_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(Basic2$Writer::*)($OutputStream*)>(&Basic2$Writer::init$))},
	{"hash", "()I", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC},
	{"total", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _Basic2$Writer_InnerClassesInfo_[] = {
	{"Basic2$Writer", "Basic2", "Writer", $STATIC},
	{}
};

$ClassInfo _Basic2$Writer_ClassInfo_ = {
	$ACC_SUPER,
	"Basic2$Writer",
	"java.lang.Object",
	"java.lang.Runnable",
	_Basic2$Writer_FieldInfo_,
	_Basic2$Writer_MethodInfo_,
	nullptr,
	nullptr,
	_Basic2$Writer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic2"
};

$Object* allocate$Basic2$Writer($Class* clazz) {
	return $of($alloc(Basic2$Writer));
}

void Basic2$Writer::init$($OutputStream* out) {
	$set(this, out, out);
	$init($Basic2);
	this->total$ = 50 * 1000 + $nc($Basic2::rand)->nextInt(50 * 1000);
}

void Basic2$Writer::run() {
	this->hash$ = 0;
	int32_t rem = this->total$;
	try {
		do {
			$init($Basic2);
			$var($bytes, buf, $new($bytes, 1 + $nc($Basic2::rand)->nextInt(rem)));
			int32_t off = 0;
			int32_t len = 0;
			if ($nc($Basic2::rand)->nextBoolean()) {
				off = 0;
				len = buf->length;
			} else {
				off = $nc($Basic2::rand)->nextInt(buf->length);
				int32_t r = buf->length - off;
				len = (r <= 1) ? 1 : (1 + $nc($Basic2::rand)->nextInt(r));
			}
			for (int32_t i = 0; i < len; ++i) {
				int8_t value = (int8_t)$nc($Basic2::rand)->nextInt(256);
				buf->set(off + i, value);
				this->hash$ = this->hash$ ^ value;
			}
			if ((off == 0) && (len == buf->length)) {
				$nc(this->out)->write(buf);
			} else {
				$nc(this->out)->write(buf, off, len);
			}
			rem -= len;
		} while (rem > 0);
		$nc(this->out)->close();
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		x->printStackTrace();
	}
}

int32_t Basic2$Writer::total() {
	return this->total$;
}

int32_t Basic2$Writer::hash() {
	return this->hash$;
}

Basic2$Writer::Basic2$Writer() {
}

$Class* Basic2$Writer::load$($String* name, bool initialize) {
	$loadClass(Basic2$Writer, name, initialize, &_Basic2$Writer_ClassInfo_, allocate$Basic2$Writer);
	return class$;
}

$Class* Basic2$Writer::class$ = nullptr;