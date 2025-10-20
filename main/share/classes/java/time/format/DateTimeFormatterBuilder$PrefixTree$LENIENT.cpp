#include <java/time/format/DateTimeFormatterBuilder$PrefixTree$LENIENT.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParsePosition.h>
#include <java/time/format/DateTimeFormatterBuilder$PrefixTree$CI.h>
#include <java/time/format/DateTimeFormatterBuilder$PrefixTree.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParsePosition = ::java::text::ParsePosition;
using $DateTimeFormatterBuilder$PrefixTree = ::java::time::format::DateTimeFormatterBuilder$PrefixTree;
using $DateTimeFormatterBuilder$PrefixTree$CI = ::java::time::format::DateTimeFormatterBuilder$PrefixTree$CI;

namespace java {
	namespace time {
		namespace format {

$MethodInfo _DateTimeFormatterBuilder$PrefixTree$LENIENT_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;)V", nullptr, $PRIVATE, $method(static_cast<void(DateTimeFormatterBuilder$PrefixTree$LENIENT::*)($String*,$String*,$DateTimeFormatterBuilder$PrefixTree*)>(&DateTimeFormatterBuilder$PrefixTree$LENIENT::init$))},
	{"isLenientChar", "(C)Z", nullptr, $PRIVATE, $method(static_cast<bool(DateTimeFormatterBuilder$PrefixTree$LENIENT::*)(char16_t)>(&DateTimeFormatterBuilder$PrefixTree$LENIENT::isLenientChar))},
	{"match", "(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"newNode", "(Ljava/lang/String;Ljava/lang/String;Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;)Ljava/time/format/DateTimeFormatterBuilder$PrefixTree$CI;", nullptr, $PROTECTED},
	{"toKey", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$PrefixTree$LENIENT_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$PrefixTree", "java.time.format.DateTimeFormatterBuilder", "PrefixTree", $STATIC},
	{"java.time.format.DateTimeFormatterBuilder$PrefixTree$LENIENT", "java.time.format.DateTimeFormatterBuilder$PrefixTree", "LENIENT", $PRIVATE | $STATIC},
	{"java.time.format.DateTimeFormatterBuilder$PrefixTree$CI", "java.time.format.DateTimeFormatterBuilder$PrefixTree", "CI", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$PrefixTree$LENIENT_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$PrefixTree$LENIENT",
	"java.time.format.DateTimeFormatterBuilder$PrefixTree$CI",
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$PrefixTree$LENIENT_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$PrefixTree$LENIENT_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$PrefixTree$LENIENT($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$PrefixTree$LENIENT));
}

void DateTimeFormatterBuilder$PrefixTree$LENIENT::init$($String* k, $String* v, $DateTimeFormatterBuilder$PrefixTree* child) {
	$DateTimeFormatterBuilder$PrefixTree$CI::init$(k, v, child);
}

$DateTimeFormatterBuilder$PrefixTree$CI* DateTimeFormatterBuilder$PrefixTree$LENIENT::newNode($String* k, $String* v, $DateTimeFormatterBuilder$PrefixTree* child) {
	return $new(DateTimeFormatterBuilder$PrefixTree$LENIENT, k, v, child);
}

bool DateTimeFormatterBuilder$PrefixTree$LENIENT::isLenientChar(char16_t c) {
	return c == u' ' || c == u'_' || c == u'/';
}

$String* DateTimeFormatterBuilder$PrefixTree$LENIENT::toKey($String* k) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(k)->length(); ++i) {
		if (isLenientChar(k->charAt(i))) {
			$var($StringBuilder, sb, $new($StringBuilder, k->length()));
			sb->append(static_cast<$CharSequence*>(k), 0, i);
			++i;
			while (i < k->length()) {
				if (!isLenientChar(k->charAt(i))) {
					sb->append(k->charAt(i));
				}
				++i;
			}
			return sb->toString();
		}
	}
	return k;
}

$String* DateTimeFormatterBuilder$PrefixTree$LENIENT::match($CharSequence* text, $ParsePosition* pos) {
	$useLocalCurrentObjectStackCache();
	int32_t off = $nc(pos)->getIndex();
	int32_t end = $nc(text)->length();
	int32_t len = $nc(this->key)->length();
	int32_t koff = 0;
	while (koff < len && off < end) {
		if (isLenientChar(text->charAt(off))) {
			++off;
			continue;
		}
		char16_t var$0 = $nc(this->key)->charAt(koff++);
		if (!isEqual(var$0, text->charAt(off++))) {
			return nullptr;
		}
	}
	if (koff != len) {
		return nullptr;
	}
	if (this->child != nullptr && off != end) {
		int32_t off0 = off;
		while (off0 < end && isLenientChar(text->charAt(off0))) {
			++off0;
		}
		if (off0 < end) {
			$var($DateTimeFormatterBuilder$PrefixTree, c, this->child);
			do {
				if (isEqual($nc(c)->c0, text->charAt(off0))) {
					pos->setIndex(off0);
					$var($String, found, $nc(c)->match(text, pos));
					if (found != nullptr) {
						return found;
					}
					break;
				}
				$assign(c, $nc(c)->sibling);
			} while (c != nullptr);
		}
	}
	pos->setIndex(off);
	return this->value;
}

DateTimeFormatterBuilder$PrefixTree$LENIENT::DateTimeFormatterBuilder$PrefixTree$LENIENT() {
}

$Class* DateTimeFormatterBuilder$PrefixTree$LENIENT::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$PrefixTree$LENIENT, name, initialize, &_DateTimeFormatterBuilder$PrefixTree$LENIENT_ClassInfo_, allocate$DateTimeFormatterBuilder$PrefixTree$LENIENT);
	return class$;
}

$Class* DateTimeFormatterBuilder$PrefixTree$LENIENT::class$ = nullptr;

		} // format
	} // time
} // java