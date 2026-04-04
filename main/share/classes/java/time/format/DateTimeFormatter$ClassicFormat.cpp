#include <java/time/format/DateTimeFormatter$ClassicFormat.h>
#include <java/lang/Appendable.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringBuffer.h>
#include <java/text/FieldPosition.h>
#include <java/text/Format.h>
#include <java/text/ParseException.h>
#include <java/text/ParsePosition.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimeParseException.h>
#include <java/time/format/ResolverStyle.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $FieldPosition = ::java::text::FieldPosition;
using $Format = ::java::text::Format;
using $ParseException = ::java::text::ParseException;
using $ParsePosition = ::java::text::ParsePosition;
using $DateTimeFormatter = ::java::time::format::DateTimeFormatter;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimeParseException = ::java::time::format::DateTimeParseException;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace format {

void DateTimeFormatter$ClassicFormat::init$($DateTimeFormatter* formatter, $TemporalQuery* parseType) {
	$Format::init$();
	$set(this, formatter, formatter);
	$set(this, parseType, parseType);
}

$StringBuffer* DateTimeFormatter$ClassicFormat::format(Object$* obj, $StringBuffer* toAppendTo, $FieldPosition* pos) {
	$Objects::requireNonNull(obj, "obj"_s);
	$Objects::requireNonNull(toAppendTo, "toAppendTo"_s);
	$Objects::requireNonNull(pos, "pos"_s);
	if (!($instanceOf($TemporalAccessor, obj))) {
		$throwNew($IllegalArgumentException, "Format target must implement TemporalAccessor"_s);
	}
	$nc(pos)->setBeginIndex(0);
	pos->setEndIndex(0);
	try {
		$nc(this->formatter)->formatTo($cast($TemporalAccessor, obj), toAppendTo);
	} catch ($RuntimeException& ex) {
		$throwNew($IllegalArgumentException, $(ex->getMessage()), ex);
	}
	return toAppendTo;
}

$Object* DateTimeFormatter$ClassicFormat::parseObject($String* text) {
	$useLocalObjectStack();
	$Objects::requireNonNull(text, "text"_s);
	try {
		if (this->parseType == nullptr) {
			return $nc(this->formatter)->parseResolved0(text, nullptr);
		}
		return $nc(this->formatter)->parse(text, this->parseType);
	} catch ($DateTimeParseException& ex) {
		$var($String, var$0, ex->getMessage());
		$throwNew($ParseException, var$0, ex->getErrorIndex());
	} catch ($RuntimeException& ex) {
		$throw($$cast($ParseException, $$new($ParseException, $(ex->getMessage()), 0)->initCause(ex)));
	}
	$shouldNotReachHere();
}

$Object* DateTimeFormatter$ClassicFormat::parseObject($String* text, $ParsePosition* pos) {
	$useLocalObjectStack();
	$Objects::requireNonNull(text, "text"_s);
	$var($DateTimeParseContext, context, nullptr);
	try {
		$assign(context, $nc(this->formatter)->parseUnresolved0(text, pos));
	} catch ($IndexOutOfBoundsException& ex) {
		if ($nc(pos)->getErrorIndex() < 0) {
			pos->setErrorIndex(0);
		}
		return nullptr;
	}
	if (context == nullptr) {
		if ($nc(pos)->getErrorIndex() < 0) {
			pos->setErrorIndex(0);
		}
		return nullptr;
	}
	try {
		$var($TemporalAccessor, resolved, $nc(context)->toResolved($nc(this->formatter)->resolverStyle, $nc(this->formatter)->resolverFields));
		if (this->parseType == nullptr) {
			return resolved;
		}
		return $nc(resolved)->query(this->parseType);
	} catch ($RuntimeException& ex) {
		$nc(pos)->setErrorIndex(0);
		return nullptr;
	}
	$shouldNotReachHere();
}

DateTimeFormatter$ClassicFormat::DateTimeFormatter$ClassicFormat() {
}

$Class* DateTimeFormatter$ClassicFormat::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"formatter", "Ljava/time/format/DateTimeFormatter;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatter$ClassicFormat, formatter)},
		{"parseType", "Ljava/time/temporal/TemporalQuery;", "Ljava/time/temporal/TemporalQuery<*>;", $PRIVATE | $FINAL, $field(DateTimeFormatter$ClassicFormat, parseType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/time/format/DateTimeFormatter;Ljava/time/temporal/TemporalQuery;)V", "(Ljava/time/format/DateTimeFormatter;Ljava/time/temporal/TemporalQuery<*>;)V", $PUBLIC, $method(DateTimeFormatter$ClassicFormat, init$, void, $DateTimeFormatter*, $TemporalQuery*)},
		{"format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatter$ClassicFormat, format, $StringBuffer*, Object$*, $StringBuffer*, $FieldPosition*)},
		{"parseObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatter$ClassicFormat, parseObject, $Object*, $String*), "java.text.ParseException"},
		{"parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatter$ClassicFormat, parseObject, $Object*, $String*, $ParsePosition*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.format.DateTimeFormatter$ClassicFormat", "java.time.format.DateTimeFormatter", "ClassicFormat", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.time.format.DateTimeFormatter$ClassicFormat",
		"java.text.Format",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.format.DateTimeFormatter"
	};
	$loadClass(DateTimeFormatter$ClassicFormat, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DateTimeFormatter$ClassicFormat));
	});
	return class$;
}

$Class* DateTimeFormatter$ClassicFormat::class$ = nullptr;

		} // format
	} // time
} // java