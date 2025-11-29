#include <java/io/StreamTokenizer.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef CT_ALPHA
#undef CT_COMMENT
#undef CT_DIGIT
#undef CT_QUOTE
#undef CT_WHITESPACE
#undef LINENO
#undef NEED_CHAR
#undef SKIP_LF
#undef TT_EOF
#undef TT_EOL
#undef TT_NOTHING
#undef TT_NUMBER
#undef TT_WORD

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace io {

$CompoundAttribute _StreamTokenizer_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _StreamTokenizer_FieldInfo_[] = {
	{"reader", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(StreamTokenizer, reader)},
	{"input", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(StreamTokenizer, input)},
	{"buf", "[C", nullptr, $PRIVATE, $field(StreamTokenizer, buf)},
	{"peekc", "I", nullptr, $PRIVATE, $field(StreamTokenizer, peekc)},
	{"NEED_CHAR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StreamTokenizer, NEED_CHAR)},
	{"SKIP_LF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StreamTokenizer, SKIP_LF)},
	{"pushedBack", "Z", nullptr, $PRIVATE, $field(StreamTokenizer, pushedBack)},
	{"forceLower", "Z", nullptr, $PRIVATE, $field(StreamTokenizer, forceLower)},
	{"LINENO", "I", nullptr, $PRIVATE, $field(StreamTokenizer, LINENO)},
	{"eolIsSignificantP", "Z", nullptr, $PRIVATE, $field(StreamTokenizer, eolIsSignificantP)},
	{"slashSlashCommentsP", "Z", nullptr, $PRIVATE, $field(StreamTokenizer, slashSlashCommentsP)},
	{"slashStarCommentsP", "Z", nullptr, $PRIVATE, $field(StreamTokenizer, slashStarCommentsP)},
	{"ctype", "[B", nullptr, $PRIVATE, $field(StreamTokenizer, ctype)},
	{"CT_WHITESPACE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StreamTokenizer, CT_WHITESPACE)},
	{"CT_DIGIT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StreamTokenizer, CT_DIGIT)},
	{"CT_ALPHA", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StreamTokenizer, CT_ALPHA)},
	{"CT_QUOTE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StreamTokenizer, CT_QUOTE)},
	{"CT_COMMENT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StreamTokenizer, CT_COMMENT)},
	{"ttype", "I", nullptr, $PUBLIC, $field(StreamTokenizer, ttype)},
	{"TT_EOF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StreamTokenizer, TT_EOF)},
	{"TT_EOL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StreamTokenizer, TT_EOL)},
	{"TT_NUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StreamTokenizer, TT_NUMBER)},
	{"TT_WORD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StreamTokenizer, TT_WORD)},
	{"TT_NOTHING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StreamTokenizer, TT_NOTHING)},
	{"sval", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StreamTokenizer, sval)},
	{"nval", "D", nullptr, $PUBLIC, $field(StreamTokenizer, nval)},
	{}
};

$MethodInfo _StreamTokenizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(StreamTokenizer::*)()>(&StreamTokenizer::init$))},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(StreamTokenizer::*)($InputStream*)>(&StreamTokenizer::init$)), nullptr, nullptr, _StreamTokenizer_MethodAnnotations_init$1},
	{"<init>", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamTokenizer::*)($Reader*)>(&StreamTokenizer::init$))},
	{"commentChar", "(I)V", nullptr, $PUBLIC},
	{"eolIsSignificant", "(Z)V", nullptr, $PUBLIC},
	{"lineno", "()I", nullptr, $PUBLIC},
	{"lowerCaseMode", "(Z)V", nullptr, $PUBLIC},
	{"nextToken", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ordinaryChar", "(I)V", nullptr, $PUBLIC},
	{"ordinaryChars", "(II)V", nullptr, $PUBLIC},
	{"parseNumbers", "()V", nullptr, $PUBLIC},
	{"pushBack", "()V", nullptr, $PUBLIC},
	{"quoteChar", "(I)V", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(StreamTokenizer::*)()>(&StreamTokenizer::read)), "java.io.IOException"},
	{"resetSyntax", "()V", nullptr, $PUBLIC},
	{"slashSlashComments", "(Z)V", nullptr, $PUBLIC},
	{"slashStarComments", "(Z)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"whitespaceChars", "(II)V", nullptr, $PUBLIC},
	{"wordChars", "(II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StreamTokenizer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.StreamTokenizer",
	"java.lang.Object",
	nullptr,
	_StreamTokenizer_FieldInfo_,
	_StreamTokenizer_MethodInfo_
};

$Object* allocate$StreamTokenizer($Class* clazz) {
	return $of($alloc(StreamTokenizer));
}

void StreamTokenizer::init$() {
	$set(this, reader, nullptr);
	$set(this, input, nullptr);
	$set(this, buf, $new($chars, 20));
	this->peekc = StreamTokenizer::NEED_CHAR;
	this->LINENO = 1;
	this->eolIsSignificantP = false;
	this->slashSlashCommentsP = false;
	this->slashStarCommentsP = false;
	$set(this, ctype, $new($bytes, 256));
	this->ttype = StreamTokenizer::TT_NOTHING;
	wordChars(u'a', u'z');
	wordChars(u'A', u'Z');
	wordChars(128 + 32, 255);
	whitespaceChars(0, u' ');
	commentChar(u'/');
	quoteChar(u'\"');
	quoteChar(u'\'');
	parseNumbers();
}

void StreamTokenizer::init$($InputStream* is) {
	StreamTokenizer::init$();
	if (is == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, input, is);
}

void StreamTokenizer::init$($Reader* r) {
	StreamTokenizer::init$();
	if (r == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, reader, r);
}

void StreamTokenizer::resetSyntax() {
	for (int32_t i = $nc(this->ctype)->length; --i >= 0;) {
		$nc(this->ctype)->set(i, (int8_t)0);
	}
}

void StreamTokenizer::wordChars(int32_t low, int32_t hi) {
	if (low < 0) {
		low = 0;
	}
	if (hi >= $nc(this->ctype)->length) {
		hi = $nc(this->ctype)->length - 1;
	}
	while (low <= hi) {
		(*$nc(this->ctype))[low++] |= StreamTokenizer::CT_ALPHA;
	}
}

void StreamTokenizer::whitespaceChars(int32_t low, int32_t hi) {
	if (low < 0) {
		low = 0;
	}
	if (hi >= $nc(this->ctype)->length) {
		hi = $nc(this->ctype)->length - 1;
	}
	while (low <= hi) {
		$nc(this->ctype)->set(low++, StreamTokenizer::CT_WHITESPACE);
	}
}

void StreamTokenizer::ordinaryChars(int32_t low, int32_t hi) {
	if (low < 0) {
		low = 0;
	}
	if (hi >= $nc(this->ctype)->length) {
		hi = $nc(this->ctype)->length - 1;
	}
	while (low <= hi) {
		$nc(this->ctype)->set(low++, (int8_t)0);
	}
}

void StreamTokenizer::ordinaryChar(int32_t ch) {
	if (ch >= 0 && ch < $nc(this->ctype)->length) {
		$nc(this->ctype)->set(ch, (int8_t)0);
	}
}

void StreamTokenizer::commentChar(int32_t ch) {
	if (ch >= 0 && ch < $nc(this->ctype)->length) {
		$nc(this->ctype)->set(ch, StreamTokenizer::CT_COMMENT);
	}
}

void StreamTokenizer::quoteChar(int32_t ch) {
	if (ch >= 0 && ch < $nc(this->ctype)->length) {
		$nc(this->ctype)->set(ch, StreamTokenizer::CT_QUOTE);
	}
}

void StreamTokenizer::parseNumbers() {
	for (int32_t i = u'0'; i <= u'9'; ++i) {
		(*$nc(this->ctype))[i] |= StreamTokenizer::CT_DIGIT;
	}
	(*$nc(this->ctype))[u'.'] |= StreamTokenizer::CT_DIGIT;
	(*$nc(this->ctype))[u'-'] |= StreamTokenizer::CT_DIGIT;
}

void StreamTokenizer::eolIsSignificant(bool flag) {
	this->eolIsSignificantP = flag;
}

void StreamTokenizer::slashStarComments(bool flag) {
	this->slashStarCommentsP = flag;
}

void StreamTokenizer::slashSlashComments(bool flag) {
	this->slashSlashCommentsP = flag;
}

void StreamTokenizer::lowerCaseMode(bool fl) {
	this->forceLower = fl;
}

int32_t StreamTokenizer::read() {
	if (this->reader != nullptr) {
		return $nc(this->reader)->read();
	} else if (this->input != nullptr) {
		return $nc(this->input)->read();
	} else {
		$throwNew($IllegalStateException);
	}
}

int32_t StreamTokenizer::nextToken() {
	if (this->pushedBack) {
		this->pushedBack = false;
		return this->ttype;
	}
	$var($bytes, ct, this->ctype);
	$set(this, sval, nullptr);
	int32_t c = this->peekc;
	if (c < 0) {
		c = StreamTokenizer::NEED_CHAR;
	}
	if (c == StreamTokenizer::SKIP_LF) {
		c = read();
		if (c < 0) {
			return this->ttype = StreamTokenizer::TT_EOF;
		}
		if (c == u'\n') {
			c = StreamTokenizer::NEED_CHAR;
		}
	}
	if (c == StreamTokenizer::NEED_CHAR) {
		c = read();
		if (c < 0) {
			return this->ttype = StreamTokenizer::TT_EOF;
		}
	}
	this->ttype = c;
	this->peekc = StreamTokenizer::NEED_CHAR;
	int32_t ctype = c < 256 ? $nc(ct)->get(c) : StreamTokenizer::CT_ALPHA;
	while (((int32_t)(ctype & (uint32_t)(int32_t)StreamTokenizer::CT_WHITESPACE)) != 0) {
		if (c == u'\r') {
			++this->LINENO;
			if (this->eolIsSignificantP) {
				this->peekc = StreamTokenizer::SKIP_LF;
				return this->ttype = StreamTokenizer::TT_EOL;
			}
			c = read();
			if (c == u'\n') {
				c = read();
			}
		} else {
			if (c == u'\n') {
				++this->LINENO;
				if (this->eolIsSignificantP) {
					return this->ttype = StreamTokenizer::TT_EOL;
				}
			}
			c = read();
		}
		if (c < 0) {
			return this->ttype = StreamTokenizer::TT_EOF;
		}
		ctype = c < 256 ? ct->get(c) : StreamTokenizer::CT_ALPHA;
	}
	if (((int32_t)(ctype & (uint32_t)(int32_t)StreamTokenizer::CT_DIGIT)) != 0) {
		bool neg = false;
		if (c == u'-') {
			c = read();
			if (c != u'.' && (c < u'0' || c > u'9')) {
				this->peekc = c;
				return this->ttype = u'-';
			}
			neg = true;
		}
		double v = (double)0;
		int32_t decexp = 0;
		int32_t seendot = 0;
		while (true) {
			if (c == u'.' && seendot == 0) {
				seendot = 1;
			} else if (u'0' <= c && c <= u'9') {
				v = v * 10 + (c - u'0');
				decexp += seendot;
			} else {
				break;
			}
			c = read();
		}
		this->peekc = c;
		if (decexp != 0) {
			double denom = (double)10;
			--decexp;
			while (decexp > 0) {
				denom *= 10;
				--decexp;
			}
			v = v / denom;
		}
		this->nval = neg ? -v : v;
		return this->ttype = StreamTokenizer::TT_NUMBER;
	}
	if (((int32_t)(ctype & (uint32_t)(int32_t)StreamTokenizer::CT_ALPHA)) != 0) {
		int32_t i = 0;
		do {
			if (i >= $nc(this->buf)->length) {
				$set(this, buf, $Arrays::copyOf(this->buf, $nc(this->buf)->length * 2));
			}
			$nc(this->buf)->set(i++, (char16_t)c);
			c = read();
			ctype = c < 0 ? StreamTokenizer::CT_WHITESPACE : c < 256 ? ct->get(c) : StreamTokenizer::CT_ALPHA;
		} while (((int32_t)(ctype & (uint32_t)(StreamTokenizer::CT_ALPHA | StreamTokenizer::CT_DIGIT))) != 0);
		this->peekc = c;
		$set(this, sval, $String::copyValueOf(this->buf, 0, i));
		if (this->forceLower) {
			$set(this, sval, $nc(this->sval)->toLowerCase());
		}
		return this->ttype = StreamTokenizer::TT_WORD;
	}
	if (((int32_t)(ctype & (uint32_t)(int32_t)StreamTokenizer::CT_QUOTE)) != 0) {
		this->ttype = c;
		int32_t i = 0;
		int32_t d = read();
		while (d >= 0 && d != this->ttype && d != u'\n' && d != u'\r') {
			if (d == u'\\') {
				c = read();
				int32_t first = c;
				if (c >= u'0' && c <= u'7') {
					c = c - u'0';
					int32_t c2 = read();
					if (u'0' <= c2 && c2 <= u'7') {
						c = (c << 3) + (c2 - u'0');
						c2 = read();
						if (u'0' <= c2 && c2 <= u'7' && first <= u'3') {
							c = (c << 3) + (c2 - u'0');
							d = read();
						} else {
							d = c2;
						}
					} else {
						d = c2;
					}
				} else {

					int32_t var$0 = 0;
					switch (c) {
					case u'a':
						{
							var$0 = 7;
							break;
						}
					case u'b':
						{
							var$0 = u'\b';
							break;
						}
					case u'f':
						{
							var$0 = 12;
							break;
						}
					case u'n':
						{
							var$0 = u'\n';
							break;
						}
					case u'r':
						{
							var$0 = u'\r';
							break;
						}
					case u't':
						{
							var$0 = u'\t';
							break;
						}
					case u'v':
						{
							var$0 = 11;
							break;
						}
					default:
						{
							var$0 = c;
							break;
						}
					}
					c = var$0;
					d = read();
				}
			} else {
				c = d;
				d = read();
			}
			if (i >= $nc(this->buf)->length) {
				$set(this, buf, $Arrays::copyOf(this->buf, $nc(this->buf)->length * 2));
			}
			$nc(this->buf)->set(i++, (char16_t)c);
		}
		this->peekc = (d == this->ttype) ? StreamTokenizer::NEED_CHAR : d;
		$set(this, sval, $String::copyValueOf(this->buf, 0, i));
		return this->ttype;
	}
	if (c == u'/' && (this->slashSlashCommentsP || this->slashStarCommentsP)) {
		c = read();
		if (c == u'*' && this->slashStarCommentsP) {
			int32_t prevc = 0;
			while ((c = read()) != u'/' || prevc != u'*') {
				if (c == u'\r') {
					++this->LINENO;
					c = read();
					if (c == u'\n') {
						c = read();
					}
				} else if (c == u'\n') {
					++this->LINENO;
					c = read();
				}
				if (c < 0) {
					return this->ttype = StreamTokenizer::TT_EOF;
				}
				prevc = c;
			}
			return nextToken();
		} else if (c == u'/' && this->slashSlashCommentsP) {
			while ((c = read()) != u'\n' && c != u'\r' && c >= 0) {
			}
			this->peekc = c;
			return nextToken();
		} else if (((int32_t)(ct->get(u'/') & (uint32_t)(int32_t)StreamTokenizer::CT_COMMENT)) != 0) {
			while ((c = read()) != u'\n' && c != u'\r' && c >= 0) {
			}
			this->peekc = c;
			return nextToken();
		} else {
			this->peekc = c;
			return this->ttype = u'/';
		}
	}
	if (((int32_t)(ctype & (uint32_t)(int32_t)StreamTokenizer::CT_COMMENT)) != 0) {
		while ((c = read()) != u'\n' && c != u'\r' && c >= 0) {
		}
		this->peekc = c;
		return nextToken();
	}
	return this->ttype = c;
}

void StreamTokenizer::pushBack() {
	if (this->ttype != StreamTokenizer::TT_NOTHING) {
		this->pushedBack = true;
	}
}

int32_t StreamTokenizer::lineno() {
	return this->LINENO;
}

$String* StreamTokenizer::toString() {
	$useLocalCurrentObjectStackCache();

	$var($String, var$0, nullptr)
	switch (this->ttype) {
	case StreamTokenizer::TT_EOF:
		{
			$assign(var$0, "EOF"_s);
			break;
		}
	case StreamTokenizer::TT_EOL:
		{
			$assign(var$0, "EOL"_s);
			break;
		}
	case StreamTokenizer::TT_WORD:
		{
			$assign(var$0, this->sval);
			break;
		}
	case StreamTokenizer::TT_NUMBER:
		{
			$assign(var$0, $str({"n="_s, $$str(this->nval)}));
			break;
		}
	case StreamTokenizer::TT_NOTHING:
		{
			$assign(var$0, "NOTHING"_s);
			break;
		}
	default:
		{
			{
				if (this->ttype < 256 && (((int32_t)($nc(this->ctype)->get(this->ttype) & (uint32_t)(int32_t)StreamTokenizer::CT_QUOTE)) != 0)) {
					$assign(var$0, this->sval);
					break;
				}
				$var($chars, s, $new($chars, 3));
				s->set(0, s->set(2, u'\''));
				s->set(1, (char16_t)this->ttype);
				$assign(var$0, $new($String, s));
				break;
			}
		}
	}
	$var($String, ret, var$0);
	return $str({"Token["_s, ret, "], line "_s, $$str(this->LINENO)});
}

StreamTokenizer::StreamTokenizer() {
}

$Class* StreamTokenizer::load$($String* name, bool initialize) {
	$loadClass(StreamTokenizer, name, initialize, &_StreamTokenizer_ClassInfo_, allocate$StreamTokenizer);
	return class$;
}

$Class* StreamTokenizer::class$ = nullptr;

	} // io
} // java