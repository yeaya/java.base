#include <java/io/Console$LineReader.h>
#include <java/io/Console.h>
#include <java/io/Reader.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

using $Console = ::java::io::Console;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void Console$LineReader::init$($Console* this$0, $Reader* in) {
	$set(this, this$0, this$0);
	$Reader::init$();
	$set(this, in, in);
	$set(this, cb, $new($chars, 1024));
	this->nextChar = (this->nChars = 0);
	this->leftoverLF = false;
}

void Console$LineReader::close() {
}

bool Console$LineReader::ready() {
	return $nc(this->in)->ready();
}

int32_t Console$LineReader::read($chars* cbuf$renamed, int32_t offset, int32_t length) {
	$var($chars, cbuf, cbuf$renamed);
	int32_t off = offset;
	int32_t end = offset + length;
	if (offset < 0 || offset > $nc(cbuf)->length || length < 0 || end < 0 || end > $nc(cbuf)->length) {
		$throwNew($IndexOutOfBoundsException);
	}
	$synchronized(this->this$0->readLock) {
		bool eof = false;
		char16_t c = 0;
		for (;;) {
			if (this->nextChar >= this->nChars) {
				int32_t n = 0;
				do {
					n = $nc(this->in)->read(this->cb, 0, $nc(this->cb)->length);
				} while (n == 0);
				if (n > 0) {
					this->nChars = n;
					this->nextChar = 0;
					if (n < $nc(this->cb)->length && this->cb->get(n - 1) != u'\n' && this->cb->get(n - 1) != u'\r') {
						eof = true;
					}
				} else {
					if (off - offset == 0) {
						return -1;
					}
					return off - offset;
				}
			}
			if (this->leftoverLF && cbuf == this->this$0->rcb && $nc(this->cb)->get(this->nextChar) == u'\n') {
				++this->nextChar;
			}
			this->leftoverLF = false;
			while (this->nextChar < this->nChars) {
				c = ($nc(cbuf)->set(off++, $nc(this->cb)->get(this->nextChar)));
				this->cb->set(this->nextChar++, 0);
				if (c == u'\n') {
					return off - offset;
				} else if (c == u'\r') {
					if (off == end) {
						if (cbuf == this->this$0->rcb) {
							$assign(cbuf, this->this$0->grow());
							end = $nc(cbuf)->length;
						} else {
							this->leftoverLF = true;
							return off - offset;
						}
					}
					if (this->nextChar == this->nChars && $nc(this->in)->ready()) {
						this->nChars = this->in->read(this->cb, 0, this->cb->length);
						this->nextChar = 0;
					}
					if (this->nextChar < this->nChars && this->cb->get(this->nextChar) == u'\n') {
						cbuf->set(off++, u'\n');
						++this->nextChar;
					}
					return off - offset;
				} else if (off == end) {
					if (cbuf == this->this$0->rcb) {
						$assign(cbuf, this->this$0->grow());
						end = $nc(cbuf)->length;
					} else {
						return off - offset;
					}
				}
			}
			if (eof) {
				return off - offset;
			}
		}
	}
}

Console$LineReader::Console$LineReader() {
}

$Class* Console$LineReader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/Console;", nullptr, $FINAL | $SYNTHETIC, $field(Console$LineReader, this$0)},
		{"in", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(Console$LineReader, in)},
		{"cb", "[C", nullptr, $PRIVATE, $field(Console$LineReader, cb)},
		{"nChars", "I", nullptr, $PRIVATE, $field(Console$LineReader, nChars)},
		{"nextChar", "I", nullptr, $PRIVATE, $field(Console$LineReader, nextChar)},
		{"leftoverLF", "Z", nullptr, 0, $field(Console$LineReader, leftoverLF)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/Console;Ljava/io/Reader;)V", nullptr, 0, $method(Console$LineReader, init$, void, $Console*, $Reader*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Console$LineReader, close, void)},
		{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(Console$LineReader, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
		{"ready", "()Z", nullptr, $PUBLIC, $virtualMethod(Console$LineReader, ready, bool), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.Console$LineReader", "java.io.Console", "LineReader", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.Console$LineReader",
		"java.io.Reader",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.Console"
	};
	$loadClass(Console$LineReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Console$LineReader));
	});
	return class$;
}

$Class* Console$LineReader::class$ = nullptr;

	} // io
} // java