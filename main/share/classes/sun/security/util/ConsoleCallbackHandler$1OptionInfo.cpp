#include <sun/security/util/ConsoleCallbackHandler$1OptionInfo.h>

#include <sun/security/util/ConsoleCallbackHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConsoleCallbackHandler = ::sun::security::util::ConsoleCallbackHandler;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _ConsoleCallbackHandler$1OptionInfo_FieldInfo_[] = {
	{"this$0", "Lsun/security/util/ConsoleCallbackHandler;", nullptr, $FINAL | $SYNTHETIC, $field(ConsoleCallbackHandler$1OptionInfo, this$0)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(ConsoleCallbackHandler$1OptionInfo, name)},
	{"value", "I", nullptr, 0, $field(ConsoleCallbackHandler$1OptionInfo, value)},
	{}
};

$MethodInfo _ConsoleCallbackHandler$1OptionInfo_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/ConsoleCallbackHandler;Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(ConsoleCallbackHandler$1OptionInfo::*)($ConsoleCallbackHandler*,$String*,int32_t)>(&ConsoleCallbackHandler$1OptionInfo::init$))},
	{}
};

$EnclosingMethodInfo _ConsoleCallbackHandler$1OptionInfo_EnclosingMethodInfo_ = {
	"sun.security.util.ConsoleCallbackHandler",
	"doConfirmation",
	"(Ljavax/security/auth/callback/ConfirmationCallback;)V"
};

$InnerClassInfo _ConsoleCallbackHandler$1OptionInfo_InnerClassesInfo_[] = {
	{"sun.security.util.ConsoleCallbackHandler$1OptionInfo", nullptr, "OptionInfo", 0},
	{}
};

$ClassInfo _ConsoleCallbackHandler$1OptionInfo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.ConsoleCallbackHandler$1OptionInfo",
	"java.lang.Object",
	nullptr,
	_ConsoleCallbackHandler$1OptionInfo_FieldInfo_,
	_ConsoleCallbackHandler$1OptionInfo_MethodInfo_,
	nullptr,
	&_ConsoleCallbackHandler$1OptionInfo_EnclosingMethodInfo_,
	_ConsoleCallbackHandler$1OptionInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.ConsoleCallbackHandler"
};

$Object* allocate$ConsoleCallbackHandler$1OptionInfo($Class* clazz) {
	return $of($alloc(ConsoleCallbackHandler$1OptionInfo));
}

void ConsoleCallbackHandler$1OptionInfo::init$($ConsoleCallbackHandler* this$0, $String* name, int32_t value) {
	$set(this, this$0, this$0);
	$set(this, name, name);
	this->value = value;
}

ConsoleCallbackHandler$1OptionInfo::ConsoleCallbackHandler$1OptionInfo() {
}

$Class* ConsoleCallbackHandler$1OptionInfo::load$($String* name, bool initialize) {
	$loadClass(ConsoleCallbackHandler$1OptionInfo, name, initialize, &_ConsoleCallbackHandler$1OptionInfo_ClassInfo_, allocate$ConsoleCallbackHandler$1OptionInfo);
	return class$;
}

$Class* ConsoleCallbackHandler$1OptionInfo::class$ = nullptr;

		} // util
	} // security
} // sun