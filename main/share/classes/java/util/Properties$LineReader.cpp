#include <java/util/Properties$LineReader.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Properties.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;

namespace java {
	namespace util {

$FieldInfo _Properties$LineReader_FieldInfo_[] = {
	{"lineBuf", "[C", nullptr, 0, $field(Properties$LineReader, lineBuf)},
	{"inByteBuf", "[B", nullptr, $PRIVATE, $field(Properties$LineReader, inByteBuf)},
	{"inCharBuf", "[C", nullptr, $PRIVATE, $field(Properties$LineReader, inCharBuf)},
	{"inLimit", "I", nullptr, $PRIVATE, $field(Properties$LineReader, inLimit)},
	{"inOff", "I", nullptr, $PRIVATE, $field(Properties$LineReader, inOff)},
	{"inStream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(Properties$LineReader, inStream)},
	{"reader", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(Properties$LineReader, reader)},
	{}
};

$MethodInfo _Properties$LineReader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(Properties$LineReader::*)($InputStream*)>(&Properties$LineReader::init$))},
	{"<init>", "(Ljava/io/Reader;)V", nullptr, 0, $method(static_cast<void(Properties$LineReader::*)($Reader*)>(&Properties$LineReader::init$))},
	{"readLine", "()I", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Properties$LineReader_InnerClassesInfo_[] = {
	{"java.util.Properties$LineReader", "java.util.Properties", "LineReader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Properties$LineReader_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Properties$LineReader",
	"java.lang.Object",
	nullptr,
	_Properties$LineReader_FieldInfo_,
	_Properties$LineReader_MethodInfo_,
	nullptr,
	nullptr,
	_Properties$LineReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Properties"
};

$Object* allocate$Properties$LineReader($Class* clazz) {
	return $of($alloc(Properties$LineReader));
}

void Properties$LineReader::init$($InputStream* inStream) {
	$set(this, lineBuf, $new($chars, 1024));
	this->inLimit = 0;
	this->inOff = 0;
	$set(this, inStream, inStream);
	$set(this, inByteBuf, $new($bytes, 8192));
}

void Properties$LineReader::init$($Reader* reader) {
	$set(this, lineBuf, $new($chars, 1024));
	this->inLimit = 0;
	this->inOff = 0;
	$set(this, reader, reader);
	$set(this, inCharBuf, $new($chars, 8192));
}

int32_t Properties$LineReader::readLine() {
	int32_t len = 0;
	int32_t off = this->inOff;
	int32_t limit = this->inLimit;
	bool skipWhiteSpace = true;
	bool appendedLineBegin = false;
	bool precedingBackslash = false;
	bool fromStream = this->inStream != nullptr;
	$var($bytes, byteBuf, this->inByteBuf);
	$var($chars, charBuf, this->inCharBuf);
	$var($chars, lineBuf, this->lineBuf);
	char16_t c = 0;
	while (true) {
		if (off >= limit) {
			this->inLimit = (limit = fromStream ? $nc(this->inStream)->read(byteBuf) : $nc(this->reader)->read(charBuf));
			if (limit <= 0) {
				if (len == 0) {
					return -1;
				}
				return precedingBackslash ? len - 1 : len;
			}
			off = 0;
		}
		c = (fromStream) ? (char16_t)((int32_t)($nc(byteBuf)->get(off++) & (uint32_t)255)) : $nc(charBuf)->get(off++);
		if (skipWhiteSpace) {
			if (c == u' ' || c == u'\t' || c == u'\f') {
				continue;
			}
			if (!appendedLineBegin && (c == u'\r' || c == u'\n')) {
				continue;
			}
			skipWhiteSpace = false;
			appendedLineBegin = false;
		}
		if (len == 0) {
			if (c == u'#' || c == u'!') {
				bool commentLoop$break = false;
				while (true) {
					if (fromStream) {
						int8_t b = 0;
						while (off < limit) {
							b = byteBuf->get(off++);
							if (b <= u'\r' && (b == u'\r' || b == u'\n')) {
								commentLoop$break = true;
								break;
							}
						}
						if (commentLoop$break) {
							break;
						}
						if (off == limit) {
							this->inLimit = (limit = $nc(this->inStream)->read(byteBuf));
							if (limit <= 0) {
								return -1;
							}
							off = 0;
						}
					} else {
						while (off < limit) {
							c = charBuf->get(off++);
							if (c <= u'\r' && (c == u'\r' || c == u'\n')) {
								commentLoop$break = true;
								break;
							}
						}
						if (commentLoop$break) {
							break;
						}
						if (off == limit) {
							this->inLimit = (limit = $nc(this->reader)->read(charBuf));
							if (limit <= 0) {
								return -1;
							}
							off = 0;
						}
					}
				}
				skipWhiteSpace = true;
				continue;
			}
		}
		if (c != u'\n' && c != u'\r') {
			$nc(lineBuf)->set(len++, c);
			if (len == lineBuf->length) {
				$assign(lineBuf, $new($chars, $ArraysSupport::newLength(len, 1, len)));
				$System::arraycopy(this->lineBuf, 0, lineBuf, 0, len);
				$set(this, lineBuf, lineBuf);
			}
			precedingBackslash = (c == u'\\') ? !precedingBackslash : false;
		} else {
			if (len == 0) {
				skipWhiteSpace = true;
				continue;
			}
			if (off >= limit) {
				this->inLimit = (limit = fromStream ? $nc(this->inStream)->read(byteBuf) : $nc(this->reader)->read(charBuf));
				off = 0;
				if (limit <= 0) {
					return precedingBackslash ? len - 1 : len;
				}
			}
			if (precedingBackslash) {
				len -= 1;
				skipWhiteSpace = true;
				appendedLineBegin = true;
				precedingBackslash = false;
				if (c == u'\r') {
					if (fromStream) {
						if (byteBuf->get(off) == u'\n') {
							++off;
						}
					} else if (charBuf->get(off) == u'\n') {
						++off;
					}
				}
			} else {
				this->inOff = off;
				return len;
			}
		}
	}
}

Properties$LineReader::Properties$LineReader() {
}

$Class* Properties$LineReader::load$($String* name, bool initialize) {
	$loadClass(Properties$LineReader, name, initialize, &_Properties$LineReader_ClassInfo_, allocate$Properties$LineReader);
	return class$;
}

$Class* Properties$LineReader::class$ = nullptr;

	} // util
} // java