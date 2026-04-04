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
using $MessageFormat = ::java::text::MessageFormat;
using $Resources = ::sun::security::util::Resources;
using $ResourcesMgr = ::sun::security::util::ResourcesMgr;

namespace sun {
	namespace security {
		namespace util {

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
	$useLocalObjectStack();
	$var($String, value, LocalizedMessage::RESOURCES->getString(key));
	if (arguments == nullptr || arguments->length == 0) {
		return value;
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	int32_t nextBraceIndex = 0;
	while ((nextBraceIndex = $nc(value)->indexOf(u'{')) >= 0) {
		$var($String, firstPart, value->substring(0, nextBraceIndex));
		sb->append(firstPart);
		$assign(value, value->substring(nextBraceIndex + 1));
		nextBraceIndex = value->indexOf(u'}');
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
	$useLocalObjectStack();
	$var($String, value, $ResourcesMgr::getString(key));
	if (arguments == nullptr) {
		return value;
	}
	$var($MessageFormat, form, $new($MessageFormat, value));
	return form->format(arguments);
}

void LocalizedMessage::clinit$($Class* clazz) {
	$assignStatic(LocalizedMessage::RESOURCES, $new($Resources));
}

LocalizedMessage::LocalizedMessage() {
}

$Class* LocalizedMessage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RESOURCES", "Lsun/security/util/Resources;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LocalizedMessage, RESOURCES)},
		{"key", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LocalizedMessage, key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LocalizedMessage, init$, void, $String*)},
		{"formatLocalized", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(LocalizedMessage, formatLocalized, $String*, $ObjectArray*)},
		{"formatNonlocalized", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(LocalizedMessage, formatNonlocalized, $String*, $ObjectArray*)},
		{"getLocalized", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(LocalizedMessage, getLocalized, $String*, $String*, $ObjectArray*)},
		{"getNonlocalized", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(LocalizedMessage, getNonlocalized, $String*, $String*, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.LocalizedMessage",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LocalizedMessage, name, initialize, &classInfo$$, LocalizedMessage::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LocalizedMessage);
	});
	return class$;
}

$Class* LocalizedMessage::class$ = nullptr;

		} // util
	} // security
} // sun