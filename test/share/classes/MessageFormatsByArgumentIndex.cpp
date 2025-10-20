#include <MessageFormatsByArgumentIndex.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ChoiceFormat.h>
#include <java/text/Format.h>
#include <java/text/MessageFormat.h>
#include <java/text/NumberFormat.h>
#include <jcpp.h>

using $FormatArray = $Array<::java::text::Format>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ChoiceFormat = ::java::text::ChoiceFormat;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $NumberFormat = ::java::text::NumberFormat;

$FieldInfo _MessageFormatsByArgumentIndex_FieldInfo_[] = {
	{"choicePattern", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(MessageFormatsByArgumentIndex, choicePattern)},
	{}
};

$MethodInfo _MessageFormatsByArgumentIndex_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MessageFormatsByArgumentIndex::*)()>(&MessageFormatsByArgumentIndex::init$))},
	{"checkPattern", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&MessageFormatsByArgumentIndex::checkPattern))},
	{"checkSubformat", "([Ljava/text/Format;ILjava/text/Format;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($FormatArray*,int32_t,$Format*)>(&MessageFormatsByArgumentIndex::checkSubformat))},
	{"checkSubformatLength", "([Ljava/text/Format;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($FormatArray*,int32_t)>(&MessageFormatsByArgumentIndex::checkSubformatLength))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MessageFormatsByArgumentIndex::main))},
	{}
};

$ClassInfo _MessageFormatsByArgumentIndex_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MessageFormatsByArgumentIndex",
	"java.lang.Object",
	nullptr,
	_MessageFormatsByArgumentIndex_FieldInfo_,
	_MessageFormatsByArgumentIndex_MethodInfo_
};

$Object* allocate$MessageFormatsByArgumentIndex($Class* clazz) {
	return $of($alloc(MessageFormatsByArgumentIndex));
}

$String* MessageFormatsByArgumentIndex::choicePattern = nullptr;

void MessageFormatsByArgumentIndex::init$() {
}

void MessageFormatsByArgumentIndex::main($StringArray* args) {
	$init(MessageFormatsByArgumentIndex);
	$useLocalCurrentObjectStackCache();
	$var($FormatArray, subformats, nullptr);
	$var($MessageFormat, format, $new($MessageFormat, $$str({"{3, choice,"_s, MessageFormatsByArgumentIndex::choicePattern, "}, {2}, {0}"_s})));
	$assign(subformats, format->getFormatsByArgumentIndex());
	checkSubformatLength(subformats, 4);
	checkSubformat(subformats, 0, nullptr);
	checkSubformat(subformats, 1, nullptr);
	checkSubformat(subformats, 2, nullptr);
	checkSubformat(subformats, 3, $$new($ChoiceFormat, MessageFormatsByArgumentIndex::choicePattern));
	$assign(subformats, format->getFormats());
	checkSubformatLength(subformats, 3);
	checkSubformat(subformats, 0, $$new($ChoiceFormat, MessageFormatsByArgumentIndex::choicePattern));
	checkSubformat(subformats, 1, nullptr);
	checkSubformat(subformats, 2, nullptr);
	format->setFormatByArgumentIndex(0, $($NumberFormat::getInstance()));
	checkPattern($(format->toPattern()), $$str({"{3,choice,"_s, MessageFormatsByArgumentIndex::choicePattern, "}, {2}, {0,number}"_s}));
	$assign(subformats, format->getFormatsByArgumentIndex());
	checkSubformatLength(subformats, 4);
	checkSubformat(subformats, 0, $($NumberFormat::getInstance()));
	checkSubformat(subformats, 1, nullptr);
	checkSubformat(subformats, 2, nullptr);
	checkSubformat(subformats, 3, $$new($ChoiceFormat, MessageFormatsByArgumentIndex::choicePattern));
	$assign(subformats, format->getFormats());
	checkSubformatLength(subformats, 3);
	checkSubformat(subformats, 0, $$new($ChoiceFormat, MessageFormatsByArgumentIndex::choicePattern));
	checkSubformat(subformats, 1, nullptr);
	checkSubformat(subformats, 2, $($NumberFormat::getInstance()));
	format->setFormatsByArgumentIndex(subformats);
	checkPattern($(format->toPattern()), $$str({"{3,choice,"_s, MessageFormatsByArgumentIndex::choicePattern, "}, {2,number}, {0,choice,"_s, MessageFormatsByArgumentIndex::choicePattern, "}"_s}));
	$assign(subformats, format->getFormatsByArgumentIndex());
	checkSubformatLength(subformats, 4);
	checkSubformat(subformats, 0, $$new($ChoiceFormat, MessageFormatsByArgumentIndex::choicePattern));
	checkSubformat(subformats, 1, nullptr);
	checkSubformat(subformats, 2, $($NumberFormat::getInstance()));
	checkSubformat(subformats, 3, $$new($ChoiceFormat, MessageFormatsByArgumentIndex::choicePattern));
	$assign(subformats, format->getFormats());
	checkSubformatLength(subformats, 3);
	checkSubformat(subformats, 0, $$new($ChoiceFormat, MessageFormatsByArgumentIndex::choicePattern));
	checkSubformat(subformats, 1, $($NumberFormat::getInstance()));
	checkSubformat(subformats, 2, $$new($ChoiceFormat, MessageFormatsByArgumentIndex::choicePattern));
}

void MessageFormatsByArgumentIndex::checkPattern($String* actual, $String* expected) {
	$init(MessageFormatsByArgumentIndex);
	if (!$nc(expected)->equals(actual)) {
		$throwNew($RuntimeException, $$str({"unexpected pattern:\n expected: "_s, expected, "\n   actual: "_s, actual}));
	}
}

void MessageFormatsByArgumentIndex::checkSubformatLength($FormatArray* subformats, int32_t expected) {
	$init(MessageFormatsByArgumentIndex);
	$useLocalCurrentObjectStackCache();
	if ($nc(subformats)->length != expected) {
		$throwNew($RuntimeException, $$str({"unexpected subformat length:\n expected: "_s, $$str(expected), "\n   actual: "_s, $$str(subformats->length)}));
	}
}

void MessageFormatsByArgumentIndex::checkSubformat($FormatArray* subformats, int32_t index, $Format* expected) {
	$init(MessageFormatsByArgumentIndex);
	$useLocalCurrentObjectStackCache();
	$var($Format, subformat, $nc(subformats)->get(index));
	if (subformat == expected) {
		return;
	}
	if ((subformat != nullptr) && $of(subformat)->equals(expected)) {
		return;
	}
	$throwNew($RuntimeException, $$str({"found unexpected subformat for argument "_s, $$str(index), ":\n expected: "_s, expected, "\n   actual: "_s, subformat}));
}

void clinit$MessageFormatsByArgumentIndex($Class* class$) {
	$assignStatic(MessageFormatsByArgumentIndex::choicePattern, "0.0#are no files|1.0#is one file|1.0<are {0,number,integer} files"_s);
}

MessageFormatsByArgumentIndex::MessageFormatsByArgumentIndex() {
}

$Class* MessageFormatsByArgumentIndex::load$($String* name, bool initialize) {
	$loadClass(MessageFormatsByArgumentIndex, name, initialize, &_MessageFormatsByArgumentIndex_ClassInfo_, clinit$MessageFormatsByArgumentIndex, allocate$MessageFormatsByArgumentIndex);
	return class$;
}

$Class* MessageFormatsByArgumentIndex::class$ = nullptr;