#include <sun/net/www/HeaderParser.h>

#include <java/util/Iterator.h>
#include <sun/net/www/HeaderParser$ParserIterator.h>
#include <jcpp.h>

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $HeaderParser$ParserIterator = ::sun::net::www::HeaderParser$ParserIterator;

namespace sun {
	namespace net {
		namespace www {

$FieldInfo _HeaderParser_FieldInfo_[] = {
	{"raw", "Ljava/lang/String;", nullptr, 0, $field(HeaderParser, raw)},
	{"tab", "[[Ljava/lang/String;", nullptr, 0, $field(HeaderParser, tab)},
	{"nkeys", "I", nullptr, 0, $field(HeaderParser, nkeys)},
	{"asize", "I", nullptr, 0, $field(HeaderParser, asize)},
	{}
};

$MethodInfo _HeaderParser_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HeaderParser, init$, void, $String*)},
	{"<init>", "()V", nullptr, $PRIVATE, $method(HeaderParser, init$, void)},
	{"findInt", "(Ljava/lang/String;I)I", nullptr, $PUBLIC, $virtualMethod(HeaderParser, findInt, int32_t, $String*, int32_t)},
	{"findKey", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HeaderParser, findKey, $String*, int32_t)},
	{"findValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HeaderParser, findValue, $String*, int32_t)},
	{"findValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HeaderParser, findValue, $String*, $String*)},
	{"findValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HeaderParser, findValue, $String*, $String*, $String*)},
	{"keys", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(HeaderParser, keys, $Iterator*)},
	{"parse", "()V", nullptr, $PRIVATE, $method(HeaderParser, parse, void)},
	{"subsequence", "(II)Lsun/net/www/HeaderParser;", nullptr, $PUBLIC, $virtualMethod(HeaderParser, subsequence, HeaderParser*, int32_t, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HeaderParser, toString, $String*)},
	{"values", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(HeaderParser, values, $Iterator*)},
	{}
};

$InnerClassInfo _HeaderParser_InnerClassesInfo_[] = {
	{"sun.net.www.HeaderParser$ParserIterator", "sun.net.www.HeaderParser", "ParserIterator", 0},
	{}
};

$ClassInfo _HeaderParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.HeaderParser",
	"java.lang.Object",
	nullptr,
	_HeaderParser_FieldInfo_,
	_HeaderParser_MethodInfo_,
	nullptr,
	nullptr,
	_HeaderParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.www.HeaderParser$ParserIterator"
};

$Object* allocate$HeaderParser($Class* clazz) {
	return $of($alloc(HeaderParser));
}

void HeaderParser::init$($String* raw) {
	this->asize = 10;
	$set(this, raw, raw);
	$set(this, tab, $new($StringArray2, this->asize, 2));
	parse();
}

void HeaderParser::init$() {
	this->asize = 10;
}

HeaderParser* HeaderParser::subsequence(int32_t start, int32_t end) {
	if (start == 0 && end == this->nkeys) {
		return this;
	}
	if (start < 0 || start >= end || end > this->nkeys) {
		$throwNew($IllegalArgumentException, "invalid start or end"_s);
	}
	$var(HeaderParser, n, $new(HeaderParser));
	$set(n, tab, $new($StringArray2, this->asize, 2));
	n->asize = this->asize;
	$System::arraycopy(this->tab, start, n->tab, 0, (end - start));
	n->nkeys = (end - start);
	return n;
}

void HeaderParser::parse() {
	$useLocalCurrentObjectStackCache();
	if (this->raw != nullptr) {
		$set(this, raw, $nc(this->raw)->trim());
		$var($chars, ca, $nc(this->raw)->toCharArray());
		int32_t beg = 0;
		int32_t end = 0;
		int32_t i = 0;
		bool inKey = true;
		bool inQuote = false;
		int32_t len = ca->length;
		while (end < len) {
			char16_t c = ca->get(end);
			if ((c == u'=') && !inQuote) {
				$nc($nc(this->tab)->get(i))->set(0, $($$new($String, ca, beg, end - beg)->toLowerCase()));
				inKey = false;
				++end;
				beg = end;
			} else if (c == u'\"') {
				if (inQuote) {
					$nc($nc(this->tab)->get(i++))->set(1, $$new($String, ca, beg, end - beg));
					inQuote = false;
					do {
						++end;
					} while (end < len && (ca->get(end) == u' ' || ca->get(end) == u','));
					inKey = true;
					beg = end;
				} else {
					inQuote = true;
					++end;
					beg = end;
				}
			} else if (c == u' ' || c == u',') {
				if (inQuote) {
					++end;
					continue;
				} else if (inKey) {
					$nc($nc(this->tab)->get(i++))->set(0, $(($$new($String, ca, beg, end - beg))->toLowerCase()));
				} else {
					$nc($nc(this->tab)->get(i++))->set(1, ($$new($String, ca, beg, end - beg)));
				}
				while (end < len && (ca->get(end) == u' ' || ca->get(end) == u',')) {
					++end;
				}
				inKey = true;
				beg = end;
			} else {
				++end;
			}
			if (i == this->asize) {
				this->asize = this->asize * 2;
				$var($StringArray2, ntab, $new($StringArray2, this->asize, 2));
				$System::arraycopy(this->tab, 0, ntab, 0, $nc(this->tab)->length);
				$set(this, tab, ntab);
			}
		}
		if (--end > beg) {
			if (!inKey) {
				if (ca->get(end) == u'\"') {
					$nc($nc(this->tab)->get(i++))->set(1, ($$new($String, ca, beg, end - beg)));
				} else {
					$nc($nc(this->tab)->get(i++))->set(1, ($$new($String, ca, beg, end - beg + 1)));
				}
			} else {
				$nc($nc(this->tab)->get(i++))->set(0, $(($$new($String, ca, beg, end - beg + 1))->toLowerCase()));
			}
		} else if (end == beg) {
			if (!inKey) {
				if (ca->get(end) == u'\"') {
					$nc($nc(this->tab)->get(i++))->set(1, $($String::valueOf(ca->get(end - 1))));
				} else {
					$nc($nc(this->tab)->get(i++))->set(1, $($String::valueOf(ca->get(end))));
				}
			} else {
				$nc($nc(this->tab)->get(i++))->set(0, $($($String::valueOf(ca->get(end)))->toLowerCase()));
			}
		}
		this->nkeys = i;
	}
}

$String* HeaderParser::findKey(int32_t i) {
	if (i < 0 || i > this->asize) {
		return nullptr;
	}
	return $nc($nc(this->tab)->get(i))->get(0);
}

$String* HeaderParser::findValue(int32_t i) {
	if (i < 0 || i > this->asize) {
		return nullptr;
	}
	return $nc($nc(this->tab)->get(i))->get(1);
}

$String* HeaderParser::findValue($String* key) {
	return findValue(key, nullptr);
}

$String* HeaderParser::findValue($String* k$renamed, $String* Default) {
	$var($String, k, k$renamed);
	if (k == nullptr) {
		return Default;
	}
	$assign(k, $nc(k)->toLowerCase());
	for (int32_t i = 0; i < this->asize; ++i) {
		if ($nc($nc(this->tab)->get(i))->get(0) == nullptr) {
			return Default;
		} else if (k->equals($nc($nc(this->tab)->get(i))->get(0))) {
			return $nc($nc(this->tab)->get(i))->get(1);
		}
	}
	return Default;
}

$Iterator* HeaderParser::keys() {
	return $new($HeaderParser$ParserIterator, this, false);
}

$Iterator* HeaderParser::values() {
	return $new($HeaderParser$ParserIterator, this, true);
}

$String* HeaderParser::toString() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, k, keys());
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("{size="_s)->append(this->asize)->append(" nkeys="_s)->append(this->nkeys)->append(u' ');
	for (int32_t i = 0; $nc(k)->hasNext(); ++i) {
		$var($String, key, $cast($String, k->next()));
		$var($String, val, findValue(i));
		if (val != nullptr && val->isEmpty()) {
			$assign(val, nullptr);
		}
		sb->append(" {"_s)->append(key)->append(val == nullptr ? ""_s : $$str({","_s, val}))->append(u'}');
		if (k->hasNext()) {
			sb->append(u',');
		}
	}
	sb->append(" }"_s);
	return sb->toString();
}

int32_t HeaderParser::findInt($String* k, int32_t Default) {
	$useLocalCurrentObjectStackCache();
	try {
		return $Integer::parseInt($(findValue(k, $($String::valueOf(Default)))));
	} catch ($Throwable& t) {
		return Default;
	}
	$shouldNotReachHere();
}

HeaderParser::HeaderParser() {
}

$Class* HeaderParser::load$($String* name, bool initialize) {
	$loadClass(HeaderParser, name, initialize, &_HeaderParser_ClassInfo_, allocate$HeaderParser);
	return class$;
}

$Class* HeaderParser::class$ = nullptr;

		} // www
	} // net
} // sun