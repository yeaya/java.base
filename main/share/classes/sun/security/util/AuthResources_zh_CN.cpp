#include <sun/security/util/AuthResources_zh_CN.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _AuthResources_zh_CN_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_zh_CN, contents)},
	{}
};

$MethodInfo _AuthResources_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuthResources_zh_CN::*)()>(&AuthResources_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthResources_zh_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_zh_CN_FieldInfo_,
	_AuthResources_zh_CN_MethodInfo_
};

$Object* allocate$AuthResources_zh_CN($Class* clazz) {
	return $of($alloc(AuthResources_zh_CN));
}

$ObjectArray2* AuthResources_zh_CN::contents = nullptr;

void AuthResources_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_zh_CN::getContents() {
	return AuthResources_zh_CN::contents;
}

void clinit$AuthResources_zh_CN($Class* class$) {
	$assignStatic(AuthResources_zh_CN::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of(u"\u65e0\u6548\u7684\u7a7a\u8f93\u5165: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTDomainPrincipal.name"_s),
			$of("NTDomainPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTNumericCredential.name"_s),
			$of("NTNumericCredential: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.NTSid.value"_s),
			$of(u"\u65e0\u6548\u7684 NTSid \u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSid.name"_s),
			$of("NTSid: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidDomainPrincipal.name"_s),
			$of("NTSidDomainPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidGroupPrincipal.name"_s),
			$of("NTSidGroupPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidPrimaryGroupPrincipal.name"_s),
			$of("NTSidPrimaryGroupPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidUserPrincipal.name"_s),
			$of("NTSidUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTUserPrincipal.name"_s),
			$of("NTUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Primary.Group.name"_s),
			$of(u"UnixNumericGroupPrincipal [\u4e3b\u7ec4]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of(u"UnixNumericGroupPrincipal [\u8865\u5145\u7ec4]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericUserPrincipal.name"_s),
			$of("UnixNumericUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixPrincipal.name"_s),
			$of("UnixPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Unable.to.properly.expand.config"_s),
			$of(u"\u65e0\u6cd5\u6b63\u786e\u6269\u5c55{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of(u"{0} (\u6ca1\u6709\u8fd9\u6837\u7684\u6587\u4ef6\u6216\u76ee\u5f55)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of(u"\u914d\u7f6e\u9519\u8bef:\n\t\u6ca1\u6709\u6b64\u6587\u4ef6\u6216\u76ee\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of(u"\u914d\u7f6e\u9519\u8bef: \n\t\u65e0\u6548\u7684\u63a7\u5236\u6807\u8bb0, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of(u"\u914d\u7f6e\u9519\u8bef:\n\t\u65e0\u6cd5\u6307\u5b9a{0}\u7684\u591a\u4e2a\u6761\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of(u"\u914d\u7f6e\u9519\u8bef: \n\t\u5e94\u4e3a [{0}], \u8bfb\u53d6\u7684\u662f [\u6587\u4ef6\u7ed3\u5c3e]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of(u"\u914d\u7f6e\u9519\u8bef: \n\t\u884c {0}: \u5e94\u4e3a [{1}], \u627e\u5230 [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of(u"\u914d\u7f6e\u9519\u8bef: \n\t\u884c {0}: \u5e94\u4e3a [{1}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of(u"\u914d\u7f6e\u9519\u8bef: \n\t\u884c {0}: \u7cfb\u7edf\u5c5e\u6027 [{1}] \u6269\u5c55\u5230\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of(u"\u7528\u6237\u540d: "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of(u"\u53e3\u4ee4: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of(u"\u8bf7\u8f93\u5165\u5bc6\u94a5\u5e93\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of(u"\u5bc6\u94a5\u5e93\u522b\u540d: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of(u"\u5bc6\u94a5\u5e93\u53e3\u4ee4: "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of(u"\u79c1\u6709\u5bc6\u94a5\u53e3\u4ee4 (\u53ef\u9009): "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of(u"Kerberos \u7528\u6237\u540d [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of(u"{0}\u7684 Kerberos \u53e3\u4ee4: "_s)
		})
	}));
}

AuthResources_zh_CN::AuthResources_zh_CN() {
}

$Class* AuthResources_zh_CN::load$($String* name, bool initialize) {
	$loadClass(AuthResources_zh_CN, name, initialize, &_AuthResources_zh_CN_ClassInfo_, clinit$AuthResources_zh_CN, allocate$AuthResources_zh_CN);
	return class$;
}

$Class* AuthResources_zh_CN::class$ = nullptr;

		} // util
	} // security
} // sun