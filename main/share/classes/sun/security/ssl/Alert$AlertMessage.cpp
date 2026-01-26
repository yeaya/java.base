#include <sun/security/ssl/Alert$AlertMessage.h>

#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert$Level.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef ENGLISH
#undef ILLEGAL_PARAMETER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $Alert = ::sun::security::ssl::Alert;
using $Alert$Level = ::sun::security::ssl::Alert$Level;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Alert$AlertMessage_FieldInfo_[] = {
	{"level", "B", nullptr, $PRIVATE | $FINAL, $field(Alert$AlertMessage, level)},
	{"id", "B", nullptr, $PRIVATE | $FINAL, $field(Alert$AlertMessage, id)},
	{}
};

$MethodInfo _Alert$AlertMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/TransportContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(Alert$AlertMessage, init$, void, $TransportContext*, $ByteBuffer*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Alert$AlertMessage, toString, $String*)},
	{}
};

$InnerClassInfo _Alert$AlertMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.Alert$AlertMessage", "sun.security.ssl.Alert", "AlertMessage", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Alert$AlertMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Alert$AlertMessage",
	"java.lang.Object",
	nullptr,
	_Alert$AlertMessage_FieldInfo_,
	_Alert$AlertMessage_MethodInfo_,
	nullptr,
	nullptr,
	_Alert$AlertMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Alert"
};

$Object* allocate$Alert$AlertMessage($Class* clazz) {
	return $of($alloc(Alert$AlertMessage));
}

void Alert$AlertMessage::init$($TransportContext* context, $ByteBuffer* m) {
	if ($nc(m)->remaining() != 2) {
		$init($Alert);
		$throw($($nc(context)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid Alert message: no sufficient data"_s)));
	}
	this->level = $nc(m)->get();
	this->id = m->get();
}

$String* Alert$AlertMessage::toString() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"Alert\": \'{\'\n  \"level\"      : \"{0}\",\n  \"description\": \"{1}\"\n\'}\'"_s, $Locale::ENGLISH));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($of($Alert$Level::nameOf(this->level))),
		$($of($Alert::nameOf(this->id)))
	}));
	return messageFormat->format(messageFields);
}

Alert$AlertMessage::Alert$AlertMessage() {
}

$Class* Alert$AlertMessage::load$($String* name, bool initialize) {
	$loadClass(Alert$AlertMessage, name, initialize, &_Alert$AlertMessage_ClassInfo_, allocate$Alert$AlertMessage);
	return class$;
}

$Class* Alert$AlertMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun