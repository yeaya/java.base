#include <java/util/zip/ZipFile$ZipFileInputStream.h>

#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Set.h>
#include <java/util/zip/ZipException.h>
#include <java/util/zip/ZipFile$CleanableResource.h>
#include <java/util/zip/ZipFile$Source.h>
#include <java/util/zip/ZipFile.h>
#include <java/util/zip/ZipUtils.h>
#include <jcpp.h>

#undef MAX_VALUE

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $ZipException = ::java::util::zip::ZipException;
using $ZipFile = ::java::util::zip::ZipFile;
using $ZipFile$CleanableResource = ::java::util::zip::ZipFile$CleanableResource;
using $ZipFile$Source = ::java::util::zip::ZipFile$Source;
using $ZipUtils = ::java::util::zip::ZipUtils;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _ZipFile$ZipFileInputStream_FieldInfo_[] = {
	{"this$0", "Ljava/util/zip/ZipFile;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFile$ZipFileInputStream, this$0)},
	{"closeRequested", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ZipFile$ZipFileInputStream, closeRequested)},
	{"pos", "J", nullptr, $PRIVATE, $field(ZipFile$ZipFileInputStream, pos)},
	{"startingPos", "J", nullptr, $PRIVATE, $field(ZipFile$ZipFileInputStream, startingPos)},
	{"rem", "J", nullptr, $PROTECTED, $field(ZipFile$ZipFileInputStream, rem)},
	{"size", "J", nullptr, $PROTECTED, $field(ZipFile$ZipFileInputStream, size$)},
	{}
};

$MethodInfo _ZipFile$ZipFileInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/util/zip/ZipFile;[BI)V", nullptr, 0, $method(static_cast<void(ZipFile$ZipFileInputStream::*)($ZipFile*,$bytes*,int32_t)>(&ZipFile$ZipFileInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC},
	{"checkZIP64", "([BI)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFile$ZipFileInputStream::*)($bytes*,int32_t)>(&ZipFile$ZipFileInputStream::checkZIP64))},
	{"close", "()V", nullptr, $PUBLIC},
	{"initDataOffset", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(ZipFile$ZipFileInputStream::*)()>(&ZipFile$ZipFileInputStream::initDataOffset)), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"size", "()J", nullptr, $PUBLIC},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ZipFile$ZipFileInputStream_InnerClassesInfo_[] = {
	{"java.util.zip.ZipFile$ZipFileInputStream", "java.util.zip.ZipFile", "ZipFileInputStream", $PRIVATE},
	{}
};

$ClassInfo _ZipFile$ZipFileInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.zip.ZipFile$ZipFileInputStream",
	"java.io.InputStream",
	nullptr,
	_ZipFile$ZipFileInputStream_FieldInfo_,
	_ZipFile$ZipFileInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFile$ZipFileInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.zip.ZipFile"
};

$Object* allocate$ZipFile$ZipFileInputStream($Class* clazz) {
	return $of($alloc(ZipFile$ZipFileInputStream));
}

void ZipFile$ZipFileInputStream::init$($ZipFile* this$0, $bytes* cen, int32_t cenpos) {
	$set(this, this$0, this$0);
	$InputStream::init$();
	this->rem = $ZipUtils::CENSIZ(cen, cenpos);
	this->size$ = $ZipUtils::CENLEN(cen, cenpos);
	this->pos = $ZipUtils::CENOFF(cen, cenpos);
	if (this->rem == (int64_t)0x00000000FFFFFFFF || this->size$ == (int64_t)0x00000000FFFFFFFF || this->pos == (int64_t)0x00000000FFFFFFFF) {
		checkZIP64(cen, cenpos);
	}
	this->pos = -(this->pos + $nc($nc(this$0->res)->zsrc)->locpos);
}

void ZipFile$ZipFileInputStream::checkZIP64($bytes* cen, int32_t cenpos) {
	int32_t off = cenpos + 46 + $ZipUtils::CENNAM(cen, cenpos);
	int32_t end = off + $ZipUtils::CENEXT(cen, cenpos);
	while (off + 4 < end) {
		int32_t tag = $ZipUtils::get16(cen, off);
		int32_t sz = $ZipUtils::get16(cen, off + 2);
		off += 4;
		if (off + sz > end) {
			break;
		}
		if (tag == 1) {
			if (this->size$ == (int64_t)0x00000000FFFFFFFF) {
				if (sz < 8 || (off + 8) > end) {
					break;
				}
				this->size$ = $ZipUtils::get64(cen, off);
				sz -= 8;
				off += 8;
			}
			if (this->rem == (int64_t)0x00000000FFFFFFFF) {
				if (sz < 8 || (off + 8) > end) {
					break;
				}
				this->rem = $ZipUtils::get64(cen, off);
				sz -= 8;
				off += 8;
			}
			if (this->pos == (int64_t)0x00000000FFFFFFFF) {
				if (sz < 8 || (off + 8) > end) {
					break;
				}
				this->pos = $ZipUtils::get64(cen, off);
				sz -= 8;
				off += 8;
			}
			break;
		}
		off += sz;
	}
}

int64_t ZipFile$ZipFileInputStream::initDataOffset() {
	if (this->pos <= 0) {
		$var($bytes, loc, $new($bytes, 30));
		this->pos = -this->pos;
		int32_t len = $nc($nc(this->this$0->res)->zsrc)->readFullyAt(loc, 0, loc->length, this->pos);
		if (len != 30) {
			$throwNew($ZipException, "ZipFile error reading zip file"_s);
		}
		if ($ZipUtils::LOCSIG(loc) != (int64_t)67324752) {
			$throwNew($ZipException, "ZipFile invalid LOC header (bad signature)"_s);
		}
		int32_t var$0 = 30 + $ZipUtils::LOCNAM(loc);
		this->pos += var$0 + $ZipUtils::LOCEXT(loc);
		this->startingPos = this->pos;
	}
	return this->pos;
}

int32_t ZipFile$ZipFileInputStream::read($bytes* b, int32_t off, int32_t len) {
	$synchronized(this->this$0) {
		this->this$0->ensureOpenOrZipException();
		initDataOffset();
		if (this->rem == 0) {
			return -1;
		}
		if (len > this->rem) {
			len = (int32_t)this->rem;
		}
		if (len <= 0) {
			return 0;
		}
		len = $nc($nc(this->this$0->res)->zsrc)->readAt(b, off, len, this->pos);
		if (len > 0) {
			this->pos += len;
			this->rem -= len;
		}
	}
	if (this->rem == 0) {
		close();
	}
	return len;
}

int32_t ZipFile$ZipFileInputStream::read() {
	$var($bytes, b, $new($bytes, 1));
	if (read(b, 0, 1) == 1) {
		return (int32_t)(b->get(0) & (uint32_t)255);
	} else {
		return -1;
	}
}

int64_t ZipFile$ZipFileInputStream::skip(int64_t n) {
	$synchronized(this->this$0) {
		initDataOffset();
		int64_t newPos = this->pos + n;
		if (n > 0) {
			if (newPos < 0 || n > this->rem) {
				n = this->rem;
			}
		} else if (newPos < this->startingPos) {
			n = this->startingPos - this->pos;
		}
		this->pos += n;
		this->rem -= n;
	}
	if (this->rem == 0) {
		close();
	}
	return n;
}

int32_t ZipFile$ZipFileInputStream::available() {
	return this->rem > $Integer::MAX_VALUE ? $Integer::MAX_VALUE : (int32_t)this->rem;
}

int64_t ZipFile$ZipFileInputStream::size() {
	return this->size$;
}

void ZipFile$ZipFileInputStream::close() {
	if (this->closeRequested) {
		return;
	}
	this->closeRequested = true;
	this->rem = 0;
	$synchronized($nc(this->this$0->res)->istreams) {
		$nc($nc(this->this$0->res)->istreams)->remove(this);
	}
}

ZipFile$ZipFileInputStream::ZipFile$ZipFileInputStream() {
}

$Class* ZipFile$ZipFileInputStream::load$($String* name, bool initialize) {
	$loadClass(ZipFile$ZipFileInputStream, name, initialize, &_ZipFile$ZipFileInputStream_ClassInfo_, allocate$ZipFile$ZipFileInputStream);
	return class$;
}

$Class* ZipFile$ZipFileInputStream::class$ = nullptr;

		} // zip
	} // util
} // java