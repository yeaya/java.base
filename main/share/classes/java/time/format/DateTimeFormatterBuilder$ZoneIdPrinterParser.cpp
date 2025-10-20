#include <java/time/format/DateTimeFormatterBuilder$ZoneIdPrinterParser.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParsePosition.h>
#include <java/time/DateTimeException.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
#include <java/time/format/DateTimeFormatterBuilder$OffsetIdPrinterParser.h>
#include <java/time/format/DateTimeFormatterBuilder$PrefixTree.h>
#include <java/time/format/DateTimeFormatterBuilder$ZoneTextPrinterParser.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/time/zone/ZoneRulesProvider.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef INSTANCE_ID_Z
#undef INSTANCE_ID_ZERO
#undef OFFSET_SECONDS
#undef UTC

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParsePosition = ::java::text::ParsePosition;
using $DateTimeException = ::java::time::DateTimeException;
using $ZoneId = ::java::time::ZoneId;
using $ZoneOffset = ::java::time::ZoneOffset;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $DateTimeFormatterBuilder$DateTimePrinterParser = ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser;
using $DateTimeFormatterBuilder$OffsetIdPrinterParser = ::java::time::format::DateTimeFormatterBuilder$OffsetIdPrinterParser;
using $DateTimeFormatterBuilder$PrefixTree = ::java::time::format::DateTimeFormatterBuilder$PrefixTree;
using $DateTimeFormatterBuilder$ZoneTextPrinterParser = ::java::time::format::DateTimeFormatterBuilder$ZoneTextPrinterParser;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $ZoneRulesProvider = ::java::time::zone::ZoneRulesProvider;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$ZoneIdPrinterParser_FieldInfo_[] = {
	{"query", "Ljava/time/temporal/TemporalQuery;", "Ljava/time/temporal/TemporalQuery<Ljava/time/ZoneId;>;", $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$ZoneIdPrinterParser, query)},
	{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$ZoneIdPrinterParser, description)},
	{"cachedPrefixTree", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<Ljava/lang/Integer;Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(DateTimeFormatterBuilder$ZoneIdPrinterParser, cachedPrefixTree)},
	{"cachedPrefixTreeCI", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<Ljava/lang/Integer;Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(DateTimeFormatterBuilder$ZoneIdPrinterParser, cachedPrefixTreeCI)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$ZoneIdPrinterParser_MethodInfo_[] = {
	{"<init>", "(Ljava/time/temporal/TemporalQuery;Ljava/lang/String;)V", "(Ljava/time/temporal/TemporalQuery<Ljava/time/ZoneId;>;Ljava/lang/String;)V", 0, $method(static_cast<void(DateTimeFormatterBuilder$ZoneIdPrinterParser::*)($TemporalQuery*,$String*)>(&DateTimeFormatterBuilder$ZoneIdPrinterParser::init$))},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC},
	{"getTree", "(Ljava/time/format/DateTimeParseContext;)Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;", nullptr, $PROTECTED},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC},
	{"parseOffsetBased", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;IILjava/time/format/DateTimeFormatterBuilder$OffsetIdPrinterParser;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DateTimeFormatterBuilder$ZoneIdPrinterParser::*)($DateTimeParseContext*,$CharSequence*,int32_t,int32_t,$DateTimeFormatterBuilder$OffsetIdPrinterParser*)>(&DateTimeFormatterBuilder$ZoneIdPrinterParser::parseOffsetBased))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$ZoneIdPrinterParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$ZoneIdPrinterParser", "java.time.format.DateTimeFormatterBuilder", "ZoneIdPrinterParser", $STATIC},
	{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$ZoneIdPrinterParser_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$ZoneIdPrinterParser",
	"java.lang.Object",
	"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
	_DateTimeFormatterBuilder$ZoneIdPrinterParser_FieldInfo_,
	_DateTimeFormatterBuilder$ZoneIdPrinterParser_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$ZoneIdPrinterParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$ZoneIdPrinterParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$ZoneIdPrinterParser));
}


