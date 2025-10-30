#include <sun/security/util/LocalizedMessage.h>

#include <java/lang/NumberFormatException.h>
#include <java/text/MessageFormat.h>
#include <java/util/ResourceBundle.h>
#include <sun/security/util/Resources.h>
#include <sun/security/util/ResourcesMgr.h>
#include <jcpp.h>

#undef RESOURCES

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Resources = ::sun::security::util::Resources;
using $ResourcesMgr = ::sun::security::util::ResourcesMgr;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _LocalizedMessage_FieldInfo_[] = {
	{"RESOURCES", "Lsun/security/util/Resources;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LocalizedMessage, RESOURCES)},
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LocalizedMessage, key)},
	{}
};

$MethodInfo _LocalizedMessage_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LocalizedMessage::*)($String*)>(&LocalizedMessage::init$))},
	{"formatLocalized", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT},
	{"formatNonlocalized", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT},
	{"getLocalized", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$String*(*)($String*,$ObjectArray*)>(&LocalizedMessage::getLocalized))},
	{"getNonlocalized", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$String*(*)($String*,$ObjectArray*)>(&LocalizedMessage::getNonlocalized))},
	{}
};

$ClassInfo _LocalizedMessage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.LocalizedMessage",
	"java.lang.Object",
	nullptr,
	_LocalizedMessage_FieldInfo_,
	_LocalizedMessage_MethodInfo_
};

$Object* allocate$LocalizedMessage($Class* clazz) {
	return $of($alloc(LocalizedMessage));
}

$Resources* LocalizedMessage::RESOURCES = nullptr;

void LocalizedMessage::init$($String* key) {
	$set(this, key, key);
}

$String* LocalizedMessage::formatLocalized($ObjectArray* arguments) {
	return getLocalized(this->key, arguments);
}

$String* LocalizedMessage::formatNonlocalized($ObjectArray* arguments) {
	return getNonlocalized(this->key, arguments);
}

$String* LocalizedMessage::getNonlocalized($String* key, $ObjectArray* arguments) {
	$init(LocalizedMessage);
	$useLocalCurrentObjectStackCache();
	$var($String, value, $nc(LocalizedMessage::RESOURCES)->getString(key));
	if (arguments == nullptr || $nc(arguments)->length == 0) {
		return value;
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	int32_t nextBraceIndex = 0;
	while ((nextBraceIndex = $nc(value)->indexOf((int32_t)u'{')) >= 0) {
		$var($String, firstPart, value->substring(0, nextBraceIndex));
		sb->append(firstPart);
		$assign(value, value->substring(nextBraceIndex + 1));
		nextBraceIndex = value->indexOf((int32_t)u'}');
		if (nextBraceIndex < 0) {
			$throwNew($RuntimeException, "Unmatched braces"_s);
		}
		$var($String, indexStr, value->substring(0, nextBraceIndex));
		try {
			int32_t index = $Integer::parseInt(indexStr);
			sb->append($nc(arguments)->get(index));
		} catch ($NumberFormatException& e) {
			$throwNew($RuntimeException, $$str({"not an integer: "_s, indexStr}));
		}
		$assign(value, value->substring(nextBraceIndex + 1));
	}
	sb->append(value);
	return sb->toString();
}

$String* LocalizedMessage::getLocalized($String* key, $ObjectArray* arguments) {
	$init(LocalizedMessage);
	$useLocalCurrentObjectStackCache();
	$var($String, value, $ResourcesMgr::getString(key));
	if (arguments == nullptr) {
		return value;
	}
	$var($MessageFormat, form, $new($MessageFormat, value));
	return form->format(arguments);
}

void clinit$LocalizedMessage($Class* class$) {
	$assignStatic(LocalizedMessage::RESOURCES, $new($Resources));
}

LocalizedMessage::LocalizedMessage() {
}

$Class* LocalizedMessage::load$($String* name, bool initialize) {
	$loadClass(LocalizedMessage, name, initialize, &_LocalizedMessage_ClassInfo_, clinit$LocalizedMessage, allocate$LocalizedMessage);
	return class$;
}

$Class* LocalizedMessage::class$ = nullptr;

		} // util
	} // security
} // sun