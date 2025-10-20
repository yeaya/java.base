#include <Basic2$Reader.h>

#include <Basic2.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $Basic2 = ::Basic2;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Random = ::java::util::Random;

$FieldInfo _Basic2$Reader_FieldInfo_[] = {
	{"in", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(Basic2$Reader, in)},
	{"total", "I", nullptr, $PRIVATE | $VOLATILE, $field(Basic2$Reader, total$)},
	{"hash", "I", nullptr, $PRIVATE | $VOLATILE, $field(Basic2$Reader, hash$)},
	{}
};

$MethodInfo _Basic2$Reader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(Basic2$Reader::*)($InputStream*)>(&Basic2$Reader::init$))},
	{"hash", "()I", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC},
	{"total", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _Basic2$Reader_InnerClassesInfo_[] = {
	{"Basic2$Reader", "Basic2", "Reader", $STATIC},
	{}
};

$ClassInfo _Basic2$Reader_ClassInfo_ = {
	$ACC_SUPER,
	"Basic2$Reader",
	"java.lang.Object",
	"java.lang.Runnable",
	_Basic2$Reader_FieldInfo_,
	_Basic2$Reader_MethodInfo_,
	nullptr,
	nullptr,
	_Basic2$Reader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic2"
};

$Object* allocate$Basic2$Reader($Class* clazz) {
	return $of($alloc(Basic2$Reader));
}

void Basic2$Reader::init$($InputStream* in) {
	$set(this, in, in);
}

void Basic2$Reader::run() {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t n = 0;
		do {
			$init($Basic2);
			$var($bytes, buf, $new($bytes, 128 + $nc($Basic2::rand)->nextInt(128)));
			int32_t len = 0;
			int32_t off = 0;
			if ($nc($Basic2::rand)->nextBoolean()) {
				len = buf->length;
				off = 0;
				n = $nc(this->in)->read(buf);
			} else {
				len = 1 + $nc($Basic2::rand)->nextInt(64);
				off = $nc($Basic2::rand)->nextInt(64);
				n = $nc(this->in)->read(buf, off, len);
			}
			if (n > len) {
				$throwNew($RuntimeException, "Too many bytes read"_s);
			}
			if (n > 0) {
				this->total$ += n;
				for (int32_t i = 0; i < n; ++i) {
					int32_t value = buf->get(off + i);
					this->hash$ = this->hash$ ^ value;
				}
			}
		} while (n > 0);
		$nc(this->in)->close();
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		x->printStackTrace();
	}
}

int32_t Basic2$Reader::total() {
	return this->total$;
}

int32_t Basic2$Reader::hash() {
	return this->hash$;
}

Basic2$Reader::Basic2$Reader() {
}

$Class* Basic2$Reader::load$($String* name, bool initialize) {
	$loadClass(Basic2$Reader, name, initialize, &_Basic2$Reader_ClassInfo_, allocate$Basic2$Reader);
	return class$;
}

$Class* Basic2$Reader::class$ = nullptr;