$volatile($Map$Entry*) DateTimeFormatterBuilder$ZoneIdPrinterParser::cachedPrefixTree = nullptr;
$volatile($Map$Entry*) DateTimeFormatterBuilder$ZoneIdPrinterParser::cachedPrefixTreeCI = nullptr;

void DateTimeFormatterBuilder$ZoneIdPrinterParser::init$($TemporalQuery* query, $String* description) {
	$set(this, query, query);
	$set(this, description, description);
}

bool DateTimeFormatterBuilder$ZoneIdPrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$useLocalCurrentObjectStackCache();
	$var($ZoneId, zone, $cast($ZoneId, $nc(context)->getValue(this->query)));
	if (zone == nullptr) {
		return false;
	}
	$nc(buf)->append($($nc(zone)->getId()));
	return true;
}

$DateTimeFormatterBuilder$PrefixTree* DateTimeFormatterBuilder$ZoneIdPrinterParser::getTree($DateTimeParseContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($Set, regionIds, $ZoneRulesProvider::getAvailableZoneIds());
	int32_t regionIdsSize = $nc(regionIds)->size();
	$var($Map$Entry, cached, $nc(context)->isCaseSensitive() ? $cast($Map$Entry, DateTimeFormatterBuilder$ZoneIdPrinterParser::cachedPrefixTree) : $cast($Map$Entry, DateTimeFormatterBuilder$ZoneIdPrinterParser::cachedPrefixTreeCI));
	if (cached == nullptr || $nc(($cast($Integer, $($nc(cached)->getKey()))))->intValue() != regionIdsSize) {
		$synchronized(this) {
			$assign(cached, $nc(context)->isCaseSensitive() ? $cast($Map$Entry, DateTimeFormatterBuilder$ZoneIdPrinterParser::cachedPrefixTree) : $cast($Map$Entry, DateTimeFormatterBuilder$ZoneIdPrinterParser::cachedPrefixTreeCI));
			if (cached == nullptr || $nc(($cast($Integer, $($nc(cached)->getKey()))))->intValue() != regionIdsSize) {
				$var($Object, var$0, $of($Integer::valueOf(regionIdsSize)));
				$assign(cached, $new($AbstractMap$SimpleImmutableEntry, var$0, $($DateTimeFormatterBuilder$PrefixTree::newTree(regionIds, context))));
				if ($nc(context)->isCaseSensitive()) {
					$assignStatic(DateTimeFormatterBuilder$ZoneIdPrinterParser::cachedPrefixTree, cached);
				} else {
					$assignStatic(DateTimeFormatterBuilder$ZoneIdPrinterParser::cachedPrefixTreeCI, cached);
				}
			}
		}
	}
	return $cast($DateTimeFormatterBuilder$PrefixTree, $nc(cached)->getValue());
}

int32_t DateTimeFormatterBuilder$ZoneIdPrinterParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(text)->length();
	if (position > length) {
		$throwNew($IndexOutOfBoundsException);
	}
	if (position == length) {
		return ~position;
	}
	char16_t nextChar = text->charAt(position);
	if (nextChar == u'+' || nextChar == u'-') {
		$init($DateTimeFormatterBuilder$OffsetIdPrinterParser);
		return parseOffsetBased(context, text, position, position, $DateTimeFormatterBuilder$OffsetIdPrinterParser::INSTANCE_ID_Z);
	} else if (length >= position + 2) {
		char16_t nextNextChar = text->charAt(position + 1);
		bool var$0 = $nc(context)->charEquals(nextChar, u'U');
		if (var$0 && context->charEquals(nextNextChar, u'T')) {
			if (length >= position + 3 && context->charEquals(text->charAt(position + 2), u'C')) {
				if (!($instanceOf($DateTimeFormatterBuilder$ZoneTextPrinterParser, this))) {
					$init($DateTimeFormatterBuilder$OffsetIdPrinterParser);
					return parseOffsetBased(context, text, position, position + 3, $DateTimeFormatterBuilder$OffsetIdPrinterParser::INSTANCE_ID_ZERO);
				}
			} else {
				$init($DateTimeFormatterBuilder$OffsetIdPrinterParser);
				return parseOffsetBased(context, text, position, position + 2, $DateTimeFormatterBuilder$OffsetIdPrinterParser::INSTANCE_ID_ZERO);
			}
		} else {
			bool var$4 = context->charEquals(nextChar, u'G') && length >= position + 3;
			bool var$3 = var$4 && context->charEquals(nextNextChar, u'M');
			if (var$3 && context->charEquals(text->charAt(position + 2), u'T')) {
				if (length >= position + 4 && context->charEquals(text->charAt(position + 3), u'0')) {
					context->setParsed($($ZoneId::of("GMT0"_s)));
					return position + 4;
				}
				$init($DateTimeFormatterBuilder$OffsetIdPrinterParser);
				return parseOffsetBased(context, text, position, position + 3, $DateTimeFormatterBuilder$OffsetIdPrinterParser::INSTANCE_ID_ZERO);
			}
		}
	}
	$var($DateTimeFormatterBuilder$PrefixTree, tree, getTree(context));
	$var($ParsePosition, ppos, $new($ParsePosition, position));
	$var($String, parsedZoneId, $nc(tree)->match(text, ppos));
	if (parsedZoneId == nullptr) {
		if ($nc(context)->charEquals(nextChar, u'Z')) {
			$init($ZoneOffset);
			context->setParsed(static_cast<$ZoneId*>($ZoneOffset::UTC));
			return position + 1;
		}
		return ~position;
	}
	$nc(context)->setParsed($($ZoneId::of(parsedZoneId)));
	return ppos->getIndex();
}

int32_t DateTimeFormatterBuilder$ZoneIdPrinterParser::parseOffsetBased($DateTimeParseContext* context, $CharSequence* text, int32_t prefixPos, int32_t position, $DateTimeFormatterBuilder$OffsetIdPrinterParser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, $nc($($nc($($nc(text)->subSequence(prefixPos, position)))->toString()))->toUpperCase());
	if (position >= text->length()) {
		$nc(context)->setParsed($($ZoneId::of(prefix)));
		return position;
	}
	bool var$0 = text->charAt(position) == u'0';
	if (var$0 || $nc(context)->charEquals(text->charAt(position), u'Z')) {
		context->setParsed($($ZoneId::of(prefix)));
		return position;
	}
	$var($DateTimeParseContext, newContext, $nc(context)->copy());
	int32_t endPos = $nc(parser)->parse(newContext, text, position);
	try {
		if (endPos < 0) {
			if (parser == $DateTimeFormatterBuilder$OffsetIdPrinterParser::INSTANCE_ID_Z) {
				return ~prefixPos;
			}
			context->setParsed($($ZoneId::of(prefix)));
			return position;
		}
		$init($ChronoField);
		int32_t offset = (int32_t)$nc($($nc(newContext)->getParsed($ChronoField::OFFSET_SECONDS)))->longValue();
		$var($ZoneOffset, zoneOffset, $ZoneOffset::ofTotalSeconds(offset));
		context->setParsed($($ZoneId::ofOffset(prefix, zoneOffset)));
		return endPos;
	} catch ($DateTimeException&) {
		$var($DateTimeException, dte, $catch());
		return ~prefixPos;
	}
	$shouldNotReachHere();
}

$String* DateTimeFormatterBuilder$ZoneIdPrinterParser::toString() {
	return this->description;
}

DateTimeFormatterBuilder$ZoneIdPrinterParser::DateTimeFormatterBuilder$ZoneIdPrinterParser() {
}

$Class* DateTimeFormatterBuilder$ZoneIdPrinterParser::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$ZoneIdPrinterParser, name, initialize, &_DateTimeFormatterBuilder$ZoneIdPrinterParser_ClassInfo_, allocate$DateTimeFormatterBuilder$ZoneIdPrinterParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$ZoneIdPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